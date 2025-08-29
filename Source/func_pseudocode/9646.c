__ZNK3TSP9FieldInfo13IsInitializedEv
__int64 __fastcall TSP::FieldInfo::IsInitialized(TSP::FieldInfo *this)
{
  return (*((unsigned __int8 *)this + 16) >> 1) & 1;
}