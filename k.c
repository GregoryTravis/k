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
    //printf("type %d\n", SEXP_TYPE(result));
    //printf("type %d\n", SEXP_TYPE(car(result)));

#if 0
    float p = -1.2;
    sexp pf = SEXP_MKFLOAT(p);
    float p2 = SEXP_GET_FLOAT(pf);
    printf("well %f %lx %f\n", p, pf, p2);
    //printf("sz %ld %ld\n", sizeof(float), sizeof(long));

    sexp ps = float_to_sexp(p);
    float psb = sexp_to_float(ps);
    printf("um %f %lx %f\n", p, ps, psb);

    /*
    //int ip = *((int*)(&p)) << 2;
    int ip = float_to_int_noconvert(p);

    printf("ip %x\n", ip);

    float ipb = int_to_float_noconvert(ip);

    //float ipb = *((float*)(&(ip>>2)));

    printf("ipb %f\n", ipb);
    */

//#define SEXP_MKFLOAT(f) ( (((sexp)(f))&~SEXP_TAG_BIT_MASK) | SEXP_FLOAT_TAG )
//
    /* printf("SEXP_TAG_BIT_MASK %x\n", SEXP_TAG_BIT_MASK); */
    /* printf("%lx\n", (*((sexp*)((void*)(&p))))); */
    /* printf("%lx\n", (((sexp)(p))&~SEXP_TAG_BIT_MASK)); */
#endif
  }

  ksym_dump_reasons( "k.reasons.out" );

  return k_err_deal();
}
