#ifndef _kembed_h_
#define _kembed_h_

#include "sexp.h"

#define KESD(s) ke_dump_sexp(#s,(s))

// Okay to call more than once
void ke_init(void);
sexp ke_exec_file( const char *filename );
void ke_dump_sexp(const char *exp_string, sexp s);
sexp ke_apply_compiled_function(sexp compiled_function, sexp args);
sexp ke_call_constructor(sexp ctor, sexp args);
sexp ke_call_method(sexp obj, const char *method_name, sexp args);

#endif /* _kembed_h_ */
