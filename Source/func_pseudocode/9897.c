__ZNK3TSP34ObjectSerializationDirectory_Entry13SetCachedSizeEi
__int64 __fastcall TSP::ObjectSerializationDirectory_Entry::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 20) = a2;
  return this;
}