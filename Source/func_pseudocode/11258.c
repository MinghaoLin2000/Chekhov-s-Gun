__ZN6google8protobuf11EnumOptions8CopyFromERKS1_
google::protobuf::EnumOptions *__fastcall google::protobuf::EnumOptions::CopyFrom(
        google::protobuf::EnumOptions *this,
        const google::protobuf::EnumOptions *a2)
{
  __int64 v2; // x30
  google::protobuf::EnumOptions *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::EnumOptions::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::EnumOptions *)google::protobuf::EnumOptions::MergeFrom(v4, a2);
  }
  return this;
}