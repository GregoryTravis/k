#include <string>

#include "kembed.h"
#include "keval.h"
#include "kexec.h"
#include "kinit.h"

void ke_init(void)
{
  k_init();
}

sexp ke_exec_file( const char *filename )
{
  char *f = strdup(filename);
  return k_exec_file(f);
}

void ke_dump_sexp(const char *exp_string, sexp s)
{
  sexp_dump_fancy(strdup(exp_string), s);
}

sexp ke_apply_compiled_function(sexp compiled_function, sexp args) {
  return k_apply_compiled_function(compiled_function, args);
}

sexp ke_call_constructor(sexp ctor, sexp args)
{
  return ke_apply_compiled_function(cdr(car(ctor)), args);
}

sexp ke_call_method(sexp obj, const char *method_name, sexp args)
{
  sexp result3 = ke_apply_compiled_function(obj,
      sexp_build(strdup("(% get)"), mksym(strdup(method_name))));
  //KESD(result3);
  //sexp_dump_closure(result3);
  sexp result4 = ke_apply_compiled_function(result3, nill);
  //KESD(result4);
  //sexp_dump_closure(result4);
  sexp result5 = ke_apply_compiled_function(result4, args);
  //KESD(result5);
  return result5;
}
