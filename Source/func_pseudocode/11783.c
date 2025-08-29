__ZN6google8protobuf10Int64Value9MergeFromERKNS0_7MessageE
_QWORD *__fastcall google::protobuf::Int64Value::MergeFrom(
        google::protobuf::Int64Value *this,
        const google::protobuf::Message *lpsrc)
{
  _QWORD *result; // x0
  google::protobuf::Message *v5; // x2
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  result = __dynamic_cast(
             lpsrc,
             (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
             (const struct __class_type_info *)&`typeinfo for'google::protobuf::Int64Value,
             0LL);
  if ( result )
  {
    v6 = result;
    v7 = result[1];
    if ( (v7 & 1) != 0 )
      result = (_QWORD *)sub_10003A25C((char *)this + 8, (v7 & 0xFFFFFFFFFFFFFFFELL) + 8);
    v8 = v6[2];
    if ( v8 )
      *((_QWORD *)this + 2) = v8;
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (_QWORD *)google::protobuf::internal::ReflectionOps::Merge(lpsrc, this, v5);
  }
  return result;
}