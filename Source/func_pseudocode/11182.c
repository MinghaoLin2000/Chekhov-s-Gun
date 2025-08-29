__ZNK6google8protobuf21MethodDescriptorProto12ByteSizeLongEv
__int64 __fastcall google::protobuf::MethodDescriptorProto::ByteSizeLong(google::protobuf::MethodDescriptorProto *this)
{
  int v2; // w20
  __int64 v3; // x21
  __int64 v4; // x1
  unsigned __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  unsigned __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x8
  unsigned __int64 v14; // x8
  __int64 v15; // x9
  __int64 v16; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 0x3F) == 0 )
  {
    v4 = 0LL;
    goto LABEL_20;
  }
  if ( (v2 & 1) == 0 )
  {
    v3 = 0LL;
    if ( (v2 & 2) == 0 )
      goto LABEL_12;
    goto LABEL_9;
  }
  v5 = *((_QWORD *)this + 3) & 0xFFFFFFFFFFFFFFFELL;
  v6 = *(unsigned __int8 *)(v5 + 23);
  v7 = *(_QWORD *)(v5 + 8);
  if ( (v6 & 0x80u) == 0LL )
    v7 = v6;
  v3 = v7 + ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v2 & 2) != 0 )
  {
LABEL_9:
    v8 = *((_QWORD *)this + 4) & 0xFFFFFFFFFFFFFFFELL;
    v9 = *(unsigned __int8 *)(v8 + 23);
    v10 = *(_QWORD *)(v8 + 8);
    if ( (v9 & 0x80u) == 0LL )
      v10 = v9;
    v3 += v10 + ((9 * (__clz(v10 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
LABEL_12:
  if ( (v2 & 4) != 0 )
  {
    v14 = *((_QWORD *)this + 5) & 0xFFFFFFFFFFFFFFFELL;
    v15 = *(unsigned __int8 *)(v14 + 23);
    v16 = *(_QWORD *)(v14 + 8);
    if ( (v15 & 0x80u) == 0LL )
      v16 = v15;
    v3 += v16 + ((9 * (__clz(v16 | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (v2 & 8) == 0 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( (v2 & 8) != 0 )
  {
LABEL_14:
    v11 = google::protobuf::MethodOptions::ByteSizeLong(*((google::protobuf::MethodOptions **)this + 6));
    v3 += v11 + ((9 * (__clz(v11 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
LABEL_15:
  v12 = v3 + 2;
  if ( (v2 & 0x10) == 0 )
    v12 = v3;
  if ( (v2 & 0x20) != 0 )
    v4 = v12 + 2;
  else
    v4 = v12;
LABEL_20:
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v4, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v4;
    return v4;
  }
}