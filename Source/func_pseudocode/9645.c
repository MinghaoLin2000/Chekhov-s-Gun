__ZN3TSP9FieldInfo8CopyFromERKN6google8protobuf7MessageE
const google::protobuf::Message *__fastcall TSP::FieldInfo::CopyFrom(
        const google::protobuf::Message *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::FieldInfo *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::FieldInfo::Clear((__int64)this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (const google::protobuf::Message *)TSP::FieldInfo::MergeFrom(v4, a2);
  }
  return this;
}