_UARPSuperBinaryPreparePayload
__int64 __fastcall UARPSuperBinaryPreparePayload(__int64 a1, __int64 a2, int a3, unsigned int *a4, _OWORD *a5)
{
  __int64 v9; // x0
  __int64 v10; // x21
  __int64 result; // x0
  int v12; // w8
  unsigned int v13; // w10
  __int64 v14; // x23
  unsigned int __dst; // [xsp+Ch] [xbp-94h] BYREF
  _OWORD v16[3]; // [xsp+10h] [xbp-90h] BYREF
  _OWORD v17[2]; // [xsp+40h] [xbp-60h] BYREF
  __int64 v18; // [xsp+60h] [xbp-40h]
  __int16 v19; // [xsp+6Eh] [xbp-32h]

  v9 = uarpPlatformAssetFindByAssetContextAndList(a1, a2, 1LL);
  if ( !v9 )
    return 30LL;
  v10 = v9;
  __dst = 0;
  LOWORD(v16[0]) = 0;
  LODWORD(result) = uarpPlatformEndpointAssetGetBytesAtOffset(a1, 0, v9, &__dst);
  v12 = result;
  if ( LOWORD(v16[0]) == 4 )
    v13 = 0;
  else
    v13 = 11;
  if ( (_DWORD)result )
    result = (unsigned int)result;
  else
    result = v13;
  if ( v12 || LOWORD(v16[0]) != 4 )
    return result;
  if ( __dst < 2 )
    return 30LL;
  v19 = 0;
  v18 = 0LL;
  memset(v17, 0, sizeof(v17));
  memset(v16, 0, 44);
  result = uarpPlatformEndpointAssetGetBytesAtOffset(a1, 0, v10, v16);
  if ( !(_DWORD)result )
  {
    if ( v19 != 44 )
      return 11LL;
    v14 = (unsigned int)(DWORD1(v16[2]) + 40 * a3);
    result = uarpPlatformEndpointAssetGetBytesAtOffset(a1, 0, v10, v17);
    if ( !(_DWORD)result )
    {
      if ( v19 == 40 )
      {
        DWORD1(v17[0]) = uarpTagStructPack32(a4);
        *(_OWORD *)((char *)v17 + 8) = *a5;
        return uarpPlatformEndpointAssetSetBytesAtOffset(a1, 0LL, v10, v17, 40LL, v14);
      }
      return 11LL;
    }
  }
  return result;
}