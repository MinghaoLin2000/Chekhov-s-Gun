_UARPLayer2AssetPreProcessingNotificationAck
__int64 __fastcall UARPLayer2AssetPreProcessingNotificationAck(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v3)(_QWORD, _QWORD, _QWORD); // x4

  v3 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a3 + 248);
  if ( v3 )
    return v3(*(_QWORD *)(a1 + 544), *(_QWORD *)(a2 + 40), *(_QWORD *)(a3 + 704));
  else
    return 14LL;
}