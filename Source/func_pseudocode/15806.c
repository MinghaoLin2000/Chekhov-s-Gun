_UARPLayer2ReturnTransmitMsgBuffer
void __fastcall UARPLayer2ReturnTransmitMsgBuffer(__int64 a1, int a2, void *a3)
{
  void (__fastcall *v3)(_QWORD, void *); // x3

  v3 = *(void (__fastcall **)(_QWORD, void *))(a1 + 56);
  if ( v3 )
    v3(*(_QWORD *)(a1 + 544), a3);
  else
    uarpFree(a3);
}