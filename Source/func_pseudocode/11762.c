__ZN6google8protobuf11DoubleValue8CopyFromERKNS0_7MessageE
double *__fastcall google::protobuf::DoubleValue::CopyFrom(double *this, const google::protobuf::Message *lpsrc)
{
  __int64 v2; // x30
  google::protobuf::DoubleValue *v4; // x20
  double *v5; // x0
  char v6; // t1

  if ( lpsrc != (const google::protobuf::Message *)this )
  {
    v4 = (google::protobuf::DoubleValue *)this;
    v6 = *((_BYTE *)this + 8);
    v5 = this + 1;
    v5[1] = 0.0;
    if ( (v6 & 1) != 0 )
      sub_10003A2A8(v5);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::DoubleValue::MergeFrom(v4, lpsrc);
  }
  return this;
}