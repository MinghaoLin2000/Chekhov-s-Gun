_UARPLayer2WatchdogCancel
__int64 __fastcall UARPLayer2WatchdogCancel(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD, _QWORD); // x2

  v2 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 304);
  if ( !v2 )
    return 14LL;
  *(_BYTE *)(a2 + 50) = 0;
  return v2(*(_QWORD *)(a1 + 544), *(_QWORD *)(a2 + 40));
}