_UARPLayer2LastErrorResponse
__int64 __fastcall UARPLayer2LastErrorResponse(__int64 result, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD, _QWORD); // x3

  v2 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(result + 256);
  if ( v2 )
    return v2(*(_QWORD *)(result + 544), *(_QWORD *)(a2 + 40));
  return result;
}