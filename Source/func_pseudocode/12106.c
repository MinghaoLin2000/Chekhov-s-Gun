__ZNK6google8protobuf9EnumValue12ByteSizeLongEv
__int64 __fastcall google::protobuf::EnumValue::ByteSizeLong(google::protobuf::EnumValue *this)
{
  __int64 v2; // x20
  __int64 v3; // x8
  google::protobuf::Option **v4; // x21
  __int64 v5; // x22
  google::protobuf::Option *v6; // t1
  __int64 v7; // x0
  unsigned __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x8
  int v11; // w8
  __int64 v12; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((int *)this + 6);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    v4 = (google::protobuf::Option **)(v3 + 8);
  else
    v4 = 0LL;
  if ( (_DWORD)v2 )
  {
    v5 = 8 * v2;
    do
    {
      v6 = *v4++;
      v7 = google::protobuf::Option::ByteSizeLong(v6);
      v2 += v7 + ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6);
      v5 -= 8LL;
    }
    while ( v5 );
  }
  else
  {
    v2 = 0LL;
  }
  v8 = *((_QWORD *)this + 5) & 0xFFFFFFFFFFFFFFFELL;
  v9 = *(unsigned __int8 *)(v8 + 23);
  if ( *(char *)(v8 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v8 + 8) )
      goto LABEL_14;
  }
  else if ( !*(_BYTE *)(v8 + 23) )
  {
    goto LABEL_14;
  }
  v10 = *(_QWORD *)(v8 + 8);
  if ( (v9 & 0x80u) == 0LL )
    v10 = v9;
  v2 += v10 + ((9 * (__clz(v10 | 1) ^ 0x1F) + 73) >> 6) + 1;
LABEL_14:
  v11 = *((_DWORD *)this + 12);
  if ( v11 )
  {
    if ( v11 < 0 )
      v12 = 11LL;
    else
      v12 = ((9 * (__clz(v11 | 1) ^ 0x1F) + 73) >> 6) + 1;
    v2 += v12;
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v2, (char *)this + 52);
  }
  else
  {
    *((_DWORD *)this + 13) = v2;
    return v2;
  }
}