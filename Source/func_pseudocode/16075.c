_uarpPlatformEndpointApplyStagedAssets
__int64 __fastcall uarpPlatformEndpointApplyStagedAssets(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  result = 30LL;
  if ( a1 && a2 )
  {
    v5 = uarpAllocPrepareTransmitBuffer2(a1, a2, 10LL, 6u, 1);
    if ( v5 )
    {
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return uarpTransmitBuffer2(a1, a2, v5);
    }
    else
    {
      return 11LL;
    }
  }
  return result;
}