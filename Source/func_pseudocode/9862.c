__ZN3TSP19EncryptionBlockInfo8CopyFromERKN6google8protobuf7MessageE
TSP::EncryptionBlockInfo *__fastcall TSP::EncryptionBlockInfo::CopyFrom(
        TSP::EncryptionBlockInfo *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::EncryptionBlockInfo *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::EncryptionBlockInfo::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::EncryptionBlockInfo *)TSP::EncryptionBlockInfo::MergeFrom(v4, a2);
  }
  return this;
}