__ZN6google8protobuf2io19EpsCopyOutputStream19FlushAndResetBufferEPh
__int64 __fastcall google::protobuf::io::EpsCopyOutputStream::FlushAndResetBuffer(
        google::protobuf::io::EpsCopyOutputStream *this,
        unsigned __int8 *a2)
{
  int v3; // w0
  __int64 result; // x0
  char *v5; // x9
  __int64 v6; // x11

  if ( *((_BYTE *)this + 56) )
    return (__int64)this + 16;
  v3 = google::protobuf::io::EpsCopyOutputStream::Flush(this, a2);
  if ( *((_BYTE *)this + 56) )
    return (__int64)this + 16;
  v5 = (char *)(*((_QWORD *)this + 1) + (unsigned int)v3 - 16LL);
  if ( v3 > 16 )
  {
    v6 = 0LL;
  }
  else
  {
    v5 = (char *)this + v3 + 16;
    v6 = *((_QWORD *)this + 1);
  }
  if ( v3 <= 16 )
    result = (__int64)this + 16;
  else
    result = *((_QWORD *)this + 1);
  *(_QWORD *)this = v5;
  *((_QWORD *)this + 1) = v6;
  return result;
}