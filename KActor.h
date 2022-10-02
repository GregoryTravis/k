#pragma once

#include "kembed.h"

class KActor
{
public:	
  KActor();

  virtual float Tick(float DeltaTime);
  virtual float SetLocation(float x, float y, float z);

  float heightScale;
  sexp kdelegate;
};
