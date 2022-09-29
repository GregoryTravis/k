#include "KActor.h"

#include "kexec.h"
#include "sexp.h"

KActor::KActor()
{
  /* sexp result = k_exec_file("kactor.k"); */

  /* printf("Final result\n"); */
  /* SD(result); */
}

float KActor::Tick(float DeltaTime)
{
  return DeltaTime;
}

void KActor::SetLocation(float x, float y, float z)
{
}
