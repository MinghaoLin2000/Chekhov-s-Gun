__ZN9serialize10Serializer4syncEPKcRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE
void __fastcall serialize::Serializer::sync(unsigned __int8 *a1, const char *a2, std::string *a3)
{
  std::string *v3; // x19
  int v4; // w8
  void *v5; // x0
  const char *string; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = a3;
  v4 = *a1;
  v5 = (void *)*((_QWORD *)a1 + 1);
  if ( v4 )
  {
    if ( (a3->__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
      a3 = (std::string *)a3->__r_.__value_.__r.__words[0];
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    xpc_dictionary_set_string(v5, a2, (const char *)a3);
  }
  else
  {
    string = xpc_dictionary_get_string(v5, a2);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    std::string::assign(v3, string);
  }
}