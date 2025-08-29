__ZN3TSP4Size8CopyFromERKN6google8protobuf7MessageE
TSP::Size *__fastcall TSP::Size::CopyFrom(TSP::Size *this, const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::Size *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::Size::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::Size *)TSP::Size::MergeFrom(v4, a2);
  }
  return this;
}