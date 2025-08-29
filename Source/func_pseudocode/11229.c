__ZN6google8protobuf12FieldOptions8CopyFromERKNS0_7MessageE
google::protobuf::FieldOptions *__fastcall google::protobuf::FieldOptions::CopyFrom(
        google::protobuf::FieldOptions *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  google::protobuf::FieldOptions *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::FieldOptions::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::FieldOptions *)google::protobuf::FieldOptions::MergeFrom(v4, a2);
  }
  return this;
}