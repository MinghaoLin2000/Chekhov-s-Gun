__ZNK3TSP15PackageMetadata13IsInitializedEv
__int64 __fastcall TSP::PackageMetadata::IsInitialized(TSP::PackageMetadata *this)
{
  __int64 v2; // x8
  __int64 v3; // x20
  char IsInitialized; // w0
  __int64 v5; // x8
  __int64 v6; // x20
  char v7; // w0
  __int64 v8; // x8
  __int64 v9; // x20
  char v10; // w0
  __int64 result; // x0

  if ( (*((_BYTE *)this + 16) & 4) == 0 )
    return 0LL;
  v2 = *((unsigned int *)this + 8);
  while ( (int)v2 >= 1 )
  {
    v3 = v2 - 1;
    IsInitialized = TSP::ComponentInfo::IsInitialized(*(TSP::ComponentInfo **)(*((_QWORD *)this + 5) + 8 * v2));
    v2 = v3;
    if ( (IsInitialized & 1) == 0 )
      return 0LL;
  }
  v5 = *((unsigned int *)this + 14);
  while ( (int)v5 >= 1 )
  {
    v6 = v5 - 1;
    v7 = TSP::DataInfo::IsInitialized(*(TSP::DataInfo **)(*((_QWORD *)this + 8) + 8 * v5));
    v5 = v6;
    if ( (v7 & 1) == 0 )
      return 0LL;
  }
  v8 = *((unsigned int *)this + 38);
  while ( (int)v8 >= 1 )
  {
    v9 = v8 - 1;
    v10 = TSP::ComponentInfo::IsInitialized(*(TSP::ComponentInfo **)(*((_QWORD *)this + 20) + 8 * v8));
    v8 = v9;
    if ( (v10 & 1) == 0 )
      return 0LL;
  }
  if ( (*((_BYTE *)this + 16) & 2) == 0 )
    return 1LL;
  result = TSP::Reference::IsInitialized(*((TSP::Reference **)this + 22));
  if ( (_DWORD)result )
    return 1LL;
  return result;
}