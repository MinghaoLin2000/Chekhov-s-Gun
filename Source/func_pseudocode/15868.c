_UARPLayer2PayloadDataComplete2
__int64 __fastcall UARPLayer2PayloadDataComplete2(__int64 result, _QWORD *a2)
{
  __int64 (__fastcall *v2)(_QWORD, _QWORD); // x4
  __int64 (__fastcall *v3)(_QWORD, _QWORD); // x2

  v2 = (__int64 (__fastcall *)(_QWORD, _QWORD))a2[20];
  if ( v2 )
    return v2(*(_QWORD *)(result + 544), a2[88]);
  v3 = (__int64 (__fastcall *)(_QWORD, _QWORD))a2[19];
  if ( v3 )
    return v3(*(_QWORD *)(result + 544), a2[88]);
  return result;
}