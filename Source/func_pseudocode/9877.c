__ZNK3TSP17ViewStateMetadata13IsInitializedEv
__int64 __fastcall TSP::ViewStateMetadata::IsInitialized(TSP::ViewStateMetadata *this)
{
  __int64 result; // x0
  int v3; // w8

  if ( (*((_BYTE *)this + 16) & 1) == 0 )
    return 0LL;
  result = sub_1000428B0((char *)this + 48);
  if ( (_DWORD)result )
  {
    v3 = *((_DWORD *)this + 4);
    if ( (v3 & 1) != 0 )
    {
      result = TSP::ComponentInfo::IsInitialized(*((TSP::ComponentInfo **)this + 12));
      if ( !(_DWORD)result )
        return result;
      v3 = *((_DWORD *)this + 4);
    }
    if ( (v3 & 2) == 0 )
      return 1LL;
    result = TSP::UUID::IsInitialized(*((TSP::UUID **)this + 13));
    if ( (_DWORD)result )
      return 1LL;
  }
  return result;
}