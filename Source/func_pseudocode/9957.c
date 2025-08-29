__ZNK3TSP16DocumentMetadata12ByteSizeLongEv
__int64 __fastcall TSP::DocumentMetadata::ByteSizeLong(TSP::DocumentMetadata *this)
{
  int v2; // w20
  __int64 v3; // x8
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 3) != 0 )
  {
    if ( (v2 & 1) != 0 )
    {
      v5 = TSP::DataPropertiesV1::ByteSizeLong(*((TSP::DataPropertiesV1 **)this + 3));
      v3 = v5 + ((9 * (__clz(v5 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
    else
    {
      v3 = 0LL;
    }
    if ( (v2 & 2) != 0 )
      v4 = v3 + 2;
    else
      v4 = v3;
  }
  else
  {
    v4 = 0LL;
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v4, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v4;
    return v4;
  }
}