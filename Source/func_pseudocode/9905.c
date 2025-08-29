__ZN3TSP34ObjectSerializationDirectory_Entry8CopyFromERKN6google8protobuf7MessageE
TSP::ObjectSerializationDirectory_Entry *__fastcall TSP::ObjectSerializationDirectory_Entry::CopyFrom(
        TSP::ObjectSerializationDirectory_Entry *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::ObjectSerializationDirectory_Entry *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::ObjectSerializationDirectory_Entry::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::ObjectSerializationDirectory_Entry *)TSP::ObjectSerializationDirectory_Entry::MergeFrom(v4, a2);
  }
  return this;
}