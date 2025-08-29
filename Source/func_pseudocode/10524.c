__ZNK3TSP14DataAttributes12ByteSizeLongEv
__int64 __fastcall TSP::DataAttributes::ByteSizeLong(TSP::DataAttributes *this)
{
  __int64 v2; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = google::protobuf::internal::ExtensionSet::ByteSize((TSP::DataAttributes *)((char *)this + 16));
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v2, (char *)this + 40);
  }
  else
  {
    *((_DWORD *)this + 10) = v2;
    return v2;
  }
}