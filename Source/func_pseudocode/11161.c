__ZN6google8protobuf22ServiceDescriptorProto5ClearEv
__int64 __fastcall google::protobuf::ServiceDescriptorProto::Clear(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  google::protobuf::MethodDescriptorProto **v3; // x21
  google::protobuf::MethodDescriptorProto *v4; // t1
  int v5; // w8
  unsigned __int64 v6; // x9
  __int64 v7; // x19
  char v8; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = this;
  v2 = *(unsigned int *)(this + 32);
  if ( (int)v2 >= 1 )
  {
    v3 = (google::protobuf::MethodDescriptorProto **)(*(_QWORD *)(this + 40) + 8LL);
    do
    {
      v4 = *v3++;
      this = google::protobuf::MethodDescriptorProto::Clear(v4);
      --v2;
    }
    while ( v2 );
    *(_DWORD *)(v1 + 32) = 0;
  }
  v5 = *(_DWORD *)(v1 + 16);
  if ( (v5 & 3) != 0 )
  {
    if ( (v5 & 1) == 0 )
      goto LABEL_9;
    v6 = *(_QWORD *)(v1 + 48) & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(char *)(v6 + 23) & 0x80000000) == 0 )
    {
      *(_BYTE *)v6 = 0;
      *(_BYTE *)(v6 + 23) = 0;
LABEL_9:
      if ( (v5 & 2) == 0 )
        goto LABEL_11;
      goto LABEL_10;
    }
    **(_BYTE **)v6 = 0;
    *(_QWORD *)(v6 + 8) = 0LL;
    if ( (v5 & 2) != 0 )
LABEL_10:
      this = google::protobuf::ServiceOptions::Clear(*(google::protobuf::ServiceOptions **)(v1 + 56));
  }
LABEL_11:
  v8 = *(_BYTE *)(v1 + 8);
  v7 = v1 + 8;
  *(_DWORD *)(v7 + 8) = 0;
  if ( (v8 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v7);
  }
  return this;
}