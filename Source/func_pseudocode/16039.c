_uarpPlatformEndpointAssetRelease2
__int64 __fastcall uarpPlatformEndpointAssetRelease2(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = uarpPlatformAssetFindByAssetContext(a1, a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return uarpPlatformAssetProcessingCompleteInternal(a1, 0LL, v4, 1u, 0, 1);
}