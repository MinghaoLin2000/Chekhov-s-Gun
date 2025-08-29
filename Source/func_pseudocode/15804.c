_UARPLayer2ReturnBuffer
void __fastcall UARPLayer2ReturnBuffer(__int64 a1, void *a2)
{
  void (__fastcall *v2)(_QWORD, void *); // x2

  v2 = *(void (__fastcall **)(_QWORD, void *))(a1 + 56);
  if ( v2 )
    v2(*(_QWORD *)(a1 + 544), a2);
  else
    uarpFree(a2);
}