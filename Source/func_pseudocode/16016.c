_UARPSuperBinaryAddSuperBinaryMetaData
__int64 __fastcall UARPSuperBinaryAddSuperBinaryMetaData(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        const void *a5)
{
  size_t v9; // x23
  __int64 v10; // x24
  void *v11; // x0
  __int64 v13; // [xsp+8h] [xbp-38h] BYREF

  v13 = 0LL;
  v9 = a4;
  UARPLayer2RequestBuffer(a1, &v13, a4 + 24);
  v10 = v13;
  v11 = (void *)(v13 + 24);
  *(_QWORD *)(v13 + 8) = v13 + 24;
  *(_DWORD *)v10 = a3;
  *(_DWORD *)(v10 + 4) = a4;
  memcpy(v11, a5, v9);
  *(_QWORD *)(v10 + 16) = *(_QWORD *)(a2 + 720);
  *(_QWORD *)(a2 + 720) = v10;
  *(_DWORD *)(a2 + 8) += a4 + 8;
  *(_DWORD *)(a2 + 32) += a4 + 8;
  *(_WORD *)(a2 + 46) |= 0x80u;
  return 0LL;
}