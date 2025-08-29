__ZNK3TSP10LargeArray12ByteSizeLongEv
__int64 __fastcall TSP::LargeArray::ByteSizeLong(TSP::LargeArray *this)
{
  __int64 v2; // x20
  __int64 v3; // x8
  TSP::Range **v4; // x21
  __int64 v5; // x22
  TSP::Range *v6; // t1
  __int64 v7; // x0
  __int64 v8; // x8
  __int64 v9; // x20
  __int64 v10; // x9
  TSP::Reference **v11; // x21
  __int64 v12; // x22
  TSP::Reference *v13; // t1
  unsigned __int64 v14; // x0
  int v15; // w8
  __int64 v16; // x9
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((int *)this + 8);
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
    v4 = (TSP::Range **)(v3 + 8);
  else
    v4 = 0LL;
  if ( (_DWORD)v2 )
  {
    v5 = 8 * v2;
    do
    {
      v6 = *v4++;
      v7 = TSP::Range::ByteSizeLong(v6);
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
  v15 = *((_DWORD *)this + 4);
  if ( (v15 & 0x7F) != 0 )
  {
    if ( (v15 & 1) != 0 )
    {
      v9 += ((9 * (__clz(*((_QWORD *)this + 9) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
      if ( (v15 & 2) == 0 )
      {
LABEL_18:
        if ( (v15 & 4) == 0 )
        {
LABEL_20:
          v16 = v9 + 2;
          if ( (v15 & 8) == 0 )
            v16 = v9;
          if ( (v15 & 0x10) != 0 )
            v9 = v16 + 2;
          else
            v9 = v16;
          if ( (v15 & 0x20) != 0 )
            v9 += ((9 * (__clz(*((_QWORD *)this + 12) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
          if ( (v15 & 0x40) != 0 )
            v9 += ((9 * (__clz(*((_QWORD *)this + 13) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
          goto LABEL_29;
        }
LABEL_19:
        v9 += ((9 * (__clz(*((_DWORD *)this + 22) | 1) ^ 0x1F) + 73) >> 6) + 1;
        goto LABEL_20;
      }
    }
    else if ( (v15 & 2) == 0 )
    {
      goto LABEL_18;
    }
    v9 += ((9 * (__clz(*((_QWORD *)this + 10) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
    if ( (v15 & 4) == 0 )
      goto LABEL_20;
    goto LABEL_19;
  }
LABEL_29:
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v9, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v9;
    return v9;
  }
}