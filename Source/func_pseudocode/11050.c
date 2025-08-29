__ZN6google8protobuf15DescriptorProto5ClearEv
__int64 __fastcall google::protobuf::DescriptorProto::Clear(google::protobuf::DescriptorProto *this)
{
  __int64 v2; // x20
  google::protobuf::FieldDescriptorProto **v3; // x21
  google::protobuf::FieldDescriptorProto *v4; // t1
  __int64 v5; // x20
  google::protobuf::DescriptorProto **v6; // x21
  google::protobuf::DescriptorProto *v7; // t1
  __int64 v8; // x20
  google::protobuf::EnumDescriptorProto **v9; // x21
  google::protobuf::EnumDescriptorProto *v10; // t1
  __int64 v11; // x20
  __int64 *v12; // x21
  __int64 v13; // t1
  __int64 v14; // x20
  google::protobuf::FieldDescriptorProto **v15; // x21
  google::protobuf::FieldDescriptorProto *v16; // t1
  __int64 v17; // x20
  google::protobuf::OneofDescriptorProto **v18; // x21
  google::protobuf::OneofDescriptorProto *v19; // t1
  __int64 v20; // x20
  google::protobuf::DescriptorProto_ReservedRange **v21; // x21
  google::protobuf::DescriptorProto_ReservedRange *v22; // t1
  __int64 result; // x0
  int v24; // w8
  unsigned __int64 v25; // x9
  char *v26; // x19
  char v27; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((unsigned int *)this + 8);
  if ( (int)v2 >= 1 )
  {
    v3 = (google::protobuf::FieldDescriptorProto **)(*((_QWORD *)this + 5) + 8LL);
    do
    {
      v4 = *v3++;
      google::protobuf::FieldDescriptorProto::Clear(v4);
      --v2;
    }
    while ( v2 );
    *((_DWORD *)this + 8) = 0;
  }
  v5 = *((unsigned int *)this + 14);
  if ( (int)v5 >= 1 )
  {
    v6 = (google::protobuf::DescriptorProto **)(*((_QWORD *)this + 8) + 8LL);
    do
    {
      v7 = *v6++;
      google::protobuf::DescriptorProto::Clear(v7);
      --v5;
    }
    while ( v5 );
    *((_DWORD *)this + 14) = 0;
  }
  v8 = *((unsigned int *)this + 20);
  if ( (int)v8 >= 1 )
  {
    v9 = (google::protobuf::EnumDescriptorProto **)(*((_QWORD *)this + 11) + 8LL);
    do
    {
      v10 = *v9++;
      google::protobuf::EnumDescriptorProto::Clear(v10);
      --v8;
    }
    while ( v8 );
    *((_DWORD *)this + 20) = 0;
  }
  v11 = *((unsigned int *)this + 26);
  if ( (int)v11 >= 1 )
  {
    v12 = (__int64 *)(*((_QWORD *)this + 14) + 8LL);
    do
    {
      v13 = *v12++;
      google::protobuf::DescriptorProto_ExtensionRange::Clear(v13);
      --v11;
    }
    while ( v11 );
    *((_DWORD *)this + 26) = 0;
  }
  v14 = *((unsigned int *)this + 32);
  if ( (int)v14 >= 1 )
  {
    v15 = (google::protobuf::FieldDescriptorProto **)(*((_QWORD *)this + 17) + 8LL);
    do
    {
      v16 = *v15++;
      google::protobuf::FieldDescriptorProto::Clear(v16);
      --v14;
    }
    while ( v14 );
    *((_DWORD *)this + 32) = 0;
  }
  v17 = *((unsigned int *)this + 38);
  if ( (int)v17 >= 1 )
  {
    v18 = (google::protobuf::OneofDescriptorProto **)(*((_QWORD *)this + 20) + 8LL);
    do
    {
      v19 = *v18++;
      google::protobuf::OneofDescriptorProto::Clear(v19);
      --v17;
    }
    while ( v17 );
    *((_DWORD *)this + 38) = 0;
  }
  v20 = *((unsigned int *)this + 44);
  if ( (int)v20 >= 1 )
  {
    v21 = (google::protobuf::DescriptorProto_ReservedRange **)(*((_QWORD *)this + 23) + 8LL);
    do
    {
      v22 = *v21++;
      google::protobuf::DescriptorProto_ReservedRange::Clear(v22);
      --v20;
    }
    while ( v20 );
    *((_DWORD *)this + 44) = 0;
  }
  result = sub_1000B8898((char *)this + 192);
  v24 = *((_DWORD *)this + 4);
  if ( (v24 & 3) != 0 )
  {
    if ( (v24 & 1) == 0 )
      goto LABEL_33;
    v25 = *((_QWORD *)this + 27) & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(char *)(v25 + 23) & 0x80000000) == 0 )
    {
      *(_BYTE *)v25 = 0;
      *(_BYTE *)(v25 + 23) = 0;
LABEL_33:
      if ( (v24 & 2) == 0 )
        goto LABEL_35;
      goto LABEL_34;
    }
    **(_BYTE **)v25 = 0;
    *(_QWORD *)(v25 + 8) = 0LL;
    if ( (v24 & 2) != 0 )
LABEL_34:
      result = google::protobuf::MessageOptions::Clear(*((google::protobuf::MessageOptions **)this + 28));
  }
LABEL_35:
  v27 = *((_BYTE *)this + 8);
  v26 = (char *)this + 8;
  *((_DWORD *)v26 + 2) = 0;
  if ( (v27 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v26);
  }
  return result;
}