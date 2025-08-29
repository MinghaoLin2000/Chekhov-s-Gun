_UARPSuperBinaryAddPayloadData
__int64 __fastcall UARPSuperBinaryAddPayloadData(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 v9; // x0
  __int64 v10; // x20
  __int64 result; // x0
  int v12; // w8
  unsigned int v13; // w10
  __int64 v14; // x23
  int v15; // w8
  unsigned int __dst; // [xsp+Ch] [xbp-94h] BYREF
  _OWORD v17[3]; // [xsp+10h] [xbp-90h] BYREF
  _OWORD v18[2]; // [xsp+40h] [xbp-60h] BYREF
  __int64 v19; // [xsp+60h] [xbp-40h]
  __int16 v20; // [xsp+6Eh] [xbp-32h]

  if ( HIWORD(a5) )
    return 39LL;
  v9 = uarpPlatformAssetFindByAssetContextAndList(a1, a2, 1LL);
  if ( !v9 )
    return 30LL;
  v10 = v9;
  __dst = 0;
  LOWORD(v17[0]) = 0;
  LODWORD(result) = uarpPlatformEndpointAssetGetBytesAtOffset(a1, 0, v9, &__dst);
  v12 = result;
  if ( LOWORD(v17[0]) == 4 )
    v13 = 0;
  else
    v13 = 11;
  if ( (_DWORD)result )
    result = (unsigned int)result;
  else
    result = v13;
  if ( v12 || LOWORD(v17[0]) != 4 )
    return result;
  if ( __dst < 2 )
    return 30LL;
  v20 = 0;
  v19 = 0LL;
  memset(v18, 0, sizeof(v18));
  memset(v17, 0, 44);
  result = uarpPlatformEndpointAssetGetBytesAtOffset(a1, 0, v10, v17);
  if ( (_DWORD)result )
    return result;
  if ( v20 != 44 )
    return 11LL;
  v14 = (unsigned int)(DWORD1(v17[2]) + 40 * a3);
  result = uarpPlatformEndpointAssetGetBytesAtOffset(a1, 0, v10, v18);
  if ( (_DWORD)result )
    return result;
  if ( v20 != 40 )
    return 11LL;
  v15 = v19;
  if ( !(_DWORD)v19 )
  {
    v15 = DWORD2(v17[0]);
    LODWORD(v19) = DWORD2(v17[0]);
  }
  result = uarpPlatformEndpointAssetSetBytesAtOffset(
             a1,
             0LL,
             v10,
             a4,
             (unsigned __int16)a5,
             (unsigned int)(HIDWORD(v19) + v15));
  if ( !(_DWORD)result )
  {
    HIDWORD(v19) += a5;
    DWORD2(v17[0]) += a5;
    result = uarpPlatformEndpointAssetSetBytesAtOffset(a1, 0LL, v10, v18, 40LL, v14);
    if ( !(_DWORD)result )
      return uarpPlatformEndpointAssetSetBytesAtOffset(a1, 0LL, v10, v17, 44LL, 0LL);
  }
  return result;
}