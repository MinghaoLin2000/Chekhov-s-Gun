__ZN3TSP6Pose3D8CopyFromERKN6google8protobuf7MessageE
TSP::Pose3D *__fastcall TSP::Pose3D::CopyFrom(TSP::Pose3D *this, const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::Pose3D *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::Pose3D::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::Pose3D *)TSP::Pose3D::MergeFrom(v4, a2);
  }
  return this;
}