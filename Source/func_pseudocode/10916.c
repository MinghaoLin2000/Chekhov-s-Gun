__ZN6google8protobuf17DescriptorBuilder10AddPackageERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS0_7MessageEPKNS0_14FileDescriptorE
void __fastcall google::protobuf::DescriptorBuilder::AddPackage(__int64 a1, std::string *a2, __int64 a3, __int64 a4)
{
  std::string::size_type v8; // x0
  std::string::size_type v9; // x23
  _QWORD *v10; // x24
  _QWORD *String; // x24
  void *v12; // x0
  __int64 v13; // x22
  __int64 v14; // x0
  std::string *v15; // x0
  __int128 v16; // q0
  const std::string::value_type ***v17; // x0
  int v18; // w10
  const std::string::value_type *v19; // x1
  std::string::size_type v20; // x2
  std::string *v21; // x0
  __int128 v22; // q0
  std::string *v23; // x0
  __int128 v24; // q0
  std::string v25; // [xsp+8h] [xbp-D8h] BYREF
  std::string v26; // [xsp+20h] [xbp-C0h] BYREF
  std::string v27; // [xsp+40h] [xbp-A0h] BYREF
  __int128 v28; // [xsp+60h] [xbp-80h] BYREF
  __int128 v29; // [xsp+70h] [xbp-70h] BYREF
  std::string v30; // [xsp+80h] [xbp-60h] BYREF
  __int64 v31[2]; // [xsp+A0h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+E8h] [xbp+8h]

  if ( (unsigned int)google::protobuf::DescriptorPool::Tables::AddSymbol(*(_QWORD **)(a1 + 8), (char *)a2, 8LL, a4) )
  {
    v8 = std::string::rfind(a2, 46, 0xFFFFFFFFFFFFFFFFLL);
    if ( v8 == -1LL )
    {
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      google::protobuf::DescriptorBuilder::ValidateSymbolName(a1, (int)a2, (int)a2, a3);
    }
    else
    {
      v9 = v8;
      v10 = *(_QWORD **)(a1 + 8);
      std::string::basic_string(&v30, a2, 0LL, v8, (std::allocator<char> *)&v27);
      sub_10007A644(v31, &v30);
      String = google::protobuf::DescriptorPool::Tables::AllocateString(v10, v31[0], v31[1]);
      if ( SHIBYTE(v30.__r_.__value_.__r.__words[2]) < 0 )
        operator delete(v30.__r_.__value_.__l.__data_);
      google::protobuf::DescriptorBuilder::AddPackage(a1, String, a3, a4);
      std::string::basic_string(&v30, a2, v9 + 1, 0xFFFFFFFFFFFFFFFFLL, (std::allocator<char> *)&v27);
      google::protobuf::DescriptorBuilder::ValidateSymbolName(a1, (int)&v30, (int)a2, a3);
      if ( SHIBYTE(v30.__r_.__value_.__r.__words[2]) < 0 )
      {
        v12 = (void *)v30.__r_.__value_.__r.__words[0];
LABEL_28:
        operator delete(v12);
      }
    }
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 8);
    sub_10007A644(&v28, a2);
    *(_OWORD *)&v30.__r_.__value_.__l.__data_ = v28;
    v14 = sub_100096644(v13 + 304, &v30);
    if ( v14 )
    {
      v29 = *(_OWORD *)(v14 + 32);
      if ( (_DWORD)v29 == 8 )
        return;
    }
    else
    {
      v29 = 0uLL;
    }
    std::operator+<char>("\"", a2);
    v15 = std::string::append(&v25, "\" is already defined (as something other than a package) in file \"");
    v16 = *(_OWORD *)&v15->__r_.__value_.__l.__data_;
    v26.__r_.__value_.__r.__words[2] = v15->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v26.__r_.__value_.__l.__data_ = v16;
    v15->__r_.__value_.__l.__size_ = 0LL;
    v15->__r_.__value_.__r.__words[2] = 0LL;
    v15->__r_.__value_.__r.__words[0] = 0LL;
    v17 = (const std::string::value_type ***)sub_10007D95C(&v29);
    v18 = *((char *)*v17 + 23);
    if ( v18 >= 0 )
      v19 = (const std::string::value_type *)*v17;
    else
      v19 = **v17;
    if ( v18 >= 0 )
      v20 = *((unsigned __int8 *)*v17 + 23);
    else
      v20 = (std::string::size_type)(*v17)[1];
    v21 = std::string::append(&v26, v19, v20);
    v22 = *(_OWORD *)&v21->__r_.__value_.__l.__data_;
    v27.__r_.__value_.__r.__words[2] = v21->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v27.__r_.__value_.__l.__data_ = v22;
    v21->__r_.__value_.__l.__size_ = 0LL;
    v21->__r_.__value_.__r.__words[2] = 0LL;
    v21->__r_.__value_.__r.__words[0] = 0LL;
    v23 = std::string::append(&v27, "\".");
    v24 = *(_OWORD *)&v23->__r_.__value_.__l.__data_;
    v30.__r_.__value_.__r.__words[2] = v23->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v30.__r_.__value_.__l.__data_ = v24;
    v23->__r_.__value_.__l.__size_ = 0LL;
    v23->__r_.__value_.__r.__words[2] = 0LL;
    v23->__r_.__value_.__r.__words[0] = 0LL;
    google::protobuf::DescriptorBuilder::AddError(a1, (__int64)a2, a3, 0LL, (__int64)&v30);
    if ( SHIBYTE(v30.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v30.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v27.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v27.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v26.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v26.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v25.__r_.__value_.__r.__words[2]) < 0 )
    {
      v12 = (void *)v25.__r_.__value_.__r.__words[0];
      goto LABEL_28;
    }
  }
}