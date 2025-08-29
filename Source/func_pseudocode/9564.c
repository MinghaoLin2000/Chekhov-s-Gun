__ZNK3TSP19DatabaseDataArchive30RequiredFieldsByteSizeFallbackEv
__int64 __fastcall TSP::DatabaseDataArchive::RequiredFieldsByteSizeFallback(TSP::DatabaseDataArchive *this)
{
  int v1; // w8
  __int64 v2; // x9
  unsigned __int64 v3; // x9
  __int64 v4; // x10
  __int64 v5; // x9

  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 2) != 0 )
  {
    v3 = *((_QWORD *)this + 4) & 0xFFFFFFFFFFFFFFFELL;
    v4 = *(unsigned __int8 *)(v3 + 23);
    v5 = *(_QWORD *)(v3 + 8);
    if ( (v4 & 0x80u) == 0LL )
      v5 = v4;
    v2 = v5 + ((9 * (__clz(v5 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  else
  {
    v2 = 0LL;
  }
  if ( (v1 & 0x20) != 0 )
    return v2 + 2;
  else
    return v2;
}