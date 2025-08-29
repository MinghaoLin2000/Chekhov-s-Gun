__ZN6google8protobuf5Mixin14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::Mixin::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v4; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  google::protobuf::internal *TagFallback; // x2
  unsigned int v8; // w25
  unsigned int v9; // w9
  bool v11; // zf
  unsigned __int64 v12; // x1
  int v13; // w8
  _QWORD *v14; // x1
  std::string *v15; // x25
  __int64 v16; // x0
  __int64 v17; // x1
  const char *v18; // x2
  _QWORD *v19; // x1
  std::string *v20; // x25
  char v21; // w0
  unsigned int v22; // w1
  google::protobuf::internal *v24; // [xsp+8h] [xbp-68h] BYREF
  __int64 v25; // [xsp+10h] [xbp-60h] BYREF
  __int64 v26; // [xsp+18h] [xbp-58h]

  v24 = a2;
  v4 = (_QWORD *)(a1 + 8);
  v5 = a1 + 24;
  v6 = a1 + 16;
  while ( 1 )
  {
    if ( (sub_10003A040(a3, &v24, *(unsigned int *)(a3 + 92)) & 1) != 0 )
      return v24;
    TagFallback = (google::protobuf::internal *)((char *)v24 + 1);
    v8 = *(unsigned __int8 *)v24;
    if ( (*(char *)v24 & 0x80000000) == 0 )
      goto LABEL_6;
    v9 = v8 + (*(unsigned __int8 *)TagFallback << 7);
    v8 = v9 - 128;
    if ( (*(char *)TagFallback & 0x80000000) == 0 )
    {
      TagFallback = (google::protobuf::internal *)((char *)v24 + 2);
LABEL_6:
      v24 = TagFallback;
      goto LABEL_7;
    }
    TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                  v24,
                                                  (const char *)(v9 - 128),
                                                  (unsigned int)TagFallback);
    v24 = TagFallback;
    if ( !TagFallback )
      return TagFallback;
    v8 = v22;
LABEL_7:
    if ( v8 >> 3 != 2 )
      break;
    if ( (unsigned __int8)v8 != 18 )
      goto LABEL_12;
    v14 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
    if ( (*v4 & 1) != 0 )
      v14 = (_QWORD *)*v14;
    v15 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v5, v14);
    v24 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v15, v24, a3);
    sub_10007A644(&v25, v15);
    v16 = v25;
    v17 = v26;
    v18 = "google.protobuf.Mixin.root";
LABEL_27:
    v21 = google::protobuf::internal::VerifyUTF8(v16, v17, v18);
    if ( v24 )
      v13 = 2;
    else
      v13 = 4;
    if ( (v21 & 1) == 0 )
      return 0LL;
LABEL_31:
    if ( v13 != 2 )
      return 0LL;
  }
  if ( v8 >> 3 == 1 && (unsigned __int8)v8 == 10 )
  {
    v19 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
    if ( (*v4 & 1) != 0 )
      v19 = (_QWORD *)*v19;
    v20 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v6, v19);
    v24 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v20, v24, a3);
    sub_10007A644(&v25, v20);
    v16 = v25;
    v17 = v26;
    v18 = "google.protobuf.Mixin.name";
    goto LABEL_27;
  }
LABEL_12:
  if ( v8 )
    v11 = (v8 & 7) == 4;
  else
    v11 = 1;
  if ( !v11 )
  {
    if ( (*v4 & 1) != 0 )
      v12 = (*v4 & 0xFFFFFFFFFFFFFFFELL) + 8;
    else
      v12 = sub_10003A0B4(v4);
    v24 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v12);
    if ( !v24 )
      return 0LL;
    v13 = 2;
    goto LABEL_31;
  }
  *(_DWORD *)(a3 + 80) = v8 - 1;
  return TagFallback;
}