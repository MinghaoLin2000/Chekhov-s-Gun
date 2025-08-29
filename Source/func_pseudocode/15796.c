_uarpPlatformAssetPayloadHeaderProcess
__int64 __fastcall uarpPlatformAssetPayloadHeaderProcess(unsigned int *a1, __int64 a2, unsigned int a3)
{
  int v6; // w0
  __int64 v7; // x8

  *(_DWORD *)a2 = uarpNtohl(*a1);
  *(_DWORD *)(a2 + 4) = a1[1];
  uarpVersionEndianSwap(a1 + 2, a2 + 8);
  *(_DWORD *)(a2 + 24) = uarpNtohl(a1[6]);
  *(_DWORD *)(a2 + 28) = uarpNtohl(a1[7]);
  *(_DWORD *)(a2 + 32) = uarpNtohl(a1[8]);
  v6 = uarpNtohl(a1[9]);
  *(_DWORD *)(a2 + 36) = v6;
  *(_BYTE *)(a2 + 52) = 0;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 76) = 0;
  *(_DWORD *)(a2 + 128) = v6;
  v7 = 48LL;
  if ( *(_DWORD *)(a2 + 28) + *(_DWORD *)(a2 + 24) <= a3 )
  {
    if ( *(_DWORD *)(a2 + 32) + v6 <= a3 )
      return 0LL;
    else
      return 48LL;
  }
  return v7;
}