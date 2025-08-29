_uarpPlatformAssetQueryAssetID
__int64 __fastcall uarpPlatformAssetQueryAssetID(__int64 a1, _WORD *a2)
{
  __int64 result; // x0

  result = 30LL;
  if ( a1 )
  {
    if ( a2 )
    {
      result = 0LL;
      *a2 = *(_WORD *)(a1 + 44);
    }
  }
  return result;
}