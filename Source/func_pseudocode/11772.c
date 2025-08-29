__ZN6google8protobuf10FloatValue9MergeFromERKNS0_7MessageE
float *__fastcall google::protobuf::FloatValue::MergeFrom(
        google::protobuf::FloatValue *this,
        const google::protobuf::Message *lpsrc)
{
  float *result; // x0
  google::protobuf::Message *v5; // x2
  float *v6; // x21
  __int64 v7; // x8
  float v8; // s0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  result = (float *)__dynamic_cast(
                      lpsrc,
                      (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                      (const struct __class_type_info *)&`typeinfo for'google::protobuf::FloatValue,
                      0LL);
  if ( result )
  {
    v6 = result;
    v7 = *((_QWORD *)result + 1);
    if ( (v7 & 1) != 0 )
      result = (float *)sub_10003A25C((char *)this + 8, (v7 & 0xFFFFFFFFFFFFFFFELL) + 8);
    v8 = v6[4];
    if ( v8 != 0.0 )
      *((float *)this + 4) = v8;
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (float *)google::protobuf::internal::ReflectionOps::Merge(lpsrc, this, v5);
  }
  return result;
}