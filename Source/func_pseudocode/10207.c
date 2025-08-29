__ZNK3TSP5Range30RequiredFieldsByteSizeFallbackEv
__int64 __fastcall TSP::Range::RequiredFieldsByteSizeFallback(TSP::Range *this)
{
  int v2; // w9
  __int64 result; // x0

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 1) != 0 )
  {
    result = ((9 * (__clz(*((_DWORD *)this + 6) | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (v2 & 2) == 0 )
      return result;
    goto LABEL_5;
  }
  result = 0LL;
  if ( (v2 & 2) != 0 )
LABEL_5:
    result += ((9 * (__clz(*((_DWORD *)this + 7) | 1) ^ 0x1F) + 73) >> 6) + 1;
  return result;
}