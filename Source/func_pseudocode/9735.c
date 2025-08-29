__ZNK3TSP11FeatureInfo12ByteSizeLongEv
__int64 __fastcall TSP::FeatureInfo::ByteSizeLong(TSP::FeatureInfo *this)
{
  __int64 v2; // x20
  unsigned __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x8
  __int64 v6; // x0
  int v7; // w8
  __int64 v8; // x9
  __int64 v9; // x20
  __int64 v10; // x0
  int v11; // w8
  __int64 v12; // x9
  __int64 v13; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( (*((_BYTE *)this + 16) & 1) != 0 )
  {
    v3 = *((_QWORD *)this + 9) & 0xFFFFFFFFFFFFFFFELL;
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
  v10 = google::protobuf::internal::WireFormatLite::UInt32Size((char *)this + 48);
  if ( v10 )
  {
    v11 = v10;
    if ( (v10 & 0x80000000) != 0 )
      v12 = 11LL;
    else
      v12 = ((9 * (__clz(v10 | 1) ^ 0x1F) + 73) >> 6) + 1;
    v9 += v12;
  }
  else
  {
    v11 = 0;
  }
  *((_DWORD *)this + 16) = v11;
  v13 = v9 + v10;
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v13, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v13;
    return v9 + v10;
  }
}