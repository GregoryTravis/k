#include <string>

#include "kembed.h"
#include "kexec.h"

sexp ke_exec_file( const char *filename )
{
  char *f = strdup(filename);
  //return k_exec_file(f);
  return k_exec_file(strdup("fib.k"));
}
