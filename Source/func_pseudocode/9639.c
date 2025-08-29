__ZN3TSP9FieldInfo5ClearEv
__int64 __fastcall TSP::FieldInfo::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w20
  unsigned __int64 v3; // x8
  __int64 v4; // x0
  char v5; // t1
  __int64 v6; // x19
  char v7; // t1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = this;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 48) = 0;
  *(_DWORD *)(this + 72) = 0;
  v2 = *(_DWORD *)(this + 16);
  if ( (v2 & 3) == 0 )
    goto LABEL_9;
  if ( (v2 & 1) != 0 )
  {
    v3 = *(_QWORD *)(this + 96) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v3 + 23) < 0 )
    {
      **(_BYTE **)v3 = 0;
      *(_QWORD *)(v3 + 8) = 0LL;
      if ( (v2 & 2) == 0 )
        goto LABEL_9;
      goto LABEL_6;
    }
    *(_BYTE *)v3 = 0;
    *(_BYTE *)(v3 + 23) = 0;
  }
  if ( (v2 & 2) == 0 )
    goto LABEL_9;
LABEL_6:
  v4 = *(_QWORD *)(this + 104);
  v5 = *(_BYTE *)(v4 + 8);
  this = v4 + 8;
  *(_DWORD *)(this + 8) = 0;
  if ( (v5 & 1) != 0 )
    this = sub_10003A2A8(this);
LABEL_9:
  if ( (v2 & 0x1C) != 0 )
  {
    *(_DWORD *)(v1 + 120) = 0;
    *(_QWORD *)(v1 + 112) = 0LL;
  }
  v7 = *(_BYTE *)(v1 + 8);
  v6 = v1 + 8;
  *(_DWORD *)(v6 + 8) = 0;
  if ( (v7 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v6);
  }
  return this;
}