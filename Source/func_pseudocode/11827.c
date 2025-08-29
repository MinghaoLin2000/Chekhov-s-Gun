__ZN6google8protobuf9BoolValue9MergeFromERKNS0_7MessageE
_BYTE *__fastcall google::protobuf::BoolValue::MergeFrom(
        google::protobuf::BoolValue *this,
        const google::protobuf::Message *lpsrc)
{
  _BYTE *result; // x0
  google::protobuf::Message *v5; // x2
  _BYTE *v6; // x21
  __int64 v7; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  result = __dynamic_cast(
             lpsrc,
             (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
             (const struct __class_type_info *)&`typeinfo for'google::protobuf::BoolValue,
             0LL);
  if ( result )
  {
    v6 = result;
    v7 = *((_QWORD *)result + 1);
    if ( (v7 & 1) != 0 )
      result = (_BYTE *)sub_10003A25C((char *)this + 8, (v7 & 0xFFFFFFFFFFFFFFFELL) + 8);
    if ( v6[16] )
      *((_BYTE *)this + 16) = 1;
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (_BYTE *)google::protobuf::internal::ReflectionOps::Merge(lpsrc, this, v5);
  }
  return result;
}