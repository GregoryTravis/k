#include <cstdio>

#include "KActor.h"

int main(int argc, char **argv)
{
  KActor ka;
  ka.Tick(1.0);
  ka.Tick(1.0);
  ka.Tick(1.0);
  ka.Tick(1.0);
  ka.FinishDestroy();
  int count = ke_gc();
  printf("Final gc %d\n", count);
  count = ke_gc();
  printf("Final gc %d\n", count);
}
