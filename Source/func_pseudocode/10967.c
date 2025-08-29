__ZNK6google8protobuf14DescriptorPool23CrossLinkOnDemandHelperENS0_11StringPieceEb
unsigned __int64 __fastcall google::protobuf::DescriptorPool::CrossLinkOnDemandHelper(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  std::string *p_str; // x8
  __int64 v5; // x20
  unsigned __int64 v6; // x19
  __int64 v8[2]; // [xsp+8h] [xbp-68h] BYREF
  std::string v9; // [xsp+18h] [xbp-58h] BYREF
  std::string __str; // [xsp+30h] [xbp-40h] BYREF
  _QWORD v11[2]; // [xsp+48h] [xbp-28h] BYREF
  char v12; // [xsp+5Fh] [xbp-11h] BYREF

  v11[0] = a2;
  v11[1] = a3;
  sub_1000967C4(&__str, v11);
  if ( SHIBYTE(__str.__r_.__value_.__r.__words[2]) < 0 )
  {
    if ( !__str.__r_.__value_.__l.__size_ )
      goto LABEL_10;
    p_str = (std::string *)__str.__r_.__value_.__r.__words[0];
  }
  else
  {
    if ( !*((_BYTE *)&__str.__r_.__value_.__s + 23) )
      goto LABEL_10;
    p_str = &__str;
  }
  if ( p_str->__r_.__value_.__s.__data_[0] == 46 )
  {
    std::string::basic_string(&v9, &__str, 1uLL, 0xFFFFFFFFFFFFFFFFLL, (std::allocator<char> *)&v12);
    if ( SHIBYTE(__str.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(__str.__r_.__value_.__l.__data_);
    __str = v9;
  }
LABEL_10:
  v5 = *(_QWORD *)(a1 + 32);
  sub_10007A644(v8, &__str);
  v6 = google::protobuf::DescriptorPool::Tables::FindByNameHelper(v5, a1, v8[0], v8[1]);
  if ( SHIBYTE(__str.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(__str.__r_.__value_.__l.__data_);
  return v6;
}