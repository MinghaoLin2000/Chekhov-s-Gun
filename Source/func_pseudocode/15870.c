_UARPLayer2AssetSetBytesAtOffset2
__int64 __fastcall UARPLayer2AssetSetBytesAtOffset2(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 (__fastcall *v6)(_QWORD, __int64, _QWORD); // x6
  __int64 (__fastcall *v8)(_QWORD, _QWORD, __int64, __int64, __int64); // x6

  if ( a2 )
    a2 = *(_QWORD *)(a2 + 40);
  v6 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD))a3[22];
  if ( v6 )
    return v6(*(_QWORD *)(a1 + 544), a2, a3[88]);
  v8 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, __int64))a3[35];
  if ( v8 )
    return v8(*(_QWORD *)(a1 + 544), a3[88], a4, a5, a6);
  else
    return 14LL;
}