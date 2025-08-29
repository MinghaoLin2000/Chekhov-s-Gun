__ZNK6google8protobuf9Timestamp12ByteSizeLongEv
unsigned __int64 __fastcall google::protobuf::Timestamp::ByteSizeLong(google::protobuf::Timestamp *this)
{
  __int64 v1; // x8
  unsigned __int64 v2; // x9
  unsigned __int64 v3; // x1
  int v4; // w8
  __int64 v5; // x8

  v1 = *((_QWORD *)this + 2);
  v2 = (9 * (__clz(v1 | 1) ^ 0x3F) + 73) >> 6;
  if ( v1 )
    v3 = v2 + 1;
  else
    v3 = 0LL;
  v4 = *((_DWORD *)this + 6);
  if ( v4 )
  {
    if ( v4 < 0 )
      v5 = 11LL;
    else
      v5 = ((9 * (__clz(v4 | 1) ^ 0x1F) + 73) >> 6) + 1;
    v3 += v5;
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v3, (char *)this + 28);
  *((_DWORD *)this + 7) = v3;
  return v3;
}