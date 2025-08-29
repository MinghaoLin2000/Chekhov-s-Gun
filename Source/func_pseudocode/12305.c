__ZN6google8protobuf13StringAppendFEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcz
__int64 google::protobuf::StringAppendF(std::string *a1, char *a2, ...)
{
  va_list va; // [xsp+20h] [xbp+10h] BYREF

  va_start(va, a2);
  return google::protobuf::StringAppendV(a1, a2, va);
}