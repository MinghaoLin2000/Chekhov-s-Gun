__ZN6google8protobuf8internal18EpsCopyInputStream12SkipFallbackEPKci
google::protobuf::internal::EpsCopyInputStream *__fastcall google::protobuf::internal::EpsCopyInputStream::SkipFallback(
        google::protobuf::internal::EpsCopyInputStream *this,
        const char *a2,
        int a3)
{
  int v5; // w21
  google::protobuf::internal::EpsCopyInputStream *result; // x0

  v5 = *((_DWORD *)this + 2) - (_DWORD)a2 + 16;
  while ( *((_QWORD *)this + 2) && *((int *)this + 7) >= 17 )
  {
    result = google::protobuf::internal::EpsCopyInputStream::Next(this);
    if ( !result )
      return result;
    a3 -= v5;
    v5 = *((_DWORD *)this + 2) - (_DWORD)result;
    if ( a3 <= v5 )
      return (google::protobuf::internal::EpsCopyInputStream *)((char *)result + a3 + 16);
  }
  return 0LL;
}