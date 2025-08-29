__ZN6google8protobuf17DescriptorBuilder21ValidateProto3MessageEPNS0_10DescriptorERKNS0_15DescriptorProtoE
__int64 __fastcall google::protobuf::DescriptorBuilder::ValidateProto3Message(
        google::protobuf::DescriptorBuilder *this,
        google::protobuf::Descriptor *a2,
        const google::protobuf::DescriptorProto *a3)
{
  __int64 v6; // x22
  __int64 v7; // x23
  __int64 v8; // x22
  __int64 v9; // x23
  __int64 v10; // x22
  __int64 v11; // x23
  __int64 v12; // x22
  __int64 v13; // x23
  __int64 v14; // x24
  unsigned __int8 *v15; // x8
  int v16; // w10
  unsigned __int8 *v17; // x27
  __int64 v18; // x28
  int v19; // w8
  __int64 v20; // x27
  __int64 v21; // x28
  std::string *v22; // x0
  __int128 v23; // q0
  __int64 v24; // x0
  __int64 v25; // x8
  int v26; // w10
  const std::string::value_type *v27; // x1
  std::string::size_type v28; // x2
  std::string *v29; // x0
  __int128 v30; // q0
  std::string *v31; // x0
  __int128 v32; // q0
  std::string *v33; // x0
  __int128 v34; // q0
  __int64 v35; // x27
  __int64 v36; // x1
  std::string v38; // [xsp+8h] [xbp-128h] BYREF
  std::string v39; // [xsp+20h] [xbp-110h] BYREF
  std::string v40; // [xsp+40h] [xbp-F0h] BYREF
  std::string v41; // [xsp+60h] [xbp-D0h] BYREF
  void *__p[2]; // [xsp+80h] [xbp-B0h] BYREF
  std::string::size_type v43; // [xsp+90h] [xbp-A0h]
  std::string v44; // [xsp+98h] [xbp-98h] BYREF
  _QWORD *v45; // [xsp+B0h] [xbp-80h] BYREF
  _QWORD v46[2]; // [xsp+B8h] [xbp-78h] BYREF
  char v47; // [xsp+CFh] [xbp-61h] BYREF
  std::string *v48; // [xsp+D0h] [xbp-60h] BYREF

  if ( *((int *)a2 + 29) >= 1 )
  {
    v6 = 0LL;
    v7 = 0LL;
    do
    {
      google::protobuf::DescriptorBuilder::ValidateProto3Message(
        this,
        (google::protobuf::Descriptor *)(*((_QWORD *)a2 + 7) + v6),
        *(const google::protobuf::DescriptorProto **)(*((_QWORD *)a3 + 8) + 8 * v7++ + 8));
      v6 += 144LL;
    }
    while ( v7 < *((int *)a2 + 29) );
  }
  if ( *((int *)a2 + 30) >= 1 )
  {
    v8 = 0LL;
    v9 = 0LL;
    do
    {
      google::protobuf::DescriptorBuilder::ValidateProto3Enum(
        this,
        (google::protobuf::EnumDescriptor *)(*((_QWORD *)a2 + 8) + v8),
        *(const google::protobuf::EnumDescriptorProto **)(*((_QWORD *)a3 + 11) + 8 * v9++ + 8));
      v8 += 80LL;
    }
    while ( v9 < *((int *)a2 + 30) );
  }
  if ( *((int *)a2 + 26) >= 1 )
  {
    v10 = 0LL;
    v11 = 0LL;
    do
    {
      google::protobuf::DescriptorBuilder::ValidateProto3Field(
        this,
        (google::protobuf::FieldDescriptor *)(*((_QWORD *)a2 + 5) + v10),
        *(const google::protobuf::FieldDescriptorProto **)(*((_QWORD *)a3 + 5) + 8 * v11++ + 8));
      v10 += 152LL;
    }
    while ( v11 < *((int *)a2 + 26) );
  }
  if ( *((int *)a2 + 32) >= 1 )
  {
    v12 = 0LL;
    v13 = 0LL;
    do
    {
      google::protobuf::DescriptorBuilder::ValidateProto3Field(
        this,
        (google::protobuf::FieldDescriptor *)(*((_QWORD *)a2 + 10) + v12),
        *(const google::protobuf::FieldDescriptorProto **)(*((_QWORD *)a3 + 17) + 8 * v13++ + 8));
      v12 += 152LL;
    }
    while ( v13 < *((int *)a2 + 32) );
  }
  if ( *((int *)a2 + 31) > 0 )
    google::protobuf::DescriptorBuilder::AddError(
      (__int64)this,
      *((_QWORD *)a2 + 1),
      *(_QWORD *)(*((_QWORD *)a3 + 14) + 8LL),
      1LL,
      "Extension ranges are not allowed in proto3.");
  if ( *(_BYTE *)(*((_QWORD *)a2 + 4) + 72LL) )
    google::protobuf::DescriptorBuilder::AddError(
      (__int64)this,
      *((_QWORD *)a2 + 1),
      (__int64)a3,
      0LL,
      "MessageSet is not supported in proto3.");
  v46[0] = 0LL;
  v46[1] = 0LL;
  v45 = v46;
  if ( *((int *)a2 + 26) < 1 )
  {
    v36 = 0LL;
  }
  else
  {
    v14 = 0LL;
    do
    {
      v15 = *(unsigned __int8 **)(*((_QWORD *)a2 + 5) + 152 * v14);
      memset(&v44, 0, sizeof(v44));
      v16 = (char)v15[23];
      if ( v16 >= 0 )
        v17 = v15;
      else
        v17 = *(unsigned __int8 **)v15;
      if ( v16 >= 0 )
        v18 = v15[23];
      else
        v18 = *((_QWORD *)v15 + 1);
      for ( ; v18; --v18 )
      {
        v19 = *v17;
        if ( v19 != 95 )
        {
          if ( (unsigned int)(v19 - 65) < 0x1A )
            LOBYTE(v19) = v19 + 32;
          std::string::push_back(&v44, v19);
        }
        ++v17;
      }
      if ( v46 == (_QWORD *)sub_100098054(&v45, &v44) )
      {
        v35 = *((_QWORD *)a2 + 5);
        __p[0] = &v44;
        *(_QWORD *)(sub_10009E254(&v45, &v44, &unk_1001891C0, __p, &v41) + 56) = v35 + 152 * v14;
      }
      else
      {
        v20 = *((_QWORD *)a2 + 1);
        v21 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 8 * v14 + 8);
        std::operator+<char>("The JSON camel-case name of field \"", *(_QWORD *)(*((_QWORD *)a2 + 5) + 152 * v14));
        v22 = std::string::append(&v38, "\" conflicts with field \"");
        v23 = *(_OWORD *)&v22->__r_.__value_.__l.__data_;
        v39.__r_.__value_.__r.__words[2] = v22->__r_.__value_.__r.__words[2];
        *(_OWORD *)&v39.__r_.__value_.__l.__data_ = v23;
        v22->__r_.__value_.__l.__size_ = 0LL;
        v22->__r_.__value_.__r.__words[2] = 0LL;
        v22->__r_.__value_.__r.__words[0] = 0LL;
        v48 = &v44;
        v24 = sub_10009E254(&v45, &v44, &unk_1001891C0, &v48, &v47);
        v25 = **(_QWORD **)(v24 + 56);
        v26 = *(char *)(v25 + 23);
        if ( v26 >= 0 )
          v27 = **(const std::string::value_type ***)(v24 + 56);
        else
          v27 = *(const std::string::value_type **)v25;
        if ( v26 >= 0 )
          v28 = *(unsigned __int8 *)(v25 + 23);
        else
          v28 = *(_QWORD *)(v25 + 8);
        v29 = std::string::append(&v39, v27, v28);
        v30 = *(_OWORD *)&v29->__r_.__value_.__l.__data_;
        v40.__r_.__value_.__r.__words[2] = v29->__r_.__value_.__r.__words[2];
        *(_OWORD *)&v40.__r_.__value_.__l.__data_ = v30;
        v29->__r_.__value_.__l.__size_ = 0LL;
        v29->__r_.__value_.__r.__words[2] = 0LL;
        v29->__r_.__value_.__r.__words[0] = 0LL;
        v31 = std::string::append(&v40, "\". This is not ");
        v32 = *(_OWORD *)&v31->__r_.__value_.__l.__data_;
        v41.__r_.__value_.__r.__words[2] = v31->__r_.__value_.__r.__words[2];
        *(_OWORD *)&v41.__r_.__value_.__l.__data_ = v32;
        v31->__r_.__value_.__l.__size_ = 0LL;
        v31->__r_.__value_.__r.__words[2] = 0LL;
        v31->__r_.__value_.__r.__words[0] = 0LL;
        v33 = std::string::append(&v41, "allowed in proto3.");
        v34 = *(_OWORD *)&v33->__r_.__value_.__l.__data_;
        v43 = v33->__r_.__value_.__r.__words[2];
        *(_OWORD *)__p = v34;
        v33->__r_.__value_.__l.__size_ = 0LL;
        v33->__r_.__value_.__r.__words[2] = 0LL;
        v33->__r_.__value_.__r.__words[0] = 0LL;
        google::protobuf::DescriptorBuilder::AddError((__int64)this, v20, v21, 0LL, (__int64)__p);
        if ( SHIBYTE(v43) < 0 )
          operator delete(__p[0]);
        if ( SHIBYTE(v41.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v41.__r_.__value_.__l.__data_);
        if ( SHIBYTE(v40.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v40.__r_.__value_.__l.__data_);
        if ( SHIBYTE(v39.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v39.__r_.__value_.__l.__data_);
        if ( SHIBYTE(v38.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v38.__r_.__value_.__l.__data_);
      }
      if ( SHIBYTE(v44.__r_.__value_.__r.__words[2]) < 0 )
        operator delete(v44.__r_.__value_.__l.__data_);
      ++v14;
    }
    while ( v14 < *((int *)a2 + 26) );
    v36 = v46[0];
  }
  return sub_10009BDBC(&v45, v36);
}