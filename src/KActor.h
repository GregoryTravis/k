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

  virtual void Tick(float DeltaTime);

  FVector GetActorLocation();
  FRotator GetActorRotation();
  bool SetActorLocationAndRotation(FVector fv, FRotator fr);

  float heightScale;
  float rotationSpeed;

  float GetHeightScale();
  float GetRotationSpeed();

  sexp fvector_class;
  sexp frotator_class;

private:
  sexp kdelegate;
};
