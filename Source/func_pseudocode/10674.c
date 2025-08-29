__ZNK3TSP20LargeLazyObjectArray12ByteSizeLongEv
__int64 __fastcall TSP::LargeLazyObjectArray::ByteSizeLong(TSP::LargeArray **this)
{
  __int64 v2; // x1
  __int64 v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( ((_BYTE)this[2] & 1) != 0 )
  {
    v3 = TSP::LargeArray::ByteSizeLong(this[3]);
    v2 = v3 + ((9 * (__clz(v3 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  else
  {
    v2 = 0LL;
  }
  if ( ((_BYTE)this[1] & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize(this + 1, v2, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v2;
    return v2;
  }
}