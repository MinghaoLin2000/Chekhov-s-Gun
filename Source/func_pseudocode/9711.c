__ZNK3TSP22ComponentDataReference13IsInitializedEv
bool __fastcall TSP::ComponentDataReference::IsInitialized(TSP::ComponentDataReference *this)
{
  _BOOL8 result; // x0
  __int64 v2; // x9
  __int64 v3; // x8
  __int64 v4; // x11

  if ( (*((_BYTE *)this + 16) & 1) == 0 )
    return 0LL;
  v2 = *((unsigned int *)this + 8);
  v3 = *((_QWORD *)this + 5);
  do
  {
    result = (int)v2 < 1;
    if ( (int)v2 < 1 )
      break;
    v4 = *(_QWORD *)(v3 + 8 * v2--);
  }
  while ( (~*(_DWORD *)(v4 + 16) & 3) == 0 );
  return result;
}