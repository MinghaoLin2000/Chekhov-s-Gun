__ZNK6google8protobuf4Type12ByteSizeLongEv
__int64 __fastcall google::protobuf::Type::ByteSizeLong(google::protobuf::Type *this)
{
  __int64 v2; // x20
  __int64 v3; // x8
  google::protobuf::Field **v4; // x21
  __int64 v5; // x22
  google::protobuf::Field *v6; // t1
  __int64 v7; // x0
  __int64 v8; // x9
  __int64 v9; // x8
  __int64 *v10; // x10
  __int64 v11; // t1
  __int64 v12; // x12
  __int64 v13; // x11
  __int64 v14; // x9
  __int64 v15; // x20
  __int64 v16; // x8
  google::protobuf::Option **v17; // x21
  __int64 v18; // x22
  google::protobuf::Option *v19; // t1
  __int64 v20; // x0
  unsigned __int64 v21; // x8
  __int64 v22; // x9
  __int64 v23; // x8
  google::protobuf::SourceContext *v24; // x0
  __int64 v25; // x0
  int v26; // w8
  __int64 v27; // x9
  __int64 v28; // x10
  __int64 v29; // x9
  __int64 v30; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((int *)this + 6);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    v4 = (google::protobuf::Field **)(v3 + 8);
  else
    v4 = 0LL;
  if ( (_DWORD)v2 )
  {
    v5 = 8 * v2;
    do
    {
      v6 = *v4++;
      v7 = google::protobuf::Field::ByteSizeLong(v6);
      v2 += v7 + ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6);
      v5 -= 8LL;
    }
    while ( v5 );
  }
  else
  {
    v2 = 0LL;
  }
  v8 = *((unsigned int *)this + 12);
  v9 = v2 + v8;
  if ( (int)v8 >= 1 )
  {
    v10 = (__int64 *)(*((_QWORD *)this + 7) + 8LL);
    do
    {
      v11 = *v10++;
      v12 = *(unsigned __int8 *)(v11 + 23);
      v13 = *(_QWORD *)(v11 + 8);
      if ( (v12 & 0x80u) == 0LL )
        v13 = v12;
      v9 += v13 + ((9 * (__clz(v13 | 1) ^ 0x1F) + 73) >> 6);
      --v8;
    }
    while ( v8 );
  }
  v14 = *((int *)this + 18);
  v15 = v9 + v14;
  v16 = *((_QWORD *)this + 10);
  if ( v16 )
    v17 = (google::protobuf::Option **)(v16 + 8);
  else
    v17 = 0LL;
  if ( (_DWORD)v14 )
  {
    v18 = 8 * v14;
    do
    {
      v19 = *v17++;
      v20 = google::protobuf::Option::ByteSizeLong(v19);
      v15 += v20 + ((9 * (__clz(v20 | 1) ^ 0x1F) + 73) >> 6);
      v18 -= 8LL;
    }
    while ( v18 );
  }
  v21 = *((_QWORD *)this + 11) & 0xFFFFFFFFFFFFFFFELL;
  v22 = *(unsigned __int8 *)(v21 + 23);
  if ( *(char *)(v21 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v21 + 8) )
      goto LABEL_25;
  }
  else if ( !*(_BYTE *)(v21 + 23) )
  {
    goto LABEL_25;
  }
  v23 = *(_QWORD *)(v21 + 8);
  if ( (v22 & 0x80u) == 0LL )
    v23 = v22;
  v15 += v23 + ((9 * (__clz(v23 | 1) ^ 0x1F) + 73) >> 6) + 1;
LABEL_25:
  if ( this != (google::protobuf::Type *)&google::protobuf::_Type_default_instance_ )
  {
    v24 = (google::protobuf::SourceContext *)*((_QWORD *)this + 12);
    if ( v24 )
    {
      v25 = google::protobuf::SourceContext::ByteSizeLong(v24);
      v15 += v25 + ((9 * (__clz(v25 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
  }
  v26 = *((_DWORD *)this + 26);
  v27 = 11LL;
  v28 = ((9 * (__clz(v26 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( v26 >= 0 )
    v27 = v28;
  v29 = v27 + v15;
  if ( v26 )
    v30 = v29;
  else
    v30 = v15;
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v30, (char *)this + 108);
  }
  else
  {
    *((_DWORD *)this + 27) = v30;
    return v30;
  }
}