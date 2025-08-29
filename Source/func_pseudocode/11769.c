__ZN6google8protobuf10FloatValue14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::FloatValue::_InternalParse(
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
  google::protobuf::internal *TagFallback; // x0
  unsigned int v12; // w1
  google::protobuf::internal *v14; // [xsp+8h] [xbp-28h] BYREF

  v14 = a2;
  if ( (sub_10003A040(a3, &v14, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v5 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v6 = (google::protobuf::internal *)((char *)v14 + 1);
      v7 = *(unsigned __int8 *)v14;
      if ( (*(char *)v14 & 0x80000000) == 0 )
        goto LABEL_6;
      v8 = v7 + (*(unsigned __int8 *)v6 << 7);
      v7 = v8 - 128;
      if ( (*(char *)v6 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v14,
                                                    (const char *)(v8 - 128),
                                                    (unsigned int)v6);
      v14 = TagFallback;
      if ( !TagFallback )
        return 0LL;
      v6 = TagFallback;
      v7 = v12;
LABEL_7:
      if ( v7 == 13 )
      {
        *(_DWORD *)(a1 + 16) = *(_DWORD *)v6;
        v14 = (google::protobuf::internal *)((char *)v6 + 4);
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
          return v14;
        }
        if ( (*v5 & 1) != 0 )
          v10 = (*v5 & 0xFFFFFFFFFFFFFFFELL) + 8;
        else
          v10 = sub_10003A0B4(a1 + 8);
        v14 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v7, v10);
        if ( !v14 )
          return 0LL;
      }
      if ( (unsigned int)sub_10003A040(a3, &v14, *(unsigned int *)(a3 + 92)) )
        return v14;
    }
    v6 = (google::protobuf::internal *)((char *)v14 + 2);
LABEL_6:
    v14 = v6;
    goto LABEL_7;
  }
  return v14;
}