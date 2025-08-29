__ZN6google8protobuf14ServiceOptions8CopyFromERKS1_
google::protobuf::ServiceOptions *__fastcall google::protobuf::ServiceOptions::CopyFrom(
        google::protobuf::ServiceOptions *this,
        const google::protobuf::ServiceOptions *a2)
{
  __int64 v2; // x30
  google::protobuf::ServiceOptions *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::ServiceOptions::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::ServiceOptions *)google::protobuf::ServiceOptions::MergeFrom(v4, a2);
  }
  return this;
}