__ZN6google8protobuf12OneofOptions8CopyFromERKS1_
google::protobuf::OneofOptions *__fastcall google::protobuf::OneofOptions::CopyFrom(
        google::protobuf::OneofOptions *this,
        const google::protobuf::OneofOptions *a2)
{
  __int64 v2; // x30
  google::protobuf::OneofOptions *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::OneofOptions::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::OneofOptions *)google::protobuf::OneofOptions::MergeFrom(v4, a2);
  }
  return this;
}