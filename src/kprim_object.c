#include "sexp.h"
#include "kerr.h"
#include "kobject.h"
#include "kprim_object.h"

DEFPRIM(object_lookup)
{
  A(arglist);

  if (length( arglist ) != 3) {
    kerr( "Wrong number of args for object_lookup!" );
    KERRPUNTV(nill);
    return nill;
  } else {
    sexp name = car( arglist );
    sexp type = cadr( arglist );
    sexp obj = caddr( arglist );
    return object_lookup(name, type, obj);
  }
}
