__ZNK6google8protobuf30DescriptorProto_ExtensionRange12ByteSizeLongEv
__int64 __fastcall google::protobuf::DescriptorProto_ExtensionRange::ByteSizeLong(
        google::protobuf::DescriptorProto_ExtensionRange *this)
{
  int v2; // w20
  __int64 v3; // x1
  __int64 v4; // x0
  int v5; // w8
  __int64 v6; // x8
  int v7; // w8
  __int64 v8; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 7) == 0 )
  {
    v3 = 0LL;
    goto LABEL_16;
  }
  if ( (v2 & 1) != 0 )
  {
    v4 = google::protobuf::ExtensionRangeOptions::ByteSizeLong(*((google::protobuf::ExtensionRangeOptions **)this + 3));
    v3 = v4 + ((9 * (__clz(v4 | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (v2 & 2) == 0 )
      goto LABEL_11;
  }
  else
  {
    v3 = 0LL;
    if ( (v2 & 2) == 0 )
      goto LABEL_11;
  }
  v5 = *((_DWORD *)this + 8);
  if ( v5 < 0 )
    v6 = 11LL;
  else
    v6 = ((9 * (__clz(v5 | 1) ^ 0x1F) + 73) >> 6) + 1;
  v3 += v6;
LABEL_11:
  if ( (v2 & 4) != 0 )
  {
    v7 = *((_DWORD *)this + 9);
    if ( v7 < 0 )
      v8 = 11LL;
    else
      v8 = ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6) + 1;
    v3 += v8;
  }
LABEL_16:
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v3, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v3;
    return v3;
  }
}