__ZNK6google8protobuf20OneofDescriptorProto12ByteSizeLongEv
__int64 __fastcall google::protobuf::OneofDescriptorProto::ByteSizeLong(google::protobuf::OneofDescriptorProto *this)
{
  int v2; // w8
  __int64 v3; // x20
  unsigned __int64 v4; // x9
  __int64 v5; // x10
  __int64 v6; // x9
  __int64 v7; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 3) == 0 )
  {
    v3 = 0LL;
    goto LABEL_10;
  }
  if ( (v2 & 1) == 0 )
  {
    v3 = 0LL;
    if ( (v2 & 2) == 0 )
      goto LABEL_10;
LABEL_9:
    v7 = google::protobuf::OneofOptions::ByteSizeLong(*((google::protobuf::OneofOptions **)this + 4));
    v3 += v7 + ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6) + 1;
    goto LABEL_10;
  }
  v4 = *((_QWORD *)this + 3) & 0xFFFFFFFFFFFFFFFELL;
  v5 = *(unsigned __int8 *)(v4 + 23);
  v6 = *(_QWORD *)(v4 + 8);
  if ( (v5 & 0x80u) == 0LL )
    v6 = v5;
  v3 = v6 + ((9 * (__clz(v6 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v2 & 2) != 0 )
    goto LABEL_9;
LABEL_10:
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