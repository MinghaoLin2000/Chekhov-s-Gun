_UARPLayer2HashUpdate
__int64 __fastcall UARPLayer2HashUpdate(__int64 result, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // x5

  v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(result + 368);
  if ( v5 )
    return v5(a2, a3, a4, a5);
  return result;
}