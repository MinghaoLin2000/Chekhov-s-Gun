_UARPLayer2AssetReleased2
__int64 __fastcall UARPLayer2AssetReleased2(__int64 result, __int64 a2, _QWORD *a3)
{
  __int64 (__fastcall *v3)(_QWORD, __int64, _QWORD); // x3
  __int64 (__fastcall *v4)(_QWORD, _QWORD); // x3

  if ( a2 )
    a2 = *(_QWORD *)(a2 + 40);
  v3 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD))a3[27];
  if ( v3 )
    return v3(*(_QWORD *)(result + 544), a2, a3[88]);
  v4 = (__int64 (__fastcall *)(_QWORD, _QWORD))a3[36];
  if ( v4 )
    return v4(*(_QWORD *)(result + 544), a3[88]);
  return result;
}