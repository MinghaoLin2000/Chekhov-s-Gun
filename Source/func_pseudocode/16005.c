_UARPSuperBinaryAddMetaData
__int64 __fastcall UARPSuperBinaryAddMetaData(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // x0
  __int64 v10; // x20
  __int64 result; // x0
  int v12; // w8
  unsigned int v13; // w10
  __int64 v14; // x24
  unsigned int __dst; // [xsp+Ch] [xbp-74h] BYREF
  _DWORD v16[3]; // [xsp+10h] [xbp-70h] BYREF
  __int16 v17; // [xsp+1Eh] [xbp-62h]
  _OWORD v18[3]; // [xsp+20h] [xbp-60h] BYREF

  v9 = uarpPlatformAssetFindByAssetContextAndList(a1, a2, 1LL);
  if ( !v9 )
    return 30LL;
  v10 = v9;
  __dst = 0;
  LOWORD(v18[0]) = 0;
  LODWORD(result) = uarpPlatformEndpointAssetGetBytesAtOffset(a1, 0, v9, &__dst);
  v12 = result;
  if ( LOWORD(v18[0]) == 4 )
    v13 = 0;
  else
    v13 = 11;
  if ( (_DWORD)result )
    result = (unsigned int)result;
  else
    result = v13;
  if ( v12 || LOWORD(v18[0]) != 4 )
    return result;
  if ( __dst < 2 )
    return 30LL;
  memset(v18, 0, 44);
  v17 = 0;
  result = uarpPlatformEndpointAssetGetBytesAtOffset(a1, 0, v10, v18);
  if ( !(_DWORD)result )
  {
    if ( v17 == 44 )
    {
      v14 = (unsigned int)(LODWORD(v18[2]) + HIDWORD(v18[1]));
      v16[0] = uarpHtonl(a3);
      v16[1] = uarpHtonl(a4);
      result = uarpPlatformEndpointAssetSetBytesAtOffset(a1, 0LL, v10, v16, 8LL, v14);
      if ( !(_DWORD)result )
      {
        LODWORD(v18[2]) += 8;
        DWORD2(v18[0]) += 8;
        result = uarpPlatformEndpointAssetSetBytesAtOffset(
                   a1,
                   0LL,
                   v10,
                   a5,
                   (unsigned __int16)a4,
                   (unsigned int)(HIDWORD(v18[1]) + LODWORD(v18[2])));
        if ( !(_DWORD)result )
        {
          LODWORD(v18[2]) += (unsigned __int16)a4;
          DWORD2(v18[0]) += (unsigned __int16)a4;
          return uarpPlatformEndpointAssetSetBytesAtOffset(a1, 0LL, v10, v18, 44LL, 0LL);
        }
      }
    }
    else
    {
      return 11LL;
    }
  }
  return result;
}