__ZN6google8protobuf5Empty8CopyFromERKNS0_7MessageE
google::protobuf::Empty *__fastcall google::protobuf::Empty::CopyFrom(
        google::protobuf::Empty *this,
        const google::protobuf::Message *lpsrc)
{
  __int64 v2; // x30
  google::protobuf::Empty *v4; // x20
  _BYTE *v5; // x0
  char v6; // t1

  if ( lpsrc != this )
  {
    v4 = this;
    v6 = *((_BYTE *)this + 8);
    v5 = (char *)this + 8;
    if ( (v6 & 1) != 0 )
      sub_10003A2A8(v5);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::Empty *)google::protobuf::Empty::MergeFrom(v4, lpsrc);
  }
  return this;
}