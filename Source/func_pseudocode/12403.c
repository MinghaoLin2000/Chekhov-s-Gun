__ZN6google8protobuf8internal14ArenaStringPtr3SetEPKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERSA_PNS0_5ArenaE
std::string *__fastcall google::protobuf::internal::ArenaStringPtr::Set(
        std::string **a1,
        std::string *a2,
        __int64 a3,
        __int64 a4)
{
  std::string *v5; // x0
  int v6; // w9
  const std::string::value_type *v7; // x1
  std::string::size_type v8; // x2
  std::string *result; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = *a1;
  if ( v5 == a2 )
  {
    result = (std::string *)sub_10011B048(a4, a3);
    *a1 = result;
  }
  else
  {
    v6 = *(char *)(a3 + 23);
    if ( v6 >= 0 )
      v7 = (const std::string::value_type *)a3;
    else
      v7 = *(const std::string::value_type **)a3;
    if ( v6 >= 0 )
      v8 = *(unsigned __int8 *)(a3 + 23);
    else
      v8 = *(_QWORD *)(a3 + 8);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return std::string::assign(v5, v7, v8);
  }
  return result;
}