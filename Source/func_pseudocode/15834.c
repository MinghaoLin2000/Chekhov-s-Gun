_UARPLayer2WatchdogSet
__int64 __fastcall UARPLayer2WatchdogSet(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD, _QWORD); // x3

  v2 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 296);
  if ( !v2 )
    return 14LL;
  *(_BYTE *)(a2 + 50) = 1;
  return v2(*(_QWORD *)(a1 + 544), *(_QWORD *)(a2 + 40));
}