#include <cstdio>

#include "KActor.h"

int main(int argc, char **argv)
{
  KActor ka;
  float f = ka.Tick(125.0);
  printf("hi %f\n", f);
}
