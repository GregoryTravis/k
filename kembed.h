#ifndef _kembed_h_
#define _kembed_h_

#include "sexp.h"

#define KESD(s) ke_dump_sexp(#s,(s))

// Okay to call more than once
void ke_init(void);
sexp ke_exec_file( const char *filename );
void ke_dump_sexp(const char *exp_string, sexp s);

#endif /* _kembed_h_ */
