__ZN3TSP18PasteboardMetadata5ClearEv
__int64 __fastcall TSP::PasteboardMetadata::Clear(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  TSP::DataInfo **v3; // x21
  TSP::DataInfo *v4; // t1
  int v5; // w20
  __int64 v6; // x19
  char v7; // t1
  unsigned __int64 v8; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = this;
  *(_DWORD *)(this + 24) = 0;
  v2 = *(unsigned int *)(this + 56);
  if ( (int)v2 >= 1 )
  {
    v3 = (TSP::DataInfo **)(*(_QWORD *)(this + 64) + 8LL);
    do
    {
      v4 = *v3++;
      this = TSP::DataInfo::Clear(v4);
      --v2;
    }
    while ( v2 );
    *(_DWORD *)(v1 + 56) = 0;
  }
  *(_DWORD *)(v1 + 72) = 0;
  v5 = *(_DWORD *)(v1 + 16);
  if ( (v5 & 7) == 0 )
    goto LABEL_10;
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 2) == 0 )
      goto LABEL_8;
    goto LABEL_18;
  }
  v8 = *(_QWORD *)(v1 + 96) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v8 + 23) < 0 )
  {
    **(_BYTE **)v8 = 0;
    *(_QWORD *)(v8 + 8) = 0LL;
    if ( (v5 & 2) != 0 )
      goto LABEL_18;
LABEL_8:
    if ( (v5 & 4) == 0 )
      goto LABEL_10;
    goto LABEL_9;
  }
  *(_BYTE *)v8 = 0;
  *(_BYTE *)(v8 + 23) = 0;
  if ( (v5 & 2) == 0 )
    goto LABEL_8;
LABEL_18:
  this = TSP::UUID::Clear(*(TSP::UUID **)(v1 + 104));
  if ( (v5 & 4) != 0 )
LABEL_9:
    this = TSP::Reference::Clear(*(TSP::Reference **)(v1 + 112));
LABEL_10:
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