_UARPSuperBinaryFinalizeDynamicAsset
__int64 __fastcall UARPSuperBinaryFinalizeDynamicAsset(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x21
  unsigned int v6; // w2
  __int64 *v7; // x23
  unsigned int v8; // w8
  unsigned int v9; // w24
  unsigned int v10; // w25
  unsigned int v11; // w26
  unsigned int **v12; // x9
  unsigned int *v13; // x22
  __int64 v14; // x1
  void *v15; // x3
  unsigned int v16; // w22
  unsigned int v17; // w22
  __int64 *v18; // x9
  __int64 v19; // x24
  unsigned int v20; // w2
  void *v21; // x0
  const void *v22; // x1
  void *v23; // x3
  unsigned int v24; // w25
  unsigned int i; // w22
  __int64 v26; // x23
  unsigned __int64 *v27; // [xsp+8h] [xbp-58h] BYREF
  unsigned int v28; // [xsp+14h] [xbp-4Ch] BYREF
  void *__dst; // [xsp+18h] [xbp-48h] BYREF

  uarpSuperBinaryHeaderEndianSwap((unsigned int *)a2, (_DWORD *)a2);
  result = uarpPlatformEndpointAssetSetBytesAtOffset(a1, 0LL, a2, a2, 44LL, 0LL);
  if ( !(_DWORD)result )
  {
    uarpSuperBinaryHeaderEndianSwap((unsigned int *)a2, (_DWORD *)a2);
    v5 = *(unsigned int *)(a2 + 4);
    v6 = *(_DWORD *)(a2 + 32);
    v7 = (__int64 *)(a2 + 632);
    v8 = *(_DWORD *)(a2 + 448);
    if ( v8 )
    {
      v9 = 0;
      v10 = *(_DWORD *)(a2 + 40) + v5 + v6;
      v11 = v10 + *(_DWORD *)(a2 + 684);
      v12 = (unsigned int **)(a2 + 632);
      while ( 1 )
      {
        v13 = *v12;
        v13[6] = v10;
        v13[8] = v11;
        uarpPayloadHeader2EndianSwap(v13, v13);
        result = uarpPlatformEndpointAssetSetBytesAtOffset(a1, 0LL, a2, v13, 40LL, v5);
        if ( (_DWORD)result )
          break;
        uarpPayloadHeader2EndianSwap(v13, v13);
        v5 = *v13 + (unsigned int)v5;
        v10 += v13[7];
        v11 += v13[9];
        v12 = (unsigned int **)(v13 + 44);
        ++v9;
        v8 = *(_DWORD *)(a2 + 448);
        if ( v9 >= v8 )
        {
          v6 = *(_DWORD *)(a2 + 32);
          goto LABEL_8;
        }
      }
    }
    else
    {
LABEL_8:
      if ( v6 )
      {
        __dst = 0LL;
        v28 = 0;
        result = UARPLayer2RequestBuffer(a1, (__int64 *)&__dst, v6);
        if ( (_DWORD)result )
          return result;
        v27 = (unsigned __int64 *)__dst;
        result = UARPSuperBinaryBuildMetaData(result, v14, *(_QWORD *)(a2 + 720), &v27, *(_DWORD *)(a2 + 32), &v28);
        if ( (_DWORD)result )
          return result;
        v15 = __dst;
        *(_QWORD *)(a2 + 672) = __dst;
        v16 = v28;
        *(_DWORD *)(a2 + 680) = v28;
        result = uarpPlatformEndpointAssetSetBytesAtOffset(a1, 0LL, a2, v15, (unsigned __int16)v16, v5);
        if ( (_DWORD)result )
          return result;
        v5 = v16 + (unsigned int)v5;
        v8 = *(_DWORD *)(a2 + 448);
      }
      if ( !v8 )
        return 0LL;
      v17 = 0;
      v18 = (__int64 *)(a2 + 632);
      do
      {
        v19 = *v18;
        v20 = *(_DWORD *)(*v18 + 28);
        if ( v20 )
        {
          __dst = 0LL;
          v28 = 0;
          result = UARPLayer2RequestBuffer(a1, (__int64 *)&__dst, v20);
          if ( (_DWORD)result )
            return result;
          v21 = __dst;
          v27 = (unsigned __int64 *)__dst;
          v22 = *(const void **)(v19 + 152);
          if ( v22 )
          {
            v21 = memcpy(__dst, v22, *(unsigned int *)(v19 + 160));
            v28 = *(_DWORD *)(v19 + 160);
          }
          result = UARPSuperBinaryBuildMetaData(
                     (__int64)v21,
                     (__int64)v22,
                     *(_QWORD *)(v19 + 168),
                     &v27,
                     *(_DWORD *)(v19 + 28),
                     &v28);
          if ( (_DWORD)result )
            return result;
          v23 = __dst;
          *(_QWORD *)(v19 + 152) = __dst;
          v24 = v28;
          *(_DWORD *)(v19 + 160) = v28;
          result = uarpPlatformEndpointAssetSetBytesAtOffset(a1, 0LL, a2, v23, (unsigned __int16)v24, v5);
          if ( (_DWORD)result )
            return result;
          v5 = v24 + (unsigned int)v5;
          v8 = *(_DWORD *)(a2 + 448);
        }
        v18 = (__int64 *)(v19 + 176);
        ++v17;
      }
      while ( v17 < v8 );
      if ( v8 )
      {
        for ( i = 0; i < v8; ++i )
        {
          v26 = *v7;
          if ( !*(_BYTE *)(v26 + 148) )
          {
            result = uarpPlatformEndpointAssetSetBytesAtOffset(
                       a1,
                       0LL,
                       a2,
                       *(_QWORD *)(v26 + 136),
                       *(unsigned __int16 *)(v26 + 144),
                       v5);
            if ( (_DWORD)result )
              return result;
            v8 = *(_DWORD *)(a2 + 448);
          }
          result = 0LL;
          v5 = (unsigned int)(*(_DWORD *)(v26 + 144) + v5);
          v7 = (__int64 *)(v26 + 176);
        }
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}