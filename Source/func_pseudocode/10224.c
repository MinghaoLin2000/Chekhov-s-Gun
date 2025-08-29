__ZNK3TSP4Date13IsInitializedEv
__int64 __fastcall TSP::Date::IsInitialized(TSP::Date *this)
{
  return *((_DWORD *)this + 4) & 1;
}