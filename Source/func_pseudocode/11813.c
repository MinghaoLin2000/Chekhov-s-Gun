__ZN6google8protobuf11UInt32Value14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::UInt32Value::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v5; // x21
  google::protobuf::internal *v6; // x2
  unsigned int v7; // w22
  unsigned int v8; // w9
  bool v9; // zf
  unsigned __int64 v10; // x1
  google::protobuf::internal *v11; // x8
  const char *v12; // x1
  int v13; // w8
  google::protobuf::internal *TagFallback; // x0
  unsigned int v15; // w1
  google::protobuf::internal *v16; // x0
  int v17; // w1
  google::protobuf::internal *v19; // [xsp+8h] [xbp-28h] BYREF

  v19 = a2;
  if ( (sub_10003A040(a3, &v19, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v5 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v6 = (google::protobuf::internal *)((char *)v19 + 1);
      v7 = *(unsigned __int8 *)v19;
      if ( (*(char *)v19 & 0x80000000) == 0 )
        goto LABEL_6;
      v8 = v7 + (*(unsigned __int8 *)v6 << 7);
      v7 = v8 - 128;
      if ( (*(char *)v6 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v19,
                                                    (const char *)(v8 - 128),
                                                    (unsigned int)v6);
      v19 = TagFallback;
      if ( !TagFallback )
        return 0LL;
      v6 = TagFallback;
      v7 = v15;
LABEL_7:
      if ( v7 == 8 )
      {
        v11 = (google::protobuf::internal *)((char *)v6 + 1);
        LODWORD(v12) = *(unsigned __int8 *)v6;
        if ( (*(char *)v6 & 0x80000000) == 0 )
          goto LABEL_19;
        v13 = *(char *)v11;
        v12 = (const char *)((unsigned int)v12 + ((unsigned __int8)v13 << 7) - 128);
        if ( (v13 & 0x80000000) == 0 )
        {
          v11 = (google::protobuf::internal *)((char *)v6 + 2);
LABEL_19:
          v19 = v11;
          *(_DWORD *)(a1 + 16) = (_DWORD)v12;
          goto LABEL_20;
        }
        v16 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow32(v6, v12, (unsigned int)v6);
        v19 = v16;
        *(_DWORD *)(a1 + 16) = v17;
        if ( !v16 )
          return 0LL;
      }
      else
      {
        if ( v7 )
          v9 = (v7 & 7) == 4;
        else
          v9 = 1;
        if ( v9 )
        {
          *(_DWORD *)(a3 + 80) = v7 - 1;
          return v19;
        }
        if ( (*v5 & 1) != 0 )
          v10 = (*v5 & 0xFFFFFFFFFFFFFFFELL) + 8;
        else
          v10 = sub_10003A0B4(a1 + 8);
        v19 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v7, v10);
        if ( !v19 )
          return 0LL;
      }
LABEL_20:
      if ( (unsigned int)sub_10003A040(a3, &v19, *(unsigned int *)(a3 + 92)) )
        return v19;
    }
    v6 = (google::protobuf::internal *)((char *)v19 + 2);
LABEL_6:
    v19 = v6;
    goto LABEL_7;
  }
  return v19;
}