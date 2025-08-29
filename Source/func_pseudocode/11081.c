__ZN6google8protobuf20FieldDescriptorProto5ClearEv
__int64 __fastcall google::protobuf::FieldDescriptorProto::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w20
  __int64 v3; // x19
  char v4; // t1
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = this;
  v2 = *(_DWORD *)(this + 16);
  if ( (v2 & 0x3F) == 0 )
    goto LABEL_9;
  if ( (v2 & 1) != 0 )
  {
    v5 = *(_QWORD *)(this + 24) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v5 + 23) < 0 )
    {
      **(_BYTE **)v5 = 0;
      *(_QWORD *)(v5 + 8) = 0LL;
      if ( (v2 & 2) != 0 )
        goto LABEL_21;
    }
    else
    {
      *(_BYTE *)v5 = 0;
      *(_BYTE *)(v5 + 23) = 0;
      if ( (v2 & 2) != 0 )
        goto LABEL_21;
    }
LABEL_4:
    if ( (v2 & 4) == 0 )
      goto LABEL_5;
LABEL_25:
    v7 = *(_QWORD *)(this + 40) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v7 + 23) < 0 )
    {
      **(_BYTE **)v7 = 0;
      *(_QWORD *)(v7 + 8) = 0LL;
      if ( (v2 & 8) != 0 )
        goto LABEL_29;
    }
    else
    {
      *(_BYTE *)v7 = 0;
      *(_BYTE *)(v7 + 23) = 0;
      if ( (v2 & 8) != 0 )
        goto LABEL_29;
    }
LABEL_6:
    if ( (v2 & 0x10) == 0 )
      goto LABEL_7;
    goto LABEL_33;
  }
  if ( (v2 & 2) == 0 )
    goto LABEL_4;
LABEL_21:
  v6 = *(_QWORD *)(this + 32) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v6 + 23) < 0 )
  {
    **(_BYTE **)v6 = 0;
    *(_QWORD *)(v6 + 8) = 0LL;
    if ( (v2 & 4) != 0 )
      goto LABEL_25;
  }
  else
  {
    *(_BYTE *)v6 = 0;
    *(_BYTE *)(v6 + 23) = 0;
    if ( (v2 & 4) != 0 )
      goto LABEL_25;
  }
LABEL_5:
  if ( (v2 & 8) == 0 )
    goto LABEL_6;
LABEL_29:
  v8 = *(_QWORD *)(this + 48) & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(char *)(v8 + 23) & 0x80000000) == 0 )
  {
    *(_BYTE *)v8 = 0;
    *(_BYTE *)(v8 + 23) = 0;
    if ( (v2 & 0x10) != 0 )
      goto LABEL_33;
LABEL_7:
    if ( (v2 & 0x20) == 0 )
      goto LABEL_9;
    goto LABEL_8;
  }
  **(_BYTE **)v8 = 0;
  *(_QWORD *)(v8 + 8) = 0LL;
  if ( (v2 & 0x10) == 0 )
    goto LABEL_7;
LABEL_33:
  v9 = *(_QWORD *)(this + 56) & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(char *)(v9 + 23) & 0x80000000) == 0 )
  {
    *(_BYTE *)v9 = 0;
    *(_BYTE *)(v9 + 23) = 0;
    if ( (v2 & 0x20) == 0 )
      goto LABEL_9;
LABEL_8:
    this = google::protobuf::FieldOptions::Clear(*(google::protobuf::FieldOptions **)(this + 64));
    goto LABEL_9;
  }
  **(_BYTE **)v9 = 0;
  *(_QWORD *)(v9 + 8) = 0LL;
  if ( (v2 & 0x20) != 0 )
    goto LABEL_8;
LABEL_9:
  if ( (v2 & 0xC0) != 0 )
    *(_QWORD *)(v1 + 72) = 0LL;
  if ( (v2 & 0x700) != 0 )
  {
    *(_BYTE *)(v1 + 80) = 0;
    *(_QWORD *)(v1 + 84) = 0x100000001LL;
  }
  v4 = *(_BYTE *)(v1 + 8);
  v3 = v1 + 8;
  *(_DWORD *)(v3 + 8) = 0;
  if ( (v4 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v3);
  }
  return this;
}