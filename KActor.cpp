#include <string>

#include "KActor.h"

#include "kembed.h"

KActor::KActor()
{
  ke_init();

  sexp clas = ke_exec_file("kactor.k");
  KESD(clas);

  /* //sexp result2 = ke_apply_compiled_function(result, cons(SEXP_MKINT(12), nil)); */
  /* sexp result2 = ke_apply_compiled_function(cdr(car(result)), nil); */
  /* KESD(result2); */
  sexp obj = ke_call_constructor(clas, nil);

  sexp result5 = ke_call_method(obj, "tick", cons(SEXP_MKINT(125), nil));
  KESD(result5);

  sexp super_class = ke_exec_file("super.k");
  KESD(super_class);
  sexp kthis = SEXP_MKOBJ(this);
  sexp super = ke_call_constructor(super_class, cons(kthis, nil));

  /* // sexp_dump_closure(result2); */
  /* sexp result3 = ke_apply_compiled_function(result2, sexp_build(strdup("(tick get)"))); */
  /* KESD(result3); */
  /* // sexp_dump_closure(result3); */
  /* sexp result4 = ke_apply_compiled_function(result3, nil); */
  /* KESD(result4); */
  /* // sexp_dump_closure(result4); */
  /* sexp result5 = ke_apply_compiled_function(result4, cons(SEXP_MKINT(125), nil)); */
  /* KESD(result5); */

  /* // Apply ctor */
  /* sexp result2 = ke_apply_compiled_function(result, nil); */
  /* KESD(result2); */

  /* // printf("Final result\n"); */
  /* // SD(result); */
}

float KActor::Tick(float DeltaTime)
{
  return DeltaTime;
}

void KActor::SetLocation(float x, float y, float z)
{
}
