_uarpPlatformEndpointPauseAssetTransfers
__int64 __fastcall uarpPlatformEndpointPauseAssetTransfers(__int64 a1, __int64 a2)
{
  if ( a1 && a2 )
    return uarpSendDataTransferNotificationPause(a1, a2);
  else
    return 30LL;
}