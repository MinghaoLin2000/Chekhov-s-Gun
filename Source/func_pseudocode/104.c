$s9SPIHelper12SharingErrorOwtk
__n128 __fastcall initializeWithTake for SharingError(__int64 a1, __int64 a2)
{
  __n128 result; // q0
  __int128 v3; // q1

  result = *(__n128 *)a2;
  v3 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 25) = *(_OWORD *)(a2 + 25);
  *(__n128 *)a1 = result;
  *(_OWORD *)(a1 + 16) = v3;
  return result;
}