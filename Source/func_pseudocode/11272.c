__ZN6google8protobuf16EnumValueOptions8CopyFromERKS1_
google::protobuf::EnumValueOptions *__fastcall google::protobuf::EnumValueOptions::CopyFrom(
        google::protobuf::EnumValueOptions *this,
        const google::protobuf::EnumValueOptions *a2)
{
  __int64 v2; // x30
  google::protobuf::EnumValueOptions *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::EnumValueOptions::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::EnumValueOptions *)google::protobuf::EnumValueOptions::MergeFrom(v4, a2);
  }
  return this;
}