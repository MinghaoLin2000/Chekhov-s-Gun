__ZN3TSP11FeatureInfo8CopyFromERKN6google8protobuf7MessageE
TSP::FeatureInfo *__fastcall TSP::FeatureInfo::CopyFrom(TSP::FeatureInfo *this, const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::FeatureInfo *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::FeatureInfo::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::FeatureInfo *)TSP::FeatureInfo::MergeFrom(v4, a2);
  }
  return this;
}