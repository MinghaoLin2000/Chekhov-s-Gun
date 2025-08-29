_UARPLayer2SendMessage
__int64 __fastcall UARPLayer2SendMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v4)(__int64, __int64, __int64, __int64, __int64); // x5
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a1 + 80);
  if ( !v4 )
    return 14LL;
  if ( *(_WORD *)(a2 + 136) )
  {
    uarpPlatformDownstreamEndpointSendMessageInternal(a1, *(_QWORD *)(a2 + 176), a2, a3, a4);
    uarpPlatformEndpointSendMessageComplete(a1, a2, a3);
    return 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 544);
    v10 = *(_QWORD *)(a2 + 40);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v4(v9, v10, a3, a4, a4);
  }
}