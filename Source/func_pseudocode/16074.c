_uarpPlatformEndpointRescindAllAssets
__int64 __fastcall uarpPlatformEndpointRescindAllAssets(__int64 a1, __int64 a2)
{
  if ( a1 && a2 )
    return uarpAssetRescind(a1, a2, 0xFFFFLL);
  else
    return 30LL;
}