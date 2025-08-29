__ZNK3TSP5Range13IsInitializedEv
bool __fastcall TSP::Range::IsInitialized(TSP::Range *this)
{
  return (~*((_DWORD *)this + 4) & 3) == 0;
}