_UARPLayer2DecompressBuffer
__int64 __fastcall UARPLayer2DecompressBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64, __int64, __int64); // x6

  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a1 + 336);
  if ( v6 )
    return v6(a2, a3, a4, a5, a6);
  else
    return 14LL;
}