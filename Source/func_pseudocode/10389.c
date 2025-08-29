__ZNK3TSP16UUIDCoordArchive13IsInitializedEv
bool __fastcall TSP::UUIDCoordArchive::IsInitialized(TSP::UUIDCoordArchive *this)
{
  int v1; // w8

  v1 = *((_DWORD *)this + 4);
  return (~v1 & 3) == 0
      && ((v1 & 1) == 0 || (~*(_DWORD *)(*((_QWORD *)this + 3) + 16LL) & 3) == 0)
      && ((v1 & 2) == 0 || (~*(_DWORD *)(*((_QWORD *)this + 4) + 16LL) & 3) == 0);
}