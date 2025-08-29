__ZN6google8protobuf6Option14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::Option::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v5; // x21
  __int64 v6; // x22
  google::protobuf::internal *TagFallback; // x2
  unsigned int v8; // w24
  unsigned int v9; // w9
  bool v11; // zf
  unsigned __int64 v12; // x1
  google::protobuf::internal *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x0
  int v16; // w8
  _QWORD *v17; // x1
  std::string *v18; // x24
  char v19; // w0
  unsigned int v20; // w1
  google::protobuf::internal *v22; // [xsp+8h] [xbp-58h] BYREF
  google::protobuf::internal *v23[2]; // [xsp+10h] [xbp-50h] BYREF

  v22 = a2;
  v5 = (_QWORD *)(a1 + 8);
  v6 = a1 + 16;
  while ( 1 )
  {
    if ( (sub_10003A040(a3, &v22, *(unsigned int *)(a3 + 92)) & 1) != 0 )
      return v22;
    TagFallback = (google::protobuf::internal *)((char *)v22 + 1);
    v8 = *(unsigned __int8 *)v22;
    if ( (*(char *)v22 & 0x80000000) == 0 )
      goto LABEL_6;
    v9 = v8 + (*(unsigned __int8 *)TagFallback << 7);
    v8 = v9 - 128;
    if ( (*(char *)TagFallback & 0x80000000) == 0 )
    {
      TagFallback = (google::protobuf::internal *)((char *)v22 + 2);
LABEL_6:
      v22 = TagFallback;
      goto LABEL_7;
    }
    TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                  v22,
                                                  (const char *)(v9 - 128));
    v22 = TagFallback;
    if ( !TagFallback )
      return TagFallback;
    v8 = v20;
LABEL_7:
    if ( v8 >> 3 == 2 )
      break;
    if ( v8 >> 3 != 1 || (unsigned __int8)v8 != 10 )
      goto LABEL_12;
    v17 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFELL);
    if ( (*v5 & 1) != 0 )
      v17 = (_QWORD *)*v17;
    v18 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v6, v17);
    v22 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(
                                          v18,
                                          (std::string::value_type *)v22,
                                          a3);
    sub_10007A644(v23, v18);
    v19 = google::protobuf::internal::VerifyUTF8(
            v23[0],
            (const char *)v23[1],
            (google::protobuf::internal *)"google.protobuf.Option.name");
    if ( v22 )
      v16 = 2;
    else
      v16 = 4;
    if ( (v19 & 1) == 0 )
      return 0LL;
LABEL_31:
    if ( v16 != 2 )
      return 0LL;
  }
  if ( (unsigned __int8)v8 == 18 )
  {
    v14 = *(_QWORD *)(a1 + 24);
    if ( !v14 )
    {
      v15 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::Any>();
      LODWORD(v14) = v15;
      *(_QWORD *)(a1 + 24) = v15;
      TagFallback = v22;
    }
    v13 = (google::protobuf::internal *)sub_1000F6F0C(a3, v14, TagFallback);
    goto LABEL_23;
  }
LABEL_12:
  if ( v8 )
    v11 = (v8 & 7) == 4;
  else
    v11 = 1;
  if ( !v11 )
  {
    if ( (*v5 & 1) != 0 )
      v12 = (*v5 & 0xFFFFFFFFFFFFFFFELL) + 8;
    else
      v12 = sub_10003A0B4(v5);
    v13 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v12);
LABEL_23:
    v22 = v13;
    if ( !v13 )
      return 0LL;
    v16 = 2;
    goto LABEL_31;
  }
  *(_DWORD *)(a3 + 80) = v8 - 1;
  return TagFallback;
}