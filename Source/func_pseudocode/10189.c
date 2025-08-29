__ZNK3TSP4Rect13IsInitializedEv
bool __fastcall TSP::Rect::IsInitialized(TSP::Rect *this)
{
  int v1; // w8

  v1 = *((_DWORD *)this + 4);
  return (~v1 & 3) == 0
      && ((v1 & 1) == 0 || (~*(_DWORD *)(*((_QWORD *)this + 3) + 16LL) & 3) == 0)
      && ((v1 & 2) == 0 || (~*(_DWORD *)(*((_QWORD *)this + 4) + 16LL) & 3) == 0);
}