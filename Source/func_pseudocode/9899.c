__ZN3TSP34ObjectSerializationDirectory_Entry14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::ObjectSerializationDirectory_Entry::_InternalParse(
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
  google::protobuf::internal *v16; // x8
  const char *v17; // x1
  int v18; // w8
  google::protobuf::internal *v19; // x8
  const char *v20; // x1
  int v21; // w8
  __int64 v22; // x8
  _QWORD *v23; // x1
  std::string *v24; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v26; // w1
  google::protobuf::internal *v27; // x0
  __int64 v28; // x1
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
        goto LABEL_45;
      v8 = TagFallback;
      v9 = v26;
LABEL_8:
      v11 = v9 >> 3;
      if ( v9 >> 3 == 3 )
      {
        if ( (unsigned __int8)v9 != 24 )
          goto LABEL_14;
        v5 |= 4u;
        v16 = (google::protobuf::internal *)((char *)v8 + 1);
        v17 = (const char *)*(unsigned __int8 *)v8;
        if ( (*(char *)v8 & 0x80000000) == 0 )
          goto LABEL_25;
        v18 = *(char *)v16;
        v17 = (const char *)((unsigned int)v17 + ((unsigned __int8)v18 << 7) - 128);
        if ( (v18 & 0x80000000) == 0 )
        {
          v16 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_25:
          v31 = v16;
          *(_QWORD *)(a1 + 40) = v17;
          goto LABEL_35;
        }
        v27 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v17, (unsigned int)v8);
        v31 = v27;
        *(_QWORD *)(a1 + 40) = v28;
        if ( !v27 )
          goto LABEL_45;
      }
      else
      {
        if ( v11 != 2 )
        {
          if ( v11 == 1 && (unsigned __int8)v9 == 10 )
          {
            *(_DWORD *)(a1 + 16) |= 1u;
            v22 = *(_QWORD *)(a1 + 8);
            v23 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFELL);
            if ( (v22 & 1) != 0 )
              v23 = (_QWORD *)*v23;
            v24 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(a1 + 24, v23);
            v15 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v24, v31, a3);
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
            goto LABEL_45;
          goto LABEL_35;
        }
        if ( (unsigned __int8)v9 != 16 )
          goto LABEL_14;
        v5 |= 2u;
        v19 = (google::protobuf::internal *)((char *)v8 + 1);
        v20 = (const char *)*(unsigned __int8 *)v8;
        if ( (*(char *)v8 & 0x80000000) == 0 )
          goto LABEL_30;
        v21 = *(char *)v19;
        v20 = (const char *)((unsigned int)v20 + ((unsigned __int8)v21 << 7) - 128);
        if ( (v21 & 0x80000000) == 0 )
        {
          v19 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_30:
          v31 = v19;
          *(_QWORD *)(a1 + 32) = v20;
          goto LABEL_35;
        }
        v29 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v20, (unsigned int)v8);
        v31 = v29;
        *(_QWORD *)(a1 + 32) = v30;
        if ( !v29 )
        {
LABEL_45:
          v31 = 0LL;
          goto LABEL_2;
        }
      }
LABEL_35:
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