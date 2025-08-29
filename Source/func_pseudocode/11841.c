__ZN6google8protobuf11StringValue8CopyFromERKNS0_7MessageE
google::protobuf::StringValue *__fastcall google::protobuf::StringValue::CopyFrom(
        google::protobuf::StringValue *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  google::protobuf::StringValue *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::StringValue::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::StringValue *)google::protobuf::StringValue::MergeFrom(v4, a2);
  }
  return this;
}