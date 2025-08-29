__ZN3TSP4Date14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::Date::_InternalParse(
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
  google::protobuf::internal *TagFallback; // x0
  unsigned int v13; // w1
  google::protobuf::internal *v15; // [xsp+8h] [xbp-38h] BYREF

  v15 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v15, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v6 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v7 = (google::protobuf::internal *)((char *)v15 + 1);
      v8 = *(unsigned __int8 *)v15;
      if ( (*(char *)v15 & 0x80000000) == 0 )
        goto LABEL_6;
      v9 = v8 + (*(unsigned __int8 *)v7 << 7);
      v8 = v9 - 128;
      if ( (*(char *)v7 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v15,
                                                    (const char *)(v9 - 128),
                                                    (unsigned int)v7);
      v15 = TagFallback;
      if ( !TagFallback )
        goto LABEL_24;
      v7 = TagFallback;
      v8 = v13;
LABEL_7:
      if ( v8 == 9 )
      {
        *(_QWORD *)(a1 + 24) = *(_QWORD *)v7;
        v15 = (google::protobuf::internal *)((char *)v7 + 8);
        v5 = 1;
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
          goto LABEL_23;
        }
        if ( (*v6 & 1) != 0 )
          v11 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
        else
          v11 = sub_10003A0B4(a1 + 8);
        v15 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v11);
        if ( !v15 )
        {
LABEL_24:
          v15 = 0LL;
          goto LABEL_23;
        }
      }
      if ( (sub_10003A040(a3, &v15, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        goto LABEL_23;
    }
    v7 = (google::protobuf::internal *)((char *)v15 + 2);
LABEL_6:
    v15 = v7;
    goto LABEL_7;
  }
LABEL_23:
  *(_DWORD *)(a1 + 16) |= v5;
  return v15;
}