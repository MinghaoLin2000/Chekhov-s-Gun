__ZNK6google8protobuf5Field12ByteSizeLongEv
__int64 __fastcall google::protobuf::Field::ByteSizeLong(google::protobuf::Field *this)
{
  __int64 v2; // x20
  __int64 v3; // x8
  google::protobuf::Option **v4; // x21
  __int64 v5; // x22
  google::protobuf::Option *v6; // t1
  __int64 v7; // x0
  unsigned __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x8
  unsigned __int64 v11; // x8
  __int64 v12; // x9
  __int64 v13; // x8
  unsigned __int64 v14; // x8
  __int64 v15; // x9
  __int64 v16; // x8
  unsigned __int64 v17; // x8
  __int64 v18; // x9
  __int64 v19; // x8
  int v20; // w8
  __int64 v21; // x8
  int v22; // w8
  __int64 v23; // x8
  int v24; // w8
  __int64 v25; // x8
  int v26; // w8
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((int *)this + 6);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    v4 = (google::protobuf::Option **)(v3 + 8);
  else
    v4 = 0LL;
  if ( (_DWORD)v2 )
  {
    v5 = 8 * v2;
    do
    {
      v6 = *v4++;
      v7 = google::protobuf::Option::ByteSizeLong(v6);
      v2 += v7 + ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6);
      v5 -= 8LL;
    }
    while ( v5 );
  }
  else
  {
    v2 = 0LL;
  }
  v8 = *((_QWORD *)this + 5) & 0xFFFFFFFFFFFFFFFELL;
  v9 = *(unsigned __int8 *)(v8 + 23);
  if ( *(char *)(v8 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v8 + 8) )
      goto LABEL_14;
  }
  else if ( !*(_BYTE *)(v8 + 23) )
  {
    goto LABEL_14;
  }
  v10 = *(_QWORD *)(v8 + 8);
  if ( (v9 & 0x80u) == 0LL )
    v10 = v9;
  v2 += v10 + ((9 * (__clz(v10 | 1) ^ 0x1F) + 73) >> 6) + 1;
LABEL_14:
  v11 = *((_QWORD *)this + 6) & 0xFFFFFFFFFFFFFFFELL;
  v12 = *(unsigned __int8 *)(v11 + 23);
  if ( *(char *)(v11 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v11 + 8) )
      goto LABEL_19;
  }
  else if ( !*(_BYTE *)(v11 + 23) )
  {
    goto LABEL_19;
  }
  v13 = *(_QWORD *)(v11 + 8);
  if ( (v12 & 0x80u) == 0LL )
    v13 = v12;
  v2 += v13 + ((9 * (__clz(v13 | 1) ^ 0x1F) + 73) >> 6) + 1;
LABEL_19:
  v14 = *((_QWORD *)this + 7) & 0xFFFFFFFFFFFFFFFELL;
  v15 = *(unsigned __int8 *)(v14 + 23);
  if ( *(char *)(v14 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v14 + 8) )
      goto LABEL_24;
  }
  else if ( !*(_BYTE *)(v14 + 23) )
  {
    goto LABEL_24;
  }
  v16 = *(_QWORD *)(v14 + 8);
  if ( (v15 & 0x80u) == 0LL )
    v16 = v15;
  v2 += v16 + ((9 * (__clz(v16 | 1) ^ 0x1F) + 73) >> 6) + 1;
LABEL_24:
  v17 = *((_QWORD *)this + 8) & 0xFFFFFFFFFFFFFFFELL;
  v18 = *(unsigned __int8 *)(v17 + 23);
  if ( *(char *)(v17 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v17 + 8) )
      goto LABEL_29;
  }
  else if ( !*(_BYTE *)(v17 + 23) )
  {
    goto LABEL_29;
  }
  v19 = *(_QWORD *)(v17 + 8);
  if ( (v18 & 0x80u) == 0LL )
    v19 = v18;
  v2 += v19 + ((9 * (__clz(v19 | 1) ^ 0x1F) + 73) >> 6) + 1;
LABEL_29:
  v20 = *((_DWORD *)this + 18);
  if ( v20 )
  {
    if ( v20 < 0 )
      v21 = 11LL;
    else
      v21 = ((9 * (__clz(v20 | 1) ^ 0x1F) + 73) >> 6) + 1;
    v2 += v21;
  }
  v22 = *((_DWORD *)this + 19);
  if ( v22 )
  {
    if ( v22 < 0 )
      v23 = 11LL;
    else
      v23 = ((9 * (__clz(v22 | 1) ^ 0x1F) + 73) >> 6) + 1;
    v2 += v23;
  }
  v24 = *((_DWORD *)this + 20);
  if ( v24 )
  {
    if ( v24 < 0 )
      v25 = 11LL;
    else
      v25 = ((9 * (__clz(v24 | 1) ^ 0x1F) + 73) >> 6) + 1;
    v2 += v25;
  }
  v26 = *((_DWORD *)this + 21);
  if ( v26 )
  {
    if ( v26 < 0 )
      v27 = 11LL;
    else
      v27 = ((9 * (__clz(v26 | 1) ^ 0x1F) + 73) >> 6) + 1;
    v2 += v27;
  }
  if ( *((_BYTE *)this + 88) )
    v28 = v2 + 2;
  else
    v28 = v2;
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v28, (char *)this + 92);
  }
  else
  {
    *((_DWORD *)this + 23) = v28;
    return v28;
  }
}