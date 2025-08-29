__ZN6google8protobuf10FloatValue8CopyFromERKNS0_7MessageE
float *__fastcall google::protobuf::FloatValue::CopyFrom(float *this, const google::protobuf::Message *lpsrc)
{
  __int64 v2; // x30
  google::protobuf::FloatValue *v4; // x20
  float *v5; // x0
  char v6; // t1

  if ( lpsrc != (const google::protobuf::Message *)this )
  {
    v4 = (google::protobuf::FloatValue *)this;
    v6 = *((_BYTE *)this + 8);
    v5 = this + 2;
    v5[2] = 0.0;
    if ( (v6 & 1) != 0 )
      sub_10003A2A8(v5);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::FloatValue::MergeFrom(v4, lpsrc);
  }
  return this;
}