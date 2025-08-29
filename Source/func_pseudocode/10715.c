__ZN3TSP12FieldOptions8CopyFromERKN6google8protobuf7MessageE
TSP::FieldOptions *__fastcall TSP::FieldOptions::CopyFrom(
        TSP::FieldOptions *this,
        const google::protobuf::Message *lpsrc)
{
  __int64 v2; // x30
  TSP::FieldOptions *v4; // x20
  _BYTE *v5; // x0
  char v6; // t1

  if ( lpsrc != this )
  {
    v4 = this;
    v6 = *((_BYTE *)this + 8);
    v5 = (char *)this + 8;
    *((_DWORD *)v5 + 4) = 0;
    *((_DWORD *)v5 + 2) = 0;
    if ( (v6 & 1) != 0 )
      sub_10003A2A8(v5);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::FieldOptions *)TSP::FieldOptions::MergeFrom(v4, lpsrc);
  }
  return this;
}