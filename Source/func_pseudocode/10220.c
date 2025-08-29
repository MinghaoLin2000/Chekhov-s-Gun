__ZNK3TSP4Date12ByteSizeLongEv
__int64 __fastcall TSP::Date::ByteSizeLong(TSP::Date *this)
{
  __int64 v1; // x1

  if ( (*((_BYTE *)this + 16) & 1) != 0 )
    v1 = 9LL;
  else
    v1 = 0LL;
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v1, (char *)this + 20);
  *((_DWORD *)this + 5) = v1;
  return v1;
}