_uarpPlatformEndpointAssetGetBytesAtOffset
__int64 __fastcall uarpPlatformEndpointAssetGetBytesAtOffset(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *__dst,
        __int64 a5,
        __int64 a6,
        unsigned __int16 *a7)
{
  __int64 result; // x0
  __int16 v15; // w8
  __int64 vars8; // [xsp+48h] [xbp+8h]

  result = 30LL;
  if ( a1 && a3 && __dst && (_DWORD)a5 )
  {
    v15 = *(_WORD *)(a3 + 46);
    if ( (v15 & 0x80) != 0 )
    {
      result = UARPSuperBinaryGetInternalSuperBinaryMetaData(a1, a3, __dst, a5, a6, a7);
      if ( (_DWORD)result != 40 )
        return result;
      v15 = *(_WORD *)(a3 + 46);
    }
    if ( (v15 & 8) == 0
      || (result = UARPSuperBinaryGetInternalPayloadMetaData(a1, a3, __dst, a5, a6, a7), (_DWORD)result == 40) )
    {
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return UARPLayer2AssetGetBytesAtOffset2(a1, a2, (_QWORD *)a3, (__int64)__dst, a5, a6, (__int64)a7);
    }
  }
  return result;
}