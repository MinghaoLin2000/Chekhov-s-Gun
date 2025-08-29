_uarpPlatformAssetSelectedPayloadInfo
__n128 __fastcall uarpPlatformAssetSelectedPayloadInfo(__int64 a1, char *a2)
{
  __n128 result; // q0
  int v5; // w9

  if ( a1 && a2 && *(_DWORD *)(a1 + 452) != -1 && *(_BYTE *)(a1 + 460) != 1 )
  {
    uarpZero(a2, 0x20uLL);
    *(_DWORD *)a2 = *(_DWORD *)(a1 + 468);
    result = *(__n128 *)(a1 + 472);
    *(__n128 *)(a2 + 4) = result;
    v5 = *(_DWORD *)(a1 + 500);
    *((_DWORD *)a2 + 5) = *(_DWORD *)(a1 + 492);
    *((_DWORD *)a2 + 6) = v5;
  }
  return result;
}