#include <string>

#include "KActor.h"

#include "kembed.h"

FVector KActor::GetActorLocation()
{
  FVector fv = { 1.0, 2.0, 3.0 };
  return fv;
}

FRotator KActor::GetActorRotation()
{
  FRotator fr = { 4.0, 5.0, 6.0 };
  return fr;
}

bool KActor::SetActorLocationAndRotation(FVector fv, FRotator fr)
{
  printf("SALAR got %f %f %f %f %f %f\n",
      fv.X, fv.Y, fv.Z,
      fr.Pitch, fr.Roll, fr.Yaw);
  return true;
}

sexp FVector_to_fvector(KActor *kactor, FVector fv)
{
  sexp r = ke_call_constructor(kactor->fvector_class,
    L3(SEXP_MKFLOAT(fv.X),
       SEXP_MKFLOAT(fv.Y),
       SEXP_MKFLOAT(fv.Z)));
  return r;
}

sexp FRotator_to_frotator(KActor *kactor, FRotator fr)
{
  return ke_call_constructor(kactor->frotator_class,
    L3(SEXP_MKFLOAT(fr.Pitch),
       SEXP_MKFLOAT(fr.Roll),
       SEXP_MKFLOAT(fr.Yaw)));
}

FVector fvector_to_FVector(sexp fvector)
{
  sexp x = ke_get_field(fvector, "x");
  sexp y = ke_get_field(fvector, "y");
  sexp z = ke_get_field(fvector, "z");
  FVector fv = {
    SEXP_GET_FLOAT(x),
    SEXP_GET_FLOAT(y),
    SEXP_GET_FLOAT(z)
  };
  return fv;
}

FRotator frotator_to_FRotator(sexp frotator)
{
  sexp pitch = ke_get_field(frotator, "pitch");
  sexp roll = ke_get_field(frotator, "roll");
  sexp yaw = ke_get_field(frotator, "yaw");
  FRotator fr = {
    SEXP_GET_FLOAT(pitch),
    SEXP_GET_FLOAT(roll),
    SEXP_GET_FLOAT(yaw)
  };
  return fr;
}

sexp GetActorRotation_delegate_sexp_native(sexp arglist)
{
  A(length(arglist) == 1);

  sexp kactor_sexp = car(arglist);
  KActor *kactor = (KActor*)SEXP_GET_OBJ(kactor_sexp);
  FRotator rotation = kactor->GetActorRotation();
  printf("Returning frotator\n");
  return FRotator_to_frotator(kactor, rotation);
}

sexp GetActorLocation_delegate_sexp_native(sexp arglist)
{
  A(length(arglist) == 1);

  sexp kactor_sexp = car(arglist);
  KActor *kactor = (KActor*)SEXP_GET_OBJ(kactor_sexp);
  FVector location = kactor->GetActorLocation();
  printf("Returning fvector\n");
  return FVector_to_fvector(kactor, location);
}

sexp SetActorLocationAndRotation_delegate_sexp_native(sexp arglist)
{
  A(length(arglist) == 3);

  sexp kactor_sexp = car(arglist);
  sexp location = cadr(arglist);
  sexp rotation = caddr(arglist);
  printf("OOOO %d %d\n", SEXP_TYPE(location), SEXP_TYPE(rotation));
  KActor *kactor = (KActor*)SEXP_GET_OBJ(kactor_sexp);
  FVector fv = fvector_to_FVector(location);
  FRotator fr = frotator_to_FRotator(rotation);
  printf("AAA SALAR %f %f %f %f %f %f\n", fv.X, fv.Y, fv.Z, fr.Pitch, fr.Roll, fr.Yaw);
  return kactor->SetActorLocationAndRotation(fv, fr);
}

KActor::KActor()
{
  ke_init();

  sexp super_class = ke_exec_file("super.k");
  KESD(super_class);
  sexp kthis = SEXP_MKOBJ(this);

  sexp GetActorLocation_delegate_sexp =
    mknative(&GetActorLocation_delegate_sexp_native, strdup("GetActorLocation_delegate_sexp_native"));
  sexp GetActorRotation_delegate_sexp =
    mknative(&GetActorRotation_delegate_sexp_native, strdup("GetActorRotation_delegate_sexp_native"));
  sexp SetActorLocationAndRotation_delegate_sexp =
    mknative(&SetActorLocationAndRotation_delegate_sexp_native,
        strdup("SetActorLocationAndRotation_delegate_sexp_native"));
  sexp super = ke_call_constructor(super_class,
      L4(kthis,
         GetActorLocation_delegate_sexp,
         GetActorRotation_delegate_sexp,
         SetActorLocationAndRotation_delegate_sexp));

  sexp clas = ke_exec_file("kactor.k");
  kdelegate = ke_call_constructor(clas, L1(super));
  fvector_class = ke_exec_file("fvector.k");
  frotator_class = ke_exec_file("frotator.k");
}

float KActor::Tick(float DeltaTime)
{
  sexp result = ke_call_method(kdelegate, "tick", L1(SEXP_MKINT((int)DeltaTime)));
  float f = SEXP_GET_FLOAT(result);
  KESD(result);
  return f;
}
