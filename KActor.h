
#pragma once

class KActor
{
public:	
  KActor();

  virtual float Tick(float DeltaTime);
  virtual float SetLocation(float x, float y, float z);

  float heightScale;
};
