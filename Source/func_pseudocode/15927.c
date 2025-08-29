_uarpSendVendorSpecific
__int64 __fastcall uarpSendVendorSpecific(
        __int64 a1,
        __int64 a2,
        __int16 *a3,
        __int64 a4,
        const void *a5,
        unsigned int a6)
{
  __int64 v12; // x0
  __int64 v13; // x23
  __int64 v14; // x26
  __int16 v15; // w8
  __int64 vars8; // [xsp+48h] [xbp+8h]

  if ( !a2 )
    return 13LL;
  v12 = uarpAllocPrepareTransmitBuffer2(a1, a2, 0xFFFFLL, (unsigned __int16)(a6 + 11), (_DWORD)a4 == 32);
  if ( !v12 )
    return 11LL;
  v13 = v12;
  v14 = *(_QWORD *)(v12 + 16);
  v15 = *a3;
  *(_BYTE *)(v14 + 8) = *((_BYTE *)a3 + 2);
  *(_WORD *)(v14 + 6) = v15;
  *(_WORD *)(v14 + 9) = uarpHtons(a4);
  if ( a5 && a6 )
    memcpy((void *)(v14 + 11), a5, a6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return uarpTransmitBuffer2(a1, a2, v13);
}