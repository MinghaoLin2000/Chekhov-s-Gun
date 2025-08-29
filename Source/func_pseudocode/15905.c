_uarpOfferAssetToRemoteEP
__int64 __fastcall uarpOfferAssetToRemoteEP(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x0
  __int64 v7; // x22
  __int64 v8; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = uarpAllocPrepareTransmitBuffer2(a1, a2, 5LL, 36LL, 1LL);
  if ( !v6 )
    return 11LL;
  v7 = v6;
  v8 = *(_QWORD *)(v6 + 16);
  *(_DWORD *)(v8 + 6) = uarpTagStructPack32(a3 + 48);
  *(_WORD *)(v8 + 10) = uarpHtons(*(unsigned __int16 *)(a3 + 46));
  *(_WORD *)(v8 + 12) = uarpHtons(*(unsigned __int16 *)(a3 + 44));
  uarpVersionEndianSwap(a3 + 52, v8 + 14);
  *(_DWORD *)(v8 + 30) = uarpHtonl(*(unsigned int *)(a3 + 68));
  *(_WORD *)(v8 + 34) = uarpHtons(*(unsigned __int16 *)(a3 + 448));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return uarpTransmitBuffer2(a1, a2, v7);
}