__ZNK3TSP5Color12ByteSizeLongEv
__int64 __fastcall TSP::Color::ByteSizeLong(TSP::Color *this)
{
  int v1; // w8
  __int64 v2; // x9
  int v3; // w9
  int v4; // w10
  __int64 v5; // x10
  __int64 v6; // x1

  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 0x200) != 0 )
  {
    v3 = *((_DWORD *)this + 15);
    if ( v3 < 0 )
      v2 = 11LL;
    else
      v2 = ((9 * (__clz(v3 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  else
  {
    v2 = 0LL;
  }
  if ( (unsigned __int8)*((_DWORD *)this + 4) )
  {
    if ( (v1 & 1) != 0 )
      v2 += 5LL;
    if ( (v1 & 2) != 0 )
      v2 += 5LL;
    if ( (v1 & 4) != 0 )
      v2 += 5LL;
    if ( (v1 & 8) != 0 )
      v2 += 5LL;
    if ( (v1 & 0x10) != 0 )
      v2 += 5LL;
    if ( (v1 & 0x20) != 0 )
      v2 += 5LL;
    if ( (v1 & 0x40) != 0 )
      v2 += 5LL;
    if ( (v1 & 0x80) != 0 )
      v2 += 5LL;
  }
  if ( (v1 & 0x100) != 0 )
  {
    v4 = *((_DWORD *)this + 14);
    if ( v4 < 0 )
      v5 = 11LL;
    else
      v5 = ((9 * (__clz(v4 | 1) ^ 0x1F) + 73) >> 6) + 1;
    v2 += v5;
  }
  if ( (v1 & 0x400) != 0 )
    v6 = v2 + 5;
  else
    v6 = v2;
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v6, (char *)this + 20);
  *((_DWORD *)this + 5) = v6;
  return v6;
}