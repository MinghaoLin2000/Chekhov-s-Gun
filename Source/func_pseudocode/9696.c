__ZN3TSP38ComponentDataReference_ObjectReference8CopyFromERKN6google8protobuf7MessageE
TSP::ComponentDataReference_ObjectReference *__fastcall TSP::ComponentDataReference_ObjectReference::CopyFrom(
        TSP::ComponentDataReference_ObjectReference *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::ComponentDataReference_ObjectReference *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::ComponentDataReference_ObjectReference::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::ComponentDataReference_ObjectReference *)TSP::ComponentDataReference_ObjectReference::MergeFrom(v4, a2);
  }
  return this;
}