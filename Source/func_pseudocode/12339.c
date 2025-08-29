__ZN6google8protobuf2io16CodedInputStream10ReadStringEPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEi
__int64 __fastcall google::protobuf::io::CodedInputStream::ReadString(
        const void **this,
        std::string *a2,
        std::string::size_type __n)
{
  std::string *v3; // x20
  size_t v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( (__n & 0x80000000) != 0 )
    return 0LL;
  v3 = a2;
  if ( *((_DWORD *)this + 2) - *(_DWORD *)this >= (int)__n )
  {
    v6 = (unsigned int)__n;
    std::string::resize(a2, (unsigned int)__n, 0);
    if ( SHIBYTE(v3->__r_.__value_.__r.__words[2]) < 0 )
      v3 = (std::string *)v3->__r_.__value_.__r.__words[0];
    memcpy(v3, *this, v6);
    *this = (char *)*this + v6;
    return 1LL;
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::io::CodedInputStream::ReadStringFallback(
             (google::protobuf::io::CodedInputStream *)this,
             a2,
             __n);
  }
}