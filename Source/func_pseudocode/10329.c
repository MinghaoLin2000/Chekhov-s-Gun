__ZNK3TSP13CFUUIDArchive12ByteSizeLongEv
__int64 __fastcall TSP::CFUUIDArchive::ByteSizeLong(TSP::CFUUIDArchive *this)
{
  int v1; // w8
  __int64 v2; // x1
  unsigned __int64 v3; // x9
  __int64 v4; // x10
  __int64 v5; // x9

  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 0x1F) == 0 )
  {
    v2 = 0LL;
    goto LABEL_14;
  }
  if ( (v1 & 1) == 0 )
  {
    v2 = 0LL;
    if ( (v1 & 2) == 0 )
      goto LABEL_10;
LABEL_9:
    v2 += ((9 * (__clz(*((_DWORD *)this + 8) | 1) ^ 0x1F) + 73) >> 6) + 1;
    goto LABEL_10;
  }
  v3 = *((_QWORD *)this + 3) & 0xFFFFFFFFFFFFFFFELL;
  v4 = *(unsigned __int8 *)(v3 + 23);
  v5 = *(_QWORD *)(v3 + 8);
  if ( (v4 & 0x80u) == 0LL )
    v5 = v4;
  v2 = v5 + ((9 * (__clz(v5 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v1 & 2) != 0 )
    goto LABEL_9;
LABEL_10:
  if ( (v1 & 4) != 0 )
  {
    v2 += ((9 * (__clz(*((_DWORD *)this + 9) | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (v1 & 8) == 0 )
    {
LABEL_12:
      if ( (v1 & 0x10) == 0 )
        goto LABEL_14;
      goto LABEL_13;
    }
  }
  else if ( (v1 & 8) == 0 )
  {
    goto LABEL_12;
  }
  v2 += ((9 * (__clz(*((_DWORD *)this + 10) | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v1 & 0x10) != 0 )
LABEL_13:
    v2 += ((9 * (__clz(*((_DWORD *)this + 11) | 1) ^ 0x1F) + 73) >> 6) + 1;
LABEL_14:
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v2, (char *)this + 20);
  *((_DWORD *)this + 5) = v2;
  return v2;
}