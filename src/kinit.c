// $Id: kinit.c,v 1.4 2002/08/28 20:07:23 Administrator Exp $

#include "keval.h"
#include "kinit.h"

static int initted = 0;

void k_init( void )
{
  if (initted)
    return;

  k_eval_init();

  initted = 1;
}
