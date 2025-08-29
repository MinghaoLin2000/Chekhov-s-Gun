__ZN3TSP9FieldPath8CopyFromERKN6google8protobuf7MessageE
char *__fastcall TSP::FieldPath::CopyFrom(char *this, const google::protobuf::Message *lpsrc)
{
  __int64 v2; // x30
  TSP::FieldPath *v4; // x20
  char *v5; // x0
  char v6; // t1

  if ( lpsrc != (const google::protobuf::Message *)this )
  {
    v4 = (TSP::FieldPath *)this;
    v6 = this[8];
    v5 = this + 8;
    *((_DWORD *)v5 + 2) = 0;
    if ( (v6 & 1) != 0 )
      sub_10003A2A8(v5);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return TSP::FieldPath::MergeFrom(v4, lpsrc);
  }
  return this;
}