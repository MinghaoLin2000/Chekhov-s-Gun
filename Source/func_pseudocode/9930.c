__ZNK3TSP21DataPropertiesEntryV112ByteSizeLongEv
__int64 __fastcall TSP::DataPropertiesEntryV1::ByteSizeLong(TSP::DataPropertiesEntryV1 *this)
{
  __int64 v2; // x20
  unsigned __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x8
  __int64 v6; // x0
  int v7; // w8
  __int64 v8; // x9
  __int64 v9; // x1
  int v10; // w8
  unsigned __int64 v11; // x9
  __int64 v12; // x10
  __int64 v13; // x9
  __int64 v14; // x9
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( (*((_BYTE *)this + 16) & 1) != 0 )
  {
    v3 = *((_QWORD *)this + 6) & 0xFFFFFFFFFFFFFFFELL;
    v4 = *(unsigned __int8 *)(v3 + 23);
    v5 = *(_QWORD *)(v3 + 8);
    if ( (v4 & 0x80u) == 0LL )
      v5 = v4;
    v2 = v5 + ((9 * (__clz(v5 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  else
  {
    v2 = 0LL;
  }
  v6 = google::protobuf::internal::WireFormatLite::UInt32Size((char *)this + 24);
  if ( v6 )
  {
    v7 = v6;
    if ( (v6 & 0x80000000) != 0 )
      v8 = 11LL;
    else
      v8 = ((9 * (__clz(v6 | 1) ^ 0x1F) + 73) >> 6) + 1;
    v2 += v8;
  }
  else
  {
    v7 = 0;
  }
  *((_DWORD *)this + 10) = v7;
  v9 = v2 + v6;
  v10 = *((_DWORD *)this + 4);
  if ( (v10 & 0xE) != 0 )
  {
    if ( (v10 & 2) != 0 )
    {
      v11 = *((_QWORD *)this + 7) & 0xFFFFFFFFFFFFFFFELL;
      v12 = *(unsigned __int8 *)(v11 + 23);
      v13 = *(_QWORD *)(v11 + 8);
      if ( (v12 & 0x80u) == 0LL )
        v13 = v12;
      v9 += v13 + ((9 * (__clz(v13 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
    v14 = v9 + 9;
    if ( (v10 & 4) == 0 )
      v14 = v9;
    if ( (v10 & 8) != 0 )
      v9 = v14 + 2;
    else
      v9 = v14;
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v9, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v9;
    return v9;
  }
}