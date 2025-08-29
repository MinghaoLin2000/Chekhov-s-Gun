__ZN6google8protobuf10TextFormat6Parser14MergeUsingImplEPNS0_2io19ZeroCopyInputStreamEPNS0_7MessageEPNS2_10ParserImplE
__int64 __fastcall google::protobuf::TextFormat::Parser::MergeUsingImpl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  std::string *v8; // x0
  __int128 v9; // q0
  std::string v10; // [xsp+8h] [xbp-68h] BYREF
  void *__p[2]; // [xsp+20h] [xbp-50h] BYREF
  std::string::size_type v12; // [xsp+30h] [xbp-40h]
  _QWORD v13[3]; // [xsp+38h] [xbp-38h] BYREF

  while ( *(_DWORD *)(a4 + 40) != 1 )
  {
    if ( (sub_1000FC928(a4, a3) & 1) == 0 )
      return 0LL;
  }
  if ( *(_BYTE *)(a4 + 244) )
    return 0LL;
  if ( !*(_BYTE *)(a1 + 24) && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 48LL))(a3) & 1) == 0 )
  {
    memset(v13, 0, sizeof(v13));
    google::protobuf::Message::FindInitializationErrors(a3, (__int64)v13);
    sub_100097A98((__int64 *)&v10, (int)v13, ", ");
    v8 = std::string::insert(&v10, 0LL, "Message missing required fields: ");
    v9 = *(_OWORD *)&v8->__r_.__value_.__l.__data_;
    v12 = v8->__r_.__value_.__r.__words[2];
    *(_OWORD *)__p = v9;
    v8->__r_.__value_.__l.__size_ = 0LL;
    v8->__r_.__value_.__r.__words[2] = 0LL;
    v8->__r_.__value_.__r.__words[0] = 0LL;
    sub_1000F89D4(a4, 0xFFFFFFFFLL, 0LL, __p);
    if ( SHIBYTE(v12) < 0 )
      operator delete(__p[0]);
    if ( SHIBYTE(v10.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v10.__r_.__value_.__l.__data_);
    __p[0] = v13;
    sub_10009857C(__p);
    return 0LL;
  }
  return 1LL;
}