__ZN3TSP4UUID8CopyFromERKN6google8protobuf7MessageE
TSP::UUID *__fastcall TSP::UUID::CopyFrom(TSP::UUID *this, const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::UUID *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::UUID::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::UUID *)TSP::UUID::MergeFrom(v4, a2);
  }
  return this;
}