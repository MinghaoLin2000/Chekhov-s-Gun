__ZNK3TSP9FieldInfo12ByteSizeLongEv
__int64 __fastcall TSP::FieldInfo::ByteSizeLong(TSP::FieldPath **this)
{
  __int64 v2; // x20
  __int64 v3; // x0
  __int64 v4; // x0
  int v5; // w8
  __int64 v6; // x9
  __int64 v7; // x20
  __int64 v8; // x0
  int v9; // w8
  __int64 v10; // x9
  __int64 v11; // x20
  __int64 v12; // x0
  int v13; // w8
  __int64 v14; // x9
  __int64 v15; // x1
  int v16; // w8
  unsigned __int64 v17; // x9
  __int64 v18; // x10
  __int64 v19; // x9
  int v20; // w9
  __int64 v21; // x9
  int v22; // w9
  __int64 v23; // x9
  int v24; // w8
  __int64 v25; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( ((_BYTE)this[2] & 2) != 0 )
  {
    v3 = TSP::FieldPath::ByteSizeLong(this[13]);
    v2 = v3 + ((9 * (__clz(v3 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  else
  {
    v2 = 0LL;
  }
  v4 = google::protobuf::internal::WireFormatLite::UInt64Size(this + 3);
  if ( v4 )
  {
    v5 = v4;
    if ( (v4 & 0x80000000) != 0 )
      v6 = 11LL;
    else
      v6 = ((9 * (__clz(v4 | 1) ^ 0x1F) + 73) >> 6) + 1;
    v2 += v6;
  }
  else
  {
    v5 = 0;
  }
  *((_DWORD *)this + 10) = v5;
  v7 = v2 + v4;
  v8 = google::protobuf::internal::WireFormatLite::UInt64Size(this + 6);
  if ( v8 )
  {
    v9 = v8;
    if ( (v8 & 0x80000000) != 0 )
      v10 = 11LL;
    else
      v10 = ((9 * (__clz(v8 | 1) ^ 0x1F) + 73) >> 6) + 1;
    v7 += v10;
  }
  else
  {
    v9 = 0;
  }
  *((_DWORD *)this + 16) = v9;
  v11 = v7 + v8;
  v12 = google::protobuf::internal::WireFormatLite::UInt32Size(this + 9);
  if ( v12 )
  {
    v13 = v12;
    if ( (v12 & 0x80000000) != 0 )
      v14 = 11LL;
    else
      v14 = ((9 * (__clz(v12 | 1) ^ 0x1F) + 73) >> 6) + 1;
    v11 += v14;
  }
  else
  {
    v13 = 0;
  }
  *((_DWORD *)this + 22) = v13;
  v15 = v11 + v12;
  v16 = *((_DWORD *)this + 4);
  if ( (v16 & 1) != 0 )
  {
    v17 = (unsigned __int64)this[12] & 0xFFFFFFFFFFFFFFFELL;
    v18 = *(unsigned __int8 *)(v17 + 23);
    v19 = *(_QWORD *)(v17 + 8);
    if ( (v18 & 0x80u) == 0LL )
      v19 = v18;
    v15 += v19 + ((9 * (__clz(v19 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  if ( (v16 & 0x1C) != 0 )
  {
    if ( (v16 & 4) != 0 )
    {
      v20 = *((_DWORD *)this + 28);
      if ( v20 < 0 )
        v21 = 11LL;
      else
        v21 = ((9 * (__clz(v20 | 1) ^ 0x1F) + 73) >> 6) + 1;
      v15 += v21;
      if ( (v16 & 8) == 0 )
      {
LABEL_29:
        if ( (v16 & 0x10) == 0 )
          goto LABEL_43;
LABEL_39:
        v24 = *((_DWORD *)this + 30);
        if ( v24 < 0 )
          v25 = 11LL;
        else
          v25 = ((9 * (__clz(v24 | 1) ^ 0x1F) + 73) >> 6) + 1;
        v15 += v25;
        goto LABEL_43;
      }
    }
    else if ( (v16 & 8) == 0 )
    {
      goto LABEL_29;
    }
    v22 = *((_DWORD *)this + 29);
    if ( v22 < 0 )
      v23 = 11LL;
    else
      v23 = ((9 * (__clz(v22 | 1) ^ 0x1F) + 73) >> 6) + 1;
    v15 += v23;
    if ( (v16 & 0x10) == 0 )
      goto LABEL_43;
    goto LABEL_39;
  }
LABEL_43:
  if ( ((_BYTE)this[1] & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize(this + 1, v15, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v15;
    return v15;
  }
}