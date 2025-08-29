__ZN6google8protobuf15DescriptorProto8CopyFromERKNS0_7MessageE
google::protobuf::DescriptorProto *__fastcall google::protobuf::DescriptorProto::CopyFrom(
        google::protobuf::DescriptorProto *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  google::protobuf::DescriptorProto *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::DescriptorProto::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::DescriptorProto *)google::protobuf::DescriptorProto::MergeFrom(v4, a2);
  }
  return this;
}