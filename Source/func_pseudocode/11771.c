__ZNK6google8protobuf10FloatValue12ByteSizeLongEv
__int64 __fastcall google::protobuf::FloatValue::ByteSizeLong(google::protobuf::FloatValue *this)
{
  __int64 v1; // x1

  if ( *((float *)this + 4) == 0.0 )
    v1 = 0LL;
  else
    v1 = 5LL;
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v1, (char *)this + 20);
  *((_DWORD *)this + 5) = v1;
  return v1;
}