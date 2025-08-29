_UARPLayer2AssetRescinded
__int64 __fastcall UARPLayer2AssetRescinded(__int64 result, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v3)(_QWORD, __int64, _QWORD); // x3

  if ( a2 )
    a2 = *(_QWORD *)(a2 + 40);
  v3 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a3 + 184);
  if ( v3 )
    return v3(*(_QWORD *)(result + 544), a2, *(_QWORD *)(a3 + 704));
  return result;
}