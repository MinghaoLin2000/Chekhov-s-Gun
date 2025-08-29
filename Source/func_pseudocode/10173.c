__ZNK3TSP6Pose3D13IsInitializedEv
bool __fastcall TSP::Pose3D::IsInitialized(TSP::Pose3D *this)
{
  return (~*((_DWORD *)this + 4) & 7) == 0;
}