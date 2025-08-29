__ZN3TSP16DocumentRevision9MergeFromERKN6google8protobuf7MessageE
__int64 __fastcall TSP::DocumentRevision::MergeFrom(
        TSP::DocumentRevision *this,
        const google::protobuf::Message *lpsrc)
{
  const TSP::DocumentRevision *v4; // x0
  google::protobuf::Message *v5; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = (const TSP::DocumentRevision *)__dynamic_cast(
                                        lpsrc,
                                        (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                        (const struct __class_type_info *)&`typeinfo for'TSP::DocumentRevision,
                                        0LL);
  if ( v4 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return TSP::DocumentRevision::MergeFrom((__int64)this, v4);
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ReflectionOps::Merge(lpsrc, this, v5);
  }
}