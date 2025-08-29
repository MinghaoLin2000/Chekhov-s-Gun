__ZN6google8protobuf12OneofOptions9MergeFromERKNS0_7MessageE
__int64 __fastcall google::protobuf::OneofOptions::MergeFrom(
        google::protobuf::OneofOptions *this,
        const google::protobuf::Message *lpsrc)
{
  const google::protobuf::OneofOptions *v4; // x0
  google::protobuf::Message *v5; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = (const google::protobuf::OneofOptions *)__dynamic_cast(
                                                 lpsrc,
                                                 (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                 (const struct __class_type_info *)&`typeinfo for'google::protobuf::OneofOptions,
                                                 0LL);
  if ( v4 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::OneofOptions::MergeFrom(this, v4);
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ReflectionOps::Merge(lpsrc, this, v5);
  }
}