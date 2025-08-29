__ZNK3TSP13DataReference13IsInitializedEv
__int64 __fastcall TSP::DataReference::IsInitialized(TSP::DataReference *this)
{
  return *((_DWORD *)this + 4) & 1;
}