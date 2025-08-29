_UARPSuperBinaryAddPayloadMetaData
__int64 __fastcall UARPSuperBinaryAddPayloadMetaData(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v11; // x0
  __int64 v12; // x20
  __int64 result; // x0
  int v14; // w8
  unsigned int v15; // w10
  __int64 v16; // x24
  int v17; // w8
  __int64 v18; // x25
  unsigned int __dst; // [xsp+4h] [xbp-ACh] BYREF
  _DWORD v20[2]; // [xsp+8h] [xbp-A8h] BYREF
  _OWORD v21[3]; // [xsp+10h] [xbp-A0h] BYREF
  __int128 v22; // [xsp+40h] [xbp-70h] BYREF
  __int128 v23; // [xsp+50h] [xbp-60h]
  __int64 v24; // [xsp+60h] [xbp-50h]
  __int16 v25; // [xsp+6Eh] [xbp-42h]

  v11 = uarpPlatformAssetFindByAssetContextAndList(a1, a2, 1LL);
  if ( !v11 )
    return 30LL;
  v12 = v11;
  __dst = 0;
  LOWORD(v21[0]) = 0;
  LODWORD(result) = uarpPlatformEndpointAssetGetBytesAtOffset(a1, 0, v11, &__dst);
  v14 = result;
  if ( LOWORD(v21[0]) == 4 )
    v15 = 0;
  else
    v15 = 11;
  if ( (_DWORD)result )
    result = (unsigned int)result;
  else
    result = v15;
  if ( v14 || LOWORD(v21[0]) != 4 )
    return result;
  if ( __dst < 2 )
    return 30LL;
  v25 = 0;
  v24 = 0LL;
  v22 = 0u;
  v23 = 0u;
  memset(v21, 0, 44);
  result = uarpPlatformEndpointAssetGetBytesAtOffset(a1, 0, v12, v21);
  if ( (_DWORD)result )
    return result;
  if ( v25 != 44 )
    return 11LL;
  v16 = (unsigned int)(DWORD1(v21[2]) + 40 * a3);
  result = uarpPlatformEndpointAssetGetBytesAtOffset(a1, 0, v12, &v22);
  if ( (_DWORD)result )
    return result;
  if ( v25 != 40 )
    return 11LL;
  v17 = DWORD2(v23);
  if ( !DWORD2(v23) )
  {
    v17 = DWORD2(v21[0]);
    DWORD2(v23) = DWORD2(v21[0]);
  }
  v18 = (unsigned int)(HIDWORD(v23) + v17);
  v20[0] = uarpHtonl(a4);
  v20[1] = uarpHtonl(a5);
  result = uarpPlatformEndpointAssetSetBytesAtOffset(a1, 0LL, v12, v20, 8LL, v18);
  if ( !(_DWORD)result )
  {
    HIDWORD(v23) += 8;
    DWORD2(v21[0]) += 8;
    result = uarpPlatformEndpointAssetSetBytesAtOffset(
               a1,
               0LL,
               v12,
               a6,
               (unsigned __int16)a5,
               (unsigned int)(DWORD2(v23) + HIDWORD(v23)));
    if ( !(_DWORD)result )
    {
      HIDWORD(v23) += (unsigned __int16)a5;
      DWORD2(v21[0]) += (unsigned __int16)a5;
      result = uarpPlatformEndpointAssetSetBytesAtOffset(a1, 0LL, v12, &v22, 40LL, v16);
      if ( !(_DWORD)result )
        return uarpPlatformEndpointAssetSetBytesAtOffset(a1, 0LL, v12, v21, 44LL, 0LL);
    }
  }
  return result;
}