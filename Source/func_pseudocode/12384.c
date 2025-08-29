__ZN6snappy22UncheckedByteArraySink6AppendEPKcm
char *__fastcall snappy::UncheckedByteArraySink::Append(snappy::UncheckedByteArraySink *this, char *a2, size_t __n)
{
  char *result; // x0

  result = (char *)*((_QWORD *)this + 1);
  if ( result != a2 )
  {
    result = (char *)memcpy(result, a2, __n);
    a2 = (char *)*((_QWORD *)this + 1);
  }
  *((_QWORD *)this + 1) = &a2[__n];
  return result;
}