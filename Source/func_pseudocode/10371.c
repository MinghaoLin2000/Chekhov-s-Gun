__ZNK3TSP19UUIDMultiMapArchive12ByteSizeLongEv
__int64 __fastcall TSP::UUIDMultiMapArchive::ByteSizeLong(TSP::UUIDMultiMapArchive *this)
{
  __int64 v2; // x20
  __int64 v3; // x8
  TSP::UUID **v4; // x21
  __int64 v5; // x22
  TSP::UUID *v6; // t1
  unsigned __int64 v7; // x0
  __int64 v8; // x8
  __int64 v9; // x20
  __int64 v10; // x9
  TSP::UUID **v11; // x21
  __int64 v12; // x22
  TSP::UUID *v13; // t1
  unsigned __int64 v14; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((int *)this + 6);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    v4 = (TSP::UUID **)(v3 + 8);
  else
    v4 = 0LL;
  if ( (_DWORD)v2 )
  {
    v5 = 8 * v2;
    do
    {
      v6 = *v4++;
      v7 = TSP::UUID::ByteSizeLong(v6);
      v2 += v7 + ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6);
      v5 -= 8LL;
    }
    while ( v5 );
  }
  else
  {
    v2 = 0LL;
  }
  v8 = *((int *)this + 12);
  v9 = v2 + v8;
  v10 = *((_QWORD *)this + 7);
  if ( v10 )
    v11 = (TSP::UUID **)(v10 + 8);
  else
    v11 = 0LL;
  if ( (_DWORD)v8 )
  {
    v12 = 8 * v8;
    do
    {
      v13 = *v11++;
      v14 = TSP::UUID::ByteSizeLong(v13);
      v9 += v14 + ((9 * (__clz(v14 | 1) ^ 0x1F) + 73) >> 6);
      v12 -= 8LL;
    }
    while ( v12 );
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v9, (char *)this + 64);
  }
  else
  {
    *((_DWORD *)this + 16) = v9;
    return v9;
  }
}