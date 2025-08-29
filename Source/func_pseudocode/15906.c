_uarpAssetRescind
__int64 __fastcall uarpAssetRescind(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x0
  __int64 v7; // x22
  __int64 v8; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = uarpAllocPrepareTransmitBuffer2(a1, a2, 12LL, 8LL, 1LL);
  if ( !v6 )
    return 11LL;
  v7 = v6;
  v8 = *(_QWORD *)(v6 + 16);
  *(_WORD *)(v8 + 6) = uarpHtons(a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return uarpTransmitBuffer2(a1, a2, v7);
}