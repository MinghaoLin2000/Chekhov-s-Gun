__ZN6google8protobuf23SourceCodeInfo_Location8CopyFromERKS1_
char *__fastcall google::protobuf::SourceCodeInfo_Location::CopyFrom(
        char *this,
        const google::protobuf::SourceCodeInfo_Location *a2)
{
  __int64 v2; // x30
  char *v4; // x20

  if ( a2 != (const google::protobuf::SourceCodeInfo_Location *)this )
  {
    v4 = this;
    google::protobuf::SourceCodeInfo_Location::Clear((google::protobuf::SourceCodeInfo_Location *)this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::SourceCodeInfo_Location::MergeFrom(v4, a2);
  }
  return this;
}