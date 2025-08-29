__ZNK3TSP9Reference13IsInitializedEv
__int64 __fastcall TSP::Reference::IsInitialized(TSP::Reference *this)
{
  return *((_DWORD *)this + 4) & 1;
}