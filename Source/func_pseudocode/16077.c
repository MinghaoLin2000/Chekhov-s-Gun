_uarpPlatformEndpointResumeAssetTransfers
__int64 __fastcall uarpPlatformEndpointResumeAssetTransfers(__int64 a1, __int64 a2)
{
  if ( a1 && a2 )
    return uarpSendDataTransferNotificationResume(a1, a2);
  else
    return 30LL;
}