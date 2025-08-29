__ZN6google8protobuf17DescriptorBuilder16CrossLinkServiceEPNS0_17ServiceDescriptorERKNS0_22ServiceDescriptorProtoE
google::protobuf::ServiceOptions *__fastcall google::protobuf::DescriptorBuilder::CrossLinkService(
        google::protobuf::ServiceOptions *this,
        google::protobuf::ServiceDescriptor *a2,
        const google::protobuf::ServiceDescriptorProto *a3)
{
  google::protobuf::DescriptorBuilder *v5; // x21
  __int64 v6; // x22
  __int64 v7; // x23

  v5 = this;
  if ( !*((_QWORD *)a2 + 3) )
  {
    this = (google::protobuf::ServiceOptions *)google::protobuf::ServiceOptions::default_instance(this);
    *((_QWORD *)a2 + 3) = this;
  }
  if ( *((int *)a2 + 10) >= 1 )
  {
    v6 = 0LL;
    v7 = 0LL;
    do
    {
      this = (google::protobuf::ServiceOptions *)google::protobuf::DescriptorBuilder::CrossLinkMethod(
                                                   v5,
                                                   (google::protobuf::MethodDescriptor *)(*((_QWORD *)a2 + 4) + v6),
                                                   *(const google::protobuf::MethodDescriptorProto **)(*((_QWORD *)a3 + 5) + 8 * v7++ + 8));
      v6 += 104LL;
    }
    while ( v7 < *((int *)a2 + 10) );
  }
  return this;
}