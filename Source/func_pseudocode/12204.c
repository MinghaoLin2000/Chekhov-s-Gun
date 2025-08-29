__ZN6google8protobuf2io9Tokenizer12IsIdentifierERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE
bool __fastcall google::protobuf::io::Tokenizer::IsIdentifier(__int64 a1)
{
  __int64 v1; // x8
  int v3; // w8
  _BOOL8 v5; // x19
  std::string::size_type size; // x9
  std::string *p_p; // x10
  int v8; // w11
  __int64 v11; // x12
  std::string::size_type v12; // x11
  int v13; // w13
  bool v14; // cf
  std::string __p; // [xsp+0h] [xbp-40h] BYREF
  char v18; // [xsp+1Fh] [xbp-21h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 23);
  if ( (v1 & 0x80u) != 0LL )
    v1 = *(_QWORD *)(a1 + 8);
  if ( !v1 )
    return 0LL;
  v3 = *(unsigned __int8 *)std::string::at((const std::string *)a1, 0LL);
  if ( v3 != 95 && (v3 & 0xFFFFFFDF) - 65 > 0x19 )
    return 0LL;
  v5 = 1LL;
  std::string::basic_string(&__p, (const std::string *)a1, 1uLL, 0xFFFFFFFFFFFFFFFFLL, (std::allocator<char> *)&v18);
  size = HIBYTE(__p.__r_.__value_.__r.__words[2]);
  if ( (__p.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
    size = __p.__r_.__value_.__l.__size_;
  if ( !size )
    goto LABEL_31;
  p_p = (std::string *)__p.__r_.__value_.__r.__words[0];
  if ( (__p.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
    p_p = &__p;
  v8 = (unsigned __int8)p_p->__r_.__value_.__s.__data_[0];
  if ( v8 == 95 || (unsigned int)(v8 - 48) < 0xA || (v8 & 0xFFFFFFDF) - 65 <= 0x19 )
  {
    v11 = 1LL;
    do
    {
      v12 = v11;
      if ( size == v11 )
        break;
      v13 = (unsigned __int8)p_p->__r_.__value_.__s.__data_[v11++];
      v14 = v13 != 95 && (unsigned int)(v13 - 48) >= 0xA;
    }
    while ( !v14 || (v13 & 0xFFFFFFDF) - 65 < 0x1A );
    v5 = size <= v12;
LABEL_31:
    if ( SHIBYTE(__p.__r_.__value_.__r.__words[2]) < 0 )
      goto LABEL_36;
    return v5;
  }
  v5 = 0LL;
  if ( SHIBYTE(__p.__r_.__value_.__r.__words[2]) < 0 )
LABEL_36:
    operator delete(__p.__r_.__value_.__l.__data_);
  return v5;
}