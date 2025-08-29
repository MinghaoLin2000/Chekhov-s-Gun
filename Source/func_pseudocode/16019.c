_UARPSuperBinaryAppendPayloadMetaData
__int64 __fastcall UARPSuperBinaryAppendPayloadMetaData(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        const void *a6)
{
  unsigned int v6; // w9
  __int64 v7; // x24
  bool v8; // zf
  __int64 v9; // x8
  unsigned int v14; // w10
  __int64 v15; // x25
  void *v16; // x0
  __int64 v18; // [xsp+8h] [xbp-48h] BYREF

  v6 = *(_DWORD *)(a2 + 448);
  v7 = *(_QWORD *)(a2 + 632);
  if ( v6 )
    v8 = v7 == 0;
  else
    v8 = 1;
  if ( v8 )
    return 11LL;
  v14 = 1;
  while ( *(_DWORD *)(v7 + 124) != a3 )
  {
    v9 = 11LL;
    if ( v14 < v6 )
    {
      v7 = *(_QWORD *)(v7 + 176);
      ++v14;
      if ( v7 )
        continue;
    }
    return v9;
  }
  v18 = 0LL;
  UARPLayer2RequestBuffer(a1, &v18, a5 + 24);
  v15 = v18;
  v16 = (void *)(v18 + 24);
  *(_QWORD *)(v18 + 8) = v18 + 24;
  *(_DWORD *)v15 = a4;
  *(_DWORD *)(v15 + 4) = a5;
  memcpy(v16, a6, a5);
  v9 = 0LL;
  *(_QWORD *)(v15 + 16) = *(_QWORD *)(v7 + 168);
  *(_QWORD *)(v7 + 168) = v15;
  *(_DWORD *)(v7 + 28) += a5 + 8;
  *(_DWORD *)(a2 + 8) += a5 + 8;
  *(_DWORD *)(a2 + 684) += a5 + 8;
  *(_WORD *)(a2 + 46) |= 8u;
  return v9;
}