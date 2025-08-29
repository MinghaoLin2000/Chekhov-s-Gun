__ZN6google8protobuf29DescriptorProto_ReservedRange8CopyFromERKNS0_7MessageE
google::protobuf::DescriptorProto_ReservedRange *__fastcall google::protobuf::DescriptorProto_ReservedRange::CopyFrom(
        google::protobuf::DescriptorProto_ReservedRange *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  google::protobuf::DescriptorProto_ReservedRange *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::DescriptorProto_ReservedRange::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::DescriptorProto_ReservedRange *)google::protobuf::DescriptorProto_ReservedRange::MergeFrom(
                                                                v4,
                                                                a2);
  }
  return this;
}