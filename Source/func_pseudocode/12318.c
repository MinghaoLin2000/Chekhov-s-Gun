__ZN6google8protobuf8internal10LogMessagelsERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE
std::string *__fastcall google::protobuf::internal::LogMessage::operator<<(
        std::string *a1,
        const std::string::value_type *a2)
{
  std::string *v3; // x0
  std::string::size_type v4; // x11
  std::string::size_type v5; // x2

  v3 = a1 + 1;
  v4 = *((_QWORD *)a2 + 1);
  if ( a2[23] >= 0 )
  {
    v5 = *((unsigned __int8 *)a2 + 23);
  }
  else
  {
    a2 = *(const std::string::value_type **)a2;
    v5 = v4;
  }
  std::string::append(v3, a2, v5);
  return a1;
}