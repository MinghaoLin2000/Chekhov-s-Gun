__ZNK3TSP9Reference12ByteSizeLongEv
unsigned __int64 __fastcall TSP::Reference::ByteSizeLong(TSP::Reference *this)
{
  int v1; // w8
  unsigned __int64 v2; // x1
  int v3; // w9
  __int64 v4; // x9

  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 1) != 0 )
    v2 = ((9 * (__clz(*((_QWORD *)this + 3) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
  else
    v2 = 0LL;
  if ( (v1 & 6) != 0 )
  {
    if ( (v1 & 2) != 0 )
    {
      v3 = *((_DWORD *)this + 8);
      if ( v3 < 0 )
        v4 = 11LL;
      else
        v4 = ((9 * (__clz(v3 | 1) ^ 0x1F) + 73) >> 6) + 1;
      v2 += v4;
    }
    if ( (v1 & 4) != 0 )
      v2 += 2LL;
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v2, (char *)this + 20);
  *((_DWORD *)this + 5) = v2;
  return v2;
}