
#pragma once

class KActor
{
public:	
  KActor();

  virtual float Tick(float DeltaTime);
  virtual void SetLocation(float x, float y, float z);

  float heightScale;
};
