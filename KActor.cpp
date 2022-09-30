#include <string>

#include "KActor.h"

#include "kembed.h"

KActor::KActor()
{
  ke_init();

  sexp clas = ke_exec_file("kactor.k");
  sexp obj = ke_call_constructor(clas, nil);
  sexp result = ke_call_method(obj, "tick", cons(SEXP_MKINT(125), nil));
  KESD(result);

  sexp super_class = ke_exec_file("super.k");
  KESD(super_class);
  sexp kthis = SEXP_MKOBJ(this);
  sexp super = ke_call_constructor(super_class, cons(kthis, nil));
}

float KActor::Tick(float DeltaTime)
{
  return DeltaTime;
}

void KActor::SetLocation(float x, float y, float z)
{
}
