__ZNK3TSP12DataMetadata13IsInitializedEv
__int64 __fastcall TSP::DataMetadata::IsInitialized(TSP::DataMetadata *this)
{
  __int64 result; // x0

  if ( (*((_BYTE *)this + 16) & 1) == 0 )
    return 1LL;
  result = TSP::Color::IsInitialized(*((TSP::Color **)this + 3));
  if ( (_DWORD)result )
    return 1LL;
  return result;
}