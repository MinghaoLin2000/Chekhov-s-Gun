__ZN3TSP21DataPropertiesEntryV18CopyFromERKN6google8protobuf7MessageE
TSP::DataPropertiesEntryV1 *__fastcall TSP::DataPropertiesEntryV1::CopyFrom(
        TSP::DataPropertiesEntryV1 *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::DataPropertiesEntryV1 *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::DataPropertiesEntryV1::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::DataPropertiesEntryV1 *)TSP::DataPropertiesEntryV1::MergeFrom(v4, a2);
  }
  return this;
}