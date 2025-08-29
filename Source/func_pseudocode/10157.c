__ZNK3TSP5Point12ByteSizeLongEv
__int64 __fastcall TSP::Point::ByteSizeLong(TSP::Point *this)
{
  int v1; // w8
  __int64 v2; // x10
  __int64 v3; // x1

  v1 = *((_DWORD *)this + 4);
  v2 = 5LL;
  if ( (v1 & 1) == 0 )
    v2 = 0LL;
  if ( (v1 & 2) != 0 )
    v2 += 5LL;
  if ( (~v1 & 3) != 0 )
    v3 = v2;
  else
    v3 = 10LL;
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v3, (char *)this + 20);
  *((_DWORD *)this + 5) = v3;
  return v3;
}