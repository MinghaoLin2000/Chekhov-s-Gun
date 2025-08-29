_uarpPlatformEndpointAssetFullyStaged
__int64 __fastcall uarpPlatformEndpointAssetFullyStaged(__int64 a1, __int64 a2)
{
  if ( a1 && a2 )
    return uarpAssetProcessingComplete(a1, *(_QWORD *)(a2 + 696), a2, 1LL);
  else
    return 30LL;
}