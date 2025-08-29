__ZN6google8protobuf21ExtensionRangeOptions8CopyFromERKS1_
google::protobuf::ExtensionRangeOptions *__fastcall google::protobuf::ExtensionRangeOptions::CopyFrom(
        google::protobuf::ExtensionRangeOptions *this,
        const google::protobuf::ExtensionRangeOptions *a2)
{
  __int64 v2; // x30
  google::protobuf::ExtensionRangeOptions *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::ExtensionRangeOptions::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::ExtensionRangeOptions *)google::protobuf::ExtensionRangeOptions::MergeFrom(v4, a2);
  }
  return this;
}