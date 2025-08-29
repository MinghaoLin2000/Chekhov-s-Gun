__ZN6google8protobuf13SourceContext14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::SourceContext::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v4; // x20
  __int64 v5; // x21
  google::protobuf::internal *TagFallback; // x2
  int v7; // w23
  int v8; // w9
  bool v9; // zf
  __int64 v10; // x1
  int v11; // w8
  _QWORD *v12; // x1
  std::string *v13; // x23
  char v14; // w0
  int v15; // w1
  google::protobuf::internal *v17; // [xsp+8h] [xbp-58h] BYREF
  google::protobuf::internal *v18[2]; // [xsp+10h] [xbp-50h] BYREF

  v17 = a2;
  v4 = (_QWORD *)(a1 + 8);
  v5 = a1 + 16;
  while ( 1 )
  {
    if ( (sub_10003A040(a3, &v17, *(unsigned int *)(a3 + 92)) & 1) != 0 )
      return v17;
    TagFallback = (google::protobuf::internal *)((char *)v17 + 1);
    v7 = *(unsigned __int8 *)v17;
    if ( (*(char *)v17 & 0x80000000) == 0 )
      goto LABEL_6;
    v8 = v7 + (*(unsigned __int8 *)TagFallback << 7);
    v7 = v8 - 128;
    if ( (*(char *)TagFallback & 0x80000000) == 0 )
    {
      TagFallback = (google::protobuf::internal *)((char *)v17 + 2);
LABEL_6:
      v17 = TagFallback;
      goto LABEL_7;
    }
    TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                  v17,
                                                  (const char *)(unsigned int)(v8 - 128));
    v17 = TagFallback;
    if ( !TagFallback )
      return TagFallback;
    v7 = v15;
LABEL_7:
    if ( v7 != 10 )
      break;
    v12 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
    if ( (*v4 & 1) != 0 )
      v12 = (_QWORD *)*v12;
    v13 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v5, v12);
    v17 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(
                                          v13,
                                          (std::string::value_type *)v17,
                                          a3);
    sub_10007A644(v18, v13);
    v14 = google::protobuf::internal::VerifyUTF8(
            v18[0],
            (const char *)v18[1],
            (google::protobuf::internal *)"google.protobuf.SourceContext.file_name");
    if ( v17 )
      v11 = 2;
    else
      v11 = 4;
    if ( (v14 & 1) == 0 )
      return 0LL;
LABEL_22:
    if ( v11 != 2 )
      return 0LL;
  }
  if ( v7 )
    v9 = (v7 & 7) == 4;
  else
    v9 = 1;
  if ( !v9 )
  {
    if ( (*v4 & 1) != 0 )
    {
      v10 = (*v4 & 0xFFFFFFFFFFFFFFFELL) + 8;
    }
    else
    {
      v10 = sub_10003A0B4(v4);
      TagFallback = v17;
    }
    v17 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v7, v10, TagFallback);
    if ( !v17 )
      return 0LL;
    v11 = 2;
    goto LABEL_22;
  }
  *(_DWORD *)(a3 + 80) = v7 - 1;
  return TagFallback;
}