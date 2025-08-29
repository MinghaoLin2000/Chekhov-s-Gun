__ZNK6google8protobuf5Mixin12ByteSizeLongEv
__int64 __fastcall google::protobuf::Mixin::ByteSizeLong(google::protobuf::Mixin *this)
{
  unsigned __int64 v1; // x8
  __int64 v2; // x9
  __int64 v3; // x8
  __int64 v4; // x1
  unsigned __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8

  v1 = *((_QWORD *)this + 2) & 0xFFFFFFFFFFFFFFFELL;
  v2 = *(unsigned __int8 *)(v1 + 23);
  if ( *(char *)(v1 + 23) < 0 )
  {
    if ( *(_QWORD *)(v1 + 8) )
      goto LABEL_3;
LABEL_7:
    v4 = 0LL;
    goto LABEL_8;
  }
  if ( !*(_BYTE *)(v1 + 23) )
    goto LABEL_7;
LABEL_3:
  v3 = *(_QWORD *)(v1 + 8);
  if ( (v2 & 0x80u) == 0LL )
    v3 = v2;
  v4 = v3 + ((9 * (__clz(v3 | 1) ^ 0x1F) + 73) >> 6) + 1;
LABEL_8:
  v5 = *((_QWORD *)this + 3) & 0xFFFFFFFFFFFFFFFELL;
  v6 = *(unsigned __int8 *)(v5 + 23);
  if ( *(char *)(v5 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v5 + 8) )
      goto LABEL_13;
  }
  else if ( !*(_BYTE *)(v5 + 23) )
  {
    goto LABEL_13;
  }
  v7 = *(_QWORD *)(v5 + 8);
  if ( (v6 & 0x80u) == 0LL )
    v7 = v6;
  v4 += v7 + ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6) + 1;
LABEL_13:
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v4, (char *)this + 32);
  *((_DWORD *)this + 8) = v4;
  return v4;
}