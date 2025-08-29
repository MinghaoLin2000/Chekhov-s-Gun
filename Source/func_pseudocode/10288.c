__ZNK3TSP25ReferenceDictionary_Entry12ByteSizeLongEv
__int64 __fastcall TSP::ReferenceDictionary_Entry::ByteSizeLong(TSP::Reference **this)
{
  unsigned __int64 v2; // x20
  unsigned __int64 v3; // x0
  __int64 v4; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( (~*((_DWORD *)this + 4) & 3) != 0 )
  {
    v4 = TSP::ReferenceDictionary_Entry::RequiredFieldsByteSizeFallback((TSP::ReferenceDictionary_Entry *)this);
  }
  else
  {
    v2 = TSP::Reference::ByteSizeLong(this[3]);
    v3 = TSP::Reference::ByteSizeLong(this[4]);
    v4 = v2 + v3 + ((9 * (__clz(v2 | 1) ^ 0x1F) + 73) >> 6) + ((9 * (__clz(v3 | 1) ^ 0x1F) + 73) >> 6) + 2;
  }
  if ( ((_BYTE)this[1] & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize(this + 1, v4, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v4;
    return v4;
  }
}