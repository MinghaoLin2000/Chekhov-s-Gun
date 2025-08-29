__ZN6google8protobuf13MethodOptions8CopyFromERKS1_
google::protobuf::MethodOptions *__fastcall google::protobuf::MethodOptions::CopyFrom(
        google::protobuf::MethodOptions *this,
        const google::protobuf::MethodOptions *a2)
{
  __int64 v2; // x30
  google::protobuf::MethodOptions *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::MethodOptions::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::MethodOptions *)google::protobuf::MethodOptions::MergeFrom(v4, a2);
  }
  return this;
}