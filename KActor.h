#pragma once

#include "kembed.h"

typedef struct FVector {
  float X;
  float Y;
  float Z;
} FVector;

typedef struct FRotator {
  float Pitch;
  float Roll;
  float Yaw;
} FRotator;

class KActor
{
public:	
  KActor();

  virtual float Tick(float DeltaTime);
  virtual float SetLocation(float x, float y, float z);

  FVector GetActorLocation();
  FRotator GetActorRotation();
  bool SetActorLocationAndRotation(FVector fv, FRotator fr);

  float heightScale;

  sexp fvector_class;
  sexp frotator_class;

private:
  sexp kdelegate;
};
