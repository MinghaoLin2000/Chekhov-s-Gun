_UARPLayer2HashInit
__int64 __fastcall UARPLayer2HashInit(__int64 result, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v3)(__int64, __int64); // x3

  v3 = *(__int64 (__fastcall **)(__int64, __int64))(result + 360);
  if ( v3 )
    return v3(a2, a3);
  return result;
}