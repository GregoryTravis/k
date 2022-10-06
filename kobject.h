#ifndef _kobject_h_
#define _kobject_h_

#ifdef __cplusplus
extern "C"
{
#endif

#include "sexp.h"

sexp object_lookup(sexp name, sexp type, sexp obj);

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _kobject_h_ */
