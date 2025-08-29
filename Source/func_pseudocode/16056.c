_uarpPlatformEndpointPayloadRequestDataResume
__int64 __fastcall uarpPlatformEndpointPayloadRequestDataResume(__int64 a1, __int64 a2)
{
  __int64 v2; // x8

  v2 = 30LL;
  if ( !a1 )
    return v2;
  if ( !a2 )
    return v2;
  v2 = *(unsigned __int8 *)(a2 + 73);
  if ( !*(_BYTE *)(a2 + 73) )
    return v2;
  *(_BYTE *)(a2 + 73) = 0;
  v2 = *(_QWORD *)(a2 + 696);
  if ( !v2 )
    return v2;
  if ( *(_BYTE *)(a2 + 392) == 1 )
    return 0LL;
  return uarpPlatformAssetRequestData(a1, a2, a2 + 312);
}