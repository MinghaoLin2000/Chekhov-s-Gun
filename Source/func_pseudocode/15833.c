_UARPLayer2RescindAllAssetsAck
__int64 __fastcall UARPLayer2RescindAllAssetsAck(__int64 result, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v3)(_QWORD, _QWORD, __int64); // x3

  v3 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(result + 288);
  if ( v3 )
  {
    if ( a3 )
      a3 = *(_QWORD *)(a3 + 704);
    return v3(*(_QWORD *)(result + 544), *(_QWORD *)(a2 + 40), a3);
  }
  return result;
}