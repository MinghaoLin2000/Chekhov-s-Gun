__ZN6snappy22UncheckedByteArraySink23GetAppendBufferVariableEmmPcmPm
__int64 __fastcall snappy::UncheckedByteArraySink::GetAppendBufferVariable(
        snappy::UncheckedByteArraySink *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  *a6 = a3;
  return *((_QWORD *)this + 1);
}