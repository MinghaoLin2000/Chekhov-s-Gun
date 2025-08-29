_UARPLayer2AssetGetBytesAtOffset2
__int64 __fastcall UARPLayer2AssetGetBytesAtOffset2(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 (__fastcall *v7)(_QWORD, __int64, _QWORD); // x7
  __int64 (__fastcall *v9)(_QWORD, _QWORD, __int64, __int64, __int64, __int64); // x7

  if ( a2 )
    a2 = *(_QWORD *)(a2 + 40);
  v7 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD))a3[21];
  if ( v7 )
    return v7(*(_QWORD *)(a1 + 544), a2, a3[88]);
  v9 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, __int64, __int64))a3[34];
  if ( v9 )
    return v9(*(_QWORD *)(a1 + 544), a3[88], a4, a5, a6, a7);
  else
    return 14LL;
}