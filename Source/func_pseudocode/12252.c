__ZN6google8protobuf6Struct14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::Struct::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v5; // x20
  int v6; // w21
  google::protobuf::internal *v7; // x2
  int v8; // w22
  int v9; // w9
  bool v10; // zf
  __int64 v11; // x1
  unsigned __int64 v12; // x0
  google::protobuf::internal *TagFallback; // x0
  int v14; // w1
  google::protobuf::internal *v16; // [xsp+8h] [xbp-28h] BYREF

  v16 = a2;
  if ( (sub_10003A040(a3, &v16, *(unsigned int *)(a3 + 92)) & 1) != 0 )
    return v16;
  v5 = (_QWORD *)(a1 + 8);
  v6 = a1 + 16;
  while ( 1 )
  {
    v7 = (google::protobuf::internal *)((char *)v16 + 1);
    v8 = *(unsigned __int8 *)v16;
    if ( (*(char *)v16 & 0x80000000) == 0 )
      goto LABEL_6;
    v9 = v8 + (*(unsigned __int8 *)v7 << 7);
    v8 = v9 - 128;
    if ( (*(char *)v7 & 0x80000000) == 0 )
    {
      v7 = (google::protobuf::internal *)((char *)v16 + 2);
LABEL_6:
      v16 = v7;
      goto LABEL_7;
    }
    TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                  v16,
                                                  (const char *)(unsigned int)(v9 - 128));
    v16 = TagFallback;
    if ( !TagFallback )
      return 0LL;
    v7 = TagFallback;
    v8 = v14;
LABEL_7:
    if ( v8 == 10 )
      break;
    if ( v8 )
      v10 = (v8 & 7) == 4;
    else
      v10 = 1;
    if ( v10 )
    {
      *(_DWORD *)(a3 + 80) = v8 - 1;
      return v16;
    }
    if ( (*v5 & 1) != 0 )
    {
      v11 = (*v5 & 0xFFFFFFFFFFFFFFFELL) + 8;
    }
    else
    {
      v11 = sub_10003A0B4(v5);
      v7 = v16;
    }
    v16 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v11, v7);
    if ( !v16 )
      return 0LL;
LABEL_20:
    if ( (unsigned int)sub_10003A040(a3, &v16, *(unsigned int *)(a3 + 92)) )
      return v16;
  }
  v12 = (unsigned __int64)v7 - 1;
  while ( 1 )
  {
    v16 = (google::protobuf::internal *)(v12 + 1);
    v12 = sub_1001103FC(a3, v6, (google::protobuf::internal *)(v12 + 1));
    v16 = (google::protobuf::internal *)v12;
    if ( !v12 )
      return 0LL;
    if ( *(_QWORD *)a3 <= v12 || *(_BYTE *)v12 != 10 )
      goto LABEL_20;
  }
}