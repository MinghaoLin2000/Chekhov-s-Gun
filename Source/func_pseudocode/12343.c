__ZN6google8protobuf2io16CodedInputStream20ReadVarint64FallbackEv
__int64 __fastcall google::protobuf::io::CodedInputStream::ReadVarint64Fallback(
        google::protobuf::io::CodedInputStream *this)
{
  unsigned __int64 v2; // x0
  unsigned __int64 v3; // x8
  __int64 v5; // x1
  char v6; // w9
  __int64 result; // x0
  unsigned __int64 v8; // [xsp+8h] [xbp-18h] BYREF

  v2 = *(_QWORD *)this;
  v3 = *((_QWORD *)this + 1);
  if ( (int)v3 - (int)v2 <= 9 && (v3 <= v2 || *(char *)(v3 - 1) < 0) )
  {
    v8 = 0LL;
    google::protobuf::io::CodedInputStream::ReadVarint64Slow(this, &v8);
    return v8;
  }
  else
  {
    v8 = 0LL;
    v6 = sub_100118C50();
    result = 0LL;
    if ( (v6 & 1) != 0 )
    {
      *(_QWORD *)this = v5;
      return v8;
    }
  }
  return result;
}