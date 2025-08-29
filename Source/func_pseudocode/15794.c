_uarpPlatformAssetSuperBinaryPullMetaData
__int64 __fastcall uarpPlatformAssetSuperBinaryPullMetaData(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  result = 30LL;
  if ( a1 && a2 )
  {
    if ( *(_DWORD *)(a2 + 32) )
    {
      *(_DWORD *)(a2 + 688) = 0;
      if ( *(_BYTE *)(a2 + 392) == 1 )
      {
        return 16LL;
      }
      else
      {
        uarpZero((void *)(a2 + 312), 0x88uLL);
        *(_QWORD *)(a2 + 312) = *(_QWORD *)(a2 + 28);
        *(_QWORD *)(a2 + 328) = *(_QWORD *)(a2 + 640);
        *(_DWORD *)(a2 + 336) = *(_DWORD *)(a2 + 648);
        *(_QWORD *)(a2 + 376) = sub_10000CDDC;
        *(_QWORD *)(a2 + 384) = sub_10000CE6C;
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        return uarpPlatformAssetRequestData(a1, a2, a2 + 312);
      }
    }
    else
    {
      return 40LL;
    }
  }
  return result;
}