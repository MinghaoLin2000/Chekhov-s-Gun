__ZN3TSP13DataReference8CopyFromERKN6google8protobuf7MessageE
TSP::DataReference *__fastcall TSP::DataReference::CopyFrom(
        TSP::DataReference *this,
        const google::protobuf::Message *lpsrc)
{
  __int64 v2; // x30
  TSP::DataReference *v4; // x20
  _BYTE *v5; // x0
  char v6; // t1

  if ( lpsrc != this )
  {
    v4 = this;
    v6 = *((_BYTE *)this + 8);
    v5 = (char *)this + 8;
    *((_QWORD *)v5 + 2) = 0LL;
    *((_DWORD *)v5 + 2) = 0;
    if ( (v6 & 1) != 0 )
      sub_10003A2A8(v5);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::DataReference *)TSP::DataReference::MergeFrom(v4, lpsrc);
  }
  return this;
}