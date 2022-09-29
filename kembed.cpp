#include <string>

#include "kembed.h"
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
