__ZNK3TSP24DatabaseImageDataArchive12ByteSizeLongEv
__int64 __fastcall TSP::DatabaseImageDataArchive::ByteSizeLong(TSP::DatabaseDataArchive **this)
{
  __int64 v2; // x0
  __int64 v3; // x8
  int v4; // w9
  __int64 v5; // x11
  __int64 v6; // x9
  __int64 v7; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( (~*((_DWORD *)this + 4) & 3) != 0 )
  {
    v7 = TSP::DatabaseImageDataArchive::RequiredFieldsByteSizeFallback((TSP::DatabaseImageDataArchive *)this);
  }
  else
  {
    v2 = TSP::DatabaseDataArchive::ByteSizeLong(this[3]);
    v3 = (9 * (__clz(v2 | 1) ^ 0x1F) + 73) >> 6;
    v4 = *((_DWORD *)this + 8);
    v5 = (9 * (__clz(v4 | 1) ^ 0x1F) + 73) >> 6;
    if ( v4 >= 0 )
      v6 = v5;
    else
      v6 = 10LL;
    v7 = v2 + v3 + v6 + 2;
  }
  if ( ((_BYTE)this[1] & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize(this + 1, v7, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v7;
    return v7;
  }
}