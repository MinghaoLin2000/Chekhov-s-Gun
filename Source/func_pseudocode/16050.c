_uarpPlatformEndpointAssetPayloadVersion
__int64 __fastcall uarpPlatformEndpointAssetPayloadVersion(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 result; // x0

  result = 30LL;
  if ( a1 && a2 && a3 )
  {
    if ( *(_DWORD *)(a2 + 452) == -1 )
    {
      return 32LL;
    }
    else
    {
      result = 0LL;
      *a3 = *(_OWORD *)(a2 + 472);
    }
  }
  return result;
}