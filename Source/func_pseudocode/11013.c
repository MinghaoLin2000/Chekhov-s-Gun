__ZN6google8protobuf19FileDescriptorProto8CopyFromERKNS0_7MessageE
google::protobuf::FileDescriptorProto *__fastcall google::protobuf::FileDescriptorProto::CopyFrom(
        google::protobuf::FileDescriptorProto *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  google::protobuf::FileDescriptorProto *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::FileDescriptorProto::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::FileDescriptorProto *)google::protobuf::FileDescriptorProto::MergeFrom(v4, a2);
  }
  return this;
}