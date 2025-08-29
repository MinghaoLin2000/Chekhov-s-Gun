__ZN6google8protobuf8Duration8CopyFromERKNS0_7MessageE
void __fastcall google::protobuf::Duration::CopyFrom(
        google::protobuf::Duration *this,
        const google::protobuf::Message *lpsrc)
{
  __int64 v2; // x30
  char *v5; // x0
  char v6; // t1

  if ( lpsrc != this )
  {
    v6 = *((_BYTE *)this + 8);
    v5 = (char *)this + 8;
    *((_DWORD *)v5 + 4) = 0;
    *((_QWORD *)v5 + 1) = 0LL;
    if ( (v6 & 1) != 0 )
      sub_10003A2A8(v5);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    google::protobuf::Duration::MergeFrom(this, lpsrc);
  }
}