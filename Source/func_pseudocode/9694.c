__ZN3TSP38ComponentDataReference_ObjectReference9MergeFromERKN6google8protobuf7MessageE
__int64 __fastcall TSP::ComponentDataReference_ObjectReference::MergeFrom(
        TSP::ComponentDataReference_ObjectReference *this,
        const google::protobuf::Message *lpsrc)
{
  const TSP::ComponentDataReference_ObjectReference *v4; // x0
  google::protobuf::Message *v5; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = (const TSP::ComponentDataReference_ObjectReference *)__dynamic_cast(
                                                              lpsrc,
                                                              (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                              (const struct __class_type_info *)&`typeinfo for'TSP::ComponentDataReference_ObjectReference,
                                                              0LL);
  if ( v4 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return TSP::ComponentDataReference_ObjectReference::MergeFrom(this, v4);
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ReflectionOps::Merge(lpsrc, this, v5);
  }
}