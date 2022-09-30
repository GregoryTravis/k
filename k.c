// $Id: k.c,v 1.5 2002/09/05 22:03:51 Administrator Exp $

#include <stdio.h>
#include "kerr.h"
#include "keval.h"
#include "kexec.h"
#include "kinit.h"
#include "ksym.h"

int main( int argc, char *argv[] )
{
  int a;

  k_init();

  for (a=1; a<argc; ++a) {
    int ret;
    fprintf( stderr, "Running %s\n", argv[a] );

    sexp result = k_exec_file( argv[a] );

    printf("Final result\n");
    SD(result);

    /*
    SD(car(result));
    SD(cdr(car(result)));
    // sexp_dump_closure(cdr(car(result)));

    //sexp result2 = k_apply_compiled_function(result, cons(SEXP_MKINT(12), nil));
    sexp result2 = k_apply_compiled_function(cdr(car(result)), nil);
    SD(result2);
    // sexp_dump_closure(result2);
    sexp result3 = k_apply_compiled_function(result2, sexp_build("(tick get)"));
    SD(result3);
    // sexp_dump_closure(result3);
    sexp result4 = k_apply_compiled_function(result3, nil);
    SD(result4);
    // sexp_dump_closure(result4);
    sexp result5 = k_apply_compiled_function(result4, cons(SEXP_MKINT(125), nil));
    SD(result5);
    */
  }

  ksym_dump_reasons( "k.reasons.out" );

  return k_err_deal();
}
