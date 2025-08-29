__ZNK3TSP13ComponentInfo30RequiredFieldsByteSizeFallbackEv
__int64 __fastcall TSP::ComponentInfo::RequiredFieldsByteSizeFallback(TSP::ComponentInfo *this)
{
  int v1; // w9
  __int64 v2; // x8
  unsigned __int64 v3; // x8
  __int64 v4; // x10
  __int64 v5; // x8

  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 1) == 0 )
  {
    v2 = 0LL;
    if ( (v1 & 4) == 0 )
      return v2;
    goto LABEL_7;
  }
  v3 = *((_QWORD *)this + 33) & 0xFFFFFFFFFFFFFFFELL;
  v4 = *(unsigned __int8 *)(v3 + 23);
  v5 = *(_QWORD *)(v3 + 8);
  if ( (v4 & 0x80u) == 0LL )
    v5 = v4;
  v2 = v5 + ((9 * (__clz(v5 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v1 & 4) != 0 )
LABEL_7:
    v2 += ((9 * (__clz(*((_QWORD *)this + 35) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
  return v2;
}