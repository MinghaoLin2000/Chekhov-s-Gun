__ZNK3TSP27ObjectSerializationMetadata12ByteSizeLongEv
__int64 __fastcall TSP::ObjectSerializationMetadata::ByteSizeLong(TSP::ComponentInfo **this)
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
  TSP::DataInfo **v13; // x21
  __int64 v14; // x22
  TSP::DataInfo *v15; // t1
  unsigned __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x20
  TSP::ComponentInfo *v19; // x9
  TSP::UUID ***v20; // x21
  __int64 v21; // x22
  TSP::UUID **v22; // t1
  unsigned __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  __int64 v27; // x8
  int v28; // w9
  __int64 v29; // x20
  int v30; // w21
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( ((_BYTE)this[2] & 4) != 0 )
  {
    v3 = TSP::ComponentInfo::ByteSizeLong(this[17]);
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
    v13 = (TSP::DataInfo **)((char *)v12 + 8);
  else
    v13 = 0LL;
  if ( (_DWORD)v10 )
  {
    v14 = 8 * v10;
    do
    {
      v15 = *v13++;
      v16 = TSP::DataInfo::ByteSizeLong(v15);
      v11 += v16 + ((9 * (__clz(v16 | 1) ^ 0x1F) + 73) >> 6);
      v14 -= 8LL;
    }
    while ( v14 );
  }
  v17 = *((int *)this + 20);
  v18 = v11 + v17;
  v19 = this[11];
  if ( v19 )
    v20 = (TSP::UUID ***)((char *)v19 + 8);
  else
    v20 = 0LL;
  if ( (_DWORD)v17 )
  {
    v21 = 8 * v17;
    do
    {
      v22 = *v20++;
      v23 = TSP::ObjectUUIDMapEntry::ByteSizeLong(v22);
      v18 += v23 + ((9 * (__clz(v23 | 1) ^ 0x1F) + 73) >> 6);
      v21 -= 8LL;
    }
    while ( v21 );
  }
  v24 = google::protobuf::internal::WireFormatLite::UInt32Size(this + 12);
  v25 = 11LL;
  v26 = ((9 * (__clz(v24 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (int)v24 >= 0 )
    v25 = v26;
  v27 = v25 + v18;
  if ( v24 )
  {
    v28 = v24;
  }
  else
  {
    v27 = v18;
    v28 = 0;
  }
  *((_DWORD *)this + 28) = v28;
  v29 = v27 + v24;
  v30 = *((_DWORD *)this + 4);
  if ( (v30 & 3) != 0 )
  {
    if ( (v30 & 1) != 0 )
    {
      v31 = TSP::UUID::ByteSizeLong(this[15]);
      v29 += v31 + ((9 * (__clz(v31 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
    if ( (v30 & 2) != 0 )
    {
      v32 = TSP::UUID::ByteSizeLong(this[16]);
      v29 += v32 + ((9 * (__clz(v32 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
  }
  if ( (v30 & 8) != 0 )
  {
    v33 = TSP::Reference::ByteSizeLong(this[18]);
    v29 += v33 + ((9 * (__clz(v33 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  if ( ((_BYTE)this[1] & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize(this + 1, v29, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v29;
    return v29;
  }
}