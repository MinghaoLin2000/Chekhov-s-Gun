_uarpPlatformEndpointPayloadRequestDataPause
__int64 __fastcall uarpPlatformEndpointPayloadRequestDataPause(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  result = 30LL;
  if ( a1 )
  {
    if ( a2 )
    {
      result = 0LL;
      *(_BYTE *)(a2 + 73) = 1;
    }
  }
  return result;
}