__ZNK3TSP4Size13IsInitializedEv
bool __fastcall TSP::Size::IsInitialized(TSP::Size *this)
{
  return (~*((_DWORD *)this + 4) & 3) == 0;
}