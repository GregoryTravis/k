#include <signal.h>

#include "debug.h"

void bkpt(void)
{
  raise(SIGTRAP);
}
