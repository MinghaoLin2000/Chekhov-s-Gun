__ZN6google8protobuf8internal10LogMessagelsEi
std::string *__fastcall google::protobuf::internal::LogMessage::operator<<(std::string *a1, int a2)
{
  char __str[128]; // [xsp+8h] [xbp-98h] BYREF

  snprintf(__str, 0x80uLL, "%d", a2);
  __str[127] = 0;
  std::string::append(a1 + 1, __str);
  return a1;
}