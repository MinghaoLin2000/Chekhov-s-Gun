_uarpPlatformEndpointDynamicAssetSolicitationDeny
__int64 __fastcall uarpPlatformEndpointDynamicAssetSolicitationDeny(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  if ( a1 && a2 && a3 )
    return uarpSendDynamicAssetPreProcessingStatus(a1, a2, a3, 2u, a4);
  else
    return 30LL;
}