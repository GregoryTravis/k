#ifndef _gc_h_
#define _gc_h_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdio.h>

#include "a.h"
#include "sexp.h"

void gc(sexp s);

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _gc_h_ */
