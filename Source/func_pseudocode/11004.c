__ZN6google8protobuf11FileOptions5ClearEv
__int64 __fastcall google::protobuf::FileOptions::Clear(google::protobuf::FileOptions *this)
{
  __int64 result; // x0
  __int64 v3; // x20
  google::protobuf::UninterpretedOption **v4; // x21
  google::protobuf::UninterpretedOption *v5; // t1
  int v6; // w8
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x9
  unsigned __int64 v9; // x9
  unsigned __int64 v10; // x9
  unsigned __int64 v11; // x9
  unsigned __int64 v12; // x9
  unsigned __int64 v13; // x9
  unsigned __int64 v14; // x9
  unsigned __int64 v15; // x9
  unsigned __int64 v16; // x9
  char *v17; // x19
  char v18; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  result = google::protobuf::internal::ExtensionSet::Clear((google::protobuf::FileOptions *)((char *)this + 16));
  v3 = *((unsigned int *)this + 14);
  if ( (int)v3 >= 1 )
  {
    v4 = (google::protobuf::UninterpretedOption **)(*((_QWORD *)this + 8) + 8LL);
    do
    {
      v5 = *v4++;
      result = google::protobuf::UninterpretedOption::Clear(v5);
      --v3;
    }
    while ( v3 );
    *((_DWORD *)this + 14) = 0;
  }
  v6 = *((_DWORD *)this + 10);
  if ( (_BYTE)v6 )
  {
    if ( (v6 & 1) == 0 )
    {
      if ( (v6 & 2) == 0 )
        goto LABEL_8;
LABEL_19:
      v8 = *((_QWORD *)this + 10) & 0xFFFFFFFFFFFFFFFELL;
      if ( *(char *)(v8 + 23) < 0 )
      {
        **(_BYTE **)v8 = 0;
        *(_QWORD *)(v8 + 8) = 0LL;
        if ( (v6 & 4) != 0 )
          goto LABEL_23;
      }
      else
      {
        *(_BYTE *)v8 = 0;
        *(_BYTE *)(v8 + 23) = 0;
        if ( (v6 & 4) != 0 )
          goto LABEL_23;
      }
LABEL_9:
      if ( (v6 & 8) == 0 )
        goto LABEL_10;
LABEL_27:
      v10 = *((_QWORD *)this + 12) & 0xFFFFFFFFFFFFFFFELL;
      if ( *(char *)(v10 + 23) < 0 )
      {
        **(_BYTE **)v10 = 0;
        *(_QWORD *)(v10 + 8) = 0LL;
        if ( (v6 & 0x10) != 0 )
          goto LABEL_31;
      }
      else
      {
        *(_BYTE *)v10 = 0;
        *(_BYTE *)(v10 + 23) = 0;
        if ( (v6 & 0x10) != 0 )
          goto LABEL_31;
      }
LABEL_11:
      if ( (v6 & 0x20) == 0 )
        goto LABEL_12;
LABEL_35:
      v12 = *((_QWORD *)this + 14) & 0xFFFFFFFFFFFFFFFELL;
      if ( *(char *)(v12 + 23) < 0 )
      {
        **(_BYTE **)v12 = 0;
        *(_QWORD *)(v12 + 8) = 0LL;
        if ( (v6 & 0x40) != 0 )
          goto LABEL_39;
      }
      else
      {
        *(_BYTE *)v12 = 0;
        *(_BYTE *)(v12 + 23) = 0;
        if ( (v6 & 0x40) != 0 )
          goto LABEL_39;
      }
LABEL_13:
      if ( (v6 & 0x80) == 0 )
        goto LABEL_46;
LABEL_43:
      v14 = *((_QWORD *)this + 16) & 0xFFFFFFFFFFFFFFFELL;
      if ( *(char *)(v14 + 23) < 0 )
      {
        **(_BYTE **)v14 = 0;
        *(_QWORD *)(v14 + 8) = 0LL;
      }
      else
      {
        *(_BYTE *)v14 = 0;
        *(_BYTE *)(v14 + 23) = 0;
      }
      goto LABEL_46;
    }
    v7 = *((_QWORD *)this + 9) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v7 + 23) < 0 )
    {
      **(_BYTE **)v7 = 0;
      *(_QWORD *)(v7 + 8) = 0LL;
      if ( (v6 & 2) != 0 )
        goto LABEL_19;
    }
    else
    {
      *(_BYTE *)v7 = 0;
      *(_BYTE *)(v7 + 23) = 0;
      if ( (v6 & 2) != 0 )
        goto LABEL_19;
    }
