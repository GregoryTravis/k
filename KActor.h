#pragma once

#include "kembed.h"

typedef struct FVector {
  float X;
  float Y;
  float Z;
} FVector;

class KActor
{
public:	
  KActor();

  virtual float Tick(float DeltaTime);
  virtual float SetLocation(float x, float y, float z);

  FVector GetActorLocation();

  float heightScale;

  sexp fvector_class;

private:
  sexp kdelegate;
};
