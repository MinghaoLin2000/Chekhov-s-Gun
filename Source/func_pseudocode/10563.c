__ZN3TSP39LargeStringArraySegment_OptionalElement14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::LargeStringArraySegment_OptionalElement::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v5; // x21
  google::protobuf::internal *v6; // x2
  unsigned int v7; // w23
  unsigned int v8; // w9
  bool v9; // zf
  unsigned __int64 v10; // x1
  google::protobuf::internal *v11; // x0
  __int64 v12; // x8
  _QWORD *v13; // x1
  std::string *v14; // x0
  unsigned int v15; // w1
  google::protobuf::internal *TagFallback; // [xsp+8h] [xbp-38h] BYREF

  TagFallback = a2;
  if ( (sub_10003A040(a3, &TagFallback, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v5 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v6 = (google::protobuf::internal *)((char *)TagFallback + 1);
      v7 = *(unsigned __int8 *)TagFallback;
      if ( (*(char *)TagFallback & 0x80000000) == 0 )
        goto LABEL_6;
      v8 = v7 + (*(unsigned __int8 *)v6 << 7);
      v7 = v8 - 128;
      if ( (*(char *)v6 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    TagFallback,
                                                    (const char *)(v8 - 128),
                                                    (unsigned int)v6);
      if ( !TagFallback )
        return 0LL;
      v7 = v15;
LABEL_7:
      if ( v7 == 10 )
      {
        *(_DWORD *)(a1 + 16) |= 1u;
        v12 = *(_QWORD *)(a1 + 8);
        v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFELL);
        if ( (v12 & 1) != 0 )
          v13 = (_QWORD *)*v13;
        v14 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(a1 + 24, v13);
        v11 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v14, TagFallback, a3);
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
          return TagFallback;
        }
        if ( (*v5 & 1) != 0 )
          v10 = (*v5 & 0xFFFFFFFFFFFFFFFELL) + 8;
        else
          v10 = sub_10003A0B4(a1 + 8);
        v11 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v7, v10);
      }
      TagFallback = v11;
      if ( !v11 )
        return 0LL;
      if ( (sub_10003A040(a3, &TagFallback, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        return TagFallback;
    }
    v6 = (google::protobuf::internal *)((char *)TagFallback + 2);
LABEL_6:
    TagFallback = v6;
    goto LABEL_7;
  }
  return TagFallback;
}