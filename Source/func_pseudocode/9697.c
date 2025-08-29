__ZNK3TSP38ComponentDataReference_ObjectReference13IsInitializedEv
bool __fastcall TSP::ComponentDataReference_ObjectReference::IsInitialized(
        TSP::ComponentDataReference_ObjectReference *this)
{
  return (~*((_DWORD *)this + 4) & 3) == 0;
}