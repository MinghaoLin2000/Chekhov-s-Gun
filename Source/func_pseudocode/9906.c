__ZNK3TSP34ObjectSerializationDirectory_Entry13IsInitializedEv
bool __fastcall TSP::ObjectSerializationDirectory_Entry::IsInitialized(TSP::ObjectSerializationDirectory_Entry *this)
{
  return (~*((_DWORD *)this + 4) & 7) == 0;
}