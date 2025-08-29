__ZN6google8protobuf11FileOptions8CopyFromERKNS0_7MessageE
google::protobuf::FileOptions *__fastcall google::protobuf::FileOptions::CopyFrom(
        google::protobuf::FileOptions *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  google::protobuf::FileOptions *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::FileOptions::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::FileOptions *)google::protobuf::FileOptions::MergeFrom(v4, a2);
  }
  return this;
}