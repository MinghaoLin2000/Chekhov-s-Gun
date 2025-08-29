__ZNK3TSP8DataInfo12ByteSizeLongEv
unsigned __int64 __fastcall TSP::DataInfo::ByteSizeLong(TSP::DataInfo *this)
{
  int v2; // w21
  unsigned __int64 v3; // x8
  __int64 v4; // x10
  __int64 v5; // x8
  __int64 v6; // x10
  unsigned __int64 v7; // x9
  __int64 v8; // x11
  __int64 v9; // x9
  unsigned __int64 v10; // x20
  unsigned __int64 v11; // x8
  __int64 v12; // x9
  __int64 v13; // x8
  __int64 v14; // x0
  unsigned __int64 v15; // x8
  int v16; // w8
  __int64 v17; // x10
  __int64 v18; // x8
  int v19; // w8
  __int64 v20; // x8
  unsigned __int64 v21; // x8
  __int64 v22; // x9
  __int64 v23; // x8
  unsigned __int64 v24; // x8
  __int64 v25; // x9
  __int64 v26; // x8
  unsigned __int64 v27; // x8
  __int64 v28; // x9
  __int64 v29; // x8
  unsigned __int64 v30; // x8
  __int64 v31; // x9
  __int64 v32; // x8
  unsigned __int64 v33; // x8
  __int64 v34; // x9
  __int64 v35; // x8
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((_DWORD *)this + 4);
  if ( (~v2 & 0x803) != 0 )
  {
    v10 = TSP::DataInfo::RequiredFieldsByteSizeFallback(this);
  }
  else
  {
    v3 = *((_QWORD *)this + 3) & 0xFFFFFFFFFFFFFFFELL;
    v4 = *(unsigned __int8 *)(v3 + 23);
    v5 = *(_QWORD *)(v3 + 8);
    if ( (v4 & 0x80u) == 0LL )
      v5 = v4;
    v6 = (9 * (__clz(v5 | 1) ^ 0x1F) + 73) >> 6;
    v7 = *((_QWORD *)this + 4) & 0xFFFFFFFFFFFFFFFELL;
    v8 = *(unsigned __int8 *)(v7 + 23);
    v9 = *(_QWORD *)(v7 + 8);
    if ( (v8 & 0x80u) == 0LL )
      v9 = v8;
    v10 = v5
        + v9
        + v6
        + ((9 * (__clz(*((_QWORD *)this + 14) | 1LL) ^ 0x3F) + 73) >> 6)
        + ((9 * (__clz(v9 | 1) ^ 0x1F) + 73) >> 6)
        + 3;
  }
  if ( (v2 & 0xFC) == 0 )
    goto LABEL_18;
  if ( (v2 & 4) != 0 )
  {
    v21 = *((_QWORD *)this + 5) & 0xFFFFFFFFFFFFFFFELL;
    v22 = *(unsigned __int8 *)(v21 + 23);
    v23 = *(_QWORD *)(v21 + 8);
    if ( (v22 & 0x80u) == 0LL )
      v23 = v22;
    v10 += v23 + ((9 * (__clz(v23 | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (v2 & 8) == 0 )
    {
LABEL_11:
      if ( (v2 & 0x10) == 0 )
        goto LABEL_12;
      goto LABEL_50;
    }
  }
  else if ( (v2 & 8) == 0 )
  {
    goto LABEL_11;
  }
  v24 = *((_QWORD *)this + 6) & 0xFFFFFFFFFFFFFFFELL;
  v25 = *(unsigned __int8 *)(v24 + 23);
  v26 = *(_QWORD *)(v24 + 8);
  if ( (v25 & 0x80u) == 0LL )
    v26 = v25;
  v10 += v26 + ((9 * (__clz(v26 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v2 & 0x10) == 0 )
  {
LABEL_12:
    if ( (v2 & 0x20) == 0 )
      goto LABEL_13;
LABEL_53:
    v30 = *((_QWORD *)this + 8) & 0xFFFFFFFFFFFFFFFELL;
    v31 = *(unsigned __int8 *)(v30 + 23);
    v32 = *(_QWORD *)(v30 + 8);
    if ( (v31 & 0x80u) == 0LL )
      v32 = v31;
    v10 += v32 + ((9 * (__clz(v32 | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (v2 & 0x40) == 0 )
    {
LABEL_14:
      if ( (v2 & 0x80) == 0 )
        goto LABEL_18;
      goto LABEL_15;
    }
    goto LABEL_56;
  }
LABEL_50:
  v27 = *((_QWORD *)this + 7) & 0xFFFFFFFFFFFFFFFELL;
  v28 = *(unsigned __int8 *)(v27 + 23);
  v29 = *(_QWORD *)(v27 + 8);
  if ( (v28 & 0x80u) == 0LL )
    v29 = v28;
  v10 += v29 + ((9 * (__clz(v29 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v2 & 0x20) != 0 )
    goto LABEL_53;
LABEL_13:
  if ( (v2 & 0x40) == 0 )
    goto LABEL_14;
LABEL_56:
  v33 = *((_QWORD *)this + 9) & 0xFFFFFFFFFFFFFFFELL;
  v34 = *(unsigned __int8 *)(v33 + 23);
  v35 = *(_QWORD *)(v33 + 8);
  if ( (v34 & 0x80u) == 0LL )
    v35 = v34;
  v10 += v35 + ((9 * (__clz(v35 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v2 & 0x80) != 0 )
  {
LABEL_15:
    v11 = *((_QWORD *)this + 10) & 0xFFFFFFFFFFFFFFFELL;
    v12 = *(unsigned __int8 *)(v11 + 23);
    v13 = *(_QWORD *)(v11 + 8);
    if ( (v12 & 0x80u) == 0LL )
      v13 = v12;
    v10 += v13 + ((9 * (__clz(v13 | 1) ^ 0x1F) + 73) >> 6) + 2;
  }
LABEL_18:
  if ( (v2 & 0x700) == 0 )
    goto LABEL_23;
  if ( (v2 & 0x100) != 0 )
  {
    v36 = TSP::DataAttributes::ByteSizeLong(*((TSP::DataAttributes **)this + 11));
    v10 += v36 + ((9 * (__clz(v36 | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (v2 & 0x200) == 0 )
    {
LABEL_21:
      if ( (v2 & 0x400) == 0 )
        goto LABEL_23;
      goto LABEL_22;
    }
  }
  else if ( (v2 & 0x200) == 0 )
  {
    goto LABEL_21;
  }
  v37 = TSP::EncryptionInfo::ByteSizeLong(*((TSP::EncryptionInfo **)this + 12));
  v10 += v37 + ((9 * (__clz(v37 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v2 & 0x400) != 0 )
  {
LABEL_22:
    v14 = TSP::IndexSet::ByteSizeLong(*((TSP::IndexSet **)this + 13));
    v10 += v14 + ((9 * (__clz(v14 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
LABEL_23:
  if ( (v2 & 0xF000) != 0 )
  {
    v15 = v10 + 2;
    if ( (v2 & 0x1000) == 0 )
      v15 = v10;
    if ( (v2 & 0x2000) != 0 )
      v10 = v15 + 2;
    else
      v10 = v15;
    if ( (v2 & 0x4000) != 0 )
    {
      v16 = *((_DWORD *)this + 31);
      v17 = ((9 * (__clz(v16 | 1) ^ 0x1F) + 73) >> 6) + 2;
      if ( v16 >= 0 )
        v18 = v17;
      else
        v18 = 12LL;
      v10 += v18;
    }
    if ( (v2 & 0x8000) != 0 )
      v10 += ((9 * (__clz(*((_QWORD *)this + 16) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
  }
  if ( (v2 & 0x70000) != 0 )
  {
    if ( (v2 & 0x10000) != 0 )
      v10 += 10LL;
    if ( (v2 & 0x20000) != 0 )
      v10 += ((9 * (__clz(*((_QWORD *)this + 18) | 1LL) ^ 0x3F) + 73) >> 6) + 2;
    if ( (v2 & 0x40000) != 0 )
    {
      v19 = *((_DWORD *)this + 38);
      if ( v19 < 0 )
        v20 = 11LL;
      else
        v20 = ((9 * (__clz(v19 | 1) ^ 0x1F) + 73) >> 6) + 1;
      v10 += v20;
    }
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v10, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v10;
    return v10;
  }
}