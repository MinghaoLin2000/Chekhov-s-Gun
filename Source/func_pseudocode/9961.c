__ZNK3TSP16DocumentMetadata13IsInitializedEv
bool __fastcall TSP::DocumentMetadata::IsInitialized(TSP::DocumentMetadata *this)
{
  _BOOL8 result; // x0
  __int64 v2; // x9
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x10

  if ( (*((_BYTE *)this + 16) & 1) == 0 )
    return 1LL;
  v2 = *((_QWORD *)this + 3);
  v3 = *(unsigned int *)(v2 + 24);
  v4 = *(_QWORD *)(v2 + 32);
  do
  {
    result = (int)v3 < 1;
    if ( (int)v3 < 1 )
      break;
    v5 = *(_QWORD *)(v4 + 8 * v3--);
  }
  while ( (*(_BYTE *)(v5 + 16) & 1) != 0 );
  return result;
}