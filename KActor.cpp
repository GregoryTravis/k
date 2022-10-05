#include <string>

#include "KActor.h"

#include "kembed.h"

float SetLocation_delegate(KActor *kactor, float x, float y, float z)
{
  return kactor->SetLocation(x, y, z);
}

sexp SetLocation_delegate_sexp_native(sexp arglist)
{
  sexp kactors, xs, ys, zs;
  printf("HEYHEY\n");
  KESD(arglist);
  kactors = car(arglist);
  xs = cadr(arglist);
  ys = caddr(arglist);
  zs = caddr(cdr(arglist));

  KActor *kactor = (KActor*)SEXP_GET_OBJ(kactors);
  sexp x = SEXP_GET_INTEGER(xs);
  sexp y = SEXP_GET_INTEGER(ys);
  sexp z = SEXP_GET_INTEGER(zs);
  float n = SetLocation_delegate(kactor, (float)x, (float)y, (float)z);
  sexp ns = SEXP_MKINT((int)n);
  return ns;
}

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

sexp GetActorRotation_delegate_sexp_native(sexp arglist)
{
  A(length(arglist) == 1);

  sexp kactor_sexp = car(arglist);
  KActor *kactor = (KActor*)SEXP_GET_OBJ(kactor_sexp);
  FRotator rotation = kactor->GetActorRotation();
  printf("Returning frotator\n");
  sexp rotation_sexp = ke_call_constructor(kactor->frotator_class,
      L3(SEXP_MKINT((int)rotation.Pitch),
         SEXP_MKINT((int)rotation.Roll),
         SEXP_MKINT((int)rotation.Yaw)));
  return rotation_sexp;
}

sexp GetActorLocation_delegate_sexp_native(sexp arglist)
{
  A(length(arglist) == 1);

  sexp kactor_sexp = car(arglist);
  KActor *kactor = (KActor*)SEXP_GET_OBJ(kactor_sexp);
  FVector location = kactor->GetActorLocation();
  printf("Returning fvector\n");
  sexp location_sexp = ke_call_constructor(kactor->fvector_class,
      L3(SEXP_MKINT((int)location.X),
         SEXP_MKINT((int)location.Y),
         SEXP_MKINT((int)location.Z)));
  return location_sexp;
}

KActor::KActor()
{
  ke_init();

  sexp super_class = ke_exec_file("super.k");
  KESD(super_class);
  sexp kthis = SEXP_MKOBJ(this);

  sexp SetLocation_delegate_sexp =
    mknative(&SetLocation_delegate_sexp_native, strdup("SetLocation_delegate_sexp_native"));
  sexp GetActorLocation_delegate_sexp =
    mknative(&GetActorLocation_delegate_sexp_native, strdup("GetActorLocation_delegate_sexp_native"));
  sexp GetActorRotation_delegate_sexp =
    mknative(&GetActorRotation_delegate_sexp_native, strdup("GetActorRotation_delegate_sexp_native"));
  sexp super = ke_call_constructor(super_class,
      L4(kthis,
         SetLocation_delegate_sexp,
         GetActorLocation_delegate_sexp,
         GetActorRotation_delegate_sexp));

  sexp clas = ke_exec_file("kactor.k");
  kdelegate = ke_call_constructor(clas, L1(super));
  fvector_class = ke_exec_file("fvector.k");
  frotator_class = ke_exec_file("frotator.k");
}

float KActor::Tick(float DeltaTime)
{
  sexp result = ke_call_method(kdelegate, "tick", L1(SEXP_MKINT((int)DeltaTime)));
  float f = (float)SEXP_GET_INTEGER(result);
  KESD(result);
  return f;
}

float KActor::SetLocation(float x, float y, float z)
{
  printf("SetLocation %f %f %f\n", x, y, z);
  return x + y + z;
}
