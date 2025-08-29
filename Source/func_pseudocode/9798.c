__ZNK3TSP8DataInfo13IsInitializedEv
__int64 __fastcall TSP::DataInfo::IsInitialized(TSP::DataInfo *this)
{
  int v1; // w8
  __int64 result; // x0
  __int64 v4; // x10
  __int64 v5; // x9
  __int64 v6; // x10
  __int64 v7; // x11

  v1 = *((_DWORD *)this + 4);
  if ( (~v1 & 0x803) != 0 )
    return 0LL;
  if ( (v1 & 0x100) != 0 )
  {
    result = TSP::DataAttributes::IsInitialized(*((TSP::DataAttributes **)this + 11));
    if ( !(_DWORD)result )
      return result;
    v1 = *((_DWORD *)this + 4);
  }
  if ( (v1 & 0x200) != 0 )
  {
    v4 = *((_QWORD *)this + 12);
    v5 = *(unsigned int *)(v4 + 32);
    v6 = *(_QWORD *)(v4 + 40);
    while ( (int)v5 >= 1 )
    {
      v7 = *(_QWORD *)(v6 + 8 * v5--);
      if ( (*(_BYTE *)(v7 + 16) & 1) == 0 )
        return 0LL;
    }
  }
  if ( (v1 & 0x400) == 0 )
    return 1LL;
  result = TSP::IndexSet::IsInitialized(*((TSP::IndexSet **)this + 13));
  if ( (_DWORD)result )
    return 1LL;
  return result;
}