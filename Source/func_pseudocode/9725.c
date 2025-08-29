__ZNK3TSP18ObjectUUIDMapEntry13IsInitializedEv
__int64 __fastcall TSP::ObjectUUIDMapEntry::IsInitialized(TSP::ObjectUUIDMapEntry *this)
{
  int v1; // w8
  __int64 result; // x0

  v1 = *((_DWORD *)this + 4);
  if ( (~v1 & 3) != 0 )
    return 0LL;
  if ( (v1 & 1) == 0 )
    return 1LL;
  result = TSP::UUID::IsInitialized(*((TSP::UUID **)this + 3));
  if ( (_DWORD)result )
    return 1LL;
  return result;
}