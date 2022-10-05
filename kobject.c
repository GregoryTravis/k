#include "a.h"
#include "kprim_object.h"
#include "sexp.h"

sexp object_lookup(sexp name, sexp type, sexp obj)
{
  A(SEXP_IS_SYMBOL(name));
  A(SEXP_IS_SYMBOL(type));
  A(SEXP_IS_CONS(obj));
  sexp getter_and_setter = assoc(name, obj);
  if (SEXP_IS_NIL(getter_and_setter)) {
    err(("object_lookup: field/method %s not found\n", STR(name)));
  }
  sexp v = assoc(type, cdr(getter_and_setter));
  if (SEXP_IS_NIL(v)) {
    err(("object_lookup: get/set is  %s\n", STR(type)));
  }
  return cdr(v);
}

