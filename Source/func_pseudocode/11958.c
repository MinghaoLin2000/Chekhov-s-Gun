__ZN6google8protobuf8internal24InlineGreedyStringParserEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKcPNS1_12ParseContextE
char *__fastcall google::protobuf::internal::InlineGreedyStringParser(
        std::string *this,
        std::string::value_type *a2,
        int a3)
{
  int v5; // w2
  std::string::value_type *v6; // x8
  char *result; // x0
  int v8; // w1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = (unsigned __int8)*a2;
  if ( *a2 < 0 )
  {
    result = google::protobuf::internal::ReadSizeFallback(
               (google::protobuf::internal *)a2,
               (const char *)(unsigned __int8)*a2);
    if ( !result )
      return result;
    v6 = result;
    v5 = v8;
  }
  else
  {
    v6 = a2 + 1;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (char *)sub_1000C8A00(a3, v6, v5, this);
}