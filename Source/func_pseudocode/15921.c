_uarpSendVersionDiscoveryResponse
__int64 __fastcall uarpSendVersionDiscoveryResponse(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 result; // x0
  __int64 v6; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  result = 30LL;
  if ( a1 && a2 )
  {
    *(_WORD *)(a2 + 48) = a3;
    v6 = uarpAllocPrepareTransmitBuffer2(a1, a2, 2LL, 10LL, 0LL);
    if ( v6 )
    {
      v7 = v6;
      v8 = *(_QWORD *)(v6 + 16);
      *(_WORD *)(v8 + 6) = uarpHtons(0LL);
      *(_WORD *)(v8 + 8) = uarpHtons(*(unsigned __int16 *)(a2 + 48));
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return uarpTransmitBuffer2(a1, a2, v7);
    }
    else
    {
      return 11LL;
    }
  }
  return result;
}