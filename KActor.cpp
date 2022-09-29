#include "KActor.h"

#include "kembed.h"

KActor::KActor()
{
  ke_init();
  sexp result = ke_exec_file("kactor.k");
  KESD(result);

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
