__ZNK3TSP11FeatureInfo13IsInitializedEv
__int64 __fastcall TSP::FeatureInfo::IsInitialized(TSP::FeatureInfo *this)
{
  return *((_DWORD *)this + 4) & 1;
}