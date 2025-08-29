_uarpPlatformEndpointAssetSetPayloadOffset
__int64 __fastcall uarpPlatformEndpointAssetSetPayloadOffset(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0

  if ( !a2 )
    return 30LL;
  if ( *(_DWORD *)(a2 + 452) == -1 )
    return 44LL;
  if ( *(_DWORD *)(a2 + 500) <= a3 )
    return 43LL;
  if ( *(_BYTE *)(a2 + 392) == 1 )
    return 16LL;
  result = 0LL;
  *(_DWORD *)(a2 + 508) = a3;
  return result;
}