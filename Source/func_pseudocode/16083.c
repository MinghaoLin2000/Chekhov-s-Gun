_uarpPlatformDownstreamEndpointRemove
__int64 __fastcall uarpPlatformDownstreamEndpointRemove(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x0
  __int64 v6; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = UARPPlatformDownstreamEndpointByDelegate(a1, a2, a3);
  if ( !v5 )
    return 58LL;
  v6 = *(unsigned __int16 *)(v5 + 136);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return uarpSendDownstreamEndpointUnreachable(a1, a2, v6);
}