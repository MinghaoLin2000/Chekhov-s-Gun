__ZNK6google8protobuf15FieldDescriptor20InternalTypeOnceInitEv
void __fastcall google::protobuf::FieldDescriptor::InternalTypeOnceInit(google::protobuf::FieldDescriptor *this)
{
  google::protobuf::internal::LogMessage *v2; // x0
  __int64 v3; // x1
  __int64 v4; // x20
  int v5; // w0
  __int64 v6; // x1
  char *v7; // x8
  __int64 v8; // x8
  __int128 *v9; // x8
  __int128 v10; // q0
  std::string::size_type v11; // x0
  std::string *v12; // x0
  __int128 v13; // q0
  __int64 v14; // x8
  int v15; // w10
  const std::string::value_type *v16; // x1
  std::string::size_type v17; // x2
  std::string *v18; // x0
  std::string::size_type v19; // x21
  char v20; // w22
  __int64 v21; // x20
  __int64 v22; // x1
  __int64 v23; // x8
  google::protobuf::internal::LogMessage *v24; // x0
  __int64 v25[2]; // [xsp+8h] [xbp-C8h] BYREF
  std::string v26; // [xsp+18h] [xbp-B8h] BYREF
  std::string v27; // [xsp+30h] [xbp-A0h] BYREF
  __int64 v28[2]; // [xsp+50h] [xbp-80h] BYREF
  std::string __str; // [xsp+60h] [xbp-70h] BYREF
  char v30; // [xsp+97h] [xbp-39h] BYREF
  _QWORD v31[2]; // [xsp+98h] [xbp-38h]

  if ( !*(_BYTE *)(*((_QWORD *)this + 5) + 65LL) )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &__str,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      7296LL);
    v2 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     &__str,
                                                     "CHECK failed: file()->finished_building_ == true: ");
    google::protobuf::internal::LogFinisher::operator=((int)&v27, v2);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&__str);
  }
  v3 = *((_QWORD *)this + 16);
  if ( v3 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 5) + 16LL);
    sub_10007A644(v28, v3);
    v5 = google::protobuf::DescriptorPool::CrossLinkOnDemandHelper(v4, v28[0], v28[1]);
    if ( v5 == 4 )
    {
      *((_DWORD *)this + 14) = 14;
      v7 = (char *)this + 112;
    }
    else
    {
      if ( v5 != 1 )
        goto LABEL_9;
      *((_DWORD *)this + 14) = 11;
      v7 = (char *)this + 104;
    }
    *(_QWORD *)v7 = v6;
  }
LABEL_9:
  v8 = *((_QWORD *)this + 14);
  if ( v8 && !*((_QWORD *)this + 18) )
  {
    if ( !*((_QWORD *)this + 17) )
      goto LABEL_34;
    v9 = *(__int128 **)(v8 + 8);
    if ( *((char *)v9 + 23) < 0 )
    {
      sub_10007A474(&__str, *(void **)v9);
    }
    else
    {
      v10 = *v9;
      __str.__r_.__value_.__r.__words[2] = *((_QWORD *)v9 + 2);
      *(_OWORD *)&__str.__r_.__value_.__l.__data_ = v10;
    }
    v11 = std::string::rfind(&__str, 46, 0xFFFFFFFFFFFFFFFFLL);
    if ( v11 == -1LL )
    {
      std::string::operator=(&__str, *((const std::string **)this + 17));
    }
    else
    {
      std::string::basic_string(&v26, &__str, 0LL, v11, (std::allocator<char> *)&v30);
      v12 = std::string::append(&v26, ".");
      v13 = *(_OWORD *)&v12->__r_.__value_.__l.__data_;
      v27.__r_.__value_.__r.__words[2] = v12->__r_.__value_.__r.__words[2];
      *(_OWORD *)&v27.__r_.__value_.__l.__data_ = v13;
      v12->__r_.__value_.__l.__size_ = 0LL;
      v12->__r_.__value_.__r.__words[2] = 0LL;
      v12->__r_.__value_.__r.__words[0] = 0LL;
      v14 = *((_QWORD *)this + 17);
      v15 = *(char *)(v14 + 23);
      if ( v15 >= 0 )
        v16 = (const std::string::value_type *)*((_QWORD *)this + 17);
      else
        v16 = *(const std::string::value_type **)v14;
      if ( v15 >= 0 )
        v17 = *(unsigned __int8 *)(v14 + 23);
      else
        v17 = *(_QWORD *)(v14 + 8);
      v18 = std::string::append(&v27, v16, v17);
      v19 = v18->__r_.__value_.__r.__words[0];
      v31[0] = v18->__r_.__value_.__l.__size_;
      *(_QWORD *)((char *)v31 + 7) = *(std::string::size_type *)((char *)&v18->__r_.__value_.__r.__words[1] + 7);
      v20 = HIBYTE(v18->__r_.__value_.__r.__words[2]);
      v18->__r_.__value_.__l.__size_ = 0LL;
      v18->__r_.__value_.__r.__words[2] = 0LL;
      v18->__r_.__value_.__r.__words[0] = 0LL;
      if ( SHIBYTE(__str.__r_.__value_.__r.__words[2]) < 0 )
        operator delete(__str.__r_.__value_.__l.__data_);
      __str.__r_.__value_.__r.__words[0] = v19;
      __str.__r_.__value_.__l.__size_ = v31[0];
      *(std::string::size_type *)((char *)&__str.__r_.__value_.__r.__words[1] + 7) = *(_QWORD *)((char *)v31 + 7);
      *((_BYTE *)&__str.__r_.__value_.__s + 23) = v20;
      if ( SHIBYTE(v27.__r_.__value_.__r.__words[2]) < 0 )
        operator delete(v27.__r_.__value_.__l.__data_);
      if ( SHIBYTE(v26.__r_.__value_.__r.__words[2]) < 0 )
        operator delete(v26.__r_.__value_.__l.__data_);
    }
    v21 = *(_QWORD *)(*((_QWORD *)this + 5) + 16LL);
    sub_10007A644(v25, &__str);
    if ( (unsigned int)google::protobuf::DescriptorPool::CrossLinkOnDemandHelper(v21, v25[0], v25[1]) == 5 )
      *((_QWORD *)this + 18) = v22;
    if ( SHIBYTE(__str.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(__str.__r_.__value_.__l.__data_);
    if ( !*((_QWORD *)this + 18) )
    {
LABEL_34:
      v23 = *((_QWORD *)this + 14);
      if ( !*(_DWORD *)(v23 + 44) )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          &__str,
          3LL,
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/google/protobuf/descriptor.cc",
          7328LL);
        v24 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                          &__str,
                                                          "CHECK failed: enum_type_->value_count(): ");
        google::protobuf::internal::LogFinisher::operator=((int)&v27, v24);
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&__str);
        v23 = *((_QWORD *)this + 14);
      }
      *((_QWORD *)this + 18) = *(_QWORD *)(v23 + 48);
    }
  }
}