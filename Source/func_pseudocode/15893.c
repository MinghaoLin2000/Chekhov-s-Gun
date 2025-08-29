_uarpPlatformAssetRescind
__int64 __fastcall uarpPlatformAssetRescind(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( result )
  {
    v5 = result;
    if ( a3 )
    {
      uarpTransmitQueueAssetRescinded(result, a2, a3);
      *(_BYTE *)(a3 + 392) = 0;
      *(_BYTE *)(a3 + 72) = 1;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return UARPLayer2AssetRescinded(v5, a2, a3);
    }
    else
    {
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return UARPLayer2RescindAllAssets(result, a2, 0LL);
    }
  }
  return result;
}