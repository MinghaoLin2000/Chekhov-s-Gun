__ZN6google8protobuf19UninterpretedOption5ClearEv
__int64 __fastcall google::protobuf::UninterpretedOption::Clear(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  google::protobuf::UninterpretedOption_NamePart **v3; // x21
  google::protobuf::UninterpretedOption_NamePart *v4; // t1
  int v5; // w8
  unsigned __int64 v6; // x9
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x9
  __int64 v9; // x19
  char v10; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = this;
  v2 = *(unsigned int *)(this + 32);
  if ( (int)v2 >= 1 )
  {
    v3 = (google::protobuf::UninterpretedOption_NamePart **)(*(_QWORD *)(this + 40) + 8LL);
    do
    {
      v4 = *v3++;
      this = google::protobuf::UninterpretedOption_NamePart::Clear(v4);
      --v2;
    }
    while ( v2 );
    *(_DWORD *)(v1 + 32) = 0;
  }
  v5 = *(_DWORD *)(v1 + 16);
  if ( (v5 & 7) != 0 )
  {
    if ( (v5 & 1) == 0 )
    {
      if ( (v5 & 2) == 0 )
        goto LABEL_8;
LABEL_14:
      v7 = *(_QWORD *)(v1 + 56) & 0xFFFFFFFFFFFFFFFELL;
      if ( *(char *)(v7 + 23) < 0 )
      {
        **(_BYTE **)v7 = 0;
        *(_QWORD *)(v7 + 8) = 0LL;
        if ( (v5 & 4) == 0 )
          goto LABEL_21;
      }
      else
      {
        *(_BYTE *)v7 = 0;
        *(_BYTE *)(v7 + 23) = 0;
        if ( (v5 & 4) == 0 )
          goto LABEL_21;
      }
      goto LABEL_18;
    }
    v6 = *(_QWORD *)(v1 + 48) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v6 + 23) < 0 )
    {
      **(_BYTE **)v6 = 0;
      *(_QWORD *)(v6 + 8) = 0LL;
      if ( (v5 & 2) != 0 )
        goto LABEL_14;
    }
    else
    {
      *(_BYTE *)v6 = 0;
      *(_BYTE *)(v6 + 23) = 0;
      if ( (v5 & 2) != 0 )
        goto LABEL_14;
    }
LABEL_8:
    if ( (v5 & 4) == 0 )
      goto LABEL_21;
LABEL_18:
    v8 = *(_QWORD *)(v1 + 64) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v8 + 23) < 0 )
    {
      **(_BYTE **)v8 = 0;
      *(_QWORD *)(v8 + 8) = 0LL;
    }
    else
    {
      *(_BYTE *)v8 = 0;
      *(_BYTE *)(v8 + 23) = 0;
    }
  }
LABEL_21:
  if ( (v5 & 0x38) != 0 )
  {
    *(_QWORD *)(v1 + 72) = 0LL;
    *(_QWORD *)(v1 + 80) = 0LL;
    *(_QWORD *)(v1 + 88) = 0LL;
  }
  v10 = *(_BYTE *)(v1 + 8);
  v9 = v1 + 8;
  *(_DWORD *)(v9 + 8) = 0;
  if ( (v10 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v9);
  }
  return this;
}