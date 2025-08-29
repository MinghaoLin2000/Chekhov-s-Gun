_uarpPlatformAssetSuperBinaryPullProposedPayloadHeader
__int64 __fastcall uarpPlatformAssetSuperBinaryPullProposedPayloadHeader(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  result = 30LL;
  if ( a1 && a2 && *(_DWORD *)(a2 + 456) <= *(_DWORD *)(a2 + 448) )
  {
    if ( *(_BYTE *)(a2 + 392) == 1 )
    {
      return 16LL;
    }
    else
    {
      uarpZero((void *)(a2 + 312), 0x88uLL);
      *(_DWORD *)(a2 + 312) = 40 * *(_DWORD *)(a2 + 456) + 44;
      *(_DWORD *)(a2 + 316) = 40;
      *(_QWORD *)(a2 + 328) = *(_QWORD *)(a2 + 640);
      *(_DWORD *)(a2 + 336) = *(_DWORD *)(a2 + 648);
      *(_QWORD *)(a2 + 376) = sub_10000CF64;
      *(_QWORD *)(a2 + 384) = sub_10000CFE8;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return uarpPlatformAssetRequestData(a1, a2, a2 + 312);
    }
  }
  return result;
}