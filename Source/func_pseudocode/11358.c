__ZN6google8protobuf14SourceCodeInfo8CopyFromERKS1_
const google::protobuf::SourceCodeInfo *__fastcall google::protobuf::SourceCodeInfo::CopyFrom(
        const google::protobuf::SourceCodeInfo *this,
        const google::protobuf::SourceCodeInfo *a2)
{
  __int64 v2; // x30
  const google::protobuf::SourceCodeInfo *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::SourceCodeInfo::Clear((__int64)this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (const google::protobuf::SourceCodeInfo *)google::protobuf::SourceCodeInfo::MergeFrom((__int64)v4, a2);
  }
  return this;
}