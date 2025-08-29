_UARPSuperBinaryFinalizeHeader
__int64 __fastcall UARPSuperBinaryFinalizeHeader(__int64 a1, __int64 a2)
{
  __int64 v3; // x0
  __int64 v4; // x20
  __int64 result; // x0
  __int128 v6; // q0
  __int128 v7; // q1
  unsigned int v8; // w8
  unsigned int v9; // w22
  __int64 v10; // x21
  unsigned int __dst; // [xsp+8h] [xbp-88h] BYREF
  __int16 v12; // [xsp+Eh] [xbp-82h]
  _OWORD v13[3]; // [xsp+10h] [xbp-80h] BYREF
  _OWORD v14[2]; // [xsp+40h] [xbp-50h] BYREF
  __int64 v15; // [xsp+60h] [xbp-30h]
  __int16 v16; // [xsp+6Eh] [xbp-22h]

  v3 = uarpPlatformAssetFindByAssetContextAndList(a1, a2, 1LL);
  if ( !v3 )
    return 30LL;
  v4 = v3;
  v12 = 0;
  __dst = 0;
  result = uarpPlatformEndpointAssetGetBytesAtOffset(a1, 0, v3, &__dst);
  if ( (_DWORD)result )
    return result;
  if ( v12 != 4 )
    return 11LL;
  if ( __dst < 2 )
    return 30LL;
  v16 = 0;
  v15 = 0LL;
  memset(v14, 0, sizeof(v14));
  memset(v13, 0, 44);
  result = uarpPlatformEndpointAssetGetBytesAtOffset(a1, 0, v4, v13);
  if ( (_DWORD)result )
    return result;
  if ( v16 != 44 )
    return 11LL;
  v6 = v13[0];
  v7 = v13[1];
  *(_OWORD *)(v4 + 28) = *(_OWORD *)((char *)&v13[1] + 12);
  *(_OWORD *)v4 = v6;
  *(_OWORD *)(v4 + 16) = v7;
  uarpSuperBinaryHeaderEndianSwap(v13, v13);
  result = uarpPlatformEndpointAssetSetBytesAtOffset(a1, 0LL, v4, v13, 44LL, 0LL);
  if ( !(_DWORD)result )
  {
    v8 = *(_DWORD *)(v4 + 40);
    if ( v8 >= 0x28 )
    {
      v9 = v8 / 0x28;
      v10 = *(unsigned int *)(v4 + 36);
      do
      {
        result = uarpPlatformEndpointAssetGetBytesAtOffset(a1, 0, v4, v14);
        if ( (_DWORD)result )
          break;
        if ( v16 != 40 )
          return 11LL;
        uarpPayloadHeaderEndianSwap(v14, v14);
        result = uarpPlatformEndpointAssetSetBytesAtOffset(a1, 0LL, v4, v14, 40LL, v10);
        if ( (_DWORD)result )
          break;
        v10 = (unsigned int)(v10 + 40);
        --v9;
      }
      while ( v9 );
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}