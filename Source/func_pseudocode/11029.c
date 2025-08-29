__ZN6google8protobuf30DescriptorProto_ExtensionRange8CopyFromERKNS0_7MessageE
const google::protobuf::Message *__fastcall google::protobuf::DescriptorProto_ExtensionRange::CopyFrom(
        const google::protobuf::Message *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  google::protobuf::DescriptorProto_ExtensionRange *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::DescriptorProto_ExtensionRange::Clear((__int64)this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (const google::protobuf::Message *)google::protobuf::DescriptorProto_ExtensionRange::MergeFrom(v4, a2);
  }
  return this;
}