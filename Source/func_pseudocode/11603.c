__ZN6google8protobuf5Empty9MergeFromERKNS0_7MessageE
_QWORD *__fastcall google::protobuf::Empty::MergeFrom(
        google::protobuf::Empty *this,
        const google::protobuf::Message *lpsrc)
{
  _QWORD *result; // x0
  google::protobuf::Message *v5; // x2
  __int64 v6; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  result = __dynamic_cast(
             lpsrc,
             (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
             (const struct __class_type_info *)&`typeinfo for'google::protobuf::Empty,
             0LL);
  if ( result )
  {
    v6 = result[1];
    if ( (v6 & 1) != 0 )
    {
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (_QWORD *)sub_10003A25C((char *)this + 8, (v6 & 0xFFFFFFFFFFFFFFFELL) + 8);
    }
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (_QWORD *)google::protobuf::internal::ReflectionOps::Merge(lpsrc, this, v5);
  }
  return result;
}