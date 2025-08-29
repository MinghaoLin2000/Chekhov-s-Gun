_uarpPlatformEndpointAssetPayloadTag
__int64 __fastcall uarpPlatformEndpointAssetPayloadTag(__int64 a1, __int64 a2, _DWORD *a3)
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
      *a3 = *(_DWORD *)(a2 + 468);
    }
  }
  return result;
}