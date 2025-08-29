__ZN6google8protobuf17DescriptorBuilder13CrossLinkEnumEPNS0_14EnumDescriptorERKNS0_19EnumDescriptorProtoE
google::protobuf::EnumOptions *__fastcall google::protobuf::DescriptorBuilder::CrossLinkEnum(
        google::protobuf::EnumOptions *this,
        google::protobuf::EnumDescriptor *a2,
        const google::protobuf::EnumDescriptorProto *a3)
{
  int v4; // w8
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v7; // x22

  if ( !*((_QWORD *)a2 + 4) )
  {
    this = (google::protobuf::EnumOptions *)google::protobuf::EnumOptions::default_instance(this);
    *((_QWORD *)a2 + 4) = this;
  }
  v4 = *((_DWORD *)a2 + 11);
  if ( v4 >= 1 )
  {
    v5 = 0LL;
    v6 = 32LL;
    do
    {
      v7 = *((_QWORD *)a2 + 6);
      if ( !*(_QWORD *)(v7 + v6) )
      {
        this = (google::protobuf::EnumOptions *)google::protobuf::EnumValueOptions::default_instance(this);
        *(_QWORD *)(v7 + v6) = this;
        v4 = *((_DWORD *)a2 + 11);
      }
      ++v5;
      v6 += 40LL;
    }
    while ( v5 < v4 );
  }
  return this;
}