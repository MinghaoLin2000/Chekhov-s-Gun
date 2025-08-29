__ZN3TSP9Reference8CopyFromERKN6google8protobuf7MessageE
TSP::Reference *__fastcall TSP::Reference::CopyFrom(TSP::Reference *this, const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::Reference *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::Reference::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::Reference *)TSP::Reference::MergeFrom(v4, a2);
  }
  return this;
}