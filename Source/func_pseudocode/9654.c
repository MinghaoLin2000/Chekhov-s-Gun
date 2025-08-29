__ZNK3TSP9FieldPath12ByteSizeLongEv
__int64 __fastcall TSP::FieldPath::ByteSizeLong(TSP::FieldPath *this)
{
  __int64 v2; // x0
  int v3; // w8
  __int64 v4; // x9
  __int64 v5; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = google::protobuf::internal::WireFormatLite::UInt32Size((char *)this + 16);
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
  *((_DWORD *)this + 8) = v3;
  v5 = v4 + v2;
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v5, (char *)this + 36);
  }
  else
  {
    *((_DWORD *)this + 9) = v5;
    return v4 + v2;
  }
}