__ZNK3TSP21LargeUUIDArraySegment13IsInitializedEv
bool __fastcall TSP::LargeUUIDArraySegment::IsInitialized(TSP::LargeUUIDArraySegment *this)
{
  __int64 v1; // x9
  int v2; // w11
  __int64 v3; // x12

  v1 = *((unsigned int *)this + 8);
  do
  {
    v2 = v1;
    if ( (int)v1 < 1 )
      break;
    v3 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v1--);
  }
  while ( (~*(_DWORD *)(v3 + 16) & 3) == 0 );
  return v2 < 1;
}