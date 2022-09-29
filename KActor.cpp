#include "KActor.h"

#include "kembed.h"

KActor::KActor()
{
  sexp result = ke_exec_file("kactor.k");

  // printf("Final result\n");
  // SD(result);
}

float KActor::Tick(float DeltaTime)
{
  return DeltaTime;
}

void KActor::SetLocation(float x, float y, float z)
{
}
