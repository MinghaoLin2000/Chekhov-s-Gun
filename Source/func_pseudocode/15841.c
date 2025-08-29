_UARPLayer2HashInfo
__int64 __fastcall UARPLayer2HashInfo(__int64 result, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 (__fastcall *v4)(__int64, _DWORD *, _DWORD *); // x4

  v4 = *(__int64 (__fastcall **)(__int64, _DWORD *, _DWORD *))(result + 352);
  if ( v4 )
    return v4(a2, a3, a4);
  *a3 = 0;
  *a4 = 0;
  return result;
}