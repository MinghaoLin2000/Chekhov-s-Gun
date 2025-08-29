__ZN3TSP9Reference14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::Reference::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w23
  _QWORD *v7; // x21
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w22
  unsigned int v10; // w9
  unsigned int v11; // w8
  bool v13; // zf
  unsigned __int64 v14; // x1
  google::protobuf::internal *v15; // x8
  const char *v16; // x1
  int v17; // w8
  const char *v18; // x1
  google::protobuf::internal *v19; // x8
  int v20; // w8
  google::protobuf::internal *v21; // x8
  const char *v22; // x1
  int v23; // w8
  google::protobuf::internal *TagFallback; // x0
  unsigned int v25; // w1
  google::protobuf::internal *v26; // x0
  __int64 v27; // x1
  google::protobuf::internal *v28; // x0
  int v29; // w1
  google::protobuf::internal *v30; // x0
  __int64 v31; // x1
  google::protobuf::internal *v32; // [xsp+8h] [xbp-38h] BYREF

  v32 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v32, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v32 + 1);
      v9 = *(unsigned __int8 *)v32;
      if ( (*(char *)v32 & 0x80000000) == 0 )
        goto LABEL_7;
      v10 = v9 + (*(unsigned __int8 *)v8 << 7);
      v9 = v10 - 128;
      if ( (*(char *)v8 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v32,
                                                    (const char *)(v10 - 128),
                                                    (unsigned int)v8);
      v32 = TagFallback;
      if ( !TagFallback )
        goto LABEL_48;
      v8 = TagFallback;
      v9 = v25;
LABEL_8:
      v11 = v9 >> 3;
      if ( v9 >> 3 == 3 )
      {
        if ( (unsigned __int8)v9 != 24 )
          goto LABEL_14;
        v5 |= 4u;
        v15 = (google::protobuf::internal *)((char *)v8 + 1);
        v16 = (const char *)*(unsigned __int8 *)v8;
        if ( (*(char *)v8 & 0x80000000) == 0 )
          goto LABEL_26;
        v17 = *(char *)v15;
        v16 = (const char *)((unsigned int)v16 + ((unsigned __int8)v17 << 7) - 128);
        if ( (v17 & 0x80000000) == 0 )
        {
          v15 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_26:
          v32 = v15;
          *(_BYTE *)(a1 + 36) = v16 != 0LL;
          goto LABEL_36;
        }
        v26 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v16, (unsigned int)v8);
        v32 = v26;
        *(_BYTE *)(a1 + 36) = v27 != 0;
        if ( !v26 )
          goto LABEL_48;
      }
      else if ( v11 == 2 )
      {
        if ( (unsigned __int8)v9 != 16 )
          goto LABEL_14;
        v5 |= 2u;
        v19 = (google::protobuf::internal *)((char *)v8 + 1);
        LODWORD(v18) = *(unsigned __int8 *)v8;
        if ( ((unsigned __int8)v18 & 0x80) == 0 )
          goto LABEL_31;
        v20 = *(char *)v19;
        v18 = (const char *)((unsigned int)v18 + ((unsigned __int8)v20 << 7) - 128);
        if ( (v20 & 0x80000000) == 0 )
        {
          v19 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_31:
          v32 = v19;
          *(_DWORD *)(a1 + 32) = (_DWORD)v18;
          goto LABEL_36;
        }
        v28 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v18, (unsigned int)v8);
        v32 = v28;
        *(_DWORD *)(a1 + 32) = v29;
        if ( !v28 )
          goto LABEL_48;
      }
      else
      {
        if ( v11 != 1 || (unsigned __int8)v9 != 8 )
        {
LABEL_14:
          if ( v9 )
            v13 = (v9 & 7) == 4;
          else
            v13 = 1;
          if ( v13 )
          {
            *(_DWORD *)(a3 + 80) = v9 - 1;
            goto LABEL_2;
          }
          if ( (*v7 & 1) != 0 )
            v14 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
          else
            v14 = sub_10003A0B4(a1 + 8);
          v32 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v14);
          if ( !v32 )
          {
LABEL_48:
            v32 = 0LL;
            goto LABEL_2;
          }
          goto LABEL_36;
        }
        v5 |= 1u;
        v21 = (google::protobuf::internal *)((char *)v8 + 1);
        v22 = (const char *)*(unsigned __int8 *)v8;
        if ( (*(char *)v8 & 0x80000000) == 0 )
          goto LABEL_35;
        v23 = *(char *)v21;
        v22 = (const char *)((unsigned int)v22 + ((unsigned __int8)v23 << 7) - 128);
        if ( (v23 & 0x80000000) == 0 )
        {
          v21 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_35:
          v32 = v21;
          *(_QWORD *)(a1 + 24) = v22;
          goto LABEL_36;
        }
        v30 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v22, (unsigned int)v8);
        v32 = v30;
        *(_QWORD *)(a1 + 24) = v31;
        if ( !v30 )
          goto LABEL_48;
      }
LABEL_36:
      if ( (sub_10003A040(a3, &v32, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        goto LABEL_2;
    }
    v8 = (google::protobuf::internal *)((char *)v32 + 2);
LABEL_7:
    v32 = v8;
    goto LABEL_8;
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v32;
}