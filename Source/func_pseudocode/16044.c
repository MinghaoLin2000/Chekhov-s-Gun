_uarpPlatformEndpointAssetQueryAssetVersion
__n128 __fastcall uarpPlatformEndpointAssetQueryAssetVersion(__int64 a1, __int64 a2, __n128 *a3)
{
  __n128 result; // q0

  if ( a1 && a2 )
  {
    if ( a3 )
    {
      result = *(__n128 *)(a2 + 12);
      *a3 = result;
    }
  }
  return result;
}