_UARPLayer2LastError
__int64 __fastcall UARPLayer2LastError(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall *v2)(_QWORD); // x2

  v2 = *(__int64 (__fastcall **)(_QWORD))(a1 + 248);
  if ( v2 )
    return v2(*(_QWORD *)(a1 + 544));
  *a2 = -1LL;
  return 0LL;
}