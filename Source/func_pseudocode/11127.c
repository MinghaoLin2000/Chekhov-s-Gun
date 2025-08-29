__ZN6google8protobuf19EnumDescriptorProto5ClearEv
__int64 __fastcall google::protobuf::EnumDescriptorProto::Clear(google::protobuf::EnumDescriptorProto *this)
{
  __int64 v2; // x20
  google::protobuf::EnumValueDescriptorProto **v3; // x21
  google::protobuf::EnumValueDescriptorProto *v4; // t1
  __int64 v5; // x20
  google::protobuf::EnumDescriptorProto_EnumReservedRange **v6; // x21
  google::protobuf::EnumDescriptorProto_EnumReservedRange *v7; // t1
  __int64 result; // x0
  int v9; // w8
  unsigned __int64 v10; // x9
  char *v11; // x19
  char v12; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((unsigned int *)this + 8);
  if ( (int)v2 >= 1 )
  {
    v3 = (google::protobuf::EnumValueDescriptorProto **)(*((_QWORD *)this + 5) + 8LL);
    do
    {
      v4 = *v3++;
      google::protobuf::EnumValueDescriptorProto::Clear(v4);
      --v2;
    }
    while ( v2 );
    *((_DWORD *)this + 8) = 0;
  }
  v5 = *((unsigned int *)this + 14);
  if ( (int)v5 >= 1 )
  {
    v6 = (google::protobuf::EnumDescriptorProto_EnumReservedRange **)(*((_QWORD *)this + 8) + 8LL);
    do
    {
      v7 = *v6++;
      google::protobuf::EnumDescriptorProto_EnumReservedRange::Clear(v7);
      --v5;
    }
    while ( v5 );
    *((_DWORD *)this + 14) = 0;
  }
  result = sub_1000B8898((char *)this + 72);
  v9 = *((_DWORD *)this + 4);
  if ( (v9 & 3) != 0 )
  {
    if ( (v9 & 1) == 0 )
      goto LABEL_13;
    v10 = *((_QWORD *)this + 12) & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(char *)(v10 + 23) & 0x80000000) == 0 )
    {
      *(_BYTE *)v10 = 0;
      *(_BYTE *)(v10 + 23) = 0;
LABEL_13:
      if ( (v9 & 2) == 0 )
        goto LABEL_15;
      goto LABEL_14;
    }
    **(_BYTE **)v10 = 0;
    *(_QWORD *)(v10 + 8) = 0LL;
    if ( (v9 & 2) != 0 )
LABEL_14:
      result = google::protobuf::EnumOptions::Clear(*((google::protobuf::EnumOptions **)this + 13));
  }
LABEL_15:
  v12 = *((_BYTE *)this + 8);
  v11 = (char *)this + 8;
  *((_DWORD *)v11 + 2) = 0;
  if ( (v12 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v11);
  }
  return result;
}