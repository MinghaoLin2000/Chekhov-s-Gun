_uarpPlatformEndpointRequestInfoProperty
__int64 __fastcall uarpPlatformEndpointRequestInfoProperty(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a1 && a2 && (unsigned int)(a3 - 10) >= 0xFFFFFFF7 )
    return uarpSendInformationRequest(a1, a2, a3);
  else
    return 30LL;
}