__ZN6google8protobuf17DescriptorBuilder13CrossLinkFileEPNS0_14FileDescriptorERKNS0_19FileDescriptorProtoE
google::protobuf::FileOptions *__fastcall google::protobuf::DescriptorBuilder::CrossLinkFile(
        google::protobuf::FileOptions *this,
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

  v5 = this;
  if ( !*((_QWORD *)a2 + 17) )
  {
    this = (google::protobuf::FileOptions *)google::protobuf::FileOptions::default_instance(this);
    *((_QWORD *)a2 + 17) = this;
  }
  if ( *((int *)a2 + 11) >= 1 )
  {
    v6 = 0LL;
    v7 = 0LL;
    do
    {
      this = (google::protobuf::FileOptions *)google::protobuf::DescriptorBuilder::CrossLinkMessage(
                                                v5,
                                                (google::protobuf::Descriptor *)(*((_QWORD *)a2 + 13) + v6),
                                                *(const google::protobuf::DescriptorProto **)(*((_QWORD *)a3 + 8)
                                                                                            + 8 * v7++
                                                                                            + 8));
      v6 += 144LL;
    }
    while ( v7 < *((int *)a2 + 11) );
  }
  if ( *((int *)a2 + 14) >= 1 )
  {
    v8 = 0LL;
    v9 = 0LL;
    do
    {
      this = (google::protobuf::FileOptions *)google::protobuf::DescriptorBuilder::CrossLinkField(
                                                v5,
                                                (google::protobuf::FieldDescriptor *)(*((_QWORD *)a2 + 16) + v8),
                                                *(const google::protobuf::FieldDescriptorProto **)(*((_QWORD *)a3 + 17)
                                                                                                 + 8 * v9++
                                                                                                 + 8));
      v8 += 152LL;
    }
    while ( v9 < *((int *)a2 + 14) );
  }
  if ( *((int *)a2 + 12) >= 1 )
  {
    v10 = 0LL;
    v11 = 0LL;
    do
    {
      this = (google::protobuf::FileOptions *)google::protobuf::DescriptorBuilder::CrossLinkEnum(
                                                this,
                                                (google::protobuf::EnumDescriptor *)(*((_QWORD *)a2 + 14) + v10),
                                                a3);
      ++v11;
      v10 += 80LL;
    }
    while ( v11 < *((int *)a2 + 12) );
  }
  if ( *((int *)a2 + 13) >= 1 )
  {
    v12 = 0LL;
    v13 = 0LL;
    do
    {
      this = (google::protobuf::FileOptions *)google::protobuf::DescriptorBuilder::CrossLinkService(
                                                v5,
                                                (google::protobuf::ServiceDescriptor *)(*((_QWORD *)a2 + 15) + v12),
                                                *(const google::protobuf::ServiceDescriptorProto **)(*((_QWORD *)a3 + 14) + 8 * v13++ + 8));
      v12 += 48LL;
    }
    while ( v13 < *((int *)a2 + 13) );
  }
  return this;
}