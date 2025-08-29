__ZNK6google8protobuf19FileDescriptorProto12ByteSizeLongEv
__int64 __fastcall google::protobuf::FileDescriptorProto::ByteSizeLong(google::protobuf::FileDescriptorProto *this)
{
  __int64 v2; // x8
  __int64 *v3; // x10
  __int64 v4; // x9
  __int64 v5; // t1
  __int64 v6; // x12
  __int64 v7; // x11
  __int64 v8; // x8
  __int64 v9; // x20
  __int64 v10; // x9
  google::protobuf::DescriptorProto **v11; // x21
  __int64 v12; // x22
  google::protobuf::DescriptorProto *v13; // t1
  __int64 v14; // x0
  __int64 v15; // x8
  __int64 v16; // x20
  __int64 v17; // x9
  google::protobuf::EnumDescriptorProto **v18; // x21
  __int64 v19; // x22
  google::protobuf::EnumDescriptorProto *v20; // t1
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x20
  __int64 v24; // x9
  google::protobuf::ServiceDescriptorProto **v25; // x21
  __int64 v26; // x22
  google::protobuf::ServiceDescriptorProto *v27; // t1
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x21
  __int64 v31; // x9
  google::protobuf::FieldDescriptorProto **v32; // x20
  __int64 v33; // x22
  google::protobuf::FieldDescriptorProto *v34; // t1
  __int64 v35; // x0
  __int64 v36; // x20
  __int64 v37; // x22
  __int64 v38; // x20
  int v39; // w21
  __int64 v40; // x0
  unsigned __int64 v42; // x8
  __int64 v43; // x9
  __int64 v44; // x8
  unsigned __int64 v45; // x8
  __int64 v46; // x9
  __int64 v47; // x8
  unsigned __int64 v48; // x8
  __int64 v49; // x9
  __int64 v50; // x8
  __int64 v51; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((unsigned int *)this + 8);
  if ( (int)v2 < 1 )
  {
    v4 = *((unsigned int *)this + 8);
  }
  else
  {
    v3 = (__int64 *)(*((_QWORD *)this + 5) + 8LL);
    v4 = *((unsigned int *)this + 8);
    do
    {
      v5 = *v3++;
      v6 = *(unsigned __int8 *)(v5 + 23);
      v7 = *(_QWORD *)(v5 + 8);
      if ( (v6 & 0x80u) == 0LL )
        v7 = v6;
      v4 += v7 + ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6);
      --v2;
    }
    while ( v2 );
  }
  v8 = *((int *)this + 14);
  v9 = v4 + v8;
  v10 = *((_QWORD *)this + 8);
  if ( v10 )
    v11 = (google::protobuf::DescriptorProto **)(v10 + 8);
  else
    v11 = 0LL;
  if ( (_DWORD)v8 )
  {
    v12 = 8 * v8;
    do
    {
      v13 = *v11++;
      v14 = google::protobuf::DescriptorProto::ByteSizeLong(v13);
      v9 += v14 + ((9 * (__clz(v14 | 1) ^ 0x1F) + 73) >> 6);
      v12 -= 8LL;
    }
    while ( v12 );
  }
  v15 = *((int *)this + 20);
  v16 = v9 + v15;
  v17 = *((_QWORD *)this + 11);
  if ( v17 )
    v18 = (google::protobuf::EnumDescriptorProto **)(v17 + 8);
  else
    v18 = 0LL;
  if ( (_DWORD)v15 )
  {
    v19 = 8 * v15;
    do
    {
      v20 = *v18++;
      v21 = google::protobuf::EnumDescriptorProto::ByteSizeLong(v20);
      v16 += v21 + ((9 * (__clz(v21 | 1) ^ 0x1F) + 73) >> 6);
      v19 -= 8LL;
    }
    while ( v19 );
  }
  v22 = *((int *)this + 26);
  v23 = v16 + v22;
  v24 = *((_QWORD *)this + 14);
  if ( v24 )
    v25 = (google::protobuf::ServiceDescriptorProto **)(v24 + 8);
  else
    v25 = 0LL;
  if ( (_DWORD)v22 )
  {
    v26 = 8 * v22;
    do
    {
      v27 = *v25++;
      v28 = google::protobuf::ServiceDescriptorProto::ByteSizeLong(v27);
      v23 += v28 + ((9 * (__clz(v28 | 1) ^ 0x1F) + 73) >> 6);
      v26 -= 8LL;
    }
    while ( v26 );
  }
  v29 = *((int *)this + 32);
  v30 = v23 + v29;
  v31 = *((_QWORD *)this + 17);
  if ( v31 )
    v32 = (google::protobuf::FieldDescriptorProto **)(v31 + 8);
  else
    v32 = 0LL;
  if ( (_DWORD)v29 )
  {
    v33 = 8 * v29;
    do
    {
      v34 = *v32++;
      v35 = google::protobuf::FieldDescriptorProto::ByteSizeLong(v34);
      v30 += v35 + ((9 * (__clz(v35 | 1) ^ 0x1F) + 73) >> 6);
      v33 -= 8LL;
    }
    while ( v33 );
  }
  v36 = google::protobuf::internal::WireFormatLite::Int32Size((char *)this + 144);
  v37 = *((unsigned int *)this + 36);
  v38 = v36
      + google::protobuf::internal::WireFormatLite::Int32Size((char *)this + 160)
      + *((unsigned int *)this + 40)
      + v30
      + v37;
  v39 = *((_DWORD *)this + 4);
  if ( (v39 & 0x1F) == 0 )
    goto LABEL_39;
  if ( (v39 & 1) != 0 )
  {
    v42 = *((_QWORD *)this + 22) & 0xFFFFFFFFFFFFFFFELL;
    v43 = *(unsigned __int8 *)(v42 + 23);
    v44 = *(_QWORD *)(v42 + 8);
    if ( (v43 & 0x80u) == 0LL )
      v44 = v43;
    v38 += v44 + ((9 * (__clz(v44 | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (v39 & 2) == 0 )
    {
LABEL_35:
      if ( (v39 & 4) == 0 )
        goto LABEL_36;
LABEL_47:
      v48 = *((_QWORD *)this + 24) & 0xFFFFFFFFFFFFFFFELL;
      v49 = *(unsigned __int8 *)(v48 + 23);
      v50 = *(_QWORD *)(v48 + 8);
      if ( (v49 & 0x80u) == 0LL )
        v50 = v49;
      v38 += v50 + ((9 * (__clz(v50 | 1) ^ 0x1F) + 73) >> 6) + 1;
      if ( (v39 & 8) == 0 )
      {
LABEL_37:
        if ( (v39 & 0x10) == 0 )
          goto LABEL_39;
        goto LABEL_38;
      }
      goto LABEL_50;
    }
  }
  else if ( (v39 & 2) == 0 )
  {
    goto LABEL_35;
  }
  v45 = *((_QWORD *)this + 23) & 0xFFFFFFFFFFFFFFFELL;
  v46 = *(unsigned __int8 *)(v45 + 23);
  v47 = *(_QWORD *)(v45 + 8);
  if ( (v46 & 0x80u) == 0LL )
    v47 = v46;
  v38 += v47 + ((9 * (__clz(v47 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v39 & 4) != 0 )
    goto LABEL_47;
LABEL_36:
  if ( (v39 & 8) == 0 )
    goto LABEL_37;
LABEL_50:
  v51 = google::protobuf::FileOptions::ByteSizeLong(*((google::protobuf::FileOptions **)this + 25));
  v38 += v51 + ((9 * (__clz(v51 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v39 & 0x10) != 0 )
  {
LABEL_38:
    v40 = google::protobuf::SourceCodeInfo::ByteSizeLong(*((google::protobuf::SourceCodeInfo **)this + 26));
    v38 += v40 + ((9 * (__clz(v40 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
LABEL_39:
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v38, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v38;
    return v38;
  }
}