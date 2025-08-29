__ZN6google8protobuf17DescriptorBuilder15CrossLinkMethodEPNS0_16MethodDescriptorERKNS0_21MethodDescriptorProtoE
void __fastcall google::protobuf::DescriptorBuilder::CrossLinkMethod(
        google::protobuf::DescriptorBuilder *this,
        google::protobuf::MethodDescriptor *a2,
        const google::protobuf::MethodDescriptorProto *a3)
{
  int v6; // w0
  const google::protobuf::Descriptor *v7; // x1
  __int64 v8; // x9
  __int64 v9; // x22
  std::string *v10; // x0
  __int128 v11; // q0
  int v12; // w0
  const google::protobuf::Descriptor *v13; // x1
  __int64 v14; // x9
  __int64 v15; // x21
  std::string *v16; // x0
  __int128 v17; // q0
  _QWORD v18[2]; // [xsp+8h] [xbp-78h] BYREF
  std::string v19; // [xsp+18h] [xbp-68h] BYREF
  void *__p[2]; // [xsp+30h] [xbp-50h] BYREF
  std::string::size_type v21; // [xsp+40h] [xbp-40h]
  _QWORD v22[2]; // [xsp+50h] [xbp-30h] BYREF

  if ( !*((_QWORD *)a2 + 11) )
    *((_QWORD *)a2 + 11) = google::protobuf::MethodOptions::default_instance(this);
  v6 = google::protobuf::DescriptorBuilder::LookupSymbol(
         (__int64 *)this,
         (std::string *)(*((_QWORD *)a3 + 4) & 0xFFFFFFFFFFFFFFFELL),
         *((_QWORD *)a2 + 1),
         0LL,
         0,
         *(_BYTE *)(*(_QWORD *)this + 41LL) == 0);
  if ( v6 == 1 )
  {
    google::protobuf::internal::LazyDescriptor::Set((google::protobuf::MethodDescriptor *)((char *)a2 + 24), v7);
  }
  else if ( v6 )
  {
    v9 = *((_QWORD *)a2 + 1);
    std::operator+<char>("\"", *((_QWORD *)a3 + 4) & 0xFFFFFFFFFFFFFFFELL);
    v10 = std::string::append(&v19, "\" is not a message type.");
    v11 = *(_OWORD *)&v10->__r_.__value_.__l.__data_;
    v21 = v10->__r_.__value_.__r.__words[2];
    *(_OWORD *)__p = v11;
    v10->__r_.__value_.__l.__size_ = 0LL;
    v10->__r_.__value_.__r.__words[2] = 0LL;
    v10->__r_.__value_.__r.__words[0] = 0LL;
    google::protobuf::DescriptorBuilder::AddError((__int64)this, v9, (__int64)a3, 5LL, (__int64)__p);
    if ( SHIBYTE(v21) < 0 )
      operator delete(__p[0]);
    if ( SHIBYTE(v19.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v19.__r_.__value_.__l.__data_);
  }
  else
  {
    v8 = *((_QWORD *)a3 + 4);
    if ( *(_BYTE *)(*(_QWORD *)this + 41LL) )
    {
      sub_10007A644(v22, v8 & 0xFFFFFFFFFFFFFFFELL);
      google::protobuf::internal::LazyDescriptor::SetLazy((char *)a2 + 24, v22[0], v22[1], *((_QWORD *)this + 10));
    }
    else
    {
      google::protobuf::DescriptorBuilder::AddNotDefinedError(
        (__int64)this,
        *((_QWORD *)a2 + 1),
        (__int64)a3,
        5LL,
        v8 & 0xFFFFFFFFFFFFFFFELL);
    }
  }
  v12 = google::protobuf::DescriptorBuilder::LookupSymbol(
          (__int64 *)this,
          (std::string *)(*((_QWORD *)a3 + 5) & 0xFFFFFFFFFFFFFFFELL),
          *((_QWORD *)a2 + 1),
          0LL,
          0,
          *(_BYTE *)(*(_QWORD *)this + 41LL) == 0);
  if ( v12 == 1 )
  {
    google::protobuf::internal::LazyDescriptor::Set((google::protobuf::MethodDescriptor *)((char *)a2 + 56), v13);
  }
  else if ( v12 )
  {
    v15 = *((_QWORD *)a2 + 1);
    std::operator+<char>("\"", *((_QWORD *)a3 + 5) & 0xFFFFFFFFFFFFFFFELL);
    v16 = std::string::append(&v19, "\" is not a message type.");
    v17 = *(_OWORD *)&v16->__r_.__value_.__l.__data_;
    v21 = v16->__r_.__value_.__r.__words[2];
    *(_OWORD *)__p = v17;
    v16->__r_.__value_.__l.__size_ = 0LL;
    v16->__r_.__value_.__r.__words[2] = 0LL;
    v16->__r_.__value_.__r.__words[0] = 0LL;
    google::protobuf::DescriptorBuilder::AddError((__int64)this, v15, (__int64)a3, 6LL, (__int64)__p);
    if ( SHIBYTE(v21) < 0 )
      operator delete(__p[0]);
    if ( SHIBYTE(v19.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v19.__r_.__value_.__l.__data_);
  }
  else
  {
    v14 = *((_QWORD *)a3 + 5);
    if ( *(_BYTE *)(*(_QWORD *)this + 41LL) )
    {
      sub_10007A644(v18, v14 & 0xFFFFFFFFFFFFFFFELL);
      google::protobuf::internal::LazyDescriptor::SetLazy((char *)a2 + 56, v18[0], v18[1], *((_QWORD *)this + 10));
    }
    else
    {
      google::protobuf::DescriptorBuilder::AddNotDefinedError(
        (__int64)this,
        *((_QWORD *)a2 + 1),
        (__int64)a3,
        6LL,
        v14 & 0xFFFFFFFFFFFFFFFELL);
    }
  }
}