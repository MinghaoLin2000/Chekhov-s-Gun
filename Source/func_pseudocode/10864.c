__ZNK6google8protobuf14DescriptorPool22IsSubSymbolOfBuiltTypeENS0_11StringPieceE
__int64 __fastcall google::protobuf::DescriptorPool::IsSubSymbolOfBuiltType(__int64 a1, __int64 a2, __int64 a3)
{
  std::string::size_type v4; // x0
  std::string::size_type v5; // x3
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 IsSubSymbolOfBuiltType; // x19
  __int128 v11; // [xsp+0h] [xbp-70h] BYREF
  std::string v12; // [xsp+10h] [xbp-60h] BYREF
  std::string __str; // [xsp+30h] [xbp-40h] BYREF
  __int64 v14; // [xsp+48h] [xbp-28h] BYREF
  __int64 v15; // [xsp+50h] [xbp-20h]
  char v16; // [xsp+5Fh] [xbp-11h] BYREF

  v14 = a2;
  v15 = a3;
  sub_1000967C4(&__str, &v14);
  v4 = std::string::rfind(&__str, 46, 0xFFFFFFFFFFFFFFFFLL);
  if ( v4 == -1LL )
  {
LABEL_8:
    v8 = *(_QWORD *)(a1 + 24);
    if ( v8 )
      IsSubSymbolOfBuiltType = google::protobuf::DescriptorPool::IsSubSymbolOfBuiltType(v8, v14, v15);
    else
      IsSubSymbolOfBuiltType = 0LL;
  }
  else
  {
    v5 = v4;
    while ( 1 )
    {
      std::string::basic_string(&v12, &__str, 0LL, v5, (std::allocator<char> *)&v16);
      if ( SHIBYTE(__str.__r_.__value_.__r.__words[2]) < 0 )
        operator delete(__str.__r_.__value_.__l.__data_);
      __str = v12;
      v6 = *(_QWORD *)(a1 + 32);
      sub_10007A644(&v11, &__str);
      *(_OWORD *)&v12.__r_.__value_.__l.__data_ = v11;
      v7 = sub_100096644(v6 + 304, &v12);
      if ( v7 )
      {
        if ( (*(_DWORD *)(v7 + 32) | 8) != 8 )
          break;
      }
      v5 = std::string::rfind(&__str, 46, 0xFFFFFFFFFFFFFFFFLL);
      if ( v5 == -1LL )
        goto LABEL_8;
    }
    IsSubSymbolOfBuiltType = 1LL;
  }
  if ( SHIBYTE(__str.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(__str.__r_.__value_.__l.__data_);
  return IsSubSymbolOfBuiltType;
}