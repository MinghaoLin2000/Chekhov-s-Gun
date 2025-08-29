__ZNK3TSP24DatabaseImageDataArchive30RequiredFieldsByteSizeFallbackEv
__int64 __fastcall TSP::DatabaseImageDataArchive::RequiredFieldsByteSizeFallback(TSP::DatabaseImageDataArchive *this)
{
  int v2; // w8
  __int64 result; // x0
  __int64 v4; // x0
  int v5; // w8
  __int64 v6; // x8

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 1) != 0 )
  {
    v4 = TSP::DatabaseDataArchive::ByteSizeLong(*((TSP::DatabaseDataArchive **)this + 3));
    result = v4 + ((9 * (__clz(v4 | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (*((_DWORD *)this + 4) & 2) == 0 )
      return result;
  }
  else
  {
    result = 0LL;
    if ( (v2 & 2) == 0 )
      return result;
  }
  v5 = *((_DWORD *)this + 8);
  if ( v5 < 0 )
    v6 = 11LL;
  else
    v6 = ((9 * (__clz(v5 | 1) ^ 0x1F) + 73) >> 6) + 1;
  result += v6;
  return result;
}