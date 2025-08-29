__ZN6google8protobuf5Mixin8CopyFromERKNS0_7MessageE
google::protobuf::Mixin *__fastcall google::protobuf::Mixin::CopyFrom(
        google::protobuf::Mixin *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  google::protobuf::Mixin *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::Mixin::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::Mixin *)google::protobuf::Mixin::MergeFrom(v4, a2);
  }
  return this;
}