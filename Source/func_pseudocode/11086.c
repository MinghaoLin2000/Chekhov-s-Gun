__ZN6google8protobuf20FieldDescriptorProto9MergeFromERKNS0_7MessageE
__int64 __fastcall google::protobuf::FieldDescriptorProto::MergeFrom(
        google::protobuf::FieldDescriptorProto *this,
        const google::protobuf::Message *lpsrc)
{
  const google::protobuf::FieldDescriptorProto *v4; // x0
  google::protobuf::Message *v5; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = (const google::protobuf::FieldDescriptorProto *)__dynamic_cast(
                                                         lpsrc,
                                                         (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                         (const struct __class_type_info *)&`typeinfo for'google::protobuf::FieldDescriptorProto,
                                                         0LL);
  if ( v4 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::FieldDescriptorProto::MergeFrom(this, v4);
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ReflectionOps::Merge(lpsrc, this, v5);
  }
}