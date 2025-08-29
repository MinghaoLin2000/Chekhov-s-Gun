__ZN3TSP9FieldPath14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::FieldPath::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v5; // x22
  google::protobuf::internal *v6; // x2
  unsigned int v7; // w23
  unsigned int v8; // w9
  google::protobuf::internal *v9; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v11; // w1
  __int64 v12; // x0
  bool v13; // zf
  unsigned __int64 v14; // x1
  google::protobuf::internal *v16; // [xsp+8h] [xbp-38h] BYREF

  v16 = a2;
  if ( (sub_10003A040(a3, &v16, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v5 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v6 = (google::protobuf::internal *)((char *)v16 + 1);
      v7 = *(unsigned __int8 *)v16;
      if ( (*(char *)v16 & 0x80000000) == 0 )
        goto LABEL_6;
      v8 = v7 + (*(unsigned __int8 *)v6 << 7);
      v7 = v8 - 128;
      if ( (*(char *)v6 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v16,
                                                    (const char *)(v8 - 128),
                                                    (unsigned int)v6);
      v16 = TagFallback;
      if ( !TagFallback )
        return 0LL;
      LODWORD(v6) = (_DWORD)TagFallback;
      v7 = v11;
LABEL_7:
      if ( (v7 & 0xFFFFFFF8) == 8 )
      {
        if ( v7 == 10 )
        {
          v9 = (google::protobuf::internal *)google::protobuf::internal::PackedUInt32Parser((int)a1 + 16, (int)v6, a3);
          goto LABEL_22;
        }
        if ( v7 == 8 )
        {
          v12 = sub_10003D848(&v16);
          sub_10003FDD0(a1, v12);
          if ( !v16 )
            return 0LL;
          goto LABEL_23;
        }
      }
      if ( v7 )
        v13 = (v7 & 7) == 4;
      else
        v13 = 1;
      if ( v13 )
      {
        *(_DWORD *)(a3 + 80) = v7 - 1;
        return v16;
      }
      if ( (*v5 & 1) != 0 )
        v14 = (*v5 & 0xFFFFFFFFFFFFFFFELL) + 8;
      else
        v14 = sub_10003A0B4(a1 + 8);
      v9 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v7, v14);
LABEL_22:
      v16 = v9;
      if ( !v9 )
        return 0LL;
LABEL_23:
      if ( (unsigned int)sub_10003A040(a3, &v16, *(unsigned int *)(a3 + 92)) )
        return v16;
    }
    v6 = (google::protobuf::internal *)((char *)v16 + 2);
LABEL_6:
    v16 = v6;
    goto LABEL_7;
  }
  return v16;
}