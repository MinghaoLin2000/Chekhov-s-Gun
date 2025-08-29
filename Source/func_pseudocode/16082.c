_uarpPlatformDownstreamEndpointAddWithID
__int64 __fastcall uarpPlatformDownstreamEndpointAddWithID(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( !a1 )
    return 30LL;
  v8 = uarpPlatformRemoteEndpointAlloc(a1);
  if ( !v8 )
    return 11LL;
  *(_QWORD *)(v8 + 40) = a3;
  *(_QWORD *)(v8 + 176) = a2;
  *(_WORD *)(v8 + 136) = a4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return uarpSendDownstreamEndpointReachable(a1, a2, a4);
}