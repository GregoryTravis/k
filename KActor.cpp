#include <string>

#include "KActor.h"

#include "kembed.h"

float SetLocation_delegate(KActor *kactor, float x, float y, float z)
{
  return kactor->SetLocation(x, y, z);
}

sexp SetLocation_delegate_sexp_native(sexp arglist)
{
  sexp kactors, xs, ys, zs;
  printf("HEYHEY\n");
  KESD(arglist);
  kactors = car(arglist);
  xs = cadr(arglist);
  ys = caddr(arglist);
  zs = caddr(cdr(arglist));

  KActor *kactor = (KActor*)SEXP_GET_OBJ(kactors);
  sexp x = SEXP_GET_INTEGER(xs);
  sexp y = SEXP_GET_INTEGER(ys);
  sexp z = SEXP_GET_INTEGER(zs);
  float n = SetLocation_delegate(kactor, (float)x, (float)y, (float)z);
  sexp ns = SEXP_MKINT((int)n);
  return ns;
}

KActor::KActor()
{
  ke_init();

  sexp super_class = ke_exec_file("super.k");
  KESD(super_class);
  sexp kthis = SEXP_MKOBJ(this);
  sexp SetLocation_delegate_sexp =
    mknative(&SetLocation_delegate_sexp_native, strdup("SetLocation_delegate_sexp_native"));
  sexp super = ke_call_constructor(super_class,
      cons(SetLocation_delegate_sexp, cons(kthis, nil)));

  sexp clas = ke_exec_file("kactor.k");
  sexp obj = ke_call_constructor(clas, cons(super, nil));
  sexp result = ke_call_method(obj, "tick", cons(SEXP_MKINT(125), nil));
  KESD(result);
}

float KActor::Tick(float DeltaTime)
{
  return DeltaTime;
}

float KActor::SetLocation(float x, float y, float z)
{
  printf("SetLocation %f %f %f\n", x, y, z);
  return x + y + z;
}
