#ifndef _gc_h_
#define _gc_h_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdio.h>

#include "a.h"
#include "sexp.h"

typedef enum gc_state {
  GC_MIN = 1,
  GC_START = GC_MIN,
  GC_IN_USE,
  GC_DEAD,
  GC_MAX = GC_DEAD
} gc_state ;

void gc(void);

// Only for non-manifest
#define GC_DEAD(s) (((sexp_heap*)(s))->gc_state == GC_DEAD)
#define GC_OK(s) (SEXP_IS_MANIFEST((s)) || !GC_DEAD((s)))

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _gc_h_ */
