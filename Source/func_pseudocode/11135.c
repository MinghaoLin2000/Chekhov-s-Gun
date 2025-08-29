__ZN6google8protobuf19EnumDescriptorProto8CopyFromERKNS0_7MessageE
google::protobuf::EnumDescriptorProto *__fastcall google::protobuf::EnumDescriptorProto::CopyFrom(
        google::protobuf::EnumDescriptorProto *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  google::protobuf::EnumDescriptorProto *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::EnumDescriptorProto::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::EnumDescriptorProto *)google::protobuf::EnumDescriptorProto::MergeFrom(v4, a2);
  }
  return this;
}