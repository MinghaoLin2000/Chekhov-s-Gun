__ZNK3TSP19DatabaseDataArchive12ByteSizeLongEv
__int64 __fastcall TSP::DatabaseDataArchive::ByteSizeLong(TSP::DatabaseDataArchive *this)
{
  int v2; // w21
  unsigned __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x8
  __int64 v6; // x20
  unsigned __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x8
  __int64 v11; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((_DWORD *)this + 4);
  if ( (~v2 & 0x22) != 0 )
  {
    v6 = TSP::DatabaseDataArchive::RequiredFieldsByteSizeFallback(this);
    if ( (v2 & 1) == 0 )
      goto LABEL_10;
    goto LABEL_7;
  }
  v3 = *((_QWORD *)this + 4) & 0xFFFFFFFFFFFFFFFELL;
  v4 = *(unsigned __int8 *)(v3 + 23);
  v5 = *(_QWORD *)(v3 + 8);
  if ( (v4 & 0x80u) == 0LL )
    v5 = v4;
  v6 = v5 + ((9 * (__clz(v5 | 1) ^ 0x1F) + 73) >> 6) + 3;
  if ( (v2 & 1) != 0 )
  {
LABEL_7:
    v7 = *((_QWORD *)this + 3) & 0xFFFFFFFFFFFFFFFELL;
    v8 = *(unsigned __int8 *)(v7 + 23);
    v9 = *(_QWORD *)(v7 + 8);
    if ( (v8 & 0x80u) == 0LL )
      v9 = v8;
    v6 += v9 + ((9 * (__clz(v9 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
LABEL_10:
  if ( (v2 & 0x1C) == 0 )
    goto LABEL_15;
  if ( (v2 & 4) != 0 )
  {
    v11 = TSP::Reference::ByteSizeLong(*((TSP::Reference **)this + 5));
    v6 += v11 + ((9 * (__clz(v11 | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (v2 & 8) == 0 )
    {
LABEL_13:
      if ( (v2 & 0x10) == 0 )
        goto LABEL_15;
      goto LABEL_14;
    }
  }
  else if ( (v2 & 8) == 0 )
  {
    goto LABEL_13;
  }
  v6 += ((9 * (__clz(*((_QWORD *)this + 6) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
  if ( (v2 & 0x10) != 0 )
LABEL_14:
    v6 += ((9 * (__clz(*((_DWORD *)this + 14) | 1) ^ 0x1F) + 73) >> 6) + 1;
LABEL_15:
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v6, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v6;
    return v6;
  }
}