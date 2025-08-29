__ZNK3TSP5Point13IsInitializedEv
bool __fastcall TSP::Point::IsInitialized(TSP::Point *this)
{
  return (~*((_DWORD *)this + 4) & 3) == 0;
}