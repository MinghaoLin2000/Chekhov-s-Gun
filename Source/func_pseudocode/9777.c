__ZNK3TSP18PasteboardMetadata12ByteSizeLongEv
__int64 __fastcall TSP::PasteboardMetadata::ByteSizeLong(TSP::PasteboardMetadata *this)
{
  __int64 v2; // x20
  unsigned __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x8
  __int64 v10; // x9
  int v11; // w8
  __int64 v12; // x8
  __int64 v13; // x20
  __int64 v14; // x9
  TSP::DataInfo **v15; // x21
  __int64 v16; // x22
  TSP::DataInfo *v17; // t1
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  __int64 v22; // x8
  int v23; // w9
  __int64 v24; // x20
  int v25; // w21
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( (*((_BYTE *)this + 16) & 1) != 0 )
  {
    v3 = *((_QWORD *)this + 12) & 0xFFFFFFFFFFFFFFFELL;
    v4 = *(unsigned __int8 *)(v3 + 23);
    v5 = *(_QWORD *)(v3 + 8);
    if ( (v4 & 0x80u) == 0LL )
      v5 = v4;
    v2 = v5 + ((9 * (__clz(v5 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  else
  {
    v2 = 0LL;
  }
  v6 = google::protobuf::internal::WireFormatLite::UInt32Size((char *)this + 24);
  v7 = 11LL;
  v8 = ((9 * (__clz(v6 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (int)v6 >= 0 )
    v7 = v8;
  v9 = v7 + v2;
  if ( v6 )
    v10 = v9;
  else
    v10 = v2;
  if ( v6 )
    v11 = v6;
  else
    v11 = 0;
  *((_DWORD *)this + 10) = v11;
  v12 = *((int *)this + 14);
  v13 = v10 + v6 + v12;
  v14 = *((_QWORD *)this + 8);
  if ( v14 )
    v15 = (TSP::DataInfo **)(v14 + 8);
  else
    v15 = 0LL;
  if ( (_DWORD)v12 )
  {
    v16 = 8 * v12;
    do
    {
      v17 = *v15++;
      v18 = TSP::DataInfo::ByteSizeLong(v17);
      v13 += v18 + ((9 * (__clz(v18 | 1) ^ 0x1F) + 73) >> 6);
      v16 -= 8LL;
    }
    while ( v16 );
  }
  v19 = google::protobuf::internal::WireFormatLite::UInt32Size((char *)this + 72);
  v20 = 11LL;
  v21 = ((9 * (__clz(v19 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (int)v19 >= 0 )
    v20 = v21;
  v22 = v20 + v13;
  if ( v19 )
  {
    v23 = v19;
  }
  else
  {
    v22 = v13;
    v23 = 0;
  }
  *((_DWORD *)this + 22) = v23;
  v24 = v22 + v19;
  v25 = *((_DWORD *)this + 4);
  if ( (v25 & 6) != 0 )
  {
    if ( (v25 & 2) != 0 )
    {
      v26 = TSP::UUID::ByteSizeLong(*((TSP::UUID **)this + 13));
      v24 += v26 + ((9 * (__clz(v26 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
    if ( (v25 & 4) != 0 )
    {
      v27 = TSP::Reference::ByteSizeLong(*((TSP::Reference **)this + 14));
      v24 += v27 + ((9 * (__clz(v27 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v24, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v24;
    return v24;
  }
}