_uarpTransmitBufferUpstream
__int64 __fastcall uarpTransmitBufferUpstream(__int64 a1, __int64 a2, __int64 a3, const void *a4, unsigned int a5)
{
  __int64 v10; // x0
  __int64 v11; // x23
  __int64 v12; // x25
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v10 = uarpAllocPrepareTransmitBuffer2(a1, a2, 27LL, (unsigned __int16)(a5 + 8), 1LL);
  if ( !v10 )
    return 11LL;
  v11 = v10;
  v12 = *(_QWORD *)(v10 + 16);
  *(_WORD *)(v12 + 6) = uarpHtons(a3);
  memcpy((void *)(v12 + 8), a4, a5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return uarpTransmitBuffer2(a1, a2, v11);
}