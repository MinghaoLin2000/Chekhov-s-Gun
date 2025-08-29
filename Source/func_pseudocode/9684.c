__ZNK3TSP26ComponentExternalReference13IsInitializedEv
__int64 __fastcall TSP::ComponentExternalReference::IsInitialized(TSP::ComponentExternalReference *this)
{
  return *((_DWORD *)this + 4) & 1;
}