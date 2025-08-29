_uarpSendDynamicAssetPreProcessingStatus
__int64 __fastcall uarpSendDynamicAssetPreProcessingStatus(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4, int a5)
{
  __int64 v10; // x0
  __int64 v11; // x24
  __int64 v12; // x25
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v10 = uarpAllocPrepareTransmitBuffer2(a1, a2, 19LL, 12LL, 1LL);
  if ( !v10 )
    return 11LL;
  v11 = v10;
  v12 = *(_QWORD *)(v10 + 16);
  *(_DWORD *)(v12 + 6) = *a3;
  *(_WORD *)(v12 + 10) = uarpHtons(a5 | a4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return uarpTransmitBuffer2(a1, a2, v11);
}