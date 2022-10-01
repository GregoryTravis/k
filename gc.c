#include <stdio.h>

#include "a.h"
#include "gc.h"
#include "hash.h"
#include "sexp.h"

void lala(sexp s)
{
  printf("walk\n");
  SD(s);
}

void gc(sexp s)
{
  walk(s, &lala);
}
