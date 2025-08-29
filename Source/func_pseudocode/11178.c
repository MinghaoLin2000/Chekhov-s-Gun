__ZN6google8protobuf21MethodDescriptorProto5ClearEv
__int64 __fastcall google::protobuf::MethodDescriptorProto::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x19
  char v4; // t1
  unsigned __int64 v5; // x9
  unsigned __int64 v6; // x9
  unsigned __int64 v7; // x9
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = this;
  v2 = *(_DWORD *)(this + 16);
  if ( (v2 & 0xF) == 0 )
    goto LABEL_7;
  if ( (v2 & 1) != 0 )
  {
    v5 = *(_QWORD *)(this + 24) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v5 + 23) < 0 )
    {
      **(_BYTE **)v5 = 0;
      *(_QWORD *)(v5 + 8) = 0LL;
      if ( (v2 & 2) != 0 )
        goto LABEL_15;
    }
    else
    {
      *(_BYTE *)v5 = 0;
      *(_BYTE *)(v5 + 23) = 0;
      if ( (v2 & 2) != 0 )
        goto LABEL_15;
    }
LABEL_4:
    if ( (v2 & 4) == 0 )
      goto LABEL_5;
    goto LABEL_19;
  }
  if ( (v2 & 2) == 0 )
    goto LABEL_4;
LABEL_15:
  v6 = *(_QWORD *)(this + 32) & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(char *)(v6 + 23) & 0x80000000) == 0 )
  {
    *(_BYTE *)v6 = 0;
    *(_BYTE *)(v6 + 23) = 0;
    if ( (v2 & 4) != 0 )
      goto LABEL_19;
LABEL_5:
    if ( (v2 & 8) == 0 )
      goto LABEL_7;
    goto LABEL_6;
  }
  **(_BYTE **)v6 = 0;
  *(_QWORD *)(v6 + 8) = 0LL;
  if ( (v2 & 4) == 0 )
    goto LABEL_5;
LABEL_19:
  v7 = *(_QWORD *)(this + 40) & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(char *)(v7 + 23) & 0x80000000) == 0 )
  {
    *(_BYTE *)v7 = 0;
    *(_BYTE *)(v7 + 23) = 0;
    if ( (v2 & 8) == 0 )
      goto LABEL_7;
LABEL_6:
    this = google::protobuf::MethodOptions::Clear(*(google::protobuf::MethodOptions **)(this + 48));
    goto LABEL_7;
  }
  **(_BYTE **)v7 = 0;
  *(_QWORD *)(v7 + 8) = 0LL;
  if ( (v2 & 8) != 0 )
    goto LABEL_6;
LABEL_7:
  v4 = *(_BYTE *)(v1 + 8);
  v3 = v1 + 8;
  *(_WORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  if ( (v4 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v3);
  }
  return this;
}