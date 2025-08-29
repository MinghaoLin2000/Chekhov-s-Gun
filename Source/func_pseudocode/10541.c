__ZN3TSP17LargeArraySegment8CopyFromERKN6google8protobuf7MessageE
TSP::LargeArraySegment *__fastcall TSP::LargeArraySegment::CopyFrom(
        TSP::LargeArraySegment *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::LargeArraySegment *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::LargeArraySegment::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::LargeArraySegment *)TSP::LargeArraySegment::MergeFrom(v4, a2);
  }
  return this;
}