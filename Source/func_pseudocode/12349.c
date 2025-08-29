__ZN6google8protobuf2io19EpsCopyOutputStream4TrimEPh
unsigned __int8 *__fastcall google::protobuf::io::EpsCopyOutputStream::Trim(
        google::protobuf::io::EpsCopyOutputStream *this,
        unsigned __int8 *a2)
{
  unsigned __int64 v3; // x0

  if ( !*((_BYTE *)this + 56) )
  {
    v3 = google::protobuf::io::EpsCopyOutputStream::Flush(this, a2);
    if ( (_DWORD)v3 )
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6), v3);
    a2 = (unsigned __int8 *)this + 16;
    *(_QWORD *)this = (char *)this + 16;
    *((_QWORD *)this + 1) = (char *)this + 16;
  }
  return a2;
}