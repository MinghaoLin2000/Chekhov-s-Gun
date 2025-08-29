__ZNK6google8protobuf23SourceCodeInfo_Location12ByteSizeLongEv
__int64 __fastcall google::protobuf::SourceCodeInfo_Location::ByteSizeLong(
        google::protobuf::SourceCodeInfo_Location *this)
{
  __int64 v2; // x0
  int v3; // w8
  __int64 v4; // x9
  __int64 v5; // x20
  __int64 v6; // x0
  int v7; // w8
  __int64 v8; // x9
  __int64 v9; // x8
  __int64 v10; // x1
  __int64 *v11; // x9
  __int64 v12; // t1
  __int64 v13; // x11
  __int64 v14; // x10
  int v15; // w8
  unsigned __int64 v16; // x9
  __int64 v17; // x10
  __int64 v18; // x9
  unsigned __int64 v19; // x8
  __int64 v20; // x9
  __int64 v21; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = google::protobuf::internal::WireFormatLite::Int32Size((char *)this + 24);
  if ( v2 )
  {
    v3 = v2;
    if ( (v2 & 0x80000000) != 0 )
      v4 = 11LL;
    else
      v4 = ((9 * (__clz(v2 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  else
  {
    v3 = 0;
    v4 = 0LL;
  }
  *((_DWORD *)this + 10) = v3;
  v5 = v4 + v2;
  v6 = google::protobuf::internal::WireFormatLite::Int32Size((char *)this + 48);
  if ( v6 )
  {
    v7 = v6;
    if ( (v6 & 0x80000000) != 0 )
      v8 = 11LL;
    else
      v8 = ((9 * (__clz(v6 | 1) ^ 0x1F) + 73) >> 6) + 1;
    v5 += v8;
  }
  else
  {
    v7 = 0;
  }
  *((_DWORD *)this + 16) = v7;
  v9 = *((unsigned int *)this + 20);
  v10 = v5 + v6 + v9;
  if ( (int)v9 >= 1 )
  {
    v11 = (__int64 *)(*((_QWORD *)this + 11) + 8LL);
    do
    {
      v12 = *v11++;
      v13 = *(unsigned __int8 *)(v12 + 23);
      v14 = *(_QWORD *)(v12 + 8);
      if ( (v13 & 0x80u) == 0LL )
        v14 = v13;
      v10 += v14 + ((9 * (__clz(v14 | 1) ^ 0x1F) + 73) >> 6);
      --v9;
    }
    while ( v9 );
  }
  v15 = *((_DWORD *)this + 4);
  if ( (v15 & 3) != 0 )
  {
    if ( (v15 & 1) != 0 )
    {
      v16 = *((_QWORD *)this + 12) & 0xFFFFFFFFFFFFFFFELL;
      v17 = *(unsigned __int8 *)(v16 + 23);
      v18 = *(_QWORD *)(v16 + 8);
      if ( (v17 & 0x80u) == 0LL )
        v18 = v17;
      v10 += v18 + ((9 * (__clz(v18 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
    if ( (v15 & 2) != 0 )
    {
      v19 = *((_QWORD *)this + 13) & 0xFFFFFFFFFFFFFFFELL;
      v20 = *(unsigned __int8 *)(v19 + 23);
      v21 = *(_QWORD *)(v19 + 8);
      if ( (v20 & 0x80u) == 0LL )
        v21 = v20;
      v10 += v21 + ((9 * (__clz(v21 | 1) ^ 0x1F) + 73) >> 6) + 1;
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