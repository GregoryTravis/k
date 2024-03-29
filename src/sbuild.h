// $Id: sbuild.h,v 1.1 2002/08/22 20:42:37 Administrator Exp $

#ifndef _sbuild_h_
#define _sbuild_h_

#ifdef __cplusplus
extern "C"
{
#endif

#include "sexp.h"

sexp sexp_build( char *format, ... );
int sexp_scan( sexp target, char *format, ... );

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _sbuild_h_ */
