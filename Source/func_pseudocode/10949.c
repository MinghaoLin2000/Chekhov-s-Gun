__ZN6google8protobuf17DescriptorBuilder14ValidateProto3EPNS0_14FileDescriptorERKNS0_19FileDescriptorProtoE
google::protobuf::DescriptorBuilder *__fastcall google::protobuf::DescriptorBuilder::ValidateProto3(
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

  v5 = this;
  if ( *((int *)a2 + 14) >= 1 )
  {
    v6 = 0LL;
    v7 = 0LL;
    do
    {
      this = (google::protobuf::DescriptorBuilder *)google::protobuf::DescriptorBuilder::ValidateProto3Field(
                                                      v5,
                                                      (google::protobuf::FieldDescriptor *)(*((_QWORD *)a2 + 16) + v6),
                                                      *(const google::protobuf::FieldDescriptorProto **)(*((_QWORD *)a3 + 17) + 8 * v7++ + 8));
      v6 += 152LL;
    }
    while ( v7 < *((int *)a2 + 14) );
  }
  if ( *((int *)a2 + 11) >= 1 )
  {
    v8 = 0LL;
    v9 = 0LL;
    do
    {
      this = (google::protobuf::DescriptorBuilder *)google::protobuf::DescriptorBuilder::ValidateProto3Message(
                                                      v5,
                                                      (google::protobuf::Descriptor *)(*((_QWORD *)a2 + 13) + v8),
                                                      *(const google::protobuf::DescriptorProto **)(*((_QWORD *)a3 + 8)
                                                                                                  + 8 * v9++
                                                                                                  + 8));
      v8 += 144LL;
    }
    while ( v9 < *((int *)a2 + 11) );
  }
  if ( *((int *)a2 + 12) >= 1 )
  {
    v10 = 0LL;
    v11 = 0LL;
    do
    {
      this = (google::protobuf::DescriptorBuilder *)google::protobuf::DescriptorBuilder::ValidateProto3Enum(
                                                      v5,
                                                      (google::protobuf::EnumDescriptor *)(*((_QWORD *)a2 + 14) + v10),
                                                      *(const google::protobuf::EnumDescriptorProto **)(*((_QWORD *)a3 + 11) + 8 * v11++ + 8));
      v10 += 80LL;
    }
    while ( v11 < *((int *)a2 + 12) );
  }
  return this;
}