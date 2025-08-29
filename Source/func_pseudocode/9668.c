__ZNK3TSP13ComponentInfo12ByteSizeLongEv
__int64 __fastcall TSP::ComponentInfo::ByteSizeLong(TSP::ComponentInfo *this)
{
  unsigned __int64 v2; // x8
  __int64 v3; // x9
  __int64 v4; // x8
  unsigned __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 v8; // x9
  unsigned __int64 v9; // x8
  int v10; // w9
  unsigned __int64 v11; // x8
  unsigned __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x8
  __int64 v15; // x9
  unsigned __int64 v16; // x8
  int v17; // w9
  unsigned __int64 v18; // x10
  __int64 v19; // x8
  __int64 v20; // x20
  __int64 v21; // x9
  TSP::ComponentExternalReference **v22; // x21
  __int64 v23; // x22
  TSP::ComponentExternalReference *v24; // t1
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x20
  __int64 v28; // x9
  TSP::ComponentDataReference **v29; // x21
  __int64 v30; // x22
  TSP::ComponentDataReference *v31; // t1
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x20
  __int64 v35; // x9
  TSP::ObjectUUIDMapEntry **v36; // x21
  __int64 v37; // x22
  TSP::ObjectUUIDMapEntry *v38; // t1
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x20
  __int64 v42; // x9
  TSP::FeatureInfo **v43; // x21
  __int64 v44; // x22
  TSP::FeatureInfo *v45; // t1
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  __int64 v50; // x8
  int v51; // w9
  __int64 v52; // x20
  __int64 v53; // x0
  __int64 v54; // x8
  __int64 v55; // x9
  __int64 v56; // x8
  int v57; // w9
  __int64 v58; // x9
  __int64 v59; // x8
  __int64 v60; // x20
  __int64 v61; // x9
  TSP::ComponentExternalReference **v62; // x21
  __int64 v63; // x22
  TSP::ComponentExternalReference *v64; // t1
  __int64 v65; // x0
  __int64 v66; // x0
  __int64 v67; // x8
  __int64 v68; // x9
  __int64 v69; // x8
  int v70; // w9
  __int64 v71; // x1
  int v72; // w8
  unsigned __int64 v73; // x9
  __int64 v74; // x10
  __int64 v75; // x9
  __int64 v76; // x9
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( (~*((_DWORD *)this + 4) & 5) != 0 )
  {
    v5 = TSP::ComponentInfo::RequiredFieldsByteSizeFallback(this);
  }
  else
  {
    v2 = *((_QWORD *)this + 33) & 0xFFFFFFFFFFFFFFFELL;
    v3 = *(unsigned __int8 *)(v2 + 23);
    v4 = *(_QWORD *)(v2 + 8);
    if ( (v3 & 0x80u) == 0LL )
      v4 = v3;
    v5 = v4
       + ((9 * (__clz(*((_QWORD *)this + 35) | 1LL) ^ 0x3F) + 73) >> 6)
       + ((9 * (__clz(v4 | 1) ^ 0x1F) + 73) >> 6)
       + 2;
  }
  v6 = google::protobuf::internal::WireFormatLite::UInt32Size((char *)this + 24);
  v7 = 10LL;
  v8 = (9 * (__clz(v6 | 1) ^ 0x1F) + 73) >> 6;
  if ( (int)v6 >= 0 )
    v7 = v8;
  v9 = v5 + v7;
  if ( v6 )
    v10 = v6;
  else
    v10 = 0;
  if ( v6 )
    v11 = v9 + 1;
  else
    v11 = v5;
  *((_DWORD *)this + 10) = v10;
  v12 = v11 + v6;
  v13 = google::protobuf::internal::WireFormatLite::UInt32Size((char *)this + 48);
  v14 = 10LL;
  v15 = (9 * (__clz(v13 | 1) ^ 0x1F) + 73) >> 6;
  if ( (int)v13 >= 0 )
    v14 = v15;
  v16 = v12 + v14;
  if ( v13 )
    v17 = v13;
  else
    v17 = 0;
  if ( v13 )
    v18 = v16 + 1;
  else
    v18 = v12;
  *((_DWORD *)this + 16) = v17;
  v19 = *((int *)this + 20);
  v20 = v18 + v13 + v19;
  v21 = *((_QWORD *)this + 11);
  if ( v21 )
    v22 = (TSP::ComponentExternalReference **)(v21 + 8);
  else
    v22 = 0LL;
  if ( (_DWORD)v19 )
  {
    v23 = 8 * v19;
    do
    {
      v24 = *v22++;
      v25 = TSP::ComponentExternalReference::ByteSizeLong(v24);
      v20 += v25 + ((9 * (__clz(v25 | 1) ^ 0x1F) + 73) >> 6);
      v23 -= 8LL;
    }
    while ( v23 );
  }
  v26 = *((int *)this + 26);
  v27 = v20 + v26;
  v28 = *((_QWORD *)this + 14);
  if ( v28 )
    v29 = (TSP::ComponentDataReference **)(v28 + 8);
  else
    v29 = 0LL;
  if ( (_DWORD)v26 )
  {
    v30 = 8 * v26;
    do
    {
      v31 = *v29++;
      v32 = TSP::ComponentDataReference::ByteSizeLong(v31);
      v27 += v32 + ((9 * (__clz(v32 | 1) ^ 0x1F) + 73) >> 6);
      v30 -= 8LL;
    }
    while ( v30 );
  }
  v33 = *((int *)this + 32);
  v34 = v27 + v33;
  v35 = *((_QWORD *)this + 17);
  if ( v35 )
    v36 = (TSP::ObjectUUIDMapEntry **)(v35 + 8);
  else
    v36 = 0LL;
  if ( (_DWORD)v33 )
  {
    v37 = 8 * v33;
    do
    {
      v38 = *v36++;
      v39 = TSP::ObjectUUIDMapEntry::ByteSizeLong(v38);
      v34 += v39 + ((9 * (__clz(v39 | 1) ^ 0x1F) + 73) >> 6);
      v37 -= 8LL;
    }
    while ( v37 );
  }
  v40 = *((int *)this + 38);
  v41 = v34 + v40;
  v42 = *((_QWORD *)this + 20);
  if ( v42 )
    v43 = (TSP::FeatureInfo **)(v42 + 8);
  else
    v43 = 0LL;
  if ( (_DWORD)v40 )
  {
    v44 = 8 * v40;
    do
    {
      v45 = *v43++;
      v46 = TSP::FeatureInfo::ByteSizeLong(v45);
      v41 += v46 + ((9 * (__clz(v46 | 1) ^ 0x1F) + 73) >> 6);
      v44 -= 8LL;
    }
    while ( v44 );
  }
  v47 = google::protobuf::internal::WireFormatLite::UInt32Size((char *)this + 168);
  v48 = 11LL;
  v49 = ((9 * (__clz(v47 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (int)v47 >= 0 )
    v48 = v49;
  v50 = v48 + v41;
  if ( v47 )
  {
    v51 = v47;
  }
  else
  {
    v50 = v41;
    v51 = 0;
  }
  *((_DWORD *)this + 46) = v51;
  v52 = v50 + v47;
  v53 = google::protobuf::internal::WireFormatLite::UInt32Size((char *)this + 192);
  v54 = 11LL;
  v55 = ((9 * (__clz(v53 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (int)v53 >= 0 )
    v54 = v55;
  v56 = v54 + v52;
  if ( v53 )
  {
    v57 = v53;
  }
  else
  {
    v56 = v52;
    v57 = 0;
  }
  *((_DWORD *)this + 52) = v57;
  v58 = v56 + v53;
  v59 = *((int *)this + 56);
  v60 = v58 + 2 * v59;
  v61 = *((_QWORD *)this + 29);
  if ( v61 )
    v62 = (TSP::ComponentExternalReference **)(v61 + 8);
  else
    v62 = 0LL;
  if ( (_DWORD)v59 )
  {
    v63 = 8 * v59;
    do
    {
      v64 = *v62++;
      v65 = TSP::ComponentExternalReference::ByteSizeLong(v64);
      v60 += v65 + ((9 * (__clz(v65 | 1) ^ 0x1F) + 73) >> 6);
      v63 -= 8LL;
    }
    while ( v63 );
  }
  v66 = google::protobuf::internal::WireFormatLite::UInt64Size((char *)this + 240);
  v67 = 12LL;
  v68 = ((9 * (__clz(v66 | 1) ^ 0x1F) + 73) >> 6) + 2;
  if ( (int)v66 >= 0 )
    v67 = v68;
  v69 = v67 + v60;
  if ( v66 )
  {
    v70 = v66;
  }
  else
  {
    v69 = v60;
    v70 = 0;
  }
  *((_DWORD *)this + 64) = v70;
  v71 = v69 + v66;
  v72 = *((_DWORD *)this + 4);
  if ( (v72 & 2) != 0 )
  {
    v73 = *((_QWORD *)this + 34) & 0xFFFFFFFFFFFFFFFELL;
    v74 = *(unsigned __int8 *)(v73 + 23);
    v75 = *(_QWORD *)(v73 + 8);
    if ( (v74 & 0x80u) == 0LL )
      v75 = v74;
    v71 += v75 + ((9 * (__clz(v75 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  if ( (v72 & 0xF8) != 0 )
  {
    if ( (v72 & 8) != 0 )
      v71 += ((9 * (__clz(*((_QWORD *)this + 36) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
    v76 = v71 + 2;
    if ( (v72 & 0x10) == 0 )
      v76 = v71;
    if ( (v72 & 0x20) != 0 )
      v76 += 3LL;
    if ( (v72 & 0x40) != 0 )
      v71 = v76 + 3;
    else
      v71 = v76;
    if ( (v72 & 0x80) != 0 )
      v71 += ((9 * (__clz(*((_DWORD *)this + 75) | 1) ^ 0x1F) + 73) >> 6) + 2;
  }
  if ( (v72 & 0x100) != 0 )
    v71 += ((9 * (__clz(*((_DWORD *)this + 76) | 1) ^ 0x1F) + 73) >> 6) + 2;
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v71, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v71;
    return v71;
  }
}