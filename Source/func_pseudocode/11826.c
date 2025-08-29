__ZNK6google8protobuf9BoolValue12ByteSizeLongEv
__int64 __fastcall google::protobuf::BoolValue::ByteSizeLong(google::protobuf::BoolValue *this)
{
  __int64 v1; // x10
  __int64 v2; // x1

  v1 = *((unsigned __int8 *)this + 16);
  v2 = 2 * v1;
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v2, (char *)this + 20);
  *((_DWORD *)this + 5) = v2;
  return 2 * v1;
}