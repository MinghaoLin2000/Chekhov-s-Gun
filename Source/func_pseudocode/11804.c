__ZNK6google8protobuf10Int32Value12ByteSizeLongEv
__int64 __fastcall google::protobuf::Int32Value::ByteSizeLong(google::protobuf::Int32Value *this)
{
  int v1; // w8
  __int64 v2; // x1

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    if ( v1 < 0 )
      v2 = 11LL;
    else
      v2 = ((9 * (__clz(v1 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  else
  {
    v2 = 0LL;
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v2, (char *)this + 20);
  *((_DWORD *)this + 5) = v2;
  return v2;
}