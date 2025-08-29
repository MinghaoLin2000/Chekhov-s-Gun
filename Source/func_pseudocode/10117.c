__ZNK3TSP13DataReference12ByteSizeLongEv
unsigned __int64 __fastcall TSP::DataReference::ByteSizeLong(TSP::DataReference *this)
{
  unsigned __int64 v1; // x1

  if ( (*((_BYTE *)this + 16) & 1) != 0 )
    v1 = ((9 * (__clz(*((_QWORD *)this + 3) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
  else
    v1 = 0LL;
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v1, (char *)this + 20);
  *((_DWORD *)this + 5) = v1;
  return v1;
}