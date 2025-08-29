__ZNK3TSP12FieldOptions12ByteSizeLongEv
__int64 __fastcall TSP::FieldOptions::ByteSizeLong(TSP::FieldOptions *this)
{
  __int64 v1; // x1
  int v2; // w8

  if ( (*((_BYTE *)this + 16) & 1) != 0 )
  {
    v2 = *((_DWORD *)this + 6);
    if ( v2 < 0 )
      v1 = 11LL;
    else
      v1 = ((9 * (__clz(v2 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  else
  {
    v1 = 0LL;
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v1, (char *)this + 20);
  *((_DWORD *)this + 5) = v1;
  return v1;
}