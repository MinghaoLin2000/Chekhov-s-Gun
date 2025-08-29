_uarpPlatformEndpointCleanupAssets
__int64 __fastcall uarpPlatformEndpointCleanupAssets(__int64 result)
{
  if ( result )
    return uarpPlatformCleanupAssetsForRemoteEndpoint(result, 0LL, 0);
  return result;
}