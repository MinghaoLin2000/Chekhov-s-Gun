__ZNK6google8protobuf11FileOptions12ByteSizeLongEv
__int64 __fastcall google::protobuf::FileOptions::ByteSizeLong(google::protobuf::FileOptions *this)
{
  __int64 v2; // x0
  __int64 v3; // x8
  __int64 v4; // x20
  __int64 v5; // x9
  google::protobuf::UninterpretedOption **v6; // x21
  __int64 v7; // x22
  google::protobuf::UninterpretedOption *v8; // t1
  __int64 v9; // x0
  int v10; // w8
  unsigned __int64 v11; // x9
  __int64 v12; // x10
  __int64 v13; // x9
  unsigned __int64 v14; // x9
  __int64 v15; // x10
  __int64 v16; // x9
  unsigned __int64 v17; // x9
  __int64 v18; // x10
  __int64 v19; // x9
  __int64 v20; // x9
  __int64 v21; // x9
  int v22; // w10
  __int64 v23; // x12
  __int64 v24; // x10
  unsigned __int64 v26; // x9
  __int64 v27; // x10
  __int64 v28; // x9
  unsigned __int64 v29; // x9
  __int64 v30; // x10
  __int64 v31; // x9
  unsigned __int64 v32; // x9
  __int64 v33; // x10
  __int64 v34; // x9
  unsigned __int64 v35; // x9
  __int64 v36; // x10
  __int64 v37; // x9
  unsigned __int64 v38; // x9
  __int64 v39; // x10
  __int64 v40; // x9
  unsigned __int64 v41; // x9
  __int64 v42; // x10
  __int64 v43; // x9
  unsigned __int64 v44; // x9
  __int64 v45; // x10
  __int64 v46; // x9
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = google::protobuf::internal::ExtensionSet::ByteSize((google::protobuf::FileOptions *)((char *)this + 16));
  v3 = *((int *)this + 14);
  v4 = v2 + 2 * v3;
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
    v6 = (google::protobuf::UninterpretedOption **)(v5 + 8);
  else
    v6 = 0LL;
  if ( (_DWORD)v3 )
  {
    v7 = 8 * v3;
    do
    {
      v8 = *v6++;
      v9 = google::protobuf::UninterpretedOption::ByteSizeLong(v8);
      v4 += v9 + ((9 * (__clz(v9 | 1) ^ 0x1F) + 73) >> 6);
      v7 -= 8LL;
    }
    while ( v7 );
  }
  v10 = *((_DWORD *)this + 10);
  if ( !(_BYTE)v10 )
    goto LABEL_19;
  if ( (v10 & 1) != 0 )
  {
    v26 = *((_QWORD *)this + 9) & 0xFFFFFFFFFFFFFFFELL;
    v27 = *(unsigned __int8 *)(v26 + 23);
    v28 = *(_QWORD *)(v26 + 8);
    if ( (v27 & 0x80u) == 0LL )
      v28 = v27;
    v4 += v28 + ((9 * (__clz(v28 | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (v10 & 2) == 0 )
    {
LABEL_10:
      if ( (v10 & 4) == 0 )
        goto LABEL_11;
      goto LABEL_62;
    }
  }
  else if ( (v10 & 2) == 0 )
  {
    goto LABEL_10;
  }
  v29 = *((_QWORD *)this + 10) & 0xFFFFFFFFFFFFFFFELL;
  v30 = *(unsigned __int8 *)(v29 + 23);
  v31 = *(_QWORD *)(v29 + 8);
  if ( (v30 & 0x80u) == 0LL )
    v31 = v30;
  v4 += v31 + ((9 * (__clz(v31 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v10 & 4) == 0 )
  {
LABEL_11:
    if ( (v10 & 8) == 0 )
      goto LABEL_12;
    goto LABEL_65;
  }
LABEL_62:
  v32 = *((_QWORD *)this + 11) & 0xFFFFFFFFFFFFFFFELL;
  v33 = *(unsigned __int8 *)(v32 + 23);
  v34 = *(_QWORD *)(v32 + 8);
  if ( (v33 & 0x80u) == 0LL )
    v34 = v33;
  v4 += v34 + ((9 * (__clz(v34 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v10 & 8) == 0 )
  {
LABEL_12:
    if ( (v10 & 0x10) == 0 )
      goto LABEL_13;
    goto LABEL_68;
  }
LABEL_65:
  v35 = *((_QWORD *)this + 12) & 0xFFFFFFFFFFFFFFFELL;
  v36 = *(unsigned __int8 *)(v35 + 23);
  v37 = *(_QWORD *)(v35 + 8);
  if ( (v36 & 0x80u) == 0LL )
    v37 = v36;
  v4 += v37 + ((9 * (__clz(v37 | 1) ^ 0x1F) + 73) >> 6) + 2;
  if ( (v10 & 0x10) == 0 )
  {
LABEL_13:
    if ( (v10 & 0x20) == 0 )
      goto LABEL_14;
LABEL_71:
    v41 = *((_QWORD *)this + 14) & 0xFFFFFFFFFFFFFFFELL;
    v42 = *(unsigned __int8 *)(v41 + 23);
    v43 = *(_QWORD *)(v41 + 8);
    if ( (v42 & 0x80u) == 0LL )
      v43 = v42;
    v4 += v43 + ((9 * (__clz(v43 | 1) ^ 0x1F) + 73) >> 6) + 2;
    if ( (v10 & 0x40) == 0 )
    {
LABEL_15:
      if ( (v10 & 0x80) == 0 )
        goto LABEL_19;
      goto LABEL_16;
    }
    goto LABEL_74;
  }
LABEL_68:
  v38 = *((_QWORD *)this + 13) & 0xFFFFFFFFFFFFFFFELL;
  v39 = *(unsigned __int8 *)(v38 + 23);
  v40 = *(_QWORD *)(v38 + 8);
  if ( (v39 & 0x80u) == 0LL )
    v40 = v39;
  v4 += v40 + ((9 * (__clz(v40 | 1) ^ 0x1F) + 73) >> 6) + 2;
  if ( (v10 & 0x20) != 0 )
    goto LABEL_71;
LABEL_14:
  if ( (v10 & 0x40) == 0 )
    goto LABEL_15;
LABEL_74:
  v44 = *((_QWORD *)this + 15) & 0xFFFFFFFFFFFFFFFELL;
  v45 = *(unsigned __int8 *)(v44 + 23);
  v46 = *(_QWORD *)(v44 + 8);
  if ( (v45 & 0x80u) == 0LL )
    v46 = v45;
  v4 += v46 + ((9 * (__clz(v46 | 1) ^ 0x1F) + 73) >> 6) + 2;
  if ( (v10 & 0x80) != 0 )
  {
LABEL_16:
    v11 = *((_QWORD *)this + 16) & 0xFFFFFFFFFFFFFFFELL;
    v12 = *(unsigned __int8 *)(v11 + 23);
    v13 = *(_QWORD *)(v11 + 8);
    if ( (v12 & 0x80u) == 0LL )
      v13 = v12;
    v4 += v13 + ((9 * (__clz(v13 | 1) ^ 0x1F) + 73) >> 6) + 2;
  }
LABEL_19:
  if ( (v10 & 0xFF00) != 0 )
  {
    if ( (v10 & 0x100) != 0 )
    {
      v14 = *((_QWORD *)this + 17) & 0xFFFFFFFFFFFFFFFELL;
      v15 = *(unsigned __int8 *)(v14 + 23);
      v16 = *(_QWORD *)(v14 + 8);
      if ( (v15 & 0x80u) == 0LL )
        v16 = v15;
      v4 += v16 + ((9 * (__clz(v16 | 1) ^ 0x1F) + 73) >> 6) + 2;
    }
    if ( (v10 & 0x200) != 0 )
    {
      v17 = *((_QWORD *)this + 18) & 0xFFFFFFFFFFFFFFFELL;
      v18 = *(unsigned __int8 *)(v17 + 23);
      v19 = *(_QWORD *)(v17 + 8);
      if ( (v18 & 0x80u) == 0LL )
        v19 = v18;
      v4 += v19 + ((9 * (__clz(v19 | 1) ^ 0x1F) + 73) >> 6) + 2;
    }
    v20 = v4 + 2;
    if ( (v10 & 0x400) == 0 )
      v20 = v4;
    if ( (v10 & 0x800) != 0 )
      v20 += 3LL;
    if ( (v10 & 0x1000) != 0 )
      v20 += 3LL;
    if ( (v10 & 0x2000) != 0 )
      v20 += 3LL;
    if ( (v10 & 0x4000) != 0 )
      v20 += 3LL;
    if ( (v10 & 0x8000) != 0 )
      v4 = v20 + 3;
    else
      v4 = v20;
  }
  if ( (v10 & 0xF0000) != 0 )
  {
    v21 = v4 + 3;
    if ( (v10 & 0x10000) == 0 )
      v21 = v4;
    if ( (v10 & 0x20000) != 0 )
      v21 += 3LL;
    if ( (v10 & 0x40000) != 0 )
    {
      v22 = *((_DWORD *)this + 40);
      v23 = ((9 * (__clz(v22 | 1) ^ 0x1F) + 73) >> 6) + 1;
      if ( v22 >= 0 )
        v24 = v23;
      else
        v24 = 11LL;
      v21 += v24;
    }
    if ( (v10 & 0x80000) != 0 )
      v4 = v21 + 3;
    else
      v4 = v21;
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v4, (char *)this + 44);
  }
  else
  {
    *((_DWORD *)this + 11) = v4;
    return v4;
  }
}