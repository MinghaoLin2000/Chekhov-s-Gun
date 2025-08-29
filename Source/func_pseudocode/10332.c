__ZN3TSP13CFUUIDArchive8CopyFromERKN6google8protobuf7MessageE
TSP::CFUUIDArchive *__fastcall TSP::CFUUIDArchive::CopyFrom(
        TSP::CFUUIDArchive *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::CFUUIDArchive *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::CFUUIDArchive::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::CFUUIDArchive *)TSP::CFUUIDArchive::MergeFrom(v4, a2);
  }
  return this;
}