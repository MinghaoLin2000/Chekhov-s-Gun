_UARPLayer2PayloadMetaDataTLV
__int64 __fastcall UARPLayer2PayloadMetaDataTLV(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // x0
  __int64 (__fastcall *v11)(__int64, __int64, __int64, __int64, __int64); // x5
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 vars8; // [xsp+38h] [xbp+8h]

  result = uarpProcessPayloadTLVInternal(a1, a2, a2 + 464, a3, a4, a5);
  v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a2 + 120);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 544);
    v13 = *(_QWORD *)(a2 + 704);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v11(v12, v13, a3, a4, a5);
  }
  return result;
}