__ZNK3TSP15UUIDRectArchive13IsInitializedEv
bool __fastcall TSP::UUIDRectArchive::IsInitialized(TSP::UUIDRectArchive *this)
{
  __int64 v1; // x9
  __int64 v2; // x11
  _BOOL8 result; // x0
  __int64 v4; // x9
  __int64 v5; // x8
  __int64 v6; // x11

  v1 = *((unsigned int *)this + 6);
  while ( (int)v1 >= 1 )
  {
    v2 = *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v1--);
    if ( (~*(_DWORD *)(v2 + 16) & 3) != 0 )
      return 0LL;
  }
  v4 = *((unsigned int *)this + 12);
  v5 = *((_QWORD *)this + 7);
  do
  {
    result = (int)v4 < 1;
    if ( (int)v4 < 1 )
      break;
    v6 = *(_QWORD *)(v5 + 8 * v4--);
  }
  while ( (~*(_DWORD *)(v6 + 16) & 3) == 0 );
  return result;
}