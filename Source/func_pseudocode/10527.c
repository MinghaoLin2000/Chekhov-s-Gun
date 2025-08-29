__ZN3TSP14DataAttributes8CopyFromERKN6google8protobuf7MessageE
TSP::DataAttributes *__fastcall TSP::DataAttributes::CopyFrom(
        TSP::DataAttributes *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::DataAttributes *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::DataAttributes::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::DataAttributes *)TSP::DataAttributes::MergeFrom(v4, a2);
  }
  return this;
}