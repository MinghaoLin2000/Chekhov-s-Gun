__ZNK3TSP4UUID13IsInitializedEv
bool __fastcall TSP::UUID::IsInitialized(TSP::UUID *this)
{
  return (~*((_DWORD *)this + 4) & 3) == 0;
}