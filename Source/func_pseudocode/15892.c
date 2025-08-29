_uarpPlatformEndpointAssetStore
__int64 __fastcall uarpPlatformEndpointAssetStore(__int64 result, __int64 a2, unsigned int a3)
{
  if ( a3 <= 4 )
    return UARPLayer2AssetStore(result, a2);
  return result;
}