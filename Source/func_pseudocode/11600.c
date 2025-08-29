__ZN6google8protobuf5Empty14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::Empty::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v4; // x20
  google::protobuf::internal *TagFallback; // x2
  unsigned int v6; // w21
  unsigned int v7; // w9
  unsigned __int64 v9; // x1
  unsigned int v10; // w1
  google::protobuf::internal *v12; // [xsp+8h] [xbp-28h] BYREF

  v12 = a2;
  v4 = (_QWORD *)(a1 + 8);
  while ( 1 )
  {
    if ( (sub_10003A040(a3, &v12, *(unsigned int *)(a3 + 92)) & 1) != 0 )
      return v12;
    TagFallback = (google::protobuf::internal *)((char *)v12 + 1);
    v6 = *(unsigned __int8 *)v12;
    if ( (*(char *)v12 & 0x80000000) == 0 )
      goto LABEL_6;
    v7 = v6 + (*(unsigned __int8 *)TagFallback << 7);
    v6 = v7 - 128;
    if ( (*(char *)TagFallback & 0x80000000) == 0 )
    {
      TagFallback = (google::protobuf::internal *)((char *)v12 + 2);
LABEL_6:
      v12 = TagFallback;
      goto LABEL_7;
    }
    TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                  v12,
                                                  (const char *)(v7 - 128),
                                                  (unsigned int)TagFallback);
    v12 = TagFallback;
    if ( !TagFallback )
      return TagFallback;
    v6 = v10;
LABEL_7:
    if ( !v6 || (v6 & 7) == 4 )
      break;
    if ( (*v4 & 1) != 0 )
      v9 = (*v4 & 0xFFFFFFFFFFFFFFFELL) + 8;
    else
      v9 = sub_10003A0B4(v4);
    v12 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v6, v9);
    if ( !v12 )
      return 0LL;
  }
  *(_DWORD *)(a3 + 80) = v6 - 1;
  return TagFallback;
}