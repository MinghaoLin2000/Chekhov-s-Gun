__ZNK3TSP11MessageInfo30RequiredFieldsByteSizeFallbackEv
__int64 __fastcall TSP::MessageInfo::RequiredFieldsByteSizeFallback(TSP::MessageInfo *this)
{
  int v2; // w9
  __int64 result; // x0

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 2) != 0 )
  {
    result = ((9 * (__clz(*((_DWORD *)this + 50) | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (v2 & 4) == 0 )
      return result;
    goto LABEL_5;
  }
  result = 0LL;
  if ( (v2 & 4) != 0 )
LABEL_5:
    result += ((9 * (__clz(*((_DWORD *)this + 51) | 1) ^ 0x1F) + 73) >> 6) + 1;
  return result;
}