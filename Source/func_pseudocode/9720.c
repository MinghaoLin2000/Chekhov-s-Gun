__ZNK3TSP18ObjectUUIDMapEntry30RequiredFieldsByteSizeFallbackEv
__int64 __fastcall TSP::ObjectUUIDMapEntry::RequiredFieldsByteSizeFallback(TSP::ObjectUUIDMapEntry *this)
{
  int v2; // w8
  __int64 result; // x0
  __int64 v4; // x0

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 1) != 0 )
  {
    v4 = TSP::UUID::ByteSizeLong(*((TSP::UUID **)this + 3));
    result = v4 + ((9 * (__clz(v4 | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (*((_DWORD *)this + 4) & 2) == 0 )
      return result;
    goto LABEL_5;
  }
  result = 0LL;
  if ( (v2 & 2) != 0 )
LABEL_5:
    result += ((9 * (__clz(*((_QWORD *)this + 4) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
  return result;
}