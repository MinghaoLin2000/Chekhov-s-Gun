__ZN6google8protobuf14MessageOptions8CopyFromERKNS0_7MessageE
google::protobuf::MessageOptions *__fastcall google::protobuf::MessageOptions::CopyFrom(
        google::protobuf::MessageOptions *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  google::protobuf::MessageOptions *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::MessageOptions::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::MessageOptions *)google::protobuf::MessageOptions::MergeFrom(v4, a2);
  }
  return this;
}