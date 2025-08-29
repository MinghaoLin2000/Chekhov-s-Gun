_uarpPlatformRemoteEndpointAlloc
__int64 __fastcall uarpPlatformRemoteEndpointAlloc(__int64 a1)
{
  int v2; // w8
  __int64 result; // x0
  __int64 v4; // [xsp+8h] [xbp-18h] BYREF

  v4 = 0LL;
  v2 = UARPLayer2RequestBuffer(a1, &v4, 0xB8u);
  result = 0LL;
  if ( !v2 )
  {
    if ( (unsigned int)uarpPlatformRemoteEndpointAddEntry(a1, v4) )
      return 0LL;
    else
      return v4;
  }
  return result;
}