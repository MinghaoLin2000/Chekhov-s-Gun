__ZNK3TSP8DataInfo30RequiredFieldsByteSizeFallbackEv
__int64 __fastcall TSP::DataInfo::RequiredFieldsByteSizeFallback(TSP::DataInfo *this)
{
  int v1; // w9
  __int64 v2; // x8
  unsigned __int64 v3; // x8
  __int64 v4; // x10
  __int64 v5; // x8
  unsigned __int64 v6; // x10
  __int64 v7; // x11
  __int64 v8; // x10

  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 1) == 0 )
  {
    v2 = 0LL;
    if ( (v1 & 2) == 0 )
      goto LABEL_10;
    goto LABEL_7;
  }
  v3 = *((_QWORD *)this + 3) & 0xFFFFFFFFFFFFFFFELL;
  v4 = *(unsigned __int8 *)(v3 + 23);
  v5 = *(_QWORD *)(v3 + 8);
  if ( (v4 & 0x80u) == 0LL )
    v5 = v4;
  v2 = v5 + ((9 * (__clz(v5 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v1 & 2) != 0 )
  {
LABEL_7:
    v6 = *((_QWORD *)this + 4) & 0xFFFFFFFFFFFFFFFELL;
    v7 = *(unsigned __int8 *)(v6 + 23);
    v8 = *(_QWORD *)(v6 + 8);
    if ( (v7 & 0x80u) == 0LL )
      v8 = v7;
    v2 += v8 + ((9 * (__clz(v8 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
LABEL_10:
  if ( (v1 & 0x800) != 0 )
    v2 += ((9 * (__clz(*((_QWORD *)this + 14) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
  return v2;
}