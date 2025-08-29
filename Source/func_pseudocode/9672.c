__ZNK3TSP13ComponentInfo13IsInitializedEv
__int64 __fastcall TSP::ComponentInfo::IsInitialized(TSP::ComponentInfo *this)
{
  __int64 i; // x8
  __int64 v3; // x10
  __int64 result; // x0
  __int64 j; // x8
  __int64 v6; // x10
  __int64 v7; // x8
  __int64 v8; // x10

  if ( (~*((_DWORD *)this + 4) & 5) != 0 )
    return 0LL;
  for ( i = *((unsigned int *)this + 20); (int)i >= 1; --i )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * i);
    if ( (*(_BYTE *)(v3 + 16) & 1) == 0 )
      return 0LL;
  }
  result = sub_10004283C((char *)this + 96);
  if ( (_DWORD)result )
  {
    result = sub_1000428B0((char *)this + 120);
    if ( (_DWORD)result )
    {
      for ( j = *((unsigned int *)this + 38); (int)j >= 1; --j )
      {
        v6 = *(_QWORD *)(*((_QWORD *)this + 20) + 8 * j);
        if ( (*(_BYTE *)(v6 + 16) & 1) == 0 )
          return 0LL;
      }
      v7 = *((unsigned int *)this + 56);
      do
      {
        result = (int)v7 < 1;
        if ( (int)v7 < 1 )
          break;
        v8 = *(_QWORD *)(*((_QWORD *)this + 29) + 8 * v7--);
      }
      while ( (*(_BYTE *)(v8 + 16) & 1) != 0 );
    }
  }
  return result;
}