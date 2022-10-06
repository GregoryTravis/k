#include <math.h>

#include "sexp.h"
#include "kerr.h"
#include "kprim_math.h"

DEFPRIM(sin)
{
  A(arglist);

  if (length( arglist ) != 1) {
    kerr( "Wrong number of args for sin!" );
    KERRPUNTV(nill);
    return nill;
  } else {
    float f = SEXP_GET_FLOAT(car(arglist));
    return SEXP_MKFLOAT(sin(f));
  }
}
