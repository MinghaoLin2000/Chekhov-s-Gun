_uarpVersionEndianSwap
__int64 __fastcall uarpVersionEndianSwap(unsigned int *a1, _DWORD *a2)
{
  __int64 result; // x0

  *a2 = uarpNtohl(*a1);
  a2[1] = uarpNtohl(a1[1]);
  a2[2] = uarpNtohl(a1[2]);
  result = uarpNtohl(a1[3]);
  a2[3] = result;
  return result;
}