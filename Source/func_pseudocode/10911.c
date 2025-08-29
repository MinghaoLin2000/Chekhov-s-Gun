__ZN6google8protobuf17DescriptorBuilder25LookupSymbolNoPlaceholderERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_NS1_11ResolveModeEb
unsigned __int64 __fastcall google::protobuf::DescriptorBuilder::LookupSymbolNoPlaceholder(
        __int64 a1,
        std::string *__str,
        __int64 a3,
        int a4,
        int a5)
{
  std::string *v10; // x8
  __int64 Symbol; // x24
  unsigned int v12; // w27
  std::string::size_type v13; // x0
  std::string::size_type v14; // x0
  std::string::size_type v15; // x26
  std::string *v16; // x1
  std::string::size_type v17; // x2
  __int64 v18; // x0
  std::string::size_type size; // x2
  std::string::size_type v20; // x8
  __int64 v21; // x0
  std::string __stra; // [xsp+10h] [xbp-90h] BYREF
  std::string v24; // [xsp+30h] [xbp-70h] BYREF
  char v25; // [xsp+4Fh] [xbp-51h] BYREF

  *(_QWORD *)(a1 + 144) = 0LL;
  if ( *(char *)(a1 + 199) < 0 )
  {
    **(_BYTE **)(a1 + 176) = 0;
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  else
  {
    *(_BYTE *)(a1 + 176) = 0;
    *(_BYTE *)(a1 + 199) = 0;
  }
  if ( (SHIBYTE(__str->__r_.__value_.__r.__words[2]) & 0x80000000) == 0 )
  {
    v10 = __str;
    if ( !*((_BYTE *)&__str->__r_.__value_.__s + 23) )
      goto LABEL_13;
LABEL_9:
    if ( v10->__r_.__value_.__s.__data_[0] == 46 )
    {
      std::string::basic_string(&v24, __str, 1uLL, 0xFFFFFFFFFFFFFFFFLL, (std::allocator<char> *)&__stra);
      Symbol = google::protobuf::DescriptorBuilder::FindSymbol(a1, &v24, a5);
      if ( SHIBYTE(v24.__r_.__value_.__r.__words[2]) < 0 )
        operator delete(v24.__r_.__value_.__l.__data_);
      v12 = Symbol;
      return Symbol & 0xFFFFFFFF00000000LL | v12;
    }
    goto LABEL_13;
  }
  if ( __str->__r_.__value_.__l.__size_ )
  {
    v10 = (std::string *)__str->__r_.__value_.__r.__words[0];
    goto LABEL_9;
  }
LABEL_13:
  v13 = std::string::find(__str, 46, 0LL);
  memset(&v24, 0, sizeof(v24));
  if ( v13 == -1LL )
  {
    std::string::operator=(&v24, __str);
  }
  else
  {
    std::string::basic_string(&__stra, __str, 0LL, v13, (std::allocator<char> *)&v25);
    if ( SHIBYTE(v24.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v24.__r_.__value_.__l.__data_);
    v24 = __stra;
  }
  if ( *(char *)(a3 + 23) < 0 )
    sub_10007A474(&__stra, *(void **)a3);
  else
    __stra = *(std::string *)a3;
  while ( 1 )
  {
    v14 = std::string::rfind(&__stra, 46, 0xFFFFFFFFFFFFFFFFLL);
    if ( v14 == -1LL )
    {
      Symbol = google::protobuf::DescriptorBuilder::FindSymbol(a1, __str, a5);
      goto LABEL_48;
    }
    std::string::erase(&__stra, v14, 0xFFFFFFFFFFFFFFFFLL);
    v15 = (__stra.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL
        ? HIBYTE(__stra.__r_.__value_.__r.__words[2])
        : __stra.__r_.__value_.__l.__size_;
    std::string::append(&__stra, 1uLL, 46);
    v16 = (v24.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL
        ? &v24
        : (std::string *)v24.__r_.__value_.__r.__words[0];
    v17 = (v24.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL
        ? HIBYTE(v24.__r_.__value_.__r.__words[2])
        : v24.__r_.__value_.__l.__size_;
    std::string::append(&__stra, (const std::string::value_type *)v16, v17);
    v18 = google::protobuf::DescriptorBuilder::FindSymbol(a1, &__stra, a5);
    Symbol = v18;
    if ( (_DWORD)v18 )
      break;
LABEL_44:
    std::string::erase(&__stra, v15, 0xFFFFFFFFFFFFFFFFLL);
  }
  if ( (v24.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
    size = HIBYTE(v24.__r_.__value_.__r.__words[2]);
  else
    size = v24.__r_.__value_.__l.__size_;
  v20 = HIBYTE(__str->__r_.__value_.__r.__words[2]);
  if ( (v20 & 0x80u) != 0LL )
    v20 = __str->__r_.__value_.__l.__size_;
  if ( v20 <= size )
  {
    if ( a4 != 1 || (_DWORD)v18 == 1 )
      goto LABEL_48;
    v12 = v18;
    if ( (_DWORD)v18 == 4 )
      goto LABEL_49;
    goto LABEL_44;
  }
  if ( (unsigned int)v18 > 8 || ((1 << v18) & 0x152) == 0 )
    goto LABEL_44;
  std::string::append(&__stra, __str, size, v20 - size);
  v21 = google::protobuf::DescriptorBuilder::FindSymbol(a1, &__stra, a5);
  Symbol = v21;
  if ( !(_DWORD)v21 )
  {
    std::string::operator=((std::string *)(a1 + 176), &__stra);
    v12 = 0;
    goto LABEL_49;
  }
LABEL_48:
  v12 = Symbol;
LABEL_49:
  if ( SHIBYTE(__stra.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(__stra.__r_.__value_.__l.__data_);
  if ( SHIBYTE(v24.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v24.__r_.__value_.__l.__data_);
  return Symbol & 0xFFFFFFFF00000000LL | v12;
}