__ZNK3TSP16LargeObjectArray13IsInitializedEv
bool __fastcall TSP::LargeObjectArray::IsInitialized(TSP::LargeObjectArray *this)
{
  _BOOL8 result; // x0

  if ( (*((_BYTE *)this + 16) & 1) == 0 )
    return 1LL;
  result = TSP::LargeArray::IsInitialized(*((TSP::LargeArray **)this + 3));
  if ( result )
    return 1LL;
  return result;
}