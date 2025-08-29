_uarpPlatformEndpointWatchDogExpired
__int64 __fastcall uarpPlatformEndpointWatchDogExpired(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  result = 30LL;
  if ( a1 && a2 )
  {
    result = 0LL;
    *(_BYTE *)(a2 + 50) = 0;
    if ( !*(_BYTE *)(a1 + 580) )
    {
      uarpTransmitQueueService(a1, a2);
      return 0LL;
    }
  }
  return result;
}