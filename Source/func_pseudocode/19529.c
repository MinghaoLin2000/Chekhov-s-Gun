-[IFDBundle hasCard:]
// local variable allocation has failed, the output may be wrong!
bool __cdecl -[IFDBundle hasCard:](IFDBundle *self, SEL a2, unsigned int a3)
{
  __int64 v3; // x0

  v3 = ((__int64 (__fastcall *)(_QWORD, SEL))self->_ifdMethod.IFDHICCPresence)(*(_QWORD *)&a3, a2);
  return !v3 || v3 == 615;
}