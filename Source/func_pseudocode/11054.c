__ZNK6google8protobuf15DescriptorProto12ByteSizeLongEv
__int64 __fastcall google::protobuf::DescriptorProto::ByteSizeLong(google::protobuf::DescriptorProto *this)
{
  __int64 v2; // x20
  __int64 v3; // x8
  google::protobuf::FieldDescriptorProto **v4; // x21
  __int64 v5; // x22
  google::protobuf::FieldDescriptorProto *v6; // t1
  __int64 v7; // x0
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
  google::protobuf::DescriptorProto_ExtensionRange **v25; // x21
  __int64 v26; // x22
  google::protobuf::DescriptorProto_ExtensionRange *v27; // t1
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x20
  __int64 v31; // x9
  google::protobuf::FieldDescriptorProto **v32; // x21
  __int64 v33; // x22
  google::protobuf::FieldDescriptorProto *v34; // t1
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x20
  __int64 v38; // x9
  google::protobuf::OneofDescriptorProto **v39; // x21
  __int64 v40; // x22
  google::protobuf::OneofDescriptorProto *v41; // t1
  __int64 v42; // x0
  __int64 v43; // x8
  __int64 v44; // x20
  __int64 v45; // x9
  google::protobuf::DescriptorProto_ReservedRange **v46; // x21
  __int64 v47; // x22
  google::protobuf::DescriptorProto_ReservedRange *v48; // t1
  __int64 v49; // x0
  __int64 v50; // x8
  __int64 v51; // x20
  __int64 *v52; // x9
  __int64 v53; // t1
  __int64 v54; // x11
  __int64 v55; // x10
  int v56; // w8
  unsigned __int64 v57; // x9
  __int64 v58; // x10
  __int64 v59; // x9
  __int64 v60; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((int *)this + 8);
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
    v4 = (google::protobuf::FieldDescriptorProto **)(v3 + 8);
  else
    v4 = 0LL;
  if ( (_DWORD)v2 )
  {
    v5 = 8 * v2;
    do
    {
      v6 = *v4++;
      v7 = google::protobuf::FieldDescriptorProto::ByteSizeLong(v6);
      v2 += v7 + ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6);
      v5 -= 8LL;
    }
    while ( v5 );
  }
  else
  {
    v2 = 0LL;
  }
  v8 = *((int *)this + 14);
  v9 = v2 + v8;
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
    v25 = (google::protobuf::DescriptorProto_ExtensionRange **)(v24 + 8);
  else
    v25 = 0LL;
  if ( (_DWORD)v22 )
  {
    v26 = 8 * v22;
    do
    {
      v27 = *v25++;
      v28 = google::protobuf::DescriptorProto_ExtensionRange::ByteSizeLong(v27);
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
  v36 = *((int *)this + 38);
  v37 = v30 + v36;
  v38 = *((_QWORD *)this + 20);
  if ( v38 )
    v39 = (google::protobuf::OneofDescriptorProto **)(v38 + 8);
  else
    v39 = 0LL;
  if ( (_DWORD)v36 )
  {
    v40 = 8 * v36;
    do
    {
      v41 = *v39++;
      v42 = google::protobuf::OneofDescriptorProto::ByteSizeLong(v41);
      v37 += v42 + ((9 * (__clz(v42 | 1) ^ 0x1F) + 73) >> 6);
      v40 -= 8LL;
    }
    while ( v40 );
  }
  v43 = *((int *)this + 44);
  v44 = v37 + v43;
  v45 = *((_QWORD *)this + 23);
  if ( v45 )
    v46 = (google::protobuf::DescriptorProto_ReservedRange **)(v45 + 8);
  else
    v46 = 0LL;
  if ( (_DWORD)v43 )
  {
    v47 = 8 * v43;
    do
    {
      v48 = *v46++;
      v49 = google::protobuf::DescriptorProto_ReservedRange::ByteSizeLong(v48);
      v44 += v49 + ((9 * (__clz(v49 | 1) ^ 0x1F) + 73) >> 6);
      v47 -= 8LL;
    }
    while ( v47 );
  }
  v50 = *((unsigned int *)this + 50);
  v51 = v44 + v50;
  if ( (int)v50 >= 1 )
  {
    v52 = (__int64 *)(*((_QWORD *)this + 26) + 8LL);
    do
    {
      v53 = *v52++;
      v54 = *(unsigned __int8 *)(v53 + 23);
      v55 = *(_QWORD *)(v53 + 8);
      if ( (v54 & 0x80u) == 0LL )
        v55 = v54;
      v51 += v55 + ((9 * (__clz(v55 | 1) ^ 0x1F) + 73) >> 6);
      --v50;
    }
    while ( v50 );
  }
  v56 = *((_DWORD *)this + 4);
  if ( (v56 & 3) != 0 )
  {
    if ( (v56 & 1) != 0 )
    {
      v57 = *((_QWORD *)this + 27) & 0xFFFFFFFFFFFFFFFELL;
      v58 = *(unsigned __int8 *)(v57 + 23);
      v59 = *(_QWORD *)(v57 + 8);
      if ( (v58 & 0x80u) == 0LL )
        v59 = v58;
      v51 += v59 + ((9 * (__clz(v59 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
    if ( (v56 & 2) != 0 )
    {
      v60 = google::protobuf::MessageOptions::ByteSizeLong(*((google::protobuf::MessageOptions **)this + 28));
      v51 += v60 + ((9 * (__clz(v60 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v51, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v51;
    return v51;
  }
}