$s34AppleMediaServicesUIDynamicService15JSSourcePackageVwtk
__n128 __fastcall initializeWithTake for JSSourcePackage(__int64 a1, __int64 a2)
{
  __n128 result; // q0
  __int128 v3; // q2

  result = *(__n128 *)a2;
  v3 = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = v3;
  *(__n128 *)a1 = result;
  return result;
}