__ZNK3TSP16PasteboardObject12ByteSizeLongEv
__int64 __fastcall TSP::PasteboardObject::ByteSizeLong(TSP::PasteboardObject *this)
{
  __int64 v2; // x20
  __int64 v3; // x8
  TSP::Reference **v4; // x21
  __int64 v5; // x22
  TSP::Reference *v6; // t1
  unsigned __int64 v7; // x0
  __int64 v8; // x8
  __int64 v9; // x20
  __int64 v10; // x9
  TSP::Reference **v11; // x21
  __int64 v12; // x22
  TSP::Reference *v13; // t1
  unsigned __int64 v14; // x0
  __int64 v15; // x8
  __int64 v16; // x20
  __int64 v17; // x9
  TSP::Reference **v18; // x21
  __int64 v19; // x22
  TSP::Reference *v20; // t1
  unsigned __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x20
  __int64 v24; // x9
  TSP::Reference **v25; // x21
  __int64 v26; // x22
  TSP::Reference *v27; // t1
  unsigned __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x20
  __int64 v31; // x9
  TSP::Range **v32; // x21
  __int64 v33; // x22
  TSP::Range *v34; // t1
  __int64 v35; // x0
  int v36; // w21
  unsigned __int64 v37; // x0
  __int64 v38; // x8
  unsigned __int64 v40; // x0
  unsigned __int64 v41; // x0
  unsigned __int64 v42; // x0
  unsigned __int64 v43; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((int *)this + 8);
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
    v4 = (TSP::Reference **)(v3 + 8);
  else
    v4 = 0LL;
  if ( (_DWORD)v2 )
  {
    v5 = 8 * v2;
    do
    {
      v6 = *v4++;
      v7 = TSP::Reference::ByteSizeLong(v6);
      v2 += v7 + ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6);
      v5 -= 8LL;
    }
    while ( v5 );
  }
  else
  {
    v2 = 0LL;
  }
  v8 = *((int *)this + 14);
  v9 = v2 + v8;
  v10 = *((_QWORD *)this + 8);
  if ( v10 )
    v11 = (TSP::Reference **)(v10 + 8);
  else
    v11 = 0LL;
  if ( (_DWORD)v8 )
  {
    v12 = 8 * v8;
    do
    {
      v13 = *v11++;
      v14 = TSP::Reference::ByteSizeLong(v13);
      v9 += v14 + ((9 * (__clz(v14 | 1) ^ 0x1F) + 73) >> 6);
      v12 -= 8LL;
    }
    while ( v12 );
  }
  v15 = *((int *)this + 20);
  v16 = v9 + v15;
  v17 = *((_QWORD *)this + 11);
  if ( v17 )
    v18 = (TSP::Reference **)(v17 + 8);
  else
    v18 = 0LL;
  if ( (_DWORD)v15 )
  {
    v19 = 8 * v15;
    do
    {
      v20 = *v18++;
      v21 = TSP::Reference::ByteSizeLong(v20);
      v16 += v21 + ((9 * (__clz(v21 | 1) ^ 0x1F) + 73) >> 6);
      v19 -= 8LL;
    }
    while ( v19 );
  }
  v22 = *((int *)this + 26);
  v23 = v16 + v22;
  v24 = *((_QWORD *)this + 14);
  if ( v24 )
    v25 = (TSP::Reference **)(v24 + 8);
  else
    v25 = 0LL;
  if ( (_DWORD)v22 )
  {
    v26 = 8 * v22;
    do
    {
      v27 = *v25++;
      v28 = TSP::Reference::ByteSizeLong(v27);
      v23 += v28 + ((9 * (__clz(v28 | 1) ^ 0x1F) + 73) >> 6);
      v26 -= 8LL;
    }
    while ( v26 );
  }
  v29 = *((int *)this + 32);
  v30 = v23 + v29;
  v31 = *((_QWORD *)this + 17);
  if ( v31 )
    v32 = (TSP::Range **)(v31 + 8);
  else
    v32 = 0LL;
  if ( (_DWORD)v29 )
  {
    v33 = 8 * v29;
    do
    {
      v34 = *v32++;
      v35 = TSP::Range::ByteSizeLong(v34);
      v30 += v35 + ((9 * (__clz(v35 | 1) ^ 0x1F) + 73) >> 6);
      v33 -= 8LL;
    }
    while ( v33 );
  }
  v36 = *((_DWORD *)this + 4);
  if ( (v36 & 0x7F) != 0 )
  {
    if ( (v36 & 1) != 0 )
    {
      v40 = TSP::Reference::ByteSizeLong(*((TSP::Reference **)this + 18));
      v30 += v40 + ((9 * (__clz(v40 | 1) ^ 0x1F) + 73) >> 6) + 1;
      if ( (v36 & 2) == 0 )
      {
LABEL_36:
        if ( (v36 & 4) == 0 )
          goto LABEL_37;
        goto LABEL_49;
      }
    }
    else if ( (v36 & 2) == 0 )
    {
      goto LABEL_36;
    }
    v41 = TSP::Reference::ByteSizeLong(*((TSP::Reference **)this + 19));
    v30 += v41 + ((9 * (__clz(v41 | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (v36 & 4) == 0 )
    {
LABEL_37:
      if ( (v36 & 8) == 0 )
        goto LABEL_38;
      goto LABEL_50;
    }
LABEL_49:
    v42 = TSP::Reference::ByteSizeLong(*((TSP::Reference **)this + 20));
    v30 += v42 + ((9 * (__clz(v42 | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (v36 & 8) == 0 )
    {
LABEL_38:
      if ( (v36 & 0x10) == 0 )
      {
LABEL_40:
        v38 = v30 + 2;
        if ( (v36 & 0x20) == 0 )
          v38 = v30;
        if ( (v36 & 0x40) != 0 )
          v30 = v38 + 2;
        else
          v30 = v38;
        goto LABEL_45;
      }
LABEL_39:
      v37 = TSP::Reference::ByteSizeLong(*((TSP::Reference **)this + 22));
      v30 += v37 + ((9 * (__clz(v37 | 1) ^ 0x1F) + 73) >> 6) + 1;
      goto LABEL_40;
    }
LABEL_50:
    v43 = TSP::Reference::ByteSizeLong(*((TSP::Reference **)this + 21));
    v30 += v43 + ((9 * (__clz(v43 | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (v36 & 0x10) == 0 )
      goto LABEL_40;
    goto LABEL_39;
  }
LABEL_45:
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v30, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v30;
    return v30;
  }
}