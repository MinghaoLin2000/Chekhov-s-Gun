__ZN3TSP13ComponentInfo5ClearEv
__int64 __fastcall TSP::ComponentInfo::Clear(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  TSP::ComponentExternalReference **v3; // x21
  TSP::ComponentExternalReference *v4; // t1
  __int64 v5; // x20
  TSP::ComponentDataReference **v6; // x21
  TSP::ComponentDataReference *v7; // t1
  __int64 v8; // x20
  TSP::ObjectUUIDMapEntry **v9; // x21
  TSP::ObjectUUIDMapEntry *v10; // t1
  __int64 v11; // x20
  TSP::FeatureInfo **v12; // x21
  TSP::FeatureInfo *v13; // t1
  __int64 v14; // x20
  TSP::ComponentExternalReference **v15; // x21
  TSP::ComponentExternalReference *v16; // t1
  int v17; // w8
  unsigned __int64 v18; // x9
  unsigned __int64 v19; // x9
  __int64 v20; // x19
  char v21; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = this;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 48) = 0;
  v2 = *(unsigned int *)(this + 80);
  if ( (int)v2 >= 1 )
  {
    v3 = (TSP::ComponentExternalReference **)(*(_QWORD *)(this + 88) + 8LL);
    do
    {
      v4 = *v3++;
      this = TSP::ComponentExternalReference::Clear(v4);
      --v2;
    }
    while ( v2 );
    *(_DWORD *)(v1 + 80) = 0;
  }
  v5 = *(unsigned int *)(v1 + 104);
  if ( (int)v5 >= 1 )
  {
    v6 = (TSP::ComponentDataReference **)(*(_QWORD *)(v1 + 112) + 8LL);
    do
    {
      v7 = *v6++;
      this = TSP::ComponentDataReference::Clear(v7);
      --v5;
    }
    while ( v5 );
    *(_DWORD *)(v1 + 104) = 0;
  }
  v8 = *(unsigned int *)(v1 + 128);
  if ( (int)v8 >= 1 )
  {
    v9 = (TSP::ObjectUUIDMapEntry **)(*(_QWORD *)(v1 + 136) + 8LL);
    do
    {
      v10 = *v9++;
      this = TSP::ObjectUUIDMapEntry::Clear(v10);
      --v8;
    }
    while ( v8 );
    *(_DWORD *)(v1 + 128) = 0;
  }
  v11 = *(unsigned int *)(v1 + 152);
  if ( (int)v11 >= 1 )
  {
    v12 = (TSP::FeatureInfo **)(*(_QWORD *)(v1 + 160) + 8LL);
    do
    {
      v13 = *v12++;
      this = TSP::FeatureInfo::Clear(v13);
      --v11;
    }
    while ( v11 );
    *(_DWORD *)(v1 + 152) = 0;
  }
  *(_DWORD *)(v1 + 168) = 0;
  *(_DWORD *)(v1 + 192) = 0;
  v14 = *(unsigned int *)(v1 + 224);
  if ( (int)v14 >= 1 )
  {
    v15 = (TSP::ComponentExternalReference **)(*(_QWORD *)(v1 + 232) + 8LL);
    do
    {
      v16 = *v15++;
      this = TSP::ComponentExternalReference::Clear(v16);
      --v14;
    }
    while ( v14 );
    *(_DWORD *)(v1 + 224) = 0;
  }
  *(_DWORD *)(v1 + 240) = 0;
  v17 = *(_DWORD *)(v1 + 16);
  if ( (v17 & 3) != 0 )
  {
    if ( (v17 & 1) != 0 )
    {
      v18 = *(_QWORD *)(v1 + 264) & 0xFFFFFFFFFFFFFFFELL;
      if ( *(char *)(v18 + 23) < 0 )
      {
        **(_BYTE **)v18 = 0;
        *(_QWORD *)(v18 + 8) = 0LL;
        if ( (v17 & 2) == 0 )
          goto LABEL_31;
        goto LABEL_26;
      }
      *(_BYTE *)v18 = 0;
      *(_BYTE *)(v18 + 23) = 0;
    }
    if ( (v17 & 2) == 0 )
      goto LABEL_31;
LABEL_26:
    v19 = *(_QWORD *)(v1 + 272) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v19 + 23) < 0 )
    {
      **(_BYTE **)v19 = 0;
      *(_QWORD *)(v19 + 8) = 0LL;
    }
    else
    {
      *(_BYTE *)v19 = 0;
      *(_BYTE *)(v19 + 23) = 0;
    }
  }
LABEL_31:
  if ( (v17 & 0xFC) != 0 )
  {
    *(_QWORD *)(v1 + 280) = 0LL;
    *(_QWORD *)(v1 + 288) = 0LL;
    *(_QWORD *)(v1 + 296) = 0LL;
  }
  v21 = *(_BYTE *)(v1 + 8);
  v20 = v1 + 8;
  *(_DWORD *)(v20 + 296) = 0;
  *(_DWORD *)(v20 + 8) = 0;
  if ( (v21 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v20);
  }
  return this;
}