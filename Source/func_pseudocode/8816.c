$s34AppleMediaServicesUIDynamicService9JSAccountVwtk
__n128 __fastcall initializeWithTake for JSAccount(__int64 a1, __int64 a2)
{
  __n128 result; // q0
  __int128 v3; // q1

  result = *(__n128 *)a2;
  v3 = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(__n128 *)a1 = result;
  *(_OWORD *)(a1 + 16) = v3;
  return result;
}