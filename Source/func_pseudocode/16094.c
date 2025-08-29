_uarpPlatformAssetQueryAssetVersion
__n128 __fastcall uarpPlatformAssetQueryAssetVersion(__int64 a1, __n128 *a2)
{
  __n128 result; // q0

  if ( a1 )
  {
    if ( a2 )
    {
      result = *(__n128 *)(a1 + 52);
      *a2 = result;
    }
  }
  return result;
}