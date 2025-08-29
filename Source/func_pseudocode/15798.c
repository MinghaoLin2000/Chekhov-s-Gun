_uarpPlatformAssetPayloadPullData
__int64 __fastcall uarpPlatformAssetPayloadPullData(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  unsigned int v5; // w8
  int v6; // w9
  int v7; // w8
  __int64 v8; // x2
  __int64 v9; // x2
  __int64 vars8; // [xsp+38h] [xbp+8h]

  result = 30LL;
  if ( a1 && a2 )
  {
    if ( *(_DWORD *)(a2 + 452) == -1 )
      return 44LL;
    v5 = *(_DWORD *)(a2 + 508);
    if ( v5 > *(_DWORD *)(a2 + 500) || *(_DWORD *)(a2 + 496) + v5 > *(_DWORD *)(a2 + 8) )
      return 43LL;
    if ( *(_BYTE *)(a2 + 392) == 1 )
      return 16LL;
    uarpZero((void *)(a2 + 312), 0x88uLL);
    v6 = *(_DWORD *)(a2 + 508);
    *(_DWORD *)(a2 + 312) = v6 + *(_DWORD *)(a2 + 496);
    *(_DWORD *)(a2 + 316) = *(_DWORD *)(a2 + 500) - v6;
    *(_QWORD *)(a2 + 328) = *(_QWORD *)(a2 + 640);
    v7 = *(_DWORD *)(a2 + 648);
    *(_DWORD *)(a2 + 336) = v7;
    *(_DWORD *)(a2 + 368) = v7;
    *(_QWORD *)(a2 + 376) = sub_10000D428;
    *(_QWORD *)(a2 + 384) = sub_10000D4B4;
    if ( *(_BYTE *)(a2 + 516) == 1 )
    {
      *(_BYTE *)(a2 + 356) = 1;
      *(_DWORD *)(a2 + 336) = 10;
      *(_QWORD *)(a2 + 344) = *(_QWORD *)(a2 + 656);
      *(_DWORD *)(a2 + 352) = *(_DWORD *)(a2 + 664);
      *(_QWORD *)(a2 + 376) = sub_10000D57C;
    }
    *(_DWORD *)(a2 + 416) = *(_DWORD *)(a2 + 520);
    UARPLayer2HashInfo(a1);
    v8 = *(unsigned int *)(a2 + 420);
    if ( (_DWORD)v8 )
    {
      result = UARPLayer2RequestBuffer(a1, a2 + 424, v8);
      if ( (_DWORD)result )
        return result;
      if ( !*(_QWORD *)(a2 + 424) )
        return 11LL;
    }
    v9 = *(unsigned int *)(a2 + 432);
    if ( (_DWORD)v9 )
    {
      result = UARPLayer2RequestBuffer(a1, a2 + 440, v9);
      if ( (_DWORD)result )
        return result;
      if ( !*(_QWORD *)(a2 + 440) )
        return 11LL;
    }
    UARPLayer2HashInit(a1, *(unsigned int *)(a2 + 416), *(_QWORD *)(a2 + 424));
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return uarpPlatformAssetRequestData(a1, a2, a2 + 312);
  }
  return result;
}