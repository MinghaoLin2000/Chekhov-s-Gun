__ZNK6google8protobuf24EnumValueDescriptorProto12ByteSizeLongEv
__int64 __fastcall google::protobuf::EnumValueDescriptorProto::ByteSizeLong(
        google::protobuf::EnumValueDescriptorProto *this)
{
  int v2; // w21
  __int64 v3; // x20
  unsigned __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x8
  __int64 v7; // x0
  int v8; // w8
  __int64 v9; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 7) == 0 )
  {
    v3 = 0LL;
    goto LABEL_15;
  }
  if ( (v2 & 1) != 0 )
  {
    v4 = *((_QWORD *)this + 3) & 0xFFFFFFFFFFFFFFFELL;
    v5 = *(unsigned __int8 *)(v4 + 23);
    v6 = *(_QWORD *)(v4 + 8);
    if ( (v5 & 0x80u) == 0LL )
      v6 = v5;
    v3 = v6 + ((9 * (__clz(v6 | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (v2 & 2) == 0 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v3 = 0LL;
  if ( (v2 & 2) != 0 )
  {
LABEL_9:
    v7 = google::protobuf::EnumValueOptions::ByteSizeLong(*((google::protobuf::EnumValueOptions **)this + 4));
    v3 += v7 + ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
LABEL_10:
  if ( (v2 & 4) != 0 )
  {
    v8 = *((_DWORD *)this + 10);
    if ( v8 < 0 )
      v9 = 11LL;
    else
      v9 = ((9 * (__clz(v8 | 1) ^ 0x1F) + 73) >> 6) + 1;
    v3 += v9;
  }
LABEL_15:
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