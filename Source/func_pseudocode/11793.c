__ZNK6google8protobuf11UInt64Value12ByteSizeLongEv
unsigned __int64 __fastcall google::protobuf::UInt64Value::ByteSizeLong(google::protobuf::UInt64Value *this)
{
  __int64 v1; // x8
  unsigned __int64 v2; // x9
  unsigned __int64 v3; // x1

  v1 = *((_QWORD *)this + 2);
  v2 = (9 * (__clz(v1 | 1) ^ 0x3F) + 73) >> 6;
  if ( v1 )
    v3 = v2 + 1;
  else
    v3 = 0LL;
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v3, (char *)this + 24);
  *((_DWORD *)this + 6) = v3;
  return v3;
}