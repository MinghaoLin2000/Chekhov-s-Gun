_uarpPlatformDownstreamEndpointAdd
__int64 __fastcall uarpPlatformDownstreamEndpointAdd(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v6; // w8
  __int64 v7; // x0
  int v8; // w3
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( !a1 )
    return 30LL;
  v6 = *(_WORD *)(a1 + 600);
  do
  {
    if ( !v6 )
    {
      *(_WORD *)(a1 + 600) = 1;
      return 11LL;
    }
    v7 = UARPPlatformDownstreamEndpointByID(a1, a2, v6);
    v8 = *(unsigned __int16 *)(a1 + 600);
    v6 = v8 + 1;
    *(_WORD *)(a1 + 600) = v8 + 1;
  }
  while ( !v7 || !v8 );
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return uarpPlatformDownstreamEndpointAddWithID(a1, a2, a3);
}