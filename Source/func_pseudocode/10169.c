__ZNK3TSP6Pose3D12ByteSizeLongEv
__int64 __fastcall TSP::Pose3D::ByteSizeLong(TSP::Pose3D *this)
{
  int v1; // w8
  __int64 v2; // x10
  __int64 v3; // x1

  v1 = *((_DWORD *)this + 4);
  v2 = 5LL;
  if ( (v1 & 1) == 0 )
    v2 = 0LL;
  if ( (v1 & 2) != 0 )
    v2 += 5LL;
  if ( (v1 & 4) != 0 )
    v2 += 5LL;
  if ( (~v1 & 7) != 0 )
    v3 = v2;
  else
    v3 = 15LL;
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v3, (char *)this + 20);
  *((_DWORD *)this + 5) = v3;
  return v3;
}