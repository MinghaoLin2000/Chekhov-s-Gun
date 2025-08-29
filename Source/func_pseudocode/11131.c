__ZNK6google8protobuf19EnumDescriptorProto12ByteSizeLongEv
__int64 __fastcall google::protobuf::EnumDescriptorProto::ByteSizeLong(google::protobuf::EnumDescriptorProto *this)
{
  __int64 v2; // x20
  __int64 v3; // x8
  google::protobuf::EnumValueDescriptorProto **v4; // x21
  __int64 v5; // x22
  google::protobuf::EnumValueDescriptorProto *v6; // t1
  __int64 v7; // x0
  __int64 v8; // x8
  __int64 v9; // x20
  __int64 v10; // x9
  google::protobuf::EnumDescriptorProto_EnumReservedRange **v11; // x21
  __int64 v12; // x22
  google::protobuf::EnumDescriptorProto_EnumReservedRange *v13; // t1
  __int64 v14; // x0
  __int64 v15; // x8
  __int64 v16; // x20
  __int64 *v17; // x9
  __int64 v18; // t1
  __int64 v19; // x11
  __int64 v20; // x10
  int v21; // w8
  unsigned __int64 v22; // x9
  __int64 v23; // x10
  __int64 v24; // x9
  __int64 v25; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((int *)this + 8);
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
    v4 = (google::protobuf::EnumValueDescriptorProto **)(v3 + 8);
  else
    v4 = 0LL;
  if ( (_DWORD)v2 )
  {
    v5 = 8 * v2;
    do
    {
      v6 = *v4++;
      v7 = google::protobuf::EnumValueDescriptorProto::ByteSizeLong(v6);
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
    v11 = (google::protobuf::EnumDescriptorProto_EnumReservedRange **)(v10 + 8);
  else
    v11 = 0LL;
  if ( (_DWORD)v8 )
  {
    v12 = 8 * v8;
    do
    {
      v13 = *v11++;
      v14 = google::protobuf::EnumDescriptorProto_EnumReservedRange::ByteSizeLong(v13);
      v9 += v14 + ((9 * (__clz(v14 | 1) ^ 0x1F) + 73) >> 6);
      v12 -= 8LL;
    }
    while ( v12 );
  }
  v15 = *((unsigned int *)this + 20);
  v16 = v9 + v15;
  if ( (int)v15 >= 1 )
  {
    v17 = (__int64 *)(*((_QWORD *)this + 11) + 8LL);
    do
    {
      v18 = *v17++;
      v19 = *(unsigned __int8 *)(v18 + 23);
      v20 = *(_QWORD *)(v18 + 8);
      if ( (v19 & 0x80u) == 0LL )
        v20 = v19;
      v16 += v20 + ((9 * (__clz(v20 | 1) ^ 0x1F) + 73) >> 6);
      --v15;
    }
    while ( v15 );
  }
  v21 = *((_DWORD *)this + 4);
  if ( (v21 & 3) != 0 )
  {
    if ( (v21 & 1) != 0 )
    {
      v22 = *((_QWORD *)this + 12) & 0xFFFFFFFFFFFFFFFELL;
      v23 = *(unsigned __int8 *)(v22 + 23);
      v24 = *(_QWORD *)(v22 + 8);
      if ( (v23 & 0x80u) == 0LL )
        v24 = v23;
      v16 += v24 + ((9 * (__clz(v24 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
    if ( (v21 & 2) != 0 )
    {
      v25 = google::protobuf::EnumOptions::ByteSizeLong(*((google::protobuf::EnumOptions **)this + 13));
      v16 += v25 + ((9 * (__clz(v25 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v16, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v16;
    return v16;
  }
}