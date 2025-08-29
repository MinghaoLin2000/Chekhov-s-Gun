__ZNK3TSP25ReferenceDictionary_Entry13IsInitializedEv
bool __fastcall TSP::ReferenceDictionary_Entry::IsInitialized(TSP::ReferenceDictionary_Entry *this)
{
  int v1; // w8

  v1 = *((_DWORD *)this + 4);
  return (~v1 & 3) == 0
      && ((v1 & 1) == 0 || (*(_BYTE *)(*((_QWORD *)this + 3) + 16LL) & 1) != 0)
      && ((v1 & 2) == 0 || (*(_BYTE *)(*((_QWORD *)this + 4) + 16LL) & 1) != 0);
}