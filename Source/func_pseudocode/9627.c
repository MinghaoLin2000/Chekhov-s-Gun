__ZNK3TSP11MessageInfo12ByteSizeLongEv
__int64 __fastcall TSP::MessageInfo::ByteSizeLong(TSP::FieldPath **this)
{
  __int64 v2; // x20
  __int64 v3; // x0
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x8
  __int64 v7; // x9
  int v8; // w8
  __int64 v9; // x8
  __int64 v10; // x20
  TSP::FieldPath *v11; // x9
  TSP::FieldInfo **v12; // x21
  __int64 v13; // x22
  TSP::FieldInfo *v14; // t1
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  __int64 v19; // x8
  int v20; // w9
  __int64 v21; // x20
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  __int64 v25; // x8
  int v26; // w9
  __int64 v27; // x20
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  __int64 v31; // x8
  __int64 v32; // x9
  int v33; // w8
  __int64 v34; // x8
  __int64 v35; // x20
  TSP::FieldPath *v36; // x9
  TSP::FieldPath **v37; // x21
  __int64 v38; // x22
  TSP::FieldPath *v39; // t1
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x9
  __int64 v44; // x8
  int v45; // w9
  __int64 v46; // x20
  int v47; // w21
  __int64 v48; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( (~*((_DWORD *)this + 4) & 6) != 0 )
    v2 = TSP::MessageInfo::RequiredFieldsByteSizeFallback((TSP::MessageInfo *)this);
  else
    v2 = ((9 * (__clz(*((_DWORD *)this + 50) | 1) ^ 0x1F) + 73) >> 6)
       + ((9 * (__clz(*((_DWORD *)this + 51) | 1) ^ 0x1F) + 73) >> 6)
       + 2;
  v3 = google::protobuf::internal::WireFormatLite::UInt32Size(this + 3);
  v4 = 11LL;
  v5 = ((9 * (__clz(v3 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (int)v3 >= 0 )
    v4 = v5;
  v6 = v4 + v2;
  if ( v3 )
    v7 = v6;
  else
    v7 = v2;
  if ( v3 )
    v8 = v3;
  else
    v8 = 0;
  *((_DWORD *)this + 10) = v8;
  v9 = *((int *)this + 14);
  v10 = v7 + v3 + v9;
  v11 = this[8];
  if ( v11 )
    v12 = (TSP::FieldInfo **)((char *)v11 + 8);
  else
    v12 = 0LL;
  if ( (_DWORD)v9 )
  {
    v13 = 8 * v9;
    do
    {
      v14 = *v12++;
      v15 = TSP::FieldInfo::ByteSizeLong(v14);
      v10 += v15 + ((9 * (__clz(v15 | 1) ^ 0x1F) + 73) >> 6);
      v13 -= 8LL;
    }
    while ( v13 );
  }
  v16 = google::protobuf::internal::WireFormatLite::UInt64Size(this + 9);
  v17 = 11LL;
  v18 = ((9 * (__clz(v16 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (int)v16 >= 0 )
    v17 = v18;
  v19 = v17 + v10;
  if ( v16 )
  {
    v20 = v16;
  }
  else
  {
    v19 = v10;
    v20 = 0;
  }
  *((_DWORD *)this + 22) = v20;
  v21 = v19 + v16;
  v22 = google::protobuf::internal::WireFormatLite::UInt64Size(this + 12);
  v23 = 11LL;
  v24 = ((9 * (__clz(v22 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (int)v22 >= 0 )
    v23 = v24;
  v25 = v23 + v21;
  if ( v22 )
  {
    v26 = v22;
  }
  else
  {
    v25 = v21;
    v26 = 0;
  }
  *((_DWORD *)this + 28) = v26;
  v27 = v25 + v22;
  v28 = google::protobuf::internal::WireFormatLite::UInt32Size(this + 15);
  v29 = 11LL;
  v30 = ((9 * (__clz(v28 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (int)v28 >= 0 )
    v29 = v30;
  v31 = v29 + v27;
  if ( v28 )
    v32 = v31;
  else
    v32 = v27;
  if ( v28 )
    v33 = v28;
  else
    v33 = 0;
  *((_DWORD *)this + 34) = v33;
  v34 = *((int *)this + 38);
  v35 = v32 + v28 + v34;
  v36 = this[20];
  if ( v36 )
    v37 = (TSP::FieldPath **)((char *)v36 + 8);
  else
    v37 = 0LL;
  if ( (_DWORD)v34 )
  {
    v38 = 8 * v34;
    do
    {
      v39 = *v37++;
      v40 = TSP::FieldPath::ByteSizeLong(v39);
      v35 += v40 + ((9 * (__clz(v40 | 1) ^ 0x1F) + 73) >> 6);
      v38 -= 8LL;
    }
    while ( v38 );
  }
  v41 = google::protobuf::internal::WireFormatLite::UInt32Size(this + 21);
  v42 = 11LL;
  v43 = ((9 * (__clz(v41 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (int)v41 >= 0 )
    v42 = v43;
  v44 = v42 + v35;
  if ( v41 )
  {
    v45 = v41;
  }
  else
  {
    v44 = v35;
    v45 = 0;
  }
  *((_DWORD *)this + 46) = v45;
  v46 = v44 + v41;
  v47 = *((_DWORD *)this + 4);
  if ( (v47 & 1) != 0 )
  {
    v48 = TSP::FieldPath::ByteSizeLong(this[24]);
    v46 += v48 + ((9 * (__clz(v48 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  if ( (v47 & 8) != 0 )
    v46 += ((9 * (__clz(*((_DWORD *)this + 52) | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( ((_BYTE)this[1] & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize(this + 1, v46, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v46;
    return v46;
  }
}