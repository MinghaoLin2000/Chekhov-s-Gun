__ZN6google8protobuf17DescriptorBuilder14BuildEnumValueERKNS0_24EnumValueDescriptorProtoEPKNS0_14EnumDescriptorEPNS0_19EnumValueDescriptorE
__int64 __fastcall google::protobuf::DescriptorBuilder::BuildEnumValue(
        __int64 a1,
        __int64 a2,
        const std::string::value_type **a3,
        _QWORD *a4)
{
  _QWORD *v8; // x23
  google::protobuf::DescriptorPool::Tables **v9; // x24
  std::string *EmptyString; // x0
  std::string *v11; // x23
  const std::string::value_type *v12; // x8
  __int64 v13; // x8
  __int64 v14; // x9
  std::string::size_type v15; // x24
  __int64 v16; // x8
  const std::string::value_type *v17; // x1
  int v18; // w10
  const std::string::value_type *v19; // x1
  std::string::size_type v20; // x2
  __int64 v21; // x23
  int v22; // w23
  const std::string::value_type *v23; // x8
  std::string::size_type size; // x8
  std::string *v25; // x0
  std::string::size_type v26; // x25
  char v27; // w26
  __int64 v28; // x23
  std::string *v29; // x0
  __int128 v30; // q0
  std::string *p_p; // x1
  std::string::size_type v32; // x2
  std::string *v33; // x0
  __int128 v34; // q0
  std::string *v35; // x0
  __int128 v36; // q0
  int v37; // w10
  const std::string::value_type *v38; // x1
  std::string::size_type v39; // x2
  std::string *v40; // x0
  __int128 v41; // q0
  std::string *v42; // x0
  __int128 v43; // q0
  __int64 v44; // x8
  int v45; // w10
  std::string v47; // [xsp+8h] [xbp-128h] BYREF
  std::string v48; // [xsp+20h] [xbp-110h] BYREF
  std::string v49; // [xsp+40h] [xbp-F0h] BYREF
  std::string v50; // [xsp+60h] [xbp-D0h] BYREF
  std::string v51; // [xsp+80h] [xbp-B0h] BYREF
  std::string __p; // [xsp+98h] [xbp-98h] BYREF
  __int64 v53[2]; // [xsp+B0h] [xbp-80h] BYREF
  std::string v54; // [xsp+C0h] [xbp-70h] BYREF

  v9 = (google::protobuf::DescriptorPool::Tables **)(a1 + 8);
  v8 = *(_QWORD **)(a1 + 8);
  sub_10007A644(v53, *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFELL);
  *a4 = google::protobuf::DescriptorPool::Tables::AllocateString(v8, v53[0], v53[1]);
  *((_DWORD *)a4 + 4) = *(_DWORD *)(a2 + 40);
  a4[3] = a3;
  EmptyString = (std::string *)google::protobuf::DescriptorPool::Tables::AllocateEmptyString(*v9);
  v11 = EmptyString;
  v12 = a3[1];
  if ( v12[23] < 0 )
    v13 = *((_QWORD *)v12 + 1);
  else
    v13 = *((unsigned __int8 *)v12 + 23);
  if ( (*a3)[23] < 0 )
    v14 = *((_QWORD *)*a3 + 1);
  else
    v14 = *((unsigned __int8 *)*a3 + 23);
  v15 = v13 - v14;
  if ( *(char *)(*a4 + 23LL) < 0 )
    v16 = *(_QWORD *)(*a4 + 8LL);
  else
    v16 = *(unsigned __int8 *)(*a4 + 23LL);
  std::string::reserve(EmptyString, v16 + v15);
  v17 = a3[1];
  if ( v17[23] < 0 )
    v17 = *(const std::string::value_type **)v17;
  std::string::append(v11, v17, v15);
  v18 = *(char *)(*a4 + 23LL);
  if ( v18 >= 0 )
    v19 = (const std::string::value_type *)*a4;
  else
    v19 = *(const std::string::value_type **)*a4;
  if ( v18 >= 0 )
    v20 = *(unsigned __int8 *)(*a4 + 23LL);
  else
    v20 = *(_QWORD *)(*a4 + 8LL);
  std::string::append(v11, v19, v20);
  a4[1] = v11;
  google::protobuf::DescriptorBuilder::ValidateSymbolName(
    a1,
    (unsigned __int8 *)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFELL),
    (__int64)v11,
    a2);
  a4[4] = 0LL;
  if ( (*(_BYTE *)(a2 + 16) & 2) != 0 )
  {
    v21 = *(_QWORD *)(a2 + 32);
    sub_10007A754((int)&__p, "google.protobuf.EnumValueOptions");
    sub_10008ED64(a1, v21, a4, 3LL, &__p);
    if ( SHIBYTE(__p.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(__p.__r_.__value_.__l.__data_);
  }
  v22 = google::protobuf::DescriptorBuilder::AddSymbol(
          a1,
          (std::string *)a4[1],
          (__int64)a3[3],
          (char *)*a4,
          a2,
          5LL,
          (__int64)a4);
  if ( (((unsigned int)google::protobuf::FileDescriptorTables::AddAliasUnderParent(
                         *(float **)(a1 + 88),
                         (__int64)a3,
                         (char *)*a4,
                         5LL,
                         (__int64)a4) ^ 1 | v22) & 1) == 0 )
  {
    memset(&__p, 0, sizeof(__p));
    v23 = a3[3];
    if ( !v23 )
      v23 = *(const std::string::value_type **)(a1 + 80);
    std::string::operator=(&__p, *((const std::string **)v23 + 1));
    size = HIBYTE(__p.__r_.__value_.__r.__words[2]);
    if ( (__p.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
      size = __p.__r_.__value_.__l.__size_;
    if ( size )
    {
      std::operator+<char>("\"", &__p);
      v25 = std::string::append(&v51, "\"");
      v26 = v25->__r_.__value_.__r.__words[0];
      v54.__r_.__value_.__r.__words[0] = v25->__r_.__value_.__l.__size_;
      *(std::string::size_type *)((char *)v54.__r_.__value_.__r.__words + 7) = *(std::string::size_type *)((char *)&v25->__r_.__value_.__r.__words[1] + 7);
      v27 = HIBYTE(v25->__r_.__value_.__r.__words[2]);
      v25->__r_.__value_.__l.__size_ = 0LL;
      v25->__r_.__value_.__r.__words[2] = 0LL;
      v25->__r_.__value_.__r.__words[0] = 0LL;
      if ( SHIBYTE(__p.__r_.__value_.__r.__words[2]) < 0 )
        operator delete(__p.__r_.__value_.__l.__data_);
      __p.__r_.__value_.__r.__words[0] = v26;
      __p.__r_.__value_.__l.__size_ = v54.__r_.__value_.__r.__words[0];
      *(std::string::size_type *)((char *)&__p.__r_.__value_.__r.__words[1] + 7) = *(std::string::size_type *)((char *)v54.__r_.__value_.__r.__words + 7);
      *((_BYTE *)&__p.__r_.__value_.__s + 23) = v27;
      if ( SHIBYTE(v51.__r_.__value_.__r.__words[2]) < 0 )
        operator delete(v51.__r_.__value_.__l.__data_);
    }
    else
    {
      std::string::assign(&__p, "the global scope");
    }
    v28 = a4[1];
    std::operator+<char>(
      "Note that enum values use C++ scoping rules, meaning that enum values are siblings of their type, not children of "
      "it.  Therefore, \"",
      *a4);
    v29 = std::string::append(&v47, "\" must be unique within ");
    v30 = *(_OWORD *)&v29->__r_.__value_.__l.__data_;
    v48.__r_.__value_.__r.__words[2] = v29->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v48.__r_.__value_.__l.__data_ = v30;
    v29->__r_.__value_.__l.__size_ = 0LL;
    v29->__r_.__value_.__r.__words[2] = 0LL;
    v29->__r_.__value_.__r.__words[0] = 0LL;
    if ( (__p.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
      p_p = &__p;
    else
      p_p = (std::string *)__p.__r_.__value_.__r.__words[0];
    if ( (__p.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
      v32 = HIBYTE(__p.__r_.__value_.__r.__words[2]);
    else
      v32 = __p.__r_.__value_.__l.__size_;
    v33 = std::string::append(&v48, (const std::string::value_type *)p_p, v32);
    v34 = *(_OWORD *)&v33->__r_.__value_.__l.__data_;
    v49.__r_.__value_.__r.__words[2] = v33->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v49.__r_.__value_.__l.__data_ = v34;
    v33->__r_.__value_.__l.__size_ = 0LL;
    v33->__r_.__value_.__r.__words[2] = 0LL;
    v33->__r_.__value_.__r.__words[0] = 0LL;
    v35 = std::string::append(&v49, ", not just within \"");
    v36 = *(_OWORD *)&v35->__r_.__value_.__l.__data_;
    v50.__r_.__value_.__r.__words[2] = v35->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v50.__r_.__value_.__l.__data_ = v36;
    v35->__r_.__value_.__l.__size_ = 0LL;
    v35->__r_.__value_.__r.__words[2] = 0LL;
    v35->__r_.__value_.__r.__words[0] = 0LL;
    v37 = (*a3)[23];
    if ( v37 >= 0 )
      v38 = *a3;
    else
      v38 = *(const std::string::value_type **)*a3;
    if ( v37 >= 0 )
      v39 = *((unsigned __int8 *)*a3 + 23);
    else
      v39 = *((_QWORD *)*a3 + 1);
    v40 = std::string::append(&v50, v38, v39);
    v41 = *(_OWORD *)&v40->__r_.__value_.__l.__data_;
    v54.__r_.__value_.__r.__words[2] = v40->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v54.__r_.__value_.__l.__data_ = v41;
    v40->__r_.__value_.__l.__size_ = 0LL;
    v40->__r_.__value_.__r.__words[2] = 0LL;
    v40->__r_.__value_.__r.__words[0] = 0LL;
    v42 = std::string::append(&v54, "\".");
    v43 = *(_OWORD *)&v42->__r_.__value_.__l.__data_;
    v51.__r_.__value_.__r.__words[2] = v42->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v51.__r_.__value_.__l.__data_ = v43;
    v42->__r_.__value_.__l.__size_ = 0LL;
    v42->__r_.__value_.__r.__words[2] = 0LL;
    v42->__r_.__value_.__r.__words[0] = 0LL;
    google::protobuf::DescriptorBuilder::AddError(a1, v28, a2, 0LL, (__int64)&v51);
    if ( SHIBYTE(v51.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v51.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v54.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v54.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v50.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v50.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v49.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v49.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v48.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v48.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v47.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v47.__r_.__value_.__l.__data_);
    if ( SHIBYTE(__p.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(__p.__r_.__value_.__l.__data_);
  }
  v44 = *(_QWORD *)(a1 + 88);
  v51.__r_.__value_.__r.__words[0] = (std::string::size_type)a4;
  v45 = *((_DWORD *)a4 + 4);
  __p.__r_.__value_.__r.__words[0] = a4[3];
  LODWORD(__p.__r_.__value_.__r.__words[1]) = v45;
  return sub_10007C800(v44 + 192, &__p, &v51);
}