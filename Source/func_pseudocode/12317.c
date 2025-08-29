__ZN6google8protobuf8internal10LogMessagelsEPKc
std::string *__fastcall google::protobuf::internal::LogMessage::operator<<(
        std::string *a1,
        const std::string::value_type *a2)
{
  std::string::append(a1 + 1, a2);
  return a1;
}