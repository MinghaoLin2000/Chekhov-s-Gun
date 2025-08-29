__ZN3TSP4UUID14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::UUID::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w23
  _QWORD *v7; // x21
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w22
  unsigned int v10; // w9
  bool v12; // zf
  unsigned __int64 v13; // x1
  google::protobuf::internal *v14; // x8
  const char *v15; // x1
  int v16; // w8
  google::protobuf::internal *v17; // x8
  const char *v18; // x1
  int v19; // w8
  google::protobuf::internal *TagFallback; // x0
  unsigned int v21; // w1
  google::protobuf::internal *v22; // x0
  __int64 v23; // x1
  google::protobuf::internal *v24; // x0
  __int64 v25; // x1
  google::protobuf::internal *v26; // [xsp+8h] [xbp-38h] BYREF

  v26 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v26, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v26 + 1);
      v9 = *(unsigned __int8 *)v26;
      if ( (*(char *)v26 & 0x80000000) == 0 )
        goto LABEL_7;
      v10 = v9 + (*(unsigned __int8 *)v8 << 7);
      v9 = v10 - 128;
      if ( (*(char *)v8 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v26,
                                                    (const char *)(v10 - 128),
                                                    (unsigned int)v8);
      v26 = TagFallback;
      if ( !TagFallback )
        goto LABEL_40;
      v8 = TagFallback;
      v9 = v21;
LABEL_8:
      if ( v9 >> 3 == 2 )
      {
        if ( (unsigned __int8)v9 != 16 )
          goto LABEL_13;
        v5 |= 2u;
        v14 = (google::protobuf::internal *)((char *)v8 + 1);
        v15 = (const char *)*(unsigned __int8 *)v8;
        if ( (*(char *)v8 & 0x80000000) == 0 )
          goto LABEL_25;
        v16 = *(char *)v14;
        v15 = (const char *)((unsigned int)v15 + ((unsigned __int8)v16 << 7) - 128);
        if ( (v16 & 0x80000000) == 0 )
        {
          v14 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_25:
          v26 = v14;
          *(_QWORD *)(a1 + 32) = v15;
          goto LABEL_30;
        }
        v22 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v15, (unsigned int)v8);
        v26 = v22;
        *(_QWORD *)(a1 + 32) = v23;
        if ( !v22 )
          goto LABEL_40;
      }
      else
      {
        if ( v9 >> 3 != 1 || (unsigned __int8)v9 != 8 )
        {
LABEL_13:
          if ( v9 )
            v12 = (v9 & 7) == 4;
          else
            v12 = 1;
          if ( v12 )
          {
            *(_DWORD *)(a3 + 80) = v9 - 1;
            goto LABEL_2;
          }
          if ( (*v7 & 1) != 0 )
            v13 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
          else
            v13 = sub_10003A0B4(a1 + 8);
          v26 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v13);
          if ( !v26 )
          {
LABEL_40:
            v26 = 0LL;
            goto LABEL_2;
          }
          goto LABEL_30;
        }
        v5 |= 1u;
        v17 = (google::protobuf::internal *)((char *)v8 + 1);
        v18 = (const char *)*(unsigned __int8 *)v8;
        if ( (*(char *)v8 & 0x80000000) == 0 )
          goto LABEL_29;
        v19 = *(char *)v17;
        v18 = (const char *)((unsigned int)v18 + ((unsigned __int8)v19 << 7) - 128);
        if ( (v19 & 0x80000000) == 0 )
        {
          v17 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_29:
          v26 = v17;
          *(_QWORD *)(a1 + 24) = v18;
          goto LABEL_30;
        }
        v24 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v18, (unsigned int)v8);
        v26 = v24;
        *(_QWORD *)(a1 + 24) = v25;
        if ( !v24 )
          goto LABEL_40;
      }
LABEL_30:
      if ( (sub_10003A040(a3, &v26, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        goto LABEL_2;
    }
    v8 = (google::protobuf::internal *)((char *)v26 + 2);
LABEL_7:
    v26 = v8;
    goto LABEL_8;
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v26;
}