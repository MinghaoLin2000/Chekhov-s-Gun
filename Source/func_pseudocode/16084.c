_uarpPlatformDownstreamEndpointSendMessage
__int64 __fastcall uarpPlatformDownstreamEndpointSendMessage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = UARPPlatformDownstreamEndpointByDelegate(a1, a2, a3);
  if ( !v5 )
    return 58LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return uarpPlatformDownstreamEndpointSendMessageInternal(a1, a2, v5);
}