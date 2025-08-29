__ZN6google8protobuf28UninterpretedOption_NamePart8CopyFromERKNS0_7MessageE
google::protobuf::UninterpretedOption_NamePart *__fastcall google::protobuf::UninterpretedOption_NamePart::CopyFrom(
        google::protobuf::UninterpretedOption_NamePart *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  google::protobuf::UninterpretedOption_NamePart *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::UninterpretedOption_NamePart::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::UninterpretedOption_NamePart *)google::protobuf::UninterpretedOption_NamePart::MergeFrom(
                                                               v4,
                                                               a2);
  }
  return this;
}