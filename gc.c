#include <stdio.h>

#include "a.h"
#include "gc.h"
#include "hash.h"
#include "sexp.h"

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

typedef enum gc_state {
  GC_MIN = 1,
  GC_START = GC_MIN,
  GC_IN_USE,
  GC_DEAD,
  GC_MAX = GC_DEAD
} gc_state ;

#define GC_STATE_OK(s) ((s) >= GC_MIN && (s) <= GC_MAX)

void set_to_start(sexp_heap *sh) { A(sh); A(SEXP_HASH_OK(sh)); sh->gc_state = GC_START; }
void set_to_in_use(sexp_heap *sh) { A(sh); A(SEXP_HASH_OK(sh)); sh->gc_state = GC_IN_USE; }

void walk_allocated(void (*f)(sexp_heap *))
{
  sexp_heap *here = sexp_allocated;
  while (here != NULL) {
    f(here);
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

void gc(sexp s)
{
  walk_allocated(&set_to_start);
  walk_allocated(&mark_pinned_in_use);
  walk_allocated(&set_not_in_use_to_dead);
}
