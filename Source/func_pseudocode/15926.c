_uarpSendAssetRequestData
__int64 __fastcall uarpSendAssetRequestData(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v10; // x0
  __int64 v11; // x22
  __int64 v12; // x25
  __int64 v13; // x0
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v10 = uarpAllocPrepareTransmitBuffer2(a1, a2, 6LL, 14LL, 1LL);
  if ( !v10 )
    return 11LL;
  v11 = v10;
  v12 = *(_QWORD *)(v10 + 16);
  *(_WORD *)(v12 + 6) = uarpHtons(a3);
  *(_DWORD *)(v12 + 8) = uarpHtonl(a4);
  if ( a5 >= 0xFFFF )
    v13 = 0xFFFFLL;
  else
    v13 = a5;
  *(_WORD *)(v12 + 12) = uarpHtons(v13);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return uarpTransmitBuffer2(a1, a2, v11);
}