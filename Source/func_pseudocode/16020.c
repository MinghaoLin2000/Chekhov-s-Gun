_UARPSuperBinaryAppendPayloadMetaDataBlob
__int64 __fastcall UARPSuperBinaryAppendPayloadMetaDataBlob(
        __int64 a1,
        __int64 a2,
        int a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // w8
  __int64 v6; // x23
  bool v7; // zf
  unsigned int v12; // w9
  __int64 result; // x0

  v5 = *(_DWORD *)(a2 + 448);
  v6 = *(_QWORD *)(a2 + 632);
  if ( v5 )
    v7 = v6 == 0;
  else
    v7 = 1;
  if ( v7 )
    return 11LL;
  v12 = 1;
  result = 11LL;
  while ( *(_DWORD *)(v6 + 124) != a3 )
  {
    if ( v12 < v5 )
    {
      v6 = *(_QWORD *)(v6 + 176);
      ++v12;
      if ( v6 )
        continue;
    }
    return result;
  }
  if ( *(_QWORD *)(v6 + 152) )
    return 27LL;
  UARPLayer2ReturnBuffer(a1, 0LL);
  *(_QWORD *)(v6 + 152) = 0LL;
  *(_DWORD *)(v6 + 160) = 0;
  UARPLayer2RequestBuffer(a1, 0LL, a5);
  memcpy(*(void **)(v6 + 152), a4, a5);
  result = 0LL;
  *(_DWORD *)(v6 + 160) = a5;
  *(_DWORD *)(v6 + 28) += a5;
  *(_DWORD *)(a2 + 8) += a5;
  *(_DWORD *)(a2 + 684) += a5;
  *(_WORD *)(a2 + 46) |= 8u;
  return result;
}