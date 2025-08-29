__ZNK3TSP36DataMetadataMap_DataMetadataMapEntry13IsInitializedEv
__int64 __fastcall TSP::DataMetadataMap_DataMetadataMapEntry::IsInitialized(
        TSP::DataMetadataMap_DataMetadataMapEntry *this)
{
  int v1; // w8
  __int64 result; // x0

  v1 = *((_DWORD *)this + 4);
  if ( (~v1 & 3) != 0 )
    return 0LL;
  if ( (v1 & 1) == 0 )
    return 1LL;
  result = TSP::Reference::IsInitialized(*((TSP::Reference **)this + 3));
  if ( (_DWORD)result )
    return 1LL;
  return result;
}