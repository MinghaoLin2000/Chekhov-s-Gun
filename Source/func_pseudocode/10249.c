__ZN3TSP5Color8CopyFromERKN6google8protobuf7MessageE
TSP::Color *__fastcall TSP::Color::CopyFrom(TSP::Color *this, const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::Color *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::Color::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::Color *)TSP::Color::MergeFrom(v4, a2);
  }
  return this;
}