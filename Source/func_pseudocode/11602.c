__ZNK6google8protobuf5Empty12ByteSizeLongEv
__int64 __fastcall google::protobuf::Empty::ByteSizeLong(google::protobuf::Empty *this)
{
  char *v1; // x0
  char v2; // t1
  _DWORD *v3; // x2

  v2 = *((_BYTE *)this + 8);
  v1 = (char *)this + 8;
  v3 = v1 + 8;
  if ( (v2 & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize(v1, 0LL, v3);
  *v3 = 0;
  return 0LL;
}