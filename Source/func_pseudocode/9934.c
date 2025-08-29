__ZNK3TSP21DataPropertiesEntryV113IsInitializedEv
__int64 __fastcall TSP::DataPropertiesEntryV1::IsInitialized(TSP::DataPropertiesEntryV1 *this)
{
  return *((_DWORD *)this + 4) & 1;
}