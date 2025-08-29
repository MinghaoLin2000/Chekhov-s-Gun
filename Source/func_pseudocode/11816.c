__ZN6google8protobuf11UInt32Value9MergeFromERKNS0_7MessageE
_DWORD *__fastcall google::protobuf::UInt32Value::MergeFrom(
        google::protobuf::UInt32Value *this,
        const google::protobuf::Message *lpsrc)
{
  _DWORD *result; // x0
  google::protobuf::Message *v5; // x2
  _DWORD *v6; // x21
  __int64 v7; // x8
  int v8; // w8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  result = __dynamic_cast(
             lpsrc,
             (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
             (const struct __class_type_info *)&`typeinfo for'google::protobuf::UInt32Value,
             0LL);
  if ( result )
  {
    v6 = result;
    v7 = *((_QWORD *)result + 1);
    if ( (v7 & 1) != 0 )
      result = (_DWORD *)sub_10003A25C((char *)this + 8, (v7 & 0xFFFFFFFFFFFFFFFELL) + 8);
    v8 = v6[4];
    if ( v8 )
      *((_DWORD *)this + 4) = v8;
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (_DWORD *)google::protobuf::internal::ReflectionOps::Merge(lpsrc, this, v5);
  }
  return result;
}