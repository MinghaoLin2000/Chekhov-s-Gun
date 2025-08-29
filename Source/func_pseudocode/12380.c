__ZN6snappy15ByteArraySource4PeekEPm
__int64 __fastcall snappy::ByteArraySource::Peek(snappy::ByteArraySource *this, unsigned __int64 *a2)
{
  __int64 result; // x0
  char *v3; // t2

  v3 = (char *)this + 8;
  result = *((_QWORD *)this + 1);
  *a2 = *((_QWORD *)v3 + 1);
  return result;
}