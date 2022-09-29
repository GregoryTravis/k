// $Id: kexec.h,v 1.2 2002/09/11 20:04:23 Administrator Exp $

#ifndef _kexec_h_
#define _kexec_h_

#ifdef __cplusplus
extern "C"
{
#endif

#include "sexp.h"

sexp k_prepare_file( char *filename );
sexp k_exec_file( char *filename );

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _kexec_h_ */