LABEL_8:
    if ( (v6 & 4) == 0 )
      goto LABEL_9;
LABEL_23:
    v9 = *((_QWORD *)this + 11) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v9 + 23) < 0 )
    {
      **(_BYTE **)v9 = 0;
      *(_QWORD *)(v9 + 8) = 0LL;
      if ( (v6 & 8) != 0 )
        goto LABEL_27;
    }
    else
    {
      *(_BYTE *)v9 = 0;
      *(_BYTE *)(v9 + 23) = 0;
      if ( (v6 & 8) != 0 )
        goto LABEL_27;
    }
LABEL_10:
    if ( (v6 & 0x10) == 0 )
      goto LABEL_11;
LABEL_31:
    v11 = *((_QWORD *)this + 13) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v11 + 23) < 0 )
    {
      **(_BYTE **)v11 = 0;
      *(_QWORD *)(v11 + 8) = 0LL;
      if ( (v6 & 0x20) != 0 )
        goto LABEL_35;
    }
    else
    {
      *(_BYTE *)v11 = 0;
      *(_BYTE *)(v11 + 23) = 0;
      if ( (v6 & 0x20) != 0 )
        goto LABEL_35;
    }
LABEL_12:
    if ( (v6 & 0x40) == 0 )
      goto LABEL_13;
LABEL_39:
    v13 = *((_QWORD *)this + 15) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v13 + 23) < 0 )
    {
      **(_BYTE **)v13 = 0;
      *(_QWORD *)(v13 + 8) = 0LL;
      if ( (v6 & 0x80) == 0 )
        goto LABEL_46;
    }
    else
    {
      *(_BYTE *)v13 = 0;
      *(_BYTE *)(v13 + 23) = 0;
      if ( (v6 & 0x80) == 0 )
        goto LABEL_46;
    }
    goto LABEL_43;
  }
LABEL_46:
  if ( (v6 & 0x300) == 0 )
    goto LABEL_56;
  if ( (v6 & 0x100) != 0 )
  {
    v15 = *((_QWORD *)this + 17) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v15 + 23) < 0 )
    {
      **(_BYTE **)v15 = 0;
      *(_QWORD *)(v15 + 8) = 0LL;
      if ( (v6 & 0x200) == 0 )
        goto LABEL_56;
      goto LABEL_51;
    }
    *(_BYTE *)v15 = 0;
    *(_BYTE *)(v15 + 23) = 0;
  }
  if ( (v6 & 0x200) == 0 )
    goto LABEL_56;
LABEL_51:
  v16 = *((_QWORD *)this + 18) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v16 + 23) < 0 )
  {
    **(_BYTE **)v16 = 0;
    *(_QWORD *)(v16 + 8) = 0LL;
  }
  else
  {
    *(_BYTE *)v16 = 0;
    *(_BYTE *)(v16 + 23) = 0;
  }
LABEL_56:
  if ( (v6 & 0xFC00) != 0 )
  {
    *((_WORD *)this + 78) = 0;
    *((_DWORD *)this + 38) = 0;
  }
  if ( (v6 & 0xF0000) != 0 )
  {
    *((_WORD *)this + 79) = 0;
    *((_DWORD *)this + 40) = 1;
    *((_BYTE *)this + 164) = 1;
  }
  v18 = *((_BYTE *)this + 8);
  v17 = (char *)this + 8;
  *((_DWORD *)v17 + 8) = 0;
  if ( (v18 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v17);
  }
  return result;
}