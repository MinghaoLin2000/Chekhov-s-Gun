_UARPLayer2SerialNumberResponse
__int64 __fastcall UARPLayer2SerialNumberResponse(__int64 result, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD, _QWORD); // x4

  v2 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(result + 192);
  if ( v2 )
    return v2(*(_QWORD *)(result + 544), *(_QWORD *)(a2 + 40));
  return result;
}