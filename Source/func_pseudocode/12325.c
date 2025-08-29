__ZN6google8protobuf8internal10LogMessagelsEm
std::string *__fastcall google::protobuf::internal::LogMessage::operator<<(std::string *a1, __int64 a2)
{
  char __str[128]; // [xsp+8h] [xbp-98h] BYREF

  snprintf(__str, 0x80uLL, "%lu", a2);
  __str[127] = 0;
  std::string::append(a1 + 1, __str);
  return a1;
}