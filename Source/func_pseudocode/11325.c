__ZNK6google8protobuf19UninterpretedOption12ByteSizeLongEv
__int64 __fastcall google::protobuf::UninterpretedOption::ByteSizeLong(google::protobuf::UninterpretedOption *this)
{
  __int64 v2; // x20
  __int64 v3; // x8
  google::protobuf::UninterpretedOption_NamePart **v4; // x21
  __int64 v5; // x22
  google::protobuf::UninterpretedOption_NamePart *v6; // t1
  __int64 v7; // x0
  int v8; // w8
  unsigned __int64 v10; // x9
  __int64 v11; // x10
  __int64 v12; // x9
  unsigned __int64 v13; // x9
  __int64 v14; // x10
  __int64 v15; // x9
  unsigned __int64 v16; // x9
  __int64 v17; // x10
  __int64 v18; // x9
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((int *)this + 8);
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
    v4 = (google::protobuf::UninterpretedOption_NamePart **)(v3 + 8);
  else
    v4 = 0LL;
  if ( (_DWORD)v2 )
  {
    v5 = 8 * v2;
    do
    {
      v6 = *v4++;
      v7 = google::protobuf::UninterpretedOption_NamePart::ByteSizeLong(v6);
      v2 += v7 + ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6);
      v5 -= 8LL;
    }
    while ( v5 );
  }
  else
  {
    v2 = 0LL;
  }
  v8 = *((_DWORD *)this + 4);
  if ( (v8 & 0x3F) == 0 )
    goto LABEL_18;
  if ( (v8 & 1) != 0 )
  {
    v10 = *((_QWORD *)this + 6) & 0xFFFFFFFFFFFFFFFELL;
    v11 = *(unsigned __int8 *)(v10 + 23);
    v12 = *(_QWORD *)(v10 + 8);
    if ( (v11 & 0x80u) == 0LL )
      v12 = v11;
    v2 += v12 + ((9 * (__clz(v12 | 1) ^ 0x1F) + 73) >> 6) + 1;
    if ( (v8 & 2) == 0 )
    {
LABEL_12:
      if ( (v8 & 4) == 0 )
        goto LABEL_13;
      goto LABEL_26;
    }
  }
  else if ( (v8 & 2) == 0 )
  {
    goto LABEL_12;
  }
  v13 = *((_QWORD *)this + 7) & 0xFFFFFFFFFFFFFFFELL;
  v14 = *(unsigned __int8 *)(v13 + 23);
  v15 = *(_QWORD *)(v13 + 8);
  if ( (v14 & 0x80u) == 0LL )
    v15 = v14;
  v2 += v15 + ((9 * (__clz(v15 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v8 & 4) == 0 )
  {
LABEL_13:
    if ( (v8 & 8) == 0 )
      goto LABEL_14;
    goto LABEL_29;
  }
LABEL_26:
  v16 = *((_QWORD *)this + 8) & 0xFFFFFFFFFFFFFFFELL;
  v17 = *(unsigned __int8 *)(v16 + 23);
  v18 = *(_QWORD *)(v16 + 8);
  if ( (v17 & 0x80u) == 0LL )
    v18 = v17;
  v2 += v18 + ((9 * (__clz(v18 | 1) ^ 0x1F) + 73) >> 6) + 1;
  if ( (v8 & 8) == 0 )
  {
LABEL_14:
    if ( (v8 & 0x10) == 0 )
      goto LABEL_16;
    goto LABEL_15;
  }
LABEL_29:
  v2 += ((9 * (__clz(*((_QWORD *)this + 9) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
  if ( (v8 & 0x10) != 0 )
LABEL_15:
    v2 += ((9 * (__clz(*((_QWORD *)this + 10) | 1LL) ^ 0x3F) + 73) >> 6) + 1;
LABEL_16:
  if ( (v8 & 0x20) != 0 )
    v2 += 9LL;
LABEL_18:
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v2, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v2;
    return v2;
  }
}