_uarpSendVersionDiscoveryRequest
__int64 __fastcall uarpSendVersionDiscoveryRequest(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v7; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  result = 30LL;
  if ( a1 && a2 )
  {
    v7 = uarpAllocPrepareTransmitBuffer2(a1, a2, 1LL, 8LL, 1LL);
    if ( v7 )
    {
      v8 = v7;
      v9 = *(_QWORD *)(v7 + 16);
      if ( a3 >= 4 )
        v10 = 4LL;
      else
        v10 = a3;
      *(_WORD *)(a2 + 48) = v10;
      *(_WORD *)(v9 + 6) = uarpHtons(v10);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return uarpTransmitBuffer2(a1, a2, v8);
    }
    else
    {
      return 11LL;
    }
  }
  return result;
}