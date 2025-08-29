__ZN3TSP8UUIDPath9MergeFromERKN6google8protobuf7MessageE
__int64 __fastcall TSP::UUIDPath::MergeFrom(TSP::UUIDPath *this, const google::protobuf::Message *lpsrc)
{
  const TSP::UUIDPath *v4; // x0
  google::protobuf::Message *v5; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = (const TSP::UUIDPath *)__dynamic_cast(
                                lpsrc,
                                (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                (const struct __class_type_info *)&`typeinfo for'TSP::UUIDPath,
                                0LL);
  if ( v4 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return TSP::UUIDPath::MergeFrom(this, v4);
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ReflectionOps::Merge(lpsrc, this, v5);
  }
}