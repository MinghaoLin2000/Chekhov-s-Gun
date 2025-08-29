__ZNK3TSP19ReferenceDictionary13IsInitializedEv
bool __fastcall TSP::ReferenceDictionary::IsInitialized(TSP::ReferenceDictionary *this)
{
  __int64 v1; // x8
  __int64 v2; // x19
  int v3; // w20
  __int64 v4; // x21
  bool IsInitialized; // w0

  v1 = *((unsigned int *)this + 6);
  v2 = *((_QWORD *)this + 4);
  do
  {
    v3 = v1;
    if ( (int)v1 < 1 )
      break;
    v4 = v1 - 1;
    IsInitialized = TSP::ReferenceDictionary_Entry::IsInitialized(*(TSP::ReferenceDictionary_Entry **)(v2 + 8 * v1));
    v1 = v4;
  }
  while ( IsInitialized );
  return v3 < 1;
}