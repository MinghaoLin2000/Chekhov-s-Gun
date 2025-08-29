__ZN3TSP16DocumentRevision14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::DocumentRevision::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w24
  _QWORD *v7; // x21
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w23
  unsigned int v10; // w9
  unsigned int v11; // w8
  bool v13; // zf
  unsigned __int64 v14; // x1
  google::protobuf::internal *v15; // x0
  const char *v16; // x1
  google::protobuf::internal *v17; // x8
  int v18; // w8
  __int64 v19; // x8
  _QWORD *v20; // x1
  std::string *v21; // x0
  google::protobuf::internal *v22; // x8
  const char *v23; // x1
  int v24; // w8
  google::protobuf::internal *TagFallback; // x0
  unsigned int v26; // w1
  google::protobuf::internal *v27; // x0
  int v28; // w1
  google::protobuf::internal *v29; // x0
  __int64 v30; // x1
  google::protobuf::internal *v31; // [xsp+8h] [xbp-38h] BYREF

  v31 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v31, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v31 + 1);
      v9 = *(unsigned __int8 *)v31;
      if ( (*(char *)v31 & 0x80000000) == 0 )
        goto LABEL_7;
      v10 = v9 + (*(unsigned __int8 *)v8 << 7);
      v9 = v10 - 128;
      if ( (*(char *)v8 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v31,
                                                    (const char *)(v10 - 128),
                                                    (unsigned int)v8);
      v31 = TagFallback;
      if ( !TagFallback )
        goto LABEL_46;
      v8 = TagFallback;
      v9 = v26;
LABEL_8:
      v11 = v9 >> 3;
      if ( v9 >> 3 == 3 )
      {
        if ( (unsigned __int8)v9 != 24 )
          goto LABEL_14;
        v5 |= 4u;
        v17 = (google::protobuf::internal *)((char *)v8 + 1);
        LODWORD(v16) = *(unsigned __int8 *)v8;
        if ( ((unsigned __int8)v16 & 0x80) == 0 )
          goto LABEL_25;
        v18 = *(char *)v17;
        v16 = (const char *)((unsigned int)v16 + ((unsigned __int8)v18 << 7) - 128);
        if ( (v18 & 0x80000000) == 0 )
        {
          v17 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_25:
          v31 = v17;
          *(_DWORD *)(a1 + 40) = (_DWORD)v16;
          goto LABEL_36;
        }
        v27 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v16, (unsigned int)v8);
        v31 = v27;
        *(_DWORD *)(a1 + 40) = v28;
        if ( !v27 )
          goto LABEL_46;
      }
      else
      {
        if ( v11 == 2 )
        {
          if ( (unsigned __int8)v9 == 18 )
          {
            *(_DWORD *)(a1 + 16) |= 1u;
            v19 = *(_QWORD *)(a1 + 8);
            v20 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFELL);
            if ( (v19 & 1) != 0 )
              v20 = (_QWORD *)*v20;
            v21 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(a1 + 24, v20);
            v15 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v21, v31, a3);
          }
          else
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
            v15 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v14);
          }
          v31 = v15;
          if ( !v15 )
            goto LABEL_46;
          goto LABEL_36;
        }
        if ( v11 != 1 || (unsigned __int8)v9 != 8 )
          goto LABEL_14;
        v5 |= 2u;
        v22 = (google::protobuf::internal *)((char *)v8 + 1);
        v23 = (const char *)*(unsigned __int8 *)v8;
        if ( (*(char *)v8 & 0x80000000) == 0 )
          goto LABEL_35;
        v24 = *(char *)v22;
        v23 = (const char *)((unsigned int)v23 + ((unsigned __int8)v24 << 7) - 128);
        if ( (v24 & 0x80000000) == 0 )
        {
          v22 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_35:
          v31 = v22;
          *(_QWORD *)(a1 + 32) = v23;
          goto LABEL_36;
        }
        v29 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v23, (unsigned int)v8);
        v31 = v29;
        *(_QWORD *)(a1 + 32) = v30;
        if ( !v29 )
        {
LABEL_46:
          v31 = 0LL;
          goto LABEL_2;
        }
      }
LABEL_36:
      if ( (sub_10003A040(a3, &v31, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        goto LABEL_2;
    }
    v8 = (google::protobuf::internal *)((char *)v31 + 2);
LABEL_7:
    v31 = v8;
    goto LABEL_8;
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v31;
}