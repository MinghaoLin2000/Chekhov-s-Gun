__ZN6google8protobuf23SourceCodeInfo_Location8CopyFromERKNS0_7MessageE
google::protobuf::SourceCodeInfo_Location *__fastcall google::protobuf::SourceCodeInfo_Location::CopyFrom(
        google::protobuf::SourceCodeInfo_Location *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  google::protobuf::SourceCodeInfo_Location *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    google::protobuf::SourceCodeInfo_Location::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::SourceCodeInfo_Location *)google::protobuf::SourceCodeInfo_Location::MergeFrom(v4, a2);
  }
  return this;
}