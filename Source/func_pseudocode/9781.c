__ZNK3TSP18PasteboardMetadata13IsInitializedEv
__int64 __fastcall TSP::PasteboardMetadata::IsInitialized(TSP::PasteboardMetadata *this)
{
  __int64 v2; // x8
  __int64 v3; // x20
  char IsInitialized; // w0
  __int64 result; // x0
  int v6; // w8

  if ( (*((_BYTE *)this + 16) & 1) == 0 )
    return 0LL;
  v2 = *((unsigned int *)this + 14);
  while ( (int)v2 >= 1 )
  {
    v3 = v2 - 1;
    IsInitialized = TSP::DataInfo::IsInitialized(*(TSP::DataInfo **)(*((_QWORD *)this + 8) + 8 * v2));
    v2 = v3;
    if ( (IsInitialized & 1) == 0 )
      return 0LL;
  }
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 2) != 0 )
  {
    result = TSP::UUID::IsInitialized(*((TSP::UUID **)this + 13));
    if ( !(_DWORD)result )
      return result;
    v6 = *((_DWORD *)this + 4);
  }
  if ( (v6 & 4) == 0 )
    return 1LL;
  result = TSP::Reference::IsInitialized(*((TSP::Reference **)this + 14));
  if ( (_DWORD)result )
    return 1LL;
  return result;
}