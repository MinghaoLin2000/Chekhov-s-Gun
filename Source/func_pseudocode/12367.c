__ZN6google8protobuf8Duration14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::Duration::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v6; // x21
  google::protobuf::internal *v7; // x2
  unsigned int v8; // w22
  unsigned int v9; // w9
  bool v11; // zf
  __int64 v12; // x1
  unsigned __int64 v13; // x1
  google::protobuf::internal *v14; // x8
  int v15; // w8
  google::protobuf::internal *v16; // x8
  unsigned __int64 v17; // x1
  int v18; // w8
  google::protobuf::internal *TagFallback; // x0
  unsigned int v20; // w1
  google::protobuf::internal *v21; // x0
  int v22; // w1
  google::protobuf::internal *v23; // x0
  __int64 v24; // x1
  google::protobuf::internal *v25; // [xsp+8h] [xbp-28h] BYREF

  v25 = a2;
  if ( (sub_10003A040(a3, &v25, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v6 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v7 = (google::protobuf::internal *)((char *)v25 + 1);
      v8 = *(unsigned __int8 *)v25;
      if ( (*(char *)v25 & 0x80000000) == 0 )
        goto LABEL_7;
      v9 = v8 + (*(unsigned __int8 *)v7 << 7);
      v8 = v9 - 128;
      if ( (*(char *)v7 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v25,
                                                    (const char *)(v9 - 128));
      v25 = TagFallback;
      if ( !TagFallback )
        return 0LL;
      v7 = TagFallback;
      v8 = v20;
LABEL_8:
      if ( v8 >> 3 == 2 )
      {
        if ( (unsigned __int8)v8 != 16 )
          goto LABEL_13;
        v14 = (google::protobuf::internal *)((char *)v7 + 1);
        LODWORD(v13) = *(unsigned __int8 *)v7;
        if ( (v13 & 0x80) == 0 )
          goto LABEL_25;
        v15 = *(char *)v14;
        v13 = (unsigned int)v13 + ((unsigned __int8)v15 << 7) - 128;
        if ( (v15 & 0x80000000) == 0 )
        {
          v14 = (google::protobuf::internal *)((char *)v7 + 2);
LABEL_25:
          v25 = v14;
          *(_DWORD *)(a1 + 24) = v13;
          goto LABEL_30;
        }
        v21 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v7, v13);
        v25 = v21;
        *(_DWORD *)(a1 + 24) = v22;
        if ( !v21 )
          return 0LL;
      }
      else
      {
        if ( v8 >> 3 != 1 || (unsigned __int8)v8 != 8 )
        {
LABEL_13:
          if ( v8 )
            v11 = (v8 & 7) == 4;
          else
            v11 = 1;
          if ( v11 )
          {
            *(_DWORD *)(a3 + 80) = v8 - 1;
            return v25;
          }
          if ( (*v6 & 1) != 0 )
          {
            v12 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
          }
          else
          {
            v12 = sub_10003A0B4(a1 + 8);
            v7 = v25;
          }
          v25 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v12, v7);
          if ( !v25 )
            return 0LL;
          goto LABEL_30;
        }
        v16 = (google::protobuf::internal *)((char *)v7 + 1);
        v17 = *(unsigned __int8 *)v7;
        if ( (*(char *)v7 & 0x80000000) == 0 )
          goto LABEL_29;
        v18 = *(char *)v16;
        v17 = (unsigned int)v17 + ((unsigned __int8)v18 << 7) - 128;
        if ( (v18 & 0x80000000) == 0 )
        {
          v16 = (google::protobuf::internal *)((char *)v7 + 2);
LABEL_29:
          v25 = v16;
          *(_QWORD *)(a1 + 16) = v17;
          goto LABEL_30;
        }
        v23 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v7, v17);
        v25 = v23;
        *(_QWORD *)(a1 + 16) = v24;
        if ( !v23 )
          return 0LL;
      }
LABEL_30:
      if ( (unsigned int)sub_10003A040(a3, &v25, *(unsigned int *)(a3 + 92)) )
        return v25;
    }
    v7 = (google::protobuf::internal *)((char *)v25 + 2);
LABEL_7:
    v25 = v7;
    goto LABEL_8;
  }
  return v25;
}