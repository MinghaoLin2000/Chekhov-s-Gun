__ZNK3TSP11MessageInfo13IsInitializedEv
bool __fastcall TSP::MessageInfo::IsInitialized(TSP::MessageInfo *this)
{
  __int64 v1; // x8
  __int64 v2; // x9
  _BOOL8 result; // x0
  __int64 v4; // x10

  if ( (~*((_DWORD *)this + 4) & 6) != 0 )
    return 0LL;
  v1 = *((unsigned int *)this + 14);
  v2 = *((_QWORD *)this + 8);
  do
  {
    result = (int)v1 < 1;
    if ( (int)v1 < 1 )
      break;
    v4 = *(_QWORD *)(v2 + 8 * v1--);
  }
  while ( (*(_BYTE *)(v4 + 16) & 2) != 0 );
  return result;
}