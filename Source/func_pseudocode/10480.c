__ZN3TSP16PasteboardObject5ClearEv
__int64 __fastcall TSP::PasteboardObject::Clear(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  TSP::Reference **v3; // x21
  TSP::Reference *v4; // t1
  __int64 v5; // x20
  TSP::Reference **v6; // x21
  TSP::Reference *v7; // t1
  __int64 v8; // x20
  TSP::Reference **v9; // x21
  TSP::Reference *v10; // t1
  __int64 v11; // x20
  TSP::Reference **v12; // x21
  TSP::Reference *v13; // t1
  __int64 v14; // x20
  TSP::Range **v15; // x21
  TSP::Range *v16; // t1
  int v17; // w20
  __int64 v18; // x19
  char v19; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = this;
  v2 = *(unsigned int *)(this + 32);
  if ( (int)v2 >= 1 )
  {
    v3 = (TSP::Reference **)(*(_QWORD *)(this + 40) + 8LL);
    do
    {
      v4 = *v3++;
      this = TSP::Reference::Clear(v4);
      --v2;
    }
    while ( v2 );
    *(_DWORD *)(v1 + 32) = 0;
  }
  v5 = *(unsigned int *)(v1 + 56);
  if ( (int)v5 >= 1 )
  {
    v6 = (TSP::Reference **)(*(_QWORD *)(v1 + 64) + 8LL);
    do
    {
      v7 = *v6++;
      this = TSP::Reference::Clear(v7);
      --v5;
    }
    while ( v5 );
    *(_DWORD *)(v1 + 56) = 0;
  }
  v8 = *(unsigned int *)(v1 + 80);
  if ( (int)v8 >= 1 )
  {
    v9 = (TSP::Reference **)(*(_QWORD *)(v1 + 88) + 8LL);
    do
    {
      v10 = *v9++;
      this = TSP::Reference::Clear(v10);
      --v8;
    }
    while ( v8 );
    *(_DWORD *)(v1 + 80) = 0;
  }
  v11 = *(unsigned int *)(v1 + 104);
  if ( (int)v11 >= 1 )
  {
    v12 = (TSP::Reference **)(*(_QWORD *)(v1 + 112) + 8LL);
    do
    {
      v13 = *v12++;
      this = TSP::Reference::Clear(v13);
      --v11;
    }
    while ( v11 );
    *(_DWORD *)(v1 + 104) = 0;
  }
  v14 = *(unsigned int *)(v1 + 128);
  if ( (int)v14 >= 1 )
  {
    v15 = (TSP::Range **)(*(_QWORD *)(v1 + 136) + 8LL);
    do
    {
      v16 = *v15++;
      this = TSP::Range::Clear(v16);
      --v14;
    }
    while ( v14 );
    *(_DWORD *)(v1 + 128) = 0;
  }
  v17 = *(_DWORD *)(v1 + 16);
  if ( (v17 & 0x1F) == 0 )
    goto LABEL_28;
  if ( (v17 & 1) != 0 )
  {
    this = TSP::Reference::Clear(*(TSP::Reference **)(v1 + 144));
    if ( (v17 & 2) == 0 )
    {
LABEL_24:
      if ( (v17 & 4) == 0 )
        goto LABEL_25;
LABEL_34:
      this = TSP::Reference::Clear(*(TSP::Reference **)(v1 + 160));
      if ( (v17 & 8) == 0 )
      {
LABEL_26:
        if ( (v17 & 0x10) == 0 )
          goto LABEL_28;
        goto LABEL_27;
      }
      goto LABEL_35;
    }
  }
  else if ( (v17 & 2) == 0 )
  {
    goto LABEL_24;
  }
  this = TSP::Reference::Clear(*(TSP::Reference **)(v1 + 152));
  if ( (v17 & 4) != 0 )
    goto LABEL_34;
LABEL_25:
  if ( (v17 & 8) == 0 )
    goto LABEL_26;
LABEL_35:
  this = TSP::Reference::Clear(*(TSP::Reference **)(v1 + 168));
  if ( (v17 & 0x10) != 0 )
LABEL_27:
    this = TSP::Reference::Clear(*(TSP::Reference **)(v1 + 176));
LABEL_28:
  v19 = *(_BYTE *)(v1 + 8);
  v18 = v1 + 8;
  *(_WORD *)(v18 + 176) = 0;
  *(_DWORD *)(v18 + 8) = 0;
  if ( (v19 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v18);
  }
  return this;
}