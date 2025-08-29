__ZN6google8protobuf17DescriptorBuilder9AddSymbolERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKvSA_RKNS0_7MessageENS0_6SymbolE
__int64 __fastcall google::protobuf::DescriptorBuilder::AddSymbol(
        __int64 a1,
        std::string *a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // x25
  __int64 v15; // x22
  __int64 v16; // x0
  __int128 v17; // q0
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  google::protobuf::internal::LogMessage *v21; // x0
  __int64 v22; // x0
  __int64 v23; // x22
  std::string *v24; // x0
  __int128 v25; // q0
  __int128 *v26; // x8
  __int128 v27; // q0
  std::string::size_type v28; // x0
  std::string::size_type v29; // x22
  std::string *v30; // x0
  __int128 v31; // q0
  std::string *v32; // x0
  __int128 v33; // q0
  std::string *v34; // x1
  std::string::size_type size; // x2
  std::string *v36; // x0
  __int128 v37; // q0
  std::string *v38; // x0
  __int128 v39; // q0
  void *v40; // x0
  std::string *p_dst; // x1
  std::string::size_type v42; // x2
  std::string *v43; // x0
  __int128 v44; // q0
  std::string *v45; // x0
  __int128 v46; // q0
  std::string *v47; // x0
  __int128 v48; // q0
  std::string v49; // [xsp+8h] [xbp-128h] BYREF
  std::string __dst; // [xsp+20h] [xbp-110h] BYREF
  std::string v51; // [xsp+40h] [xbp-F0h] BYREF
  std::string v52; // [xsp+60h] [xbp-D0h] BYREF
  std::string v53; // [xsp+80h] [xbp-B0h] BYREF
  __int128 v54; // [xsp+A0h] [xbp-90h] BYREF
  __int128 v55; // [xsp+B0h] [xbp-80h] BYREF
  std::string::size_type v56; // [xsp+C0h] [xbp-70h]
  char v57; // [xsp+EFh] [xbp-41h] BYREF

  v11 = a3;
  if ( !a3 )
    v11 = *(_QWORD *)(a1 + 80);
  if ( (unsigned int)google::protobuf::DescriptorPool::Tables::AddSymbol(*(_QWORD **)(a1 + 8), (char *)a2, a6, a7) )
  {
    if ( (google::protobuf::FileDescriptorTables::AddAliasUnderParent(*(float **)(a1 + 88), v11, a4, a6, a7) & 1) != 0 )
      return 1LL;
    if ( !*(_BYTE *)(a1 + 48) )
    {
      v18 = google::protobuf::internal::LogMessage::LogMessage(
              &v55,
              2LL,
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/google/protobuf/descriptor.cc",
              4027LL);
      v19 = google::protobuf::internal::LogMessage::operator<<(v18, "\"");
      v20 = google::protobuf::internal::LogMessage::operator<<(v19, a2);
      v21 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                        v20,
                                                        "\" not previously defined in symbols_by_name_, but was defined i"
                                                        "n symbols_by_parent_; this shouldn't be possible.");
      google::protobuf::internal::LogFinisher::operator=((int)&v53, v21);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v55);
    }
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 8);
    sub_10007A644(&v54, a2);
    v55 = v54;
    v16 = sub_100096644(v15 + 304, &v55);
    if ( v16 )
      v17 = *(_OWORD *)(v16 + 32);
    else
      v17 = 0uLL;
    v55 = v17;
    v22 = sub_10007D95C(&v55);
    if ( v22 == *(_QWORD *)(a1 + 80) )
    {
      v28 = std::string::rfind(a2, 46, 0xFFFFFFFFFFFFFFFFLL);
      if ( v28 == -1LL )
      {
        std::operator+<char>("\"", a2);
        v47 = std::string::append(&v53, "\" is already defined.");
        v48 = *(_OWORD *)&v47->__r_.__value_.__l.__data_;
        v56 = v47->__r_.__value_.__r.__words[2];
        v55 = v48;
        v47->__r_.__value_.__l.__size_ = 0LL;
        v47->__r_.__value_.__r.__words[2] = 0LL;
        v47->__r_.__value_.__r.__words[0] = 0LL;
        google::protobuf::DescriptorBuilder::AddError(a1, (__int64)a2, a5, 0LL, (__int64)&v55);
        if ( SHIBYTE(v56) < 0 )
          operator delete((void *)v55);
        if ( (SHIBYTE(v53.__r_.__value_.__r.__words[2]) & 0x80000000) == 0 )
          return 0LL;
        v40 = (void *)v53.__r_.__value_.__r.__words[0];
      }
      else
      {
        v29 = v28;
        std::string::basic_string(&__dst, a2, v28 + 1, 0xFFFFFFFFFFFFFFFFLL, (std::allocator<char> *)&v49);
        v30 = std::string::insert(&__dst, 0LL, "\"");
        v31 = *(_OWORD *)&v30->__r_.__value_.__l.__data_;
        v51.__r_.__value_.__r.__words[2] = v30->__r_.__value_.__r.__words[2];
        *(_OWORD *)&v51.__r_.__value_.__l.__data_ = v31;
        v30->__r_.__value_.__l.__size_ = 0LL;
        v30->__r_.__value_.__r.__words[2] = 0LL;
        v30->__r_.__value_.__r.__words[0] = 0LL;
        v32 = std::string::append(&v51, "\" is already defined in \"");
        v33 = *(_OWORD *)&v32->__r_.__value_.__l.__data_;
        v52.__r_.__value_.__r.__words[2] = v32->__r_.__value_.__r.__words[2];
        *(_OWORD *)&v52.__r_.__value_.__l.__data_ = v33;
        v32->__r_.__value_.__l.__size_ = 0LL;
        v32->__r_.__value_.__r.__words[2] = 0LL;
        v32->__r_.__value_.__r.__words[0] = 0LL;
        std::string::basic_string(&v49, a2, 0LL, v29, (std::allocator<char> *)&v57);
        if ( (v49.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
          v34 = &v49;
        else
          v34 = (std::string *)v49.__r_.__value_.__r.__words[0];
        if ( (v49.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
          size = HIBYTE(v49.__r_.__value_.__r.__words[2]);
        else
          size = v49.__r_.__value_.__l.__size_;
        v36 = std::string::append(&v52, (const std::string::value_type *)v34, size);
        v37 = *(_OWORD *)&v36->__r_.__value_.__l.__data_;
        v53.__r_.__value_.__r.__words[2] = v36->__r_.__value_.__r.__words[2];
        *(_OWORD *)&v53.__r_.__value_.__l.__data_ = v37;
        v36->__r_.__value_.__l.__size_ = 0LL;
        v36->__r_.__value_.__r.__words[2] = 0LL;
        v36->__r_.__value_.__r.__words[0] = 0LL;
        v38 = std::string::append(&v53, "\".");
        v39 = *(_OWORD *)&v38->__r_.__value_.__l.__data_;
        v56 = v38->__r_.__value_.__r.__words[2];
        v55 = v39;
        v38->__r_.__value_.__l.__size_ = 0LL;
        v38->__r_.__value_.__r.__words[2] = 0LL;
        v38->__r_.__value_.__r.__words[0] = 0LL;
        google::protobuf::DescriptorBuilder::AddError(a1, (__int64)a2, a5, 0LL, (__int64)&v55);
        if ( SHIBYTE(v56) < 0 )
          operator delete((void *)v55);
        if ( SHIBYTE(v53.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v53.__r_.__value_.__l.__data_);
        if ( SHIBYTE(v49.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v49.__r_.__value_.__l.__data_);
        if ( SHIBYTE(v52.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v52.__r_.__value_.__l.__data_);
        if ( SHIBYTE(v51.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v51.__r_.__value_.__l.__data_);
        if ( (SHIBYTE(__dst.__r_.__value_.__r.__words[2]) & 0x80000000) == 0 )
          return 0LL;
        v40 = (void *)__dst.__r_.__value_.__r.__words[0];
      }
    }
    else
    {
      v23 = v22;
      std::operator+<char>("\"", a2);
      v24 = std::string::append(&v51, "\" is already defined in file \"");
      v25 = *(_OWORD *)&v24->__r_.__value_.__l.__data_;
      v52.__r_.__value_.__r.__words[2] = v24->__r_.__value_.__r.__words[2];
      *(_OWORD *)&v52.__r_.__value_.__l.__data_ = v25;
      v24->__r_.__value_.__l.__size_ = 0LL;
      v24->__r_.__value_.__r.__words[2] = 0LL;
      v24->__r_.__value_.__r.__words[0] = 0LL;
      if ( v23 )
      {
        v26 = *(__int128 **)v23;
        if ( *(char *)(*(_QWORD *)v23 + 23LL) < 0 )
        {
          sub_10007A474(&__dst, *(void **)v26);
        }
        else
        {
          v27 = *v26;
          __dst.__r_.__value_.__r.__words[2] = *((_QWORD *)v26 + 2);
          *(_OWORD *)&__dst.__r_.__value_.__l.__data_ = v27;
        }
      }
      else
      {
        sub_10007A754((int)&__dst, "null");
      }
      if ( (__dst.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
        p_dst = &__dst;
      else
        p_dst = (std::string *)__dst.__r_.__value_.__r.__words[0];
      if ( (__dst.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
        v42 = HIBYTE(__dst.__r_.__value_.__r.__words[2]);
      else
        v42 = __dst.__r_.__value_.__l.__size_;
      v43 = std::string::append(&v52, (const std::string::value_type *)p_dst, v42);
      v44 = *(_OWORD *)&v43->__r_.__value_.__l.__data_;
      v53.__r_.__value_.__r.__words[2] = v43->__r_.__value_.__r.__words[2];
      *(_OWORD *)&v53.__r_.__value_.__l.__data_ = v44;
      v43->__r_.__value_.__l.__size_ = 0LL;
      v43->__r_.__value_.__r.__words[2] = 0LL;
      v43->__r_.__value_.__r.__words[0] = 0LL;
      v45 = std::string::append(&v53, "\".");
      v46 = *(_OWORD *)&v45->__r_.__value_.__l.__data_;
      v56 = v45->__r_.__value_.__r.__words[2];
      v55 = v46;
      v45->__r_.__value_.__l.__size_ = 0LL;
      v45->__r_.__value_.__r.__words[2] = 0LL;
      v45->__r_.__value_.__r.__words[0] = 0LL;
      google::protobuf::DescriptorBuilder::AddError(a1, (__int64)a2, a5, 0LL, (__int64)&v55);
      if ( SHIBYTE(v56) < 0 )
        operator delete((void *)v55);
      if ( SHIBYTE(v53.__r_.__value_.__r.__words[2]) < 0 )
        operator delete(v53.__r_.__value_.__l.__data_);
      if ( SHIBYTE(__dst.__r_.__value_.__r.__words[2]) < 0 )
        operator delete(__dst.__r_.__value_.__l.__data_);
      if ( SHIBYTE(v52.__r_.__value_.__r.__words[2]) < 0 )
        operator delete(v52.__r_.__value_.__l.__data_);
      if ( (SHIBYTE(v51.__r_.__value_.__r.__words[2]) & 0x80000000) == 0 )
        return 0LL;
      v40 = (void *)v51.__r_.__value_.__r.__words[0];
    }
    operator delete(v40);
  }
  return 0LL;
}