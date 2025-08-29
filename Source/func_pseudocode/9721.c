__ZNK3TSP18ObjectUUIDMapEntry12ByteSizeLongEv
unsigned __int64 __fastcall TSP::ObjectUUIDMapEntry::ByteSizeLong(TSP::UUID **this)
{
  __int64 v2; // x0
  unsigned __int64 v3; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( (~*((_DWORD *)this + 4) & 3) != 0 )
  {
    v3 = TSP::ObjectUUIDMapEntry::RequiredFieldsByteSizeFallback((TSP::ObjectUUIDMapEntry *)this);
  }
  else
  {
    v2 = TSP::UUID::ByteSizeLong(this[3]);
    v3 = v2
       + ((9 * (__clz((unsigned __int64)this[4] | 1) ^ 0x3F) + 73) >> 6)
       + ((9 * (__clz(v2 | 1) ^ 0x1F) + 73) >> 6)
       + 2;
  }
  if ( ((_BYTE)this[1] & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize(this + 1, v3, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v3;
    return v3;
  }
}