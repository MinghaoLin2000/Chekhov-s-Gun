__ZN3TSP14DataAttributes9MergeFromERKS0_
__int64 __fastcall TSP::DataAttributes::MergeFrom(TSP::DataAttributes *this, const TSP::DataAttributes *a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  result = google::protobuf::internal::ExtensionSet::MergeFrom(
             (TSP::DataAttributes *)((char *)this + 16),
             (const TSP::DataAttributes *)((char *)a2 + 16));
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A25C((char *)this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  }
  return result;
}