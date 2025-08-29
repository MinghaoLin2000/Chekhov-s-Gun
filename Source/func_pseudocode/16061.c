_uarpPlatformEndpointCleanupAssets2
__int64 __fastcall uarpPlatformEndpointCleanupAssets2(__int64 result, __int64 a2)
{
  if ( result )
    return uarpPlatformCleanupAssetsForRemoteEndpoint(result, a2, 0);
  return result;
}