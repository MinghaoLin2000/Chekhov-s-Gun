__ZNK6google8protobuf3Api12ByteSizeLongEv
__int64 __fastcall google::protobuf::Api::ByteSizeLong(google::protobuf::Api *this)
{
  __int64 v2; // x20
  __int64 v3; // x8
  google::protobuf::Method **v4; // x21
  __int64 v5; // x22
  google::protobuf::Method *v6; // t1
  __int64 v7; // x0
  __int64 v8; // x8
  __int64 v9; // x20
  __int64 v10; // x9
  google::protobuf::Option **v11; // x21
  __int64 v12; // x22
  google::protobuf::Option *v13; // t1
  __int64 v14; // x0
  __int64 v15; // x8
  __int64 v16; // x20
  __int64 v17; // x9
  google::protobuf::Mixin **v18; // x21
  __int64 v19; // x22
  google::protobuf::Mixin *v20; // t1
  __int64 v21; // x0
  unsigned __int64 v22; // x8
  __int64 v23; // x9
  __int64 v24; // x8
  unsigned __int64 v25; // x8
  __int64 v26; // x9
  __int64 v27; // x8
  google::protobuf::SourceContext *v28; // x0
  __int64 v29; // x0
  int v30; // w8
  __int64 v31; // x9
  __int64 v32; // x10
  __int64 v33; // x9
  __int64 v34; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((int *)this + 6);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    v4 = (google::protobuf::Method **)(v3 + 8);
  else
    v4 = 0LL;
  if ( (_DWORD)v2 )
  {
    v5 = 8 * v2;
    do
    {
      v6 = *v4++;
      v7 = google::protobuf::Method::ByteSizeLong(v6);
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
  v15 = *((int *)this + 18);
  v16 = v9 + v15;
  v17 = *((_QWORD *)this + 10);
  if ( v17 )
    v18 = (google::protobuf::Mixin **)(v17 + 8);
  else
    v18 = 0LL;
  if ( (_DWORD)v15 )
  {
    v19 = 8 * v15;
    do
    {
      v20 = *v18++;
      v21 = google::protobuf::Mixin::ByteSizeLong(v20);
      v16 += v21 + ((9 * (__clz(v21 | 1) ^ 0x1F) + 73) >> 6);
      v19 -= 8LL;
    }
    while ( v19 );
  }
  v22 = *((_QWORD *)this + 11) & 0xFFFFFFFFFFFFFFFELL;
  v23 = *(unsigned __int8 *)(v22 + 23);
  if ( *(char *)(v22 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v22 + 8) )
      goto LABEL_26;
  }
  else if ( !*(_BYTE *)(v22 + 23) )
  {
    goto LABEL_26;
  }
  v24 = *(_QWORD *)(v22 + 8);
  if ( (v23 & 0x80u) == 0LL )
    v24 = v23;
  v16 += v24 + ((9 * (__clz(v24 | 1) ^ 0x1F) + 73) >> 6) + 1;
LABEL_26:
  v25 = *((_QWORD *)this + 12) & 0xFFFFFFFFFFFFFFFELL;
  v26 = *(unsigned __int8 *)(v25 + 23);
  if ( *(char *)(v25 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v25 + 8) )
      goto LABEL_31;
  }
  else if ( !*(_BYTE *)(v25 + 23) )
  {
    goto LABEL_31;
  }
  v27 = *(_QWORD *)(v25 + 8);
  if ( (v26 & 0x80u) == 0LL )
    v27 = v26;
  v16 += v27 + ((9 * (__clz(v27 | 1) ^ 0x1F) + 73) >> 6) + 1;
LABEL_31:
  if ( this != (google::protobuf::Api *)&google::protobuf::_Api_default_instance_ )
  {
    v28 = (google::protobuf::SourceContext *)*((_QWORD *)this + 13);
    if ( v28 )
    {
      v29 = google::protobuf::SourceContext::ByteSizeLong(v28);
      v16 += v29 + ((9 * (__clz(v29 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
  }
  v30 = *((_DWORD *)this + 28);
  v31 = 11LL;
  v32 = ((9 * (__clz(v30 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( v30 >= 0 )
    v31 = v32;
  v33 = v31 + v16;
  if ( v30 )
    v34 = v33;
  else
    v34 = v16;
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v34, (char *)this + 116);
  }
  else
  {
    *((_DWORD *)this + 29) = v34;
    return v34;
  }
}