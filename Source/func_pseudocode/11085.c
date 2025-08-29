__ZNK6google8protobuf20FieldDescriptorProto12ByteSizeLongEv
__int64 __fastcall google::protobuf::FieldDescriptorProto::ByteSizeLong(google::protobuf::FieldDescriptorProto *this)
{
  int v2; // w21
  __int64 v3; // x20
  unsigned __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x8
  unsigned __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x8
  unsigned __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x8
  unsigned __int64 v13; // x8
  __int64 v14; // x9
  __int64 v15; // x8
  unsigned __int64 v16; // x8
  __int64 v17; // x9
  __int64 v18; // x8
  __int64 v19; // x0
  int v20; // w8
  __int64 v21; // x8
  int v22; // w8
  __int64 v23; // x8
  int v24; // w8
  __int64 v25; // x10
  __int64 v26; // x8
  int v27; // w8
  __int64 v28; // x10
  __int64 v29; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((_DWORD *)this + 4);
  if ( !(_BYTE)v2 )
  {
    v3 = 0LL;
    goto LABEL_37;
  }
  if ( (v2 & 1) == 0 )
  {
    v3 = 0LL;
    if ( (v2 & 2) == 0 )
      goto LABEL_12;
    goto LABEL_9;
  }
  v4 = *((_QWORD *)this + 3) & 0xFFFFFFFFFFFFFFFELL;
  v5 = *(unsigned __int8 *)(v4 + 23);
  v6 = *(_QWORD *)(v4 + 8);
  if ( (v5 & 0x80u) == 0LL )
    v6 = v5;
  v3 = v6 + ((9 * (__clz(v6 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v2 & 2) != 0 )
  {
LABEL_9:
    v7 = *((_QWORD *)this + 4) & 0xFFFFFFFFFFFFFFFELL;
    v8 = *(unsigned __int8 *)(v7 + 23);
    v9 = *(_QWORD *)(v7 + 8);
    if ( (v8 & 0x80u) == 0LL )
      v9 = v8;
    v3 += v9 + ((9 * (__clz(v9 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
LABEL_12:
  if ( (v2 & 4) != 0 )
  {
    v10 = *((_QWORD *)this + 5) & 0xFFFFFFFFFFFFFFFELL;
    v11 = *(unsigned __int8 *)(v10 + 23);
    v12 = *(_QWORD *)(v10 + 8);
    if ( (v11 & 0x80u) == 0LL )
      v12 = v11;
    v3 += v12 + ((9 * (__clz(v12 | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (v2 & 8) == 0 )
    {
LABEL_14:
      if ( (v2 & 0x10) == 0 )
        goto LABEL_15;
      goto LABEL_25;
    }
  }
  else if ( (v2 & 8) == 0 )
  {
    goto LABEL_14;
  }
  v13 = *((_QWORD *)this + 6) & 0xFFFFFFFFFFFFFFFELL;
  v14 = *(unsigned __int8 *)(v13 + 23);
  v15 = *(_QWORD *)(v13 + 8);
  if ( (v14 & 0x80u) == 0LL )
    v15 = v14;
  v3 += v15 + ((9 * (__clz(v15 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v2 & 0x10) == 0 )
  {
LABEL_15:
    if ( (v2 & 0x20) == 0 )
      goto LABEL_16;
    goto LABEL_28;
  }
LABEL_25:
  v16 = *((_QWORD *)this + 7) & 0xFFFFFFFFFFFFFFFELL;
  v17 = *(unsigned __int8 *)(v16 + 23);
  v18 = *(_QWORD *)(v16 + 8);
  if ( (v17 & 0x80u) == 0LL )
    v18 = v17;
  v3 += v18 + ((9 * (__clz(v18 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v2 & 0x20) == 0 )
  {
LABEL_16:
    if ( (v2 & 0x40) == 0 )
      goto LABEL_17;
    goto LABEL_29;
  }
LABEL_28:
  v19 = google::protobuf::FieldOptions::ByteSizeLong(*((google::protobuf::FieldOptions **)this + 8));
  v3 += v19 + ((9 * (__clz(v19 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v2 & 0x40) == 0 )
  {
LABEL_17:
    if ( (v2 & 0x80) == 0 )
      goto LABEL_37;
    goto LABEL_33;
  }
LABEL_29:
  v20 = *((_DWORD *)this + 18);
  if ( v20 < 0 )
    v21 = 11LL;
  else
    v21 = ((9 * (__clz(v20 | 1) ^ 0x1F) + 73) >> 6) + 1;
  v3 += v21;
  if ( (v2 & 0x80) != 0 )
  {
LABEL_33:
    v22 = *((_DWORD *)this + 19);
    if ( v22 < 0 )
      v23 = 11LL;
    else
      v23 = ((9 * (__clz(v22 | 1) ^ 0x1F) + 73) >> 6) + 1;
    v3 += v23;
  }
LABEL_37:
  if ( (v2 & 0x700) != 0 )
  {
    if ( (v2 & 0x100) != 0 )
      v3 += 3LL;
    if ( (v2 & 0x200) != 0 )
    {
      v24 = *((_DWORD *)this + 21);
      v25 = ((9 * (__clz(v24 | 1) ^ 0x1F) + 73) >> 6) + 1;
      if ( v24 >= 0 )
        v26 = v25;
      else
        v26 = 11LL;
      v3 += v26;
    }
    if ( (v2 & 0x400) != 0 )
    {
      v27 = *((_DWORD *)this + 22);
      v28 = ((9 * (__clz(v27 | 1) ^ 0x1F) + 73) >> 6) + 1;
      if ( v27 >= 0 )
        v29 = v28;
      else
        v29 = 11LL;
      v3 += v29;
    }
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v3, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v3;
    return v3;
  }
}