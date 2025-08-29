_UARPSuperBinaryPrepareDynamicAsset
__int64 __fastcall UARPSuperBinaryPrepareDynamicAsset(int a1, char *a2, __int64 a3, __int64 a4, int a5)
{
  uarpZero(a2, 0x2CuLL);
  *(_QWORD *)(a2 + 12) = a3;
  *(_QWORD *)(a2 + 20) = a4;
  *((_DWORD *)a2 + 2) = 44;
  *(_QWORD *)a2 = 0x2C00000002LL;
  *(_OWORD *)(a2 + 28) = xmmword_10001BA20;
  *((_DWORD *)a2 + 12) = a5;
  *((_DWORD *)a2 + 112) = 0;
  *((_QWORD *)a2 + 79) = 0LL;
  *((_QWORD *)a2 + 90) = 0LL;
  *((_OWORD *)a2 + 42) = 0u;
  return 0LL;
}