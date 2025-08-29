_UARPLayer2AssetMetaDataProcessingError
__int64 __fastcall UARPLayer2AssetMetaDataProcessingError(__int64 result, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD, _QWORD); // x3

  v2 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a2 + 104);
  if ( v2 )
    return v2(*(_QWORD *)(result + 544), *(_QWORD *)(a2 + 704));
  return result;
}