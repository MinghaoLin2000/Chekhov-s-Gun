_UARPSuperBinaryAddPayload2
__int64 __fastcall UARPSuperBinaryAddPayload2(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        const void *a7,
        unsigned int a8,
        char a9)
{
  _DWORD *v16; // x22
  void *v17; // x0
  void *v20; // [xsp+10h] [xbp-60h] BYREF
  void *v21; // [xsp+18h] [xbp-58h] BYREF

  v21 = 0LL;
  UARPLayer2RequestBuffer(a1, (__int64 *)&v21, 0xB8u);
  v16 = v21;
  *((_QWORD *)v21 + 22) = *(_QWORD *)(a2 + 632);
  *(_QWORD *)(a2 + 632) = v16;
  uarpZero(v16, 0x28uLL);
  *v16 = 40;
  v16[1] = a4;
  *((_QWORD *)v16 + 1) = a5;
  *((_QWORD *)v16 + 2) = a6;
  v16[9] = a8;
  v16[7] = 0;
  v16[31] = a3;
  if ( !a9 )
  {
    v20 = 0LL;
    UARPLayer2RequestBuffer(a1, (__int64 *)&v20, a8);
    v17 = v20;
    *((_QWORD *)v16 + 17) = v20;
    memcpy(v17, a7, a8);
  }
  *((_BYTE *)v16 + 148) = a9;
  v16[36] = a8;
  *((_QWORD *)v16 + 21) = 0LL;
  *(_DWORD *)(a2 + 8) += a8 + 40;
  *(_DWORD *)(a2 + 40) += 40;
  *(_DWORD *)(a2 + 28) += 40;
  ++*(_DWORD *)(a2 + 448);
  return 0LL;
}