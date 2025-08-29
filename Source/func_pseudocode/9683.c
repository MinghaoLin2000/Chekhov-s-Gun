__ZN3TSP26ComponentExternalReference8CopyFromERKN6google8protobuf7MessageE
TSP::ComponentExternalReference *__fastcall TSP::ComponentExternalReference::CopyFrom(
        TSP::ComponentExternalReference *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::ComponentExternalReference *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::ComponentExternalReference::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::ComponentExternalReference *)TSP::ComponentExternalReference::MergeFrom(v4, a2);
  }
  return this;
}