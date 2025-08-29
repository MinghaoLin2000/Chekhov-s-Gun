__ZN3TSP16DocumentRevision8CopyFromERKN6google8protobuf7MessageE
TSP::DocumentRevision *__fastcall TSP::DocumentRevision::CopyFrom(
        TSP::DocumentRevision *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::DocumentRevision *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::DocumentRevision::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::DocumentRevision *)TSP::DocumentRevision::MergeFrom(v4, a2);
  }
  return this;
}