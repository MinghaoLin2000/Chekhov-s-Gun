__ZNK3TSP25SparseUUIDPathArray_Entry13IsInitializedEv
bool __fastcall TSP::SparseUUIDPathArray_Entry::IsInitialized(TSP::SparseUUIDPathArray_Entry *this)
{
  int v1; // w8
  _BOOL8 result; // x0
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x8
  __int64 v6; // x11

  v1 = *((_DWORD *)this + 4);
  if ( (~v1 & 3) != 0 )
    return 0LL;
  if ( (v1 & 1) == 0 )
    return 1LL;
  v3 = *((_QWORD *)this + 3);
  v4 = *(unsigned int *)(v3 + 24);
  v5 = *(_QWORD *)(v3 + 32);
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