__ZN3TSP8DataInfo5ClearEv
__int64 __fastcall TSP::DataInfo::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w20
  unsigned __int64 v3; // x8
  unsigned __int64 v4; // x8
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x8
  unsigned __int64 v10; // x8
  __int64 v11; // x19
  char v12; // t1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = this;
  v2 = *(_DWORD *)(this + 16);
  if ( (_BYTE)v2 )
  {
    if ( (v2 & 1) == 0 )
    {
      if ( (v2 & 2) == 0 )
        goto LABEL_4;
LABEL_15:
      v4 = *(_QWORD *)(this + 32) & 0xFFFFFFFFFFFFFFFELL;
      if ( *(char *)(v4 + 23) < 0 )
      {
        **(_BYTE **)v4 = 0;
        *(_QWORD *)(v4 + 8) = 0LL;
        if ( (v2 & 4) != 0 )
          goto LABEL_19;
      }
      else
      {
        *(_BYTE *)v4 = 0;
        *(_BYTE *)(v4 + 23) = 0;
        if ( (v2 & 4) != 0 )
          goto LABEL_19;
      }
LABEL_5:
      if ( (v2 & 8) == 0 )
        goto LABEL_6;
LABEL_23:
      v6 = *(_QWORD *)(this + 48) & 0xFFFFFFFFFFFFFFFELL;
      if ( *(char *)(v6 + 23) < 0 )
      {
        **(_BYTE **)v6 = 0;
        *(_QWORD *)(v6 + 8) = 0LL;
        if ( (v2 & 0x10) != 0 )
          goto LABEL_27;
      }
      else
      {
        *(_BYTE *)v6 = 0;
        *(_BYTE *)(v6 + 23) = 0;
        if ( (v2 & 0x10) != 0 )
          goto LABEL_27;
      }
LABEL_7:
      if ( (v2 & 0x20) == 0 )
        goto LABEL_8;
LABEL_31:
      v8 = *(_QWORD *)(this + 64) & 0xFFFFFFFFFFFFFFFELL;
      if ( *(char *)(v8 + 23) < 0 )
      {
        **(_BYTE **)v8 = 0;
        *(_QWORD *)(v8 + 8) = 0LL;
        if ( (v2 & 0x40) != 0 )
          goto LABEL_35;
      }
      else
      {
        *(_BYTE *)v8 = 0;
        *(_BYTE *)(v8 + 23) = 0;
        if ( (v2 & 0x40) != 0 )
          goto LABEL_35;
      }
LABEL_9:
      if ( (v2 & 0x80) == 0 )
        goto LABEL_42;
LABEL_39:
      v10 = *(_QWORD *)(this + 80) & 0xFFFFFFFFFFFFFFFELL;
      if ( *(char *)(v10 + 23) < 0 )
      {
        **(_BYTE **)v10 = 0;
        *(_QWORD *)(v10 + 8) = 0LL;
      }
      else
      {
        *(_BYTE *)v10 = 0;
        *(_BYTE *)(v10 + 23) = 0;
      }
      goto LABEL_42;
    }
    v3 = *(_QWORD *)(this + 24) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v3 + 23) < 0 )
    {
      **(_BYTE **)v3 = 0;
      *(_QWORD *)(v3 + 8) = 0LL;
      if ( (v2 & 2) != 0 )
        goto LABEL_15;
    }
    else
    {
      *(_BYTE *)v3 = 0;
      *(_BYTE *)(v3 + 23) = 0;
      if ( (v2 & 2) != 0 )
        goto LABEL_15;
    }
LABEL_4:
    if ( (v2 & 4) == 0 )
      goto LABEL_5;
LABEL_19:
    v5 = *(_QWORD *)(this + 40) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v5 + 23) < 0 )
    {
      **(_BYTE **)v5 = 0;
      *(_QWORD *)(v5 + 8) = 0LL;
      if ( (v2 & 8) != 0 )
        goto LABEL_23;
    }
    else
    {
      *(_BYTE *)v5 = 0;
      *(_BYTE *)(v5 + 23) = 0;
      if ( (v2 & 8) != 0 )
        goto LABEL_23;
    }
LABEL_6:
    if ( (v2 & 0x10) == 0 )
      goto LABEL_7;
LABEL_27:
    v7 = *(_QWORD *)(this + 56) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v7 + 23) < 0 )
    {
      **(_BYTE **)v7 = 0;
      *(_QWORD *)(v7 + 8) = 0LL;
      if ( (v2 & 0x20) != 0 )
        goto LABEL_31;
    }
    else
    {
      *(_BYTE *)v7 = 0;
      *(_BYTE *)(v7 + 23) = 0;
      if ( (v2 & 0x20) != 0 )
        goto LABEL_31;
    }
LABEL_8:
    if ( (v2 & 0x40) == 0 )
      goto LABEL_9;
LABEL_35:
    v9 = *(_QWORD *)(this + 72) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v9 + 23) < 0 )
    {
      **(_BYTE **)v9 = 0;
      *(_QWORD *)(v9 + 8) = 0LL;
      if ( (v2 & 0x80) == 0 )
        goto LABEL_42;
    }
    else
    {
      *(_BYTE *)v9 = 0;
      *(_BYTE *)(v9 + 23) = 0;
      if ( (v2 & 0x80) == 0 )
        goto LABEL_42;
    }
    goto LABEL_39;
  }
LABEL_42:
  if ( (v2 & 0x700) == 0 )
    goto LABEL_47;
  if ( (v2 & 0x100) != 0 )
  {
    this = TSP::DataAttributes::Clear(*(TSP::DataAttributes **)(this + 88));
    if ( (v2 & 0x200) == 0 )
    {
LABEL_45:
      if ( (v2 & 0x400) == 0 )
        goto LABEL_47;
      goto LABEL_46;
    }
  }
  else if ( (v2 & 0x200) == 0 )
  {
    goto LABEL_45;
  }
  this = TSP::EncryptionInfo::Clear(*(TSP::EncryptionInfo **)(v1 + 96));
  if ( (v2 & 0x400) != 0 )
LABEL_46:
    this = TSP::IndexSet::Clear(*(TSP::IndexSet **)(v1 + 104));
LABEL_47:
  if ( (v2 & 0xF800) != 0 )
  {
    *(_QWORD *)(v1 + 112) = 0LL;
    *(_QWORD *)(v1 + 120) = 0LL;
    *(_QWORD *)(v1 + 128) = 0LL;
  }
  if ( (v2 & 0x70000) != 0 )
  {
    *(_QWORD *)(v1 + 136) = 0LL;
    *(_QWORD *)(v1 + 144) = 0LL;
    *(_DWORD *)(v1 + 152) = 1;
  }
  v12 = *(_BYTE *)(v1 + 8);
  v11 = v1 + 8;
  *(_DWORD *)(v11 + 8) = 0;
  if ( (v12 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v11);
  }
  return this;
}