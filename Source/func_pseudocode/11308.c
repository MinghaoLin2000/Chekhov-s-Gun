__ZN6google8protobuf28UninterpretedOption_NamePart14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::UninterpretedOption_NamePart::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w24
  _QWORD *v7; // x21
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w23
  unsigned int v10; // w9
  bool v12; // zf
  unsigned __int64 v13; // x1
  google::protobuf::internal *v14; // x0
  google::protobuf::internal *v15; // x8
  const char *v16; // x1
  int v17; // w8
  __int64 v18; // x8
  _QWORD *v19; // x1
  std::string *v20; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v22; // w1
  google::protobuf::internal *v23; // x0
  __int64 v24; // x1
  google::protobuf::internal *v25; // [xsp+8h] [xbp-38h] BYREF

  v25 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v25, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v25 + 1);
      v9 = *(unsigned __int8 *)v25;
      if ( (*(char *)v25 & 0x80000000) == 0 )
        goto LABEL_7;
      v10 = v9 + (*(unsigned __int8 *)v8 << 7);
      v9 = v10 - 128;
      if ( (*(char *)v8 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v25,
                                                    (const char *)(v10 - 128),
                                                    (unsigned int)v8);
      v25 = TagFallback;
      if ( !TagFallback )
        goto LABEL_37;
      v8 = TagFallback;
      v9 = v22;
LABEL_8:
      if ( v9 >> 3 != 2 )
      {
        if ( v9 >> 3 == 1 && (unsigned __int8)v9 == 10 )
        {
          *(_DWORD *)(a1 + 16) |= 1u;
          v18 = *(_QWORD *)(a1 + 8);
          v19 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v18 & 1) != 0 )
            v19 = (_QWORD *)*v19;
          v20 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(a1 + 24, v19);
          v14 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v20, v25, a3);
        }
        else
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
          v14 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v13);
        }
        v25 = v14;
        if ( !v14 )
          goto LABEL_37;
        goto LABEL_29;
      }
      if ( (unsigned __int8)v9 != 16 )
        goto LABEL_13;
      v5 |= 2u;
      v15 = (google::protobuf::internal *)((char *)v8 + 1);
      v16 = (const char *)*(unsigned __int8 *)v8;
      if ( (*(char *)v8 & 0x80000000) == 0 )
        goto LABEL_24;
      v17 = *(char *)v15;
      v16 = (const char *)((unsigned int)v16 + ((unsigned __int8)v17 << 7) - 128);
      if ( (v17 & 0x80000000) == 0 )
      {
        v15 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_24:
        v25 = v15;
        *(_BYTE *)(a1 + 32) = v16 != 0LL;
        goto LABEL_29;
      }
      v23 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v16, (unsigned int)v8);
      v25 = v23;
      *(_BYTE *)(a1 + 32) = v24 != 0;
      if ( !v23 )
      {
LABEL_37:
        v25 = 0LL;
        goto LABEL_2;
      }
LABEL_29:
      if ( (sub_10003A040(a3, &v25, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        goto LABEL_2;
    }
    v8 = (google::protobuf::internal *)((char *)v25 + 2);
LABEL_7:
    v25 = v8;
    goto LABEL_8;
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v25;
}