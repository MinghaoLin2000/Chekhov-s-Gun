__ZN3TSP13DataReference14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::DataReference::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w23
  _QWORD *v6; // x21
  google::protobuf::internal *v7; // x2
  unsigned int v8; // w22
  unsigned int v9; // w9
  bool v10; // zf
  unsigned __int64 v11; // x1
  google::protobuf::internal *v12; // x8
  const char *v13; // x1
  int v14; // w8
  google::protobuf::internal *TagFallback; // x0
  unsigned int v16; // w1
  google::protobuf::internal *v17; // x0
  __int64 v18; // x1
  google::protobuf::internal *v20; // [xsp+8h] [xbp-38h] BYREF

  v20 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v20, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v6 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v7 = (google::protobuf::internal *)((char *)v20 + 1);
      v8 = *(unsigned __int8 *)v20;
      if ( (*(char *)v20 & 0x80000000) == 0 )
        goto LABEL_6;
      v9 = v8 + (*(unsigned __int8 *)v7 << 7);
      v8 = v9 - 128;
      if ( (*(char *)v7 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v20,
                                                    (const char *)(v9 - 128),
                                                    (unsigned int)v7);
      v20 = TagFallback;
      if ( !TagFallback )
        goto LABEL_29;
      v7 = TagFallback;
      v8 = v16;
LABEL_7:
      if ( v8 == 8 )
      {
        v12 = (google::protobuf::internal *)((char *)v7 + 1);
        v13 = (const char *)*(unsigned __int8 *)v7;
        if ( (*(char *)v7 & 0x80000000) == 0 )
          goto LABEL_19;
        v14 = *(char *)v12;
        v13 = (const char *)((unsigned int)v13 + ((unsigned __int8)v14 << 7) - 128);
        if ( (v14 & 0x80000000) == 0 )
        {
          v12 = (google::protobuf::internal *)((char *)v7 + 2);
LABEL_19:
          v20 = v12;
          *(_QWORD *)(a1 + 24) = v13;
          v5 = 1;
          goto LABEL_20;
        }
        v17 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v7, v13, (unsigned int)v7);
        v20 = v17;
        *(_QWORD *)(a1 + 24) = v18;
        v5 = 1;
        if ( !v17 )
          goto LABEL_29;
      }
      else
      {
        if ( v8 )
          v10 = (v8 & 7) == 4;
        else
          v10 = 1;
        if ( v10 )
        {
          *(_DWORD *)(a3 + 80) = v8 - 1;
          goto LABEL_28;
        }
        if ( (*v6 & 1) != 0 )
          v11 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
        else
          v11 = sub_10003A0B4(a1 + 8);
        v20 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v11);
        if ( !v20 )
        {
LABEL_29:
          v20 = 0LL;
          goto LABEL_28;
        }
      }
LABEL_20:
      if ( (sub_10003A040(a3, &v20, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        goto LABEL_28;
    }
    v7 = (google::protobuf::internal *)((char *)v20 + 2);
LABEL_6:
    v20 = v7;
    goto LABEL_7;
  }
LABEL_28:
  *(_DWORD *)(a1 + 16) |= v5;
  return v20;
}