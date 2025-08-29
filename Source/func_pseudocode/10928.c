__ZN6google8protobuf17DescriptorBuilder19ValidateFileOptionsEPNS0_14FileDescriptorERKNS0_19FileDescriptorProtoE
void __fastcall google::protobuf::DescriptorBuilder::ValidateFileOptions(
        google::protobuf::DescriptorBuilder *this,
        google::protobuf::FileDescriptor *a2,
        const google::protobuf::FileDescriptorProto *a3)
{
  google::protobuf::DescriptorBuilder *v5; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  __int64 v8; // x22
  __int64 v9; // x23
  __int64 v10; // x22
  __int64 v11; // x23
  __int64 v12; // x22
  __int64 v13; // x23
  __int64 v14; // x22
  int v15; // w22
  google::protobuf::FileOptions *v16; // x0
  google::protobuf::FileOptions *v17; // x23
  __int64 v18; // x24
  __int64 v19; // x23
  _QWORD *v20; // x0
  std::string *v21; // x0
  __int128 v22; // q0
  std::string v23; // [xsp+8h] [xbp-68h] BYREF
  void *__p[2]; // [xsp+20h] [xbp-50h] BYREF
  std::string::size_type v25; // [xsp+30h] [xbp-40h]

  v5 = this;
  if ( *((int *)a2 + 11) >= 1 )
  {
    v6 = 0LL;
    v7 = 0LL;
    do
    {
      this = (google::protobuf::DescriptorBuilder *)google::protobuf::DescriptorBuilder::ValidateMessageOptions(
                                                      v5,
                                                      (google::protobuf::Descriptor *)(*((_QWORD *)a2 + 13) + v6),
                                                      *(const google::protobuf::DescriptorProto **)(*((_QWORD *)a3 + 8)
                                                                                                  + 8 * v7++
                                                                                                  + 8));
      v6 += 144LL;
    }
    while ( v7 < *((int *)a2 + 11) );
  }
  if ( *((int *)a2 + 12) >= 1 )
  {
    v8 = 0LL;
    v9 = 0LL;
    do
    {
      this = (google::protobuf::DescriptorBuilder *)google::protobuf::DescriptorBuilder::ValidateEnumOptions(
                                                      v5,
                                                      (google::protobuf::EnumDescriptor *)(*((_QWORD *)a2 + 14) + v8),
                                                      *(const google::protobuf::EnumDescriptorProto **)(*((_QWORD *)a3 + 11) + 8 * v9++ + 8));
      v8 += 80LL;
    }
    while ( v9 < *((int *)a2 + 12) );
  }
  if ( *((int *)a2 + 13) >= 1 )
  {
    v10 = 0LL;
    v11 = 0LL;
    do
    {
      this = (google::protobuf::DescriptorBuilder *)google::protobuf::DescriptorBuilder::ValidateServiceOptions(
                                                      v5,
                                                      (google::protobuf::ServiceDescriptor *)(*((_QWORD *)a2 + 15) + v10),
                                                      *(const google::protobuf::ServiceDescriptorProto **)(*((_QWORD *)a3 + 14) + 8 * v11++ + 8));
      v10 += 48LL;
    }
    while ( v11 < *((int *)a2 + 13) );
  }
  if ( *((int *)a2 + 14) >= 1 )
  {
    v12 = 0LL;
    v13 = 0LL;
    do
    {
      this = (google::protobuf::DescriptorBuilder *)google::protobuf::DescriptorBuilder::ValidateFieldOptions(
                                                      v5,
                                                      (google::protobuf::FieldDescriptor *)(*((_QWORD *)a2 + 16) + v12),
                                                      *(const google::protobuf::FieldDescriptorProto **)(*((_QWORD *)a3 + 17) + 8 * v13++ + 8));
      v12 += 152LL;
    }
    while ( v13 < *((int *)a2 + 14) );
  }
  v14 = *((_QWORD *)a2 + 17);
  if ( (v14 == google::protobuf::FileOptions::default_instance(this) || *(_DWORD *)(*((_QWORD *)a2 + 17) + 160LL) != 3)
    && *((int *)a2 + 8) >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = (google::protobuf::FileOptions *)google::protobuf::FileDescriptor::dependency(a2, v15);
      if ( v16 )
      {
        v17 = v16;
        v18 = *((_QWORD *)v16 + 17);
        if ( v18 != google::protobuf::FileOptions::default_instance(v16)
          && *(_DWORD *)(*((_QWORD *)v17 + 17) + 160LL) == 3 )
        {
          break;
        }
      }
      if ( ++v15 >= *((_DWORD *)a2 + 8) )
        goto LABEL_21;
    }
    v19 = *(_QWORD *)google::protobuf::FileDescriptor::dependency(a2, v15);
    v20 = (_QWORD *)google::protobuf::FileDescriptor::dependency(a2, v15);
    std::operator+<char>(
      "Files that do not use optimize_for = LITE_RUNTIME cannot import files which do use this option.  This file is not "
      "lite, but it imports \"",
      *v20);
    v21 = std::string::append(&v23, "\" which is.");
    v22 = *(_OWORD *)&v21->__r_.__value_.__l.__data_;
    v25 = v21->__r_.__value_.__r.__words[2];
    *(_OWORD *)__p = v22;
    v21->__r_.__value_.__l.__size_ = 0LL;
    v21->__r_.__value_.__r.__words[2] = 0LL;
    v21->__r_.__value_.__r.__words[0] = 0LL;
    google::protobuf::DescriptorBuilder::AddError((__int64)v5, v19, (__int64)a3, 9LL, (__int64)__p);
    if ( SHIBYTE(v25) < 0 )
      operator delete(__p[0]);
    if ( SHIBYTE(v23.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v23.__r_.__value_.__l.__data_);
  }
LABEL_21:
  if ( *((_DWORD *)a2 + 15) == 3 )
    google::protobuf::DescriptorBuilder::ValidateProto3(v5, a2, a3);
}