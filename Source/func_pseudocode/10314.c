__ZNK3TSP4UUID30RequiredFieldsByteSizeFallbackEv
unsigned __int64 __fastcall TSP::UUID::RequiredFieldsByteSizeFallback(TSP::UUID *this)
{
  int v1; // w9
  unsigned __int64 v2; // x8

  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 1) == 0 )
  {
    v2 = 0LL;
    if ( (v1 & 2) == 0 )
      return v2;
    goto LABEL_5;
  }
  v2 = ((9 * (__clz(*((_QWORD *)this + 3) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
  if ( (v1 & 2) != 0 )
LABEL_5:
    v2 += ((9 * (__clz(*((_QWORD *)this + 4) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
  return v2;
}