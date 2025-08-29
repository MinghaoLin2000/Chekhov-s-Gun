__ZNK3TSP17ViewStateMetadata12ByteSizeLongEv
__int64 __fastcall TSP::ViewStateMetadata::ByteSizeLong(TSP::ComponentInfo **this)
{
  __int64 v2; // x20
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 v8; // x9
  int v9; // w8
  __int64 v10; // x8
  __int64 v11; // x20
  TSP::ComponentInfo *v12; // x9
  TSP::UUID ***v13; // x21
  __int64 v14; // x22
  TSP::UUID **v15; // t1
  unsigned __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x9
  __int64 v20; // x8
  int v21; // w9
  __int64 v22; // x20
  __int64 v23; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( ((_BYTE)this[2] & 1) != 0 )
  {
    v3 = TSP::ComponentInfo::ByteSizeLong(this[12]);
    v2 = v3 + ((9 * (__clz(v3 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  else
  {
    v2 = 0LL;
  }
  v4 = google::protobuf::internal::WireFormatLite::UInt32Size(this + 3);
  v5 = 11LL;
  v6 = ((9 * (__clz(v4 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (int)v4 >= 0 )
    v5 = v6;
  v7 = v5 + v2;
  if ( v4 )
    v8 = v7;
  else
    v8 = v2;
  if ( v4 )
    v9 = v4;
  else
    v9 = 0;
  *((_DWORD *)this + 10) = v9;
  v10 = *((int *)this + 14);
  v11 = v8 + v4 + v10;
  v12 = this[8];
  if ( v12 )
    v13 = (TSP::UUID ***)((char *)v12 + 8);
  else
    v13 = 0LL;
  if ( (_DWORD)v10 )
  {
    v14 = 8 * v10;
    do
    {
      v15 = *v13++;
      v16 = TSP::ObjectUUIDMapEntry::ByteSizeLong(v15);
      v11 += v16 + ((9 * (__clz(v16 | 1) ^ 0x1F) + 73) >> 6);
      v14 -= 8LL;
    }
    while ( v14 );
  }
  v17 = google::protobuf::internal::WireFormatLite::UInt32Size(this + 9);
  v18 = 11LL;
  v19 = ((9 * (__clz(v17 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (int)v17 >= 0 )
    v18 = v19;
  v20 = v18 + v11;
  if ( v17 )
  {
    v21 = v17;
  }
  else
  {
    v20 = v11;
    v21 = 0;
  }
  *((_DWORD *)this + 22) = v21;
  v22 = v20 + v17;
  if ( ((_BYTE)this[2] & 2) != 0 )
  {
    v23 = TSP::UUID::ByteSizeLong(this[13]);
    v22 += v23 + ((9 * (__clz(v23 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  if ( ((_BYTE)this[1] & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize(this + 1, v22, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v22;
    return v22;
  }
}