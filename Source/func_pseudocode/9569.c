__ZNK3TSP19DatabaseDataArchive13IsInitializedEv
__int64 __fastcall TSP::DatabaseDataArchive::IsInitialized(TSP::DatabaseDataArchive *this)
{
  int v1; // w8
  __int64 result; // x0

  v1 = *((_DWORD *)this + 4);
  if ( (~v1 & 0x22) != 0 )
    return 0LL;
  if ( (v1 & 4) == 0 )
    return 1LL;
  result = TSP::Reference::IsInitialized(*((TSP::Reference **)this + 5));
  if ( (_DWORD)result )
    return 1LL;
  return result;
}