_uarpPlatformAssetPullAllMetaData
__int64 __fastcall uarpPlatformAssetPullAllMetaData(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x2
  int v6; // w8
  __int64 i; // x9
  int v8; // w10
  int v9; // w9
  int v10; // w10
  __int64 vars8; // [xsp+28h] [xbp+8h]

  result = 30LL;
  if ( !a1 || !a2 )
    return result;
  if ( *(_BYTE *)(a2 + 392) == 1 )
    return 16LL;
  uarpZero((void *)(a2 + 312), 0x88uLL);
  v6 = *(_DWORD *)(a2 + 28);
  v5 = *(unsigned int *)(a2 + 32);
  *(_DWORD *)(a2 + 312) = v6;
  *(_DWORD *)(a2 + 316) = v5;
  for ( i = *(_QWORD *)(a2 + 632); i; i = *(_QWORD *)(i + 176) )
  {
    v8 = *(_DWORD *)(i + 24);
    if ( v8 )
    {
      if ( v8 != (_DWORD)v5 + v6 )
        return 43LL;
      v5 = (unsigned int)(*(_DWORD *)(i + 28) + v5);
      *(_DWORD *)(a2 + 316) = v5;
    }
  }
  *(_DWORD *)(a2 + 680) = v5;
  *(_QWORD *)(a2 + 672) = 0LL;
  if ( !(_DWORD)v5 )
  {
    *(_QWORD *)(a2 + 328) = 0LL;
    *(_DWORD *)(a2 + 336) = 0;
    *(_QWORD *)(a2 + 376) = sub_10000D9B0;
    *(_QWORD *)(a2 + 384) = sub_10000DAE0;
LABEL_17:
    UARPLayer2AssetAllHeadersAndMetaDataComplete(a1, *(_QWORD *)(a2 + 696), a2);
    return 0LL;
  }
  result = UARPLayer2RequestBuffer(a1, a2 + 672, v5);
  if ( (_DWORD)result )
    return result;
  v9 = *(_DWORD *)(a2 + 680);
  v10 = *(_DWORD *)(a2 + 316);
  *(_QWORD *)(a2 + 328) = *(_QWORD *)(a2 + 672);
  *(_DWORD *)(a2 + 336) = v9;
  *(_QWORD *)(a2 + 376) = sub_10000D9B0;
  *(_QWORD *)(a2 + 384) = sub_10000DAE0;
  if ( !v10 )
    goto LABEL_17;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return uarpPlatformAssetRequestData(a1, a2, a2 + 312);
}