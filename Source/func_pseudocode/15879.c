_UARPLayer2AssetAllHeadersAndMetaDataComplete
__int64 __fastcall UARPLayer2AssetAllHeadersAndMetaDataComplete(__int64 result, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v3)(_QWORD, _QWORD, _QWORD); // x3

  v3 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a3 + 256);
  if ( v3 )
    return v3(*(_QWORD *)(result + 544), *(_QWORD *)(a2 + 40), *(_QWORD *)(a3 + 704));
  return result;
}