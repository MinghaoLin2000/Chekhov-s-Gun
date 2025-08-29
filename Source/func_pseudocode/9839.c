__ZN3TSP12DataMetadata8CopyFromERKN6google8protobuf7MessageE
const google::protobuf::Message *__fastcall TSP::DataMetadata::CopyFrom(
        const google::protobuf::Message *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::DataMetadata *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::DataMetadata::Clear((__int64)this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (const google::protobuf::Message *)TSP::DataMetadata::MergeFrom(v4, a2);
  }
  return this;
}