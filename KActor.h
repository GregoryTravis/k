
#pragma once

class KActor
{
public:	
  KActor();

  virtual void Tick(float DeltaTime);
  virtual void SetLocation(float x, float y, float z);

  float heightScale;
};
