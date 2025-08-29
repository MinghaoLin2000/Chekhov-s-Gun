__ZN6google8protobuf3Any8CopyFromERKNS0_7MessageE
google::protobuf::Any *__fastcall google::protobuf::Any::CopyFrom(
        google::protobuf::Any *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  google::protobuf::Any *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::Any::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::Any *)google::protobuf::Any::MergeFrom(v4, a2);
  }
  return this;
}