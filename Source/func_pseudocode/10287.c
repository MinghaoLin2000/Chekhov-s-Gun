__ZNK3TSP25ReferenceDictionary_Entry30RequiredFieldsByteSizeFallbackEv
__int64 __fastcall TSP::ReferenceDictionary_Entry::RequiredFieldsByteSizeFallback(TSP::ReferenceDictionary_Entry *this)
{
  int v2; // w8
  __int64 v3; // x20
  unsigned __int64 v4; // x0
  unsigned __int64 v5; // x0

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 1) == 0 )
  {
    v3 = 0LL;
    if ( (v2 & 2) == 0 )
      return v3;
    goto LABEL_5;
  }
  v4 = TSP::Reference::ByteSizeLong(*((TSP::Reference **)this + 3));
  v3 = v4 + ((9 * (__clz(v4 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (*((_DWORD *)this + 4) & 2) != 0 )
  {
LABEL_5:
    v5 = TSP::Reference::ByteSizeLong(*((TSP::Reference **)this + 4));
    v3 += v5 + ((9 * (__clz(v5 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  return v3;
}