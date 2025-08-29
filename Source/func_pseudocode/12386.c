__ZN6snappy22UncheckedByteArraySink22AppendAndTakeOwnershipEPcmPFvPvPKcmES2_
char *__fastcall snappy::UncheckedByteArraySink::AppendAndTakeOwnership(
        snappy::UncheckedByteArraySink *this,
        char *__src,
        size_t __n,
        __int64 (__fastcall *a4)(void *, char *, size_t),
        void *a5)
{
  char *v6; // x21
  char *result; // x0

  v6 = __src;
  result = (char *)*((_QWORD *)this + 1);
  if ( result != __src )
  {
    memcpy(result, __src, __n);
    result = (char *)a4(a5, v6, __n);
    v6 = (char *)*((_QWORD *)this + 1);
  }
  *((_QWORD *)this + 1) = &v6[__n];
  return result;
}