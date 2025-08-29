__ZN3TSP26SparseReferenceArray_Entry8CopyFromERKN6google8protobuf7MessageE
const google::protobuf::Message *__fastcall TSP::SparseReferenceArray_Entry::CopyFrom(
        const google::protobuf::Message *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::SparseReferenceArray_Entry *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::SparseReferenceArray_Entry::Clear((__int64)this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (const google::protobuf::Message *)TSP::SparseReferenceArray_Entry::MergeFrom(v4, a2);
  }
  return this;
}