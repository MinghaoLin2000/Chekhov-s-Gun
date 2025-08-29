__ZN6google8protobuf19FileDescriptorProto5ClearEv
__int64 __fastcall google::protobuf::FileDescriptorProto::Clear(google::protobuf::FileDescriptorProto *this)
{
  __int64 result; // x0
  __int64 v3; // x20
  google::protobuf::DescriptorProto **v4; // x21
  google::protobuf::DescriptorProto *v5; // t1
  __int64 v6; // x20
  google::protobuf::EnumDescriptorProto **v7; // x21
  google::protobuf::EnumDescriptorProto *v8; // t1
  __int64 v9; // x20
  google::protobuf::ServiceDescriptorProto **v10; // x21
  google::protobuf::ServiceDescriptorProto *v11; // t1
  __int64 v12; // x20
  google::protobuf::FieldDescriptorProto **v13; // x21
  google::protobuf::FieldDescriptorProto *v14; // t1
  int v15; // w20
  char *v16; // x19
  char v17; // t1
  unsigned __int64 v18; // x8
  unsigned __int64 v19; // x8
  unsigned __int64 v20; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  result = sub_1000B8898((char *)this + 24);
  v3 = *((unsigned int *)this + 14);
  if ( (int)v3 >= 1 )
  {
    v4 = (google::protobuf::DescriptorProto **)(*((_QWORD *)this + 8) + 8LL);
    do
    {
      v5 = *v4++;
      result = google::protobuf::DescriptorProto::Clear(v5);
      --v3;
    }
    while ( v3 );
    *((_DWORD *)this + 14) = 0;
  }
  v6 = *((unsigned int *)this + 20);
  if ( (int)v6 >= 1 )
  {
    v7 = (google::protobuf::EnumDescriptorProto **)(*((_QWORD *)this + 11) + 8LL);
    do
    {
      v8 = *v7++;
      result = google::protobuf::EnumDescriptorProto::Clear(v8);
      --v6;
    }
    while ( v6 );
    *((_DWORD *)this + 20) = 0;
  }
  v9 = *((unsigned int *)this + 26);
  if ( (int)v9 >= 1 )
  {
    v10 = (google::protobuf::ServiceDescriptorProto **)(*((_QWORD *)this + 14) + 8LL);
    do
    {
      v11 = *v10++;
      result = google::protobuf::ServiceDescriptorProto::Clear(v11);
      --v9;
    }
    while ( v9 );
    *((_DWORD *)this + 26) = 0;
  }
  v12 = *((unsigned int *)this + 32);
  if ( (int)v12 >= 1 )
  {
    v13 = (google::protobuf::FieldDescriptorProto **)(*((_QWORD *)this + 17) + 8LL);
    do
    {
      v14 = *v13++;
      result = google::protobuf::FieldDescriptorProto::Clear(v14);
      --v12;
    }
    while ( v12 );
    *((_DWORD *)this + 32) = 0;
  }
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 40) = 0;
  v15 = *((_DWORD *)this + 4);
  if ( (v15 & 0x1F) == 0 )
    goto LABEL_24;
  if ( (v15 & 1) == 0 )
  {
    if ( (v15 & 2) == 0 )
      goto LABEL_20;
LABEL_32:
    v19 = *((_QWORD *)this + 23) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v19 + 23) < 0 )
    {
      **(_BYTE **)v19 = 0;
      *(_QWORD *)(v19 + 8) = 0LL;
      if ( (v15 & 4) != 0 )
        goto LABEL_36;
    }
    else
    {
      *(_BYTE *)v19 = 0;
      *(_BYTE *)(v19 + 23) = 0;
      if ( (v15 & 4) != 0 )
        goto LABEL_36;
    }
LABEL_21:
    if ( (v15 & 8) == 0 )
      goto LABEL_22;
    goto LABEL_40;
  }
  v18 = *((_QWORD *)this + 22) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v18 + 23) < 0 )
  {
    **(_BYTE **)v18 = 0;
    *(_QWORD *)(v18 + 8) = 0LL;
    if ( (v15 & 2) != 0 )
      goto LABEL_32;
  }
  else
  {
    *(_BYTE *)v18 = 0;
    *(_BYTE *)(v18 + 23) = 0;
    if ( (v15 & 2) != 0 )
      goto LABEL_32;
  }
LABEL_20:
  if ( (v15 & 4) == 0 )
    goto LABEL_21;
LABEL_36:
  v20 = *((_QWORD *)this + 24) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v20 + 23) < 0 )
  {
    **(_BYTE **)v20 = 0;
    *(_QWORD *)(v20 + 8) = 0LL;
    if ( (v15 & 8) != 0 )
      goto LABEL_40;
LABEL_22:
    if ( (v15 & 0x10) == 0 )
      goto LABEL_24;
    goto LABEL_23;
  }
  *(_BYTE *)v20 = 0;
  *(_BYTE *)(v20 + 23) = 0;
  if ( (v15 & 8) == 0 )
    goto LABEL_22;
LABEL_40:
  result = google::protobuf::FileOptions::Clear(*((google::protobuf::FileOptions **)this + 25));
  if ( (v15 & 0x10) != 0 )
LABEL_23:
    result = google::protobuf::SourceCodeInfo::Clear(*((google::protobuf::SourceCodeInfo **)this + 26));
LABEL_24:
  v17 = *((_BYTE *)this + 8);
  v16 = (char *)this + 8;
  *((_DWORD *)v16 + 2) = 0;
  if ( (v17 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v16);
  }
  return result;
}