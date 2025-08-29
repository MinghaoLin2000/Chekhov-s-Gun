__ZN6google8protobuf3Api8CopyFromERKNS0_7MessageE
google::protobuf::Api *__fastcall google::protobuf::Api::CopyFrom(
        google::protobuf::Api *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  google::protobuf::Api *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::Api::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::Api *)google::protobuf::Api::MergeFrom(v4, a2);
  }
  return this;
}