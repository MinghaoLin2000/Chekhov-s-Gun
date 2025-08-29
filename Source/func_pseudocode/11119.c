__ZN6google8protobuf37EnumDescriptorProto_EnumReservedRange8CopyFromERKNS0_7MessageE
google::protobuf::EnumDescriptorProto_EnumReservedRange *__fastcall google::protobuf::EnumDescriptorProto_EnumReservedRange::CopyFrom(
        google::protobuf::EnumDescriptorProto_EnumReservedRange *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  google::protobuf::EnumDescriptorProto_EnumReservedRange *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::EnumDescriptorProto_EnumReservedRange::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::EnumDescriptorProto_EnumReservedRange *)google::protobuf::EnumDescriptorProto_EnumReservedRange::MergeFrom(
                                                                        v4,
                                                                        a2);
  }
  return this;
}