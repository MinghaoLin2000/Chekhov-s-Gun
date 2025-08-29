__ZNK3TSP4UUID12ByteSizeLongEv
unsigned __int64 __fastcall TSP::UUID::ByteSizeLong(TSP::UUID *this)
{
  unsigned __int64 v2; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( (~*((_DWORD *)this + 4) & 3) != 0 )
    v2 = TSP::UUID::RequiredFieldsByteSizeFallback(this);
  else
    v2 = ((9 * (__clz(*((_QWORD *)this + 3) | 1LL) ^ 0x3F) + 73) >> 6)
       + ((9 * (__clz(*((_QWORD *)this + 4) | 1LL) ^ 0x3F) + 73) >> 6)
       + 2;
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v2, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v2;
    return v2;
  }
}