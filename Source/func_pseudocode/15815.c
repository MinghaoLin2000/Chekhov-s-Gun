_UARPLayer2ApplyStagedAssetsResponse
__int64 __fastcall UARPLayer2ApplyStagedAssetsResponse(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD, _QWORD); // x4

  v2 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 144);
  if ( v2 )
    return v2(*(_QWORD *)(a1 + 544), *(_QWORD *)(a2 + 40));
  else
    return 14LL;
}