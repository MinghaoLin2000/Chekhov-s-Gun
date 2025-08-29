__ZNK6google8protobuf37EnumDescriptorProto_EnumReservedRange12ByteSizeLongEv
__int64 __fastcall google::protobuf::EnumDescriptorProto_EnumReservedRange::ByteSizeLong(
        google::protobuf::EnumDescriptorProto_EnumReservedRange *this)
{
  int v1; // w8
  __int64 v2; // x1
  int v3; // w9
  int v4; // w8
  __int64 v5; // x8

  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 3) == 0 )
  {
    v2 = 0LL;
    goto LABEL_14;
  }
  if ( (v1 & 1) != 0 )
  {
    v3 = *((_DWORD *)this + 6);
    if ( v3 < 0 )
    {
      v2 = 11LL;
      if ( (v1 & 2) == 0 )
        goto LABEL_14;
    }
    else
    {
      v2 = ((9 * (__clz(v3 | 1) ^ 0x1F) + 73) >> 6) + 1;
      if ( (v1 & 2) == 0 )
        goto LABEL_14;
    }
  }
  else
  {
    v2 = 0LL;
    if ( (v1 & 2) == 0 )
      goto LABEL_14;
  }
  v4 = *((_DWORD *)this + 7);
  if ( v4 < 0 )
    v5 = 11LL;
  else
    v5 = ((9 * (__clz(v4 | 1) ^ 0x1F) + 73) >> 6) + 1;
  v2 += v5;
LABEL_14:
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v2, (char *)this + 20);
  *((_DWORD *)this + 5) = v2;
  return v2;
}