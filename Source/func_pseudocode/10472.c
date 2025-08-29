__ZN3TSP19SparseUUIDPathArray8CopyFromERKN6google8protobuf7MessageE
const google::protobuf::Message *__fastcall TSP::SparseUUIDPathArray::CopyFrom(
        const google::protobuf::Message *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::SparseUUIDPathArray *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::SparseUUIDPathArray::Clear((__int64)this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (const google::protobuf::Message *)TSP::SparseUUIDPathArray::MergeFrom(v4, a2);
  }
  return this;
}