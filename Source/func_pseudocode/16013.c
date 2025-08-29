_uarpPayloadHeader2EndianSwap
__int64 __fastcall uarpPayloadHeader2EndianSwap(unsigned int *a1, _DWORD *a2)
{
  __int64 result; // x0

  *a2 = uarpHtonl(*a1);
  uarpVersionEndianSwap(a1 + 2, a2 + 2);
  a2[6] = uarpHtonl(a1[6]);
  a2[7] = uarpHtonl(a1[7]);
  a2[8] = uarpHtonl(a1[8]);
  result = uarpHtonl(a1[9]);
  a2[9] = result;
  return result;
}