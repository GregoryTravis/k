// $Id: kexec.c,v 1.12 2002/09/12 16:34:13 Administrator Exp $

#include "mem.h"
#include "sexp.h"

#include "kerr.h"
#include "keval.h"
#include "kexec.h"
#include "kfile.h"
#include "kps.h"
#include "kstruct.h"
#include "ksem.h"
#include "kunparse.h"

sexp k_prepare_file( char *filename )
{
  sexp parse, sem;

  parse = k_read_script( filename );

  KERRPUNTV(nill);

  // sexp_dump_file( strkat( filename, ".parse.out" ), parse );

  sem = k_parse_to_semantic( parse );

  if (k_error || sem == nill) {
    kerr( "Can't build semantic tree" );
    KERRPUNTV(nill);
  }

  // sexp_dump_file( strkat( filename, ".presem.out" ), sem );

  sem = ksem_process( sem );

  if (k_error || sem == nill) {
    kerr( "Semantic processing failure" );
    KERRPUNTV(nill);
  }

  // sexp_dump_file( strkat( filename, ".postsem.out" ), sem );

  return sem;
}

sexp k_exec_file( char *filename )
{
  sexp sem = k_prepare_file( filename );

  if (!KERR) {
    return k_eval( filename, sem );
  } else {
    return nill;
  }
}
