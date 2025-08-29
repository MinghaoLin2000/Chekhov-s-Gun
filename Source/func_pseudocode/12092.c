__ZNK6google8protobuf4Enum12ByteSizeLongEv
__int64 __fastcall google::protobuf::Enum::ByteSizeLong(google::protobuf::Enum *this)
{
  __int64 v2; // x20
  __int64 v3; // x8
  google::protobuf::EnumValue **v4; // x21
  __int64 v5; // x22
  google::protobuf::EnumValue *v6; // t1
  __int64 v7; // x0
  __int64 v8; // x8
  __int64 v9; // x20
  __int64 v10; // x9
  google::protobuf::Option **v11; // x21
  __int64 v12; // x22
  google::protobuf::Option *v13; // t1
  __int64 v14; // x0
  unsigned __int64 v15; // x8
  __int64 v16; // x9
  __int64 v17; // x8
  google::protobuf::SourceContext *v18; // x0
  __int64 v19; // x0
  int v20; // w8
  __int64 v21; // x9
  __int64 v22; // x10
  __int64 v23; // x9
  __int64 v24; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((int *)this + 6);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    v4 = (google::protobuf::EnumValue **)(v3 + 8);
  else
    v4 = 0LL;
  if ( (_DWORD)v2 )
  {
    v5 = 8 * v2;
    do
    {
      v6 = *v4++;
      v7 = google::protobuf::EnumValue::ByteSizeLong(v6);
      v2 += v7 + ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6);
      v5 -= 8LL;
    }
    while ( v5 );
  }
  else
  {
    v2 = 0LL;
  }
  v8 = *((int *)this + 12);
  v9 = v2 + v8;
  v10 = *((_QWORD *)this + 7);
  if ( v10 )
    v11 = (google::protobuf::Option **)(v10 + 8);
  else
    v11 = 0LL;
  if ( (_DWORD)v8 )
  {
    v12 = 8 * v8;
    do
    {
      v13 = *v11++;
      v14 = google::protobuf::Option::ByteSizeLong(v13);
      v9 += v14 + ((9 * (__clz(v14 | 1) ^ 0x1F) + 73) >> 6);
      v12 -= 8LL;
    }
    while ( v12 );
  }
  v15 = *((_QWORD *)this + 8) & 0xFFFFFFFFFFFFFFFELL;
  v16 = *(unsigned __int8 *)(v15 + 23);
  if ( *(char *)(v15 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v15 + 8) )
      goto LABEL_20;
  }
  else if ( !*(_BYTE *)(v15 + 23) )
  {
    goto LABEL_20;
  }
  v17 = *(_QWORD *)(v15 + 8);
  if ( (v16 & 0x80u) == 0LL )
    v17 = v16;
  v9 += v17 + ((9 * (__clz(v17 | 1) ^ 0x1F) + 73) >> 6) + 1;
LABEL_20:
  if ( this != (google::protobuf::Enum *)&google::protobuf::_Enum_default_instance_ )
  {
    v18 = (google::protobuf::SourceContext *)*((_QWORD *)this + 9);
    if ( v18 )
    {
      v19 = google::protobuf::SourceContext::ByteSizeLong(v18);
      v9 += v19 + ((9 * (__clz(v19 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
  }
  v20 = *((_DWORD *)this + 20);
  v21 = 11LL;
  v22 = ((9 * (__clz(v20 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( v20 >= 0 )
    v21 = v22;
  v23 = v21 + v9;
  if ( v20 )
    v24 = v23;
  else
    v24 = v9;
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v24, (char *)this + 84);
  }
  else
  {
    *((_DWORD *)this + 21) = v24;
    return v24;
  }
}