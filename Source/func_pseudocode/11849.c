__ZN6google8protobuf10BytesValue14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::BytesValue::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v5; // x20
  __int64 v6; // x21
  google::protobuf::internal *v7; // x2
  unsigned int v8; // w22
  unsigned int v9; // w9
  bool v10; // zf
  unsigned __int64 v11; // x1
  google::protobuf::internal *v12; // x0
  _QWORD *v13; // x1
  std::string *v14; // x0
  unsigned int v15; // w1
  google::protobuf::internal *TagFallback; // [xsp+8h] [xbp-28h] BYREF

  TagFallback = a2;
  if ( (sub_10003A040(a3, &TagFallback, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v5 = (_QWORD *)(a1 + 8);
    v6 = a1 + 16;
    while ( 1 )
    {
      v7 = (google::protobuf::internal *)((char *)TagFallback + 1);
      v8 = *(unsigned __int8 *)TagFallback;
      if ( (*(char *)TagFallback & 0x80000000) == 0 )
        goto LABEL_6;
      v9 = v8 + (*(unsigned __int8 *)v7 << 7);
      v8 = v9 - 128;
      if ( (*(char *)v7 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    TagFallback,
                                                    (const char *)(v9 - 128),
                                                    (unsigned int)v7);
      if ( !TagFallback )
        return 0LL;
      v8 = v15;
LABEL_7:
      if ( v8 == 10 )
      {
        v13 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v5 & 1) != 0 )
          v13 = (_QWORD *)*v13;
        v14 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v6, v13);
        v12 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v14, TagFallback, a3);
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
          return TagFallback;
        }
        if ( (*v5 & 1) != 0 )
          v11 = (*v5 & 0xFFFFFFFFFFFFFFFELL) + 8;
        else
          v11 = sub_10003A0B4(v5);
        v12 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v11);
      }
      TagFallback = v12;
      if ( !v12 )
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