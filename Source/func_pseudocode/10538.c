__ZNK3TSP17LargeArraySegment12ByteSizeLongEv
__int64 __fastcall TSP::LargeArraySegment::ByteSizeLong(TSP::LargeArraySegment *this)
{
  int v1; // w8
  __int64 v2; // x9
  __int64 v3; // x1
  unsigned __int64 v4; // x9
  __int64 v5; // x10
  __int64 v6; // x9

  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 7) != 0 )
  {
    if ( (v1 & 1) != 0 )
    {
      v4 = *((_QWORD *)this + 3) & 0xFFFFFFFFFFFFFFFELL;
      v5 = *(unsigned __int8 *)(v4 + 23);
      v6 = *(_QWORD *)(v4 + 8);
      if ( (v5 & 0x80u) == 0LL )
        v6 = v5;
      v2 = v6 + ((9 * (__clz(v6 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
    else
    {
      v2 = 0LL;
    }
    if ( (v1 & 2) != 0 )
      v3 = v2 + 2;
    else
      v3 = v2;
    if ( (v1 & 4) != 0 )
      v3 += ((9 * (__clz(*((_DWORD *)this + 9) | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  else
  {
    v3 = 0LL;
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v3, (char *)this + 20);
  *((_DWORD *)this + 5) = v3;
  return v3;
}