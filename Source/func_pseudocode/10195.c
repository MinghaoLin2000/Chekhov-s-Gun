__ZN3TSP4Size14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::Size::_InternalParse(
        _DWORD *a1,
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
  google::protobuf::internal *v14; // x2
  int v15; // t1
  int v16; // t1
  google::protobuf::internal *TagFallback; // x0
  unsigned int v18; // w1
  google::protobuf::internal *v19; // [xsp+8h] [xbp-38h] BYREF

  v19 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v19, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = a1 + 2;
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v19 + 1);
      v9 = *(unsigned __int8 *)v19;
      if ( (*(char *)v19 & 0x80000000) == 0 )
        goto LABEL_7;
      v10 = v9 + (*(unsigned __int8 *)v8 << 7);
      v9 = v10 - 128;
      if ( (*(char *)v8 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v19,
                                                    (const char *)(v10 - 128),
                                                    (unsigned int)v8);
      v19 = TagFallback;
      if ( !TagFallback )
        goto LABEL_31;
      v8 = TagFallback;
      v9 = v18;
LABEL_8:
      if ( v9 >> 3 == 2 )
      {
        if ( (unsigned __int8)v9 == 21 )
        {
          v15 = *(_DWORD *)v8;
          v14 = (google::protobuf::internal *)((char *)v8 + 4);
          v5 |= 2u;
          a1[7] = v15;
LABEL_24:
          v19 = v14;
          goto LABEL_25;
        }
      }
      else if ( v9 >> 3 == 1 && (unsigned __int8)v9 == 13 )
      {
        v16 = *(_DWORD *)v8;
        v14 = (google::protobuf::internal *)((char *)v8 + 4);
        v5 |= 1u;
        a1[6] = v16;
        goto LABEL_24;
      }
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
        v13 = sub_10003A0B4(a1 + 2);
      v19 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v13);
      if ( !v19 )
      {
LABEL_31:
        v19 = 0LL;
        goto LABEL_2;
      }
LABEL_25:
      if ( (sub_10003A040(a3, &v19, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        goto LABEL_2;
    }
    v8 = (google::protobuf::internal *)((char *)v19 + 2);
LABEL_7:
    v19 = v8;
    goto LABEL_8;
  }
LABEL_2:
  a1[4] |= v5;
  return v19;
}