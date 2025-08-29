__ZN6google8protobuf8internal10LogMessagelsERKNS0_11StringPieceE
std::string *__fastcall google::protobuf::internal::LogMessage::operator<<(std::string *a1, __int64 a2)
{
  void **v3; // x1
  std::string::size_type v4; // x2
  void *__p[2]; // [xsp+8h] [xbp-28h] BYREF
  unsigned __int8 v7; // [xsp+1Fh] [xbp-11h]

  sub_1000967C4(__p, a2);
  if ( (v7 & 0x80u) == 0 )
    v3 = __p;
  else
    v3 = (void **)__p[0];
  if ( (v7 & 0x80u) == 0 )
    v4 = v7;
  else
    v4 = (std::string::size_type)__p[1];
  std::string::append(a1 + 1, (const std::string::value_type *)v3, v4);
  if ( (char)v7 < 0 )
    operator delete(__p[0]);
  return a1;
}