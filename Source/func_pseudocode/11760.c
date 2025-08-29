__ZNK6google8protobuf11DoubleValue12ByteSizeLongEv
__int64 __fastcall google::protobuf::DoubleValue::ByteSizeLong(google::protobuf::DoubleValue *this)
{
  __int64 v1; // x1

  if ( *((double *)this + 2) == 0.0 )
    v1 = 0LL;
  else
    v1 = 9LL;
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v1, (char *)this + 24);
  *((_DWORD *)this + 6) = v1;
  return v1;
}