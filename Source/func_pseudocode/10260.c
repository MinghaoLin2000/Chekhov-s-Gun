__ZNK3TSP12Path_Element12ByteSizeLongEv
__int64 __fastcall TSP::Path_Element::ByteSizeLong(TSP::Path_Element *this)
{
  __int64 v2; // x8
  int v3; // w8
  __int64 v4; // x9
  __int64 v5; // x20
  __int64 v6; // x8
  TSP::Point **v7; // x21
  __int64 v8; // x22
  TSP::Point *v9; // t1
  __int64 v10; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( (*((_BYTE *)this + 16) & 1) != 0 )
  {
    v3 = *((_DWORD *)this + 12);
    if ( v3 < 0 )
      v2 = 11LL;
    else
      v2 = ((9 * (__clz(v3 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  else
  {
    v2 = 0LL;
  }
  v4 = *((int *)this + 8);
  v5 = v2 + v4;
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
    v7 = (TSP::Point **)(v6 + 8);
  else
    v7 = 0LL;
  if ( (_DWORD)v4 )
  {
    v8 = 8 * v4;
    do
    {
      v9 = *v7++;
      v10 = TSP::Point::ByteSizeLong(v9);
      v5 += v10 + ((9 * (__clz(v10 | 1) ^ 0x1F) + 73) >> 6);
      v8 -= 8LL;
    }
    while ( v8 );
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v5, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v5;
    return v5;
  }
}