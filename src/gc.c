#include <stdio.h>

#include "a.h"
#include "gc.h"
#include "hash.h"
#include "mem.h"
#include "sexp.h"

typedef enum gc_realness {
  // Must preserve order
  GC_DEV = 1,   // Don't free; don't remove from chain
  GC_PROD_SAFE, // Dont' free, remove from chain
  GC_PROD,      // Free, remove from chain
} gc_realness;

static gc_realness realness = GC_PROD;

// State machine:
// - initialize all to GC_START
// - walk allocated list, and traverse each pinned element:
//   - walk each pinned trees to set to GC_IN_USE
// - set all not in use to GC_DEAD
// - macros check values for GC_DEAD all the time
// - debug mode
//   - don't remove or deallocate, just check for GC_DEAD
// - release mode
//   - walk allocation chain and remove + deallcoate dead

#define GC_STATE_OK(s) ((s) >= GC_MIN && (s) <= GC_MAX)

// For disabling temporarily while e.g. dumping info about an sexp
// that has an GC problem
bool gc_ok_enabled = 1;
void gc_ok_enable(void) { gc_ok_enabled = 1; }
void gc_ok_disable(void) { gc_ok_enabled = 0; }

bool gc_ok(sexp s)
{
  if (!gc_ok_enabled) return 1;

  bool ok = SEXP_IS_MANIFEST((s)) || !GC_DEAD((s));
  if (!ok) {
    gc_ok_disable();
    printf("Use of dead sexp:");
    SD(s);
    gc_ok_enable();
  }

  return ok;
}

void set_to_start(sexp_heap *sh) {
  A(sh);
  A(SEXP_HASH_OK(sh));
  sh->gc_state = GC_START;
}

void set_to_in_use(sexp_heap *sh) {
  A(sh);
  A(SEXP_HASH_OK(sh));
  sh->gc_state = GC_IN_USE;
}

#if 0 // Untested an ill-considered
// Walk the allocated chain, also passing in a pointer to the previous element,
// e.g. for removal. For the first element, the previous pointer is to the
// global root variable.
void walk_allocated_with_prev(void (*f)(sexp_heap *, sexp_heap **))
  sexp_heap **prev = &sexp_allocated;
  sexp_heap *here = sexp_allocated;
  while (here != NULL) {
    f(here, prev);
    prev = &here->gc_next;
    here = here->gc_next;
  }
}
#endif

void walk_allocated(void (*f)(sexp_heap *))
{
  sexp_heap *here = sexp_allocated;
  while (here != NULL) {
    f(here);
    here = here->gc_next;
  }
}

void mark_pinned_in_use(sexp_heap *sh)
{
  if (!sh->gc_pinned) {
    return;
  }
  walk_sexp_heap(sh, &set_to_in_use);
}

void set_not_in_use_to_dead(sexp_heap *sh)
{
  if (sh->gc_state != GC_IN_USE) {
    A(sh->gc_state == GC_START);
    sh->gc_state = GC_DEAD;
  }
}

void free_dead()
{
  A(realness >= GC_DEV && realness <= GC_PROD);

  sexp_heap **prev = &sexp_allocated;
  sexp_heap *here = sexp_allocated;
  while (here != NULL) {
    if (here->gc_state == GC_DEAD) {
      sexp_heap *orig_here = here;

      if (realness == GC_DEV) {
        // Advance
        prev = &here->gc_next;
        here = here->gc_next;
      } else if (realness >= GC_PROD_SAFE) {
        // Unlink
        *prev = here->gc_next;
        here = here->gc_next;

        if (realness == GC_PROD) {
          // Free
          fri(orig_here);
        }
      }
    } else {
      // Just advance
      prev = &here->gc_next;
      here = here->gc_next;
    }
  }
}

typedef struct {
  int gc_type_counts[GC_MAX+1];
} gc_stats;
gc_stats the_stats;

void stats_init(gc_stats *stats)
{
  for (int i=0; i<=GC_MAX; ++i) {
    stats->gc_type_counts[i] = 0;
  }
}

void stats_dump(gc_stats *stats)
{
  printf("======= gc stats =======\n");
  for (int i=GC_MIN; i<=GC_MAX; ++i) {
    printf("GC type %d count %d\n", i, stats->gc_type_counts[i]);
  }
  printf("======= gc stats =======\n");
}

void stats_update(sexp_heap *sh)
{
  A(GC_STATE_OK(sh->gc_state));
  the_stats.gc_type_counts[sh->gc_state]++;
}

void stats(void)
{
  stats_init(&the_stats);
  walk_allocated(&stats_update);
  stats_dump(&the_stats);
}

void gc(void)
{
  walk_allocated(&set_to_start);
  stats();
  walk_allocated(&mark_pinned_in_use);
  stats();
  walk_allocated(&set_not_in_use_to_dead);
  stats();
  free_dead();
  stats();
}
