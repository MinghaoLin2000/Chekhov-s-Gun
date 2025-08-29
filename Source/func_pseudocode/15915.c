_uarpPlatformDownstreamEndpointSendMessageInternal
__int64 __fastcall uarpPlatformDownstreamEndpointSendMessageInternal(__int64 a1, __int64 a2, __int64 a3)
{
  return uarpTransmitBufferUpstream(a1, a2, *(unsigned __int16 *)(a3 + 136));
}