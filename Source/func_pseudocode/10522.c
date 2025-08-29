__ZN3TSP14DataAttributes14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::DataAttributes::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v5; // x20
  __int64 v6; // x21
  google::protobuf::internal *v7; // x2
  const char *v8; // x1
  bool v9; // zf
  __int64 v10; // x23
  google::protobuf::internal *v11; // x0
  unsigned __int64 v12; // x1
  google::protobuf::internal *TagFallback; // [xsp+8h] [xbp-38h] BYREF

  TagFallback = a2;
  if ( (sub_10003A040(a3, &TagFallback, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v5 = (_QWORD *)(a1 + 8);
    v6 = a1 + 16;
    while ( 1 )
    {
      v7 = (google::protobuf::internal *)((char *)TagFallback + 1);
      LODWORD(v8) = *(unsigned __int8 *)TagFallback;
      if ( (*(char *)TagFallback & 0x80000000) == 0 )
        goto LABEL_6;
      v8 = (const char *)((unsigned int)v8 + (*(unsigned __int8 *)v7 << 7) - 128);
      if ( (*(char *)v7 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    TagFallback,
                                                    v8,
                                                    (unsigned int)v7);
      if ( !TagFallback )
        return 0LL;
LABEL_7:
      if ( (_DWORD)v8 )
        v9 = ((unsigned __int8)v8 & 7) == 4;
      else
        v9 = 1;
      if ( v9 )
      {
        *(_DWORD *)(a3 + 80) = (_DWORD)v8 - 1;
        return TagFallback;
      }
      v10 = (unsigned int)v8;
      if ( (unsigned int)v8 < 0x320 )
      {
        if ( (*v5 & 1) != 0 )
          v12 = (*v5 & 0xFFFFFFFFFFFFFFFELL) + 8;
        else
          v12 = sub_10003A0B4(v5);
        v11 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v10, v12);
      }
      else
      {
        v11 = (google::protobuf::internal *)google::protobuf::internal::ExtensionSet::ParseField(v6, (unsigned int)v8);
      }
      TagFallback = v11;
      if ( !v11 )
        return 0LL;
      if ( (unsigned int)sub_10003A040(a3, &TagFallback, *(unsigned int *)(a3 + 92)) )
        return TagFallback;
    }
    v7 = (google::protobuf::internal *)((char *)TagFallback + 2);
LABEL_6:
    TagFallback = v7;
    goto LABEL_7;
  }
  return TagFallback;
}