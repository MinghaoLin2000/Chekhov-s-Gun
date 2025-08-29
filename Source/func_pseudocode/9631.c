__ZN3TSP11MessageInfo8CopyFromERKN6google8protobuf7MessageE
TSP::MessageInfo *__fastcall TSP::MessageInfo::CopyFrom(TSP::MessageInfo *this, const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::MessageInfo *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::MessageInfo::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::MessageInfo *)TSP::MessageInfo::MergeFrom(v4, a2);
  }
  return this;
}