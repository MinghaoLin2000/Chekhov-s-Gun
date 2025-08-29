__ZN6google8protobuf28GeneratedCodeInfo_Annotation8CopyFromERKNS0_7MessageE
google::protobuf::GeneratedCodeInfo_Annotation *__fastcall google::protobuf::GeneratedCodeInfo_Annotation::CopyFrom(
        google::protobuf::GeneratedCodeInfo_Annotation *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  google::protobuf::GeneratedCodeInfo_Annotation *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::GeneratedCodeInfo_Annotation::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::GeneratedCodeInfo_Annotation *)google::protobuf::GeneratedCodeInfo_Annotation::MergeFrom(
                                                               v4,
                                                               a2);
  }
  return this;
}