_UARPLayer2AssetProcessingNotification2
__int64 __fastcall UARPLayer2AssetProcessingNotification2(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 (__fastcall *v4)(_QWORD, _QWORD, _QWORD); // x4
  __int64 (__fastcall *v6)(_QWORD, _QWORD, __int64); // x4

  v4 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))a3[28];
  if ( v4 )
    return v4(*(_QWORD *)(a1 + 544), *(_QWORD *)(a2 + 40), a3[88]);
  v6 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))a3[37];
  if ( v6 )
    return v6(*(_QWORD *)(a1 + 544), a3[88], a4);
  else
    return 14LL;
}