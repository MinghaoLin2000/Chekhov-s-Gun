__ZN6google8protobuf20OneofDescriptorProto5ClearEv
__int64 __fastcall google::protobuf::OneofDescriptorProto::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  unsigned __int64 v3; // x9
  __int64 v4; // x19
  char v5; // t1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = this;
  v2 = *(_DWORD *)(this + 16);
  if ( (v2 & 3) != 0 )
  {
    if ( (v2 & 1) == 0 )
      goto LABEL_5;
    v3 = *(_QWORD *)(this + 24) & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(char *)(v3 + 23) & 0x80000000) == 0 )
    {
      *(_BYTE *)v3 = 0;
      *(_BYTE *)(v3 + 23) = 0;
LABEL_5:
      if ( (v2 & 2) == 0 )
        goto LABEL_7;
      goto LABEL_6;
    }
    **(_BYTE **)v3 = 0;
    *(_QWORD *)(v3 + 8) = 0LL;
    if ( (v2 & 2) != 0 )
LABEL_6:
      this = google::protobuf::OneofOptions::Clear(*(google::protobuf::OneofOptions **)(this + 32));
  }
LABEL_7:
  v5 = *(_BYTE *)(v1 + 8);
  v4 = v1 + 8;
  *(_DWORD *)(v4 + 8) = 0;
  if ( (v5 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v4);
  }
  return this;
}