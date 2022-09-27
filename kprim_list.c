// $Id: kprim_list.c,v 1.1 2002/09/03 20:24:02 Administrator Exp $

#include "sexp.h"

#include "kerr.h"
#include "kprim_list.h"
#include "sexp.h"

DEFPRIM(cons)
{
  A(arglist);

  if (length( arglist ) != 2) {
    kerr( "Wrong number of args for cons!" );
    KERRPUNTV(nil);
    return nil;
  } else {
    sexp a = car( arglist );
    sexp d = cadr( arglist );
    return cons( a, d );
  }
}

DEFPRIM(car)
{
  A(arglist);

  if (length( arglist ) != 1) {
    kerr( "Wrong number of args for car!" );
    KERRPUNTV(nil);
    return nil;
  } else {
    sexp p = car( arglist );
    return car( p );
  }
}

DEFPRIM(cdr)
{
  A(arglist);

  if (length( arglist ) != 1) {
    kerr( "Wrong number of args for cdr!" );
    KERRPUNTV(nil);
    return nil;
  } else {
    sexp p = car( arglist );
    return cdr( p );
  }
}

DEFPRIM(assoc)
{
  // sexp a, d;

  A(arglist);

  if (length( arglist ) != 2) {
    kerr( "Wrong number of args for arglist!" );
    KERRPUNTV(nil);
    return nil;
  } else {
    sexp key = car( arglist );
    sexp alist = cadr( arglist );
    return assoc(key, alist);
  }
}
