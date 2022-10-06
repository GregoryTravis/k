// $Id: keval.h,v 1.4 2002/09/12 16:29:34 Administrator Exp $

#ifndef _keval_h_
#define _keval_h_

#ifdef __cplusplus
extern "C"
{
#endif

#include "kstruct.h"

void k_eval_init( void );
sexp k_eval( char *filename, sexp sem );
sexp k_apply_compiled_function(sexp compiled_function, sexp args);

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _keval_h_ */
