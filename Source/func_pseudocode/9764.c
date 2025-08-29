__ZNK3TSP16DocumentRevision12ByteSizeLongEv
__int64 __fastcall TSP::DocumentRevision::ByteSizeLong(TSP::DocumentRevision *this)
{
  int v1; // w8
  __int64 v2; // x1
  unsigned __int64 v3; // x9
  __int64 v4; // x10
  __int64 v5; // x9
  int v6; // w8
  __int64 v7; // x8

  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 7) == 0 )
  {
    v2 = 0LL;
    goto LABEL_15;
  }
  if ( (v1 & 1) != 0 )
  {
    v3 = *((_QWORD *)this + 3) & 0xFFFFFFFFFFFFFFFELL;
    v4 = *(unsigned __int8 *)(v3 + 23);
    v5 = *(_QWORD *)(v3 + 8);
    if ( (v4 & 0x80u) == 0LL )
      v5 = v4;
    v2 = v5 + ((9 * (__clz(v5 | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (v1 & 2) == 0 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v2 = 0LL;
  if ( (v1 & 2) != 0 )
LABEL_9:
    v2 += ((9 * (__clz(*((_QWORD *)this + 4) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
LABEL_10:
  if ( (v1 & 4) != 0 )
  {
    v6 = *((_DWORD *)this + 10);
    if ( v6 < 0 )
      v7 = 11LL;
    else
      v7 = ((9 * (__clz(v6 | 1) ^ 0x1F) + 73) >> 6) + 1;
    v2 += v7;
  }
LABEL_15:
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v2, (char *)this + 20);
  *((_DWORD *)this + 5) = v2;
  return v2;
}