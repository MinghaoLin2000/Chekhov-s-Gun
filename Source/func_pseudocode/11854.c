__ZN6google8protobuf10BytesValue8CopyFromERKNS0_7MessageE
google::protobuf::BytesValue *__fastcall google::protobuf::BytesValue::CopyFrom(
        google::protobuf::BytesValue *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  google::protobuf::BytesValue *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::BytesValue::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::BytesValue *)google::protobuf::BytesValue::MergeFrom(v4, a2);
  }
  return this;
}