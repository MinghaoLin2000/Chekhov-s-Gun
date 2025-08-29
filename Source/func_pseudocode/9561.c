__ZN3TSP19DatabaseDataArchive5ClearEv
__int64 __fastcall TSP::DatabaseDataArchive::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w20
  __int64 v3; // x19
  char v4; // t1
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = this;
  v2 = *(_DWORD *)(this + 16);
  if ( (v2 & 7) == 0 )
    goto LABEL_6;
  if ( (v2 & 1) == 0 )
  {
    if ( (v2 & 2) == 0 )
      goto LABEL_4;
    goto LABEL_16;
  }
  v5 = *(_QWORD *)(this + 24) & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(char *)(v5 + 23) & 0x80000000) == 0 )
  {
    *(_BYTE *)v5 = 0;
    *(_BYTE *)(v5 + 23) = 0;
    if ( (v2 & 2) != 0 )
      goto LABEL_16;
LABEL_4:
    if ( (v2 & 4) == 0 )
      goto LABEL_6;
    goto LABEL_5;
  }
  **(_BYTE **)v5 = 0;
  *(_QWORD *)(v5 + 8) = 0LL;
  if ( (v2 & 2) == 0 )
    goto LABEL_4;
LABEL_16:
  v6 = *(_QWORD *)(this + 32) & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(char *)(v6 + 23) & 0x80000000) == 0 )
  {
    *(_BYTE *)v6 = 0;
    *(_BYTE *)(v6 + 23) = 0;
    if ( (v2 & 4) == 0 )
      goto LABEL_6;
LABEL_5:
    this = TSP::Reference::Clear(*(TSP::Reference **)(this + 40));
    goto LABEL_6;
  }
  **(_BYTE **)v6 = 0;
  *(_QWORD *)(v6 + 8) = 0LL;
  if ( (v2 & 4) != 0 )
    goto LABEL_5;
LABEL_6:
  if ( (v2 & 0x38) != 0 )
  {
    *(_DWORD *)(v1 + 56) = 0;
    *(_QWORD *)(v1 + 48) = 0LL;
    *(_BYTE *)(v1 + 60) = 1;
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