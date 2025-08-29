__ZN6google8protobuf9StrAppendEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS0_7strings8AlphaNumE
std::string *__fastcall google::protobuf::StrAppend(std::string *a1, __int64 a2)
{
  return std::string::append(a1, *(const std::string::value_type **)a2, *(_QWORD *)(a2 + 8));
}