__ZNK3TSP15PackageMetadata12ByteSizeLongEv
__int64 __fastcall TSP::PackageMetadata::ByteSizeLong(TSP::PackageMetadata *this)
{
  unsigned __int64 v2; // x9
  __int64 v3; // x8
  __int64 v4; // x20
  __int64 v5; // x9
  TSP::ComponentInfo **v6; // x21
  __int64 v7; // x22
  TSP::ComponentInfo *v8; // t1
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 v11; // x20
  __int64 v12; // x9
  TSP::DataInfo **v13; // x21
  __int64 v14; // x22
  TSP::DataInfo *v15; // t1
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x9
  __int64 v20; // x8
  int v21; // w9
  __int64 v22; // x20
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  __int64 v26; // x8
  int v27; // w9
  __int64 v28; // x20
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  __int64 v32; // x8
  __int64 v33; // x9
  int v34; // w8
  __int64 v35; // x8
  __int64 v36; // x20
  __int64 v37; // x9
  TSP::ComponentInfo **v38; // x21
  __int64 v39; // x22
  TSP::ComponentInfo *v40; // t1
  __int64 v41; // x0
  int v42; // w21
  __int64 v43; // x0
  __int64 v44; // x0
  int v45; // w8
  __int64 v46; // x10
  __int64 v47; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( (*((_BYTE *)this + 16) & 4) != 0 )
    v2 = ((9 * (__clz(*((_QWORD *)this + 23) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
  else
    v2 = 0LL;
  v3 = *((int *)this + 8);
  v4 = v2 + v3;
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
    v6 = (TSP::ComponentInfo **)(v5 + 8);
  else
    v6 = 0LL;
  if ( (_DWORD)v3 )
  {
    v7 = 8 * v3;
    do
    {
      v8 = *v6++;
      v9 = TSP::ComponentInfo::ByteSizeLong(v8);
      v4 += v9 + ((9 * (__clz(v9 | 1) ^ 0x1F) + 73) >> 6);
      v7 -= 8LL;
    }
    while ( v7 );
  }
  v10 = *((int *)this + 14);
  v11 = v4 + v10;
  v12 = *((_QWORD *)this + 8);
  if ( v12 )
    v13 = (TSP::DataInfo **)(v12 + 8);
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
  v17 = google::protobuf::internal::WireFormatLite::UInt32Size((char *)this + 72);
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
  v23 = google::protobuf::internal::WireFormatLite::UInt32Size((char *)this + 96);
  v24 = 11LL;
  v25 = ((9 * (__clz(v23 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (int)v23 >= 0 )
    v24 = v25;
  v26 = v24 + v22;
  if ( v23 )
  {
    v27 = v23;
  }
  else
  {
    v26 = v22;
    v27 = 0;
  }
  *((_DWORD *)this + 28) = v27;
  v28 = v26 + v23;
  v29 = google::protobuf::internal::WireFormatLite::UInt32Size((char *)this + 120);
  v30 = 11LL;
  v31 = ((9 * (__clz(v29 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (int)v29 >= 0 )
    v30 = v31;
  v32 = v30 + v28;
  if ( v29 )
    v33 = v32;
  else
    v33 = v28;
  if ( v29 )
    v34 = v29;
  else
    v34 = 0;
  *((_DWORD *)this + 34) = v34;
  v35 = *((int *)this + 38);
  v36 = v33 + v29 + v35;
  v37 = *((_QWORD *)this + 20);
  if ( v37 )
    v38 = (TSP::ComponentInfo **)(v37 + 8);
  else
    v38 = 0LL;
  if ( (_DWORD)v35 )
  {
    v39 = 8 * v35;
    do
    {
      v40 = *v38++;
      v41 = TSP::ComponentInfo::ByteSizeLong(v40);
      v36 += v41 + ((9 * (__clz(v41 | 1) ^ 0x1F) + 73) >> 6);
      v39 -= 8LL;
    }
    while ( v39 );
  }
  v42 = *((_DWORD *)this + 4);
  if ( (v42 & 3) != 0 )
  {
    if ( (v42 & 1) != 0 )
    {
      v43 = TSP::DocumentRevision::ByteSizeLong(*((TSP::DocumentRevision **)this + 21));
      v36 += v43 + ((9 * (__clz(v43 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
    if ( (v42 & 2) != 0 )
    {
      v44 = TSP::Reference::ByteSizeLong(*((TSP::Reference **)this + 22));
      v36 += v44 + ((9 * (__clz(v44 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
  }
  if ( (v42 & 0x18) != 0 )
  {
    if ( (v42 & 8) != 0 )
      v36 += ((9 * (__clz(*((_QWORD *)this + 24) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
    if ( (v42 & 0x10) != 0 )
    {
      v45 = *((_DWORD *)this + 50);
      v46 = ((9 * (__clz(v45 | 1) ^ 0x1F) + 73) >> 6) + 1;
      if ( v45 >= 0 )
        v47 = v46;
      else
        v47 = 11LL;
      v36 += v47;
    }
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v36, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v36;
    return v36;
  }
}