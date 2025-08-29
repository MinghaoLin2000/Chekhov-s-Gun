__ZNK3TSP19SparseUUIDPathArray13IsInitializedEv
bool __fastcall TSP::SparseUUIDPathArray::IsInitialized(TSP::SparseUUIDPathArray *this)
{
  _BOOL8 v1; // x19
  __int64 v2; // x8
  __int64 v3; // x20
  __int64 v4; // x21
  bool IsInitialized; // w0

  if ( (*((_BYTE *)this + 16) & 1) == 0 )
    return 0LL;
  v2 = *((unsigned int *)this + 8);
  v3 = *((_QWORD *)this + 5);
  do
  {
    v1 = (int)v2 < 1;
    if ( (int)v2 < 1 )
      break;
    v4 = v2 - 1;
    IsInitialized = TSP::SparseUUIDPathArray_Entry::IsInitialized(*(TSP::SparseUUIDPathArray_Entry **)(v3 + 8 * v2));
    v2 = v4;
  }
  while ( IsInitialized );
  return v1;
}