__ZN3TSP5Range8CopyFromERKN6google8protobuf7MessageE
TSP::Range *__fastcall TSP::Range::CopyFrom(TSP::Range *this, const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::Range *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::Range::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::Range *)TSP::Range::MergeFrom(v4, a2);
  }
  return this;
}