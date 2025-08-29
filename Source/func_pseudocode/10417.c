__ZNK3TSP21SparseUUIDArray_Entry13IsInitializedEv
bool __fastcall TSP::SparseUUIDArray_Entry::IsInitialized(TSP::SparseUUIDArray_Entry *this)
{
  int v1; // w8

  v1 = *((_DWORD *)this + 4);
  return (~v1 & 3) == 0 && ((v1 & 1) == 0 || (~*(_DWORD *)(*((_QWORD *)this + 3) + 16LL) & 3) == 0);
}