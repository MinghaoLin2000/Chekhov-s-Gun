__ZN3TSP11FeatureInfo14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::FeatureInfo::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v6; // x23
  google::protobuf::internal *v7; // x2
  unsigned int v8; // w25
  unsigned int v9; // w9
  unsigned int v10; // w8
  bool v12; // zf
  unsigned __int64 v13; // x1
  google::protobuf::internal *v14; // x0
  int v15; // w0
  __int64 v16; // x8
  _QWORD *v17; // x1
  std::string *v18; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v20; // w1
  __int64 v21; // x0
  __int64 v22; // x0
  google::protobuf::internal *v23; // [xsp+8h] [xbp-48h] BYREF

  v23 = a2;
  if ( (sub_10003A040(a3, &v23, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v6 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v7 = (google::protobuf::internal *)((char *)v23 + 1);
      v8 = *(unsigned __int8 *)v23;
      if ( (*(char *)v23 & 0x80000000) == 0 )
        goto LABEL_7;
      v9 = v8 + (*(unsigned __int8 *)v7 << 7);
      v8 = v9 - 128;
      if ( (*(char *)v7 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v23,
                                                    (const char *)(v9 - 128),
                                                    (unsigned int)v7);
      v23 = TagFallback;
      if ( !TagFallback )
        return 0LL;
      LODWORD(v7) = (_DWORD)TagFallback;
      v8 = v20;
LABEL_8:
      v10 = v8 >> 3;
      if ( v8 >> 3 == 3 )
      {
        if ( (unsigned __int8)v8 == 26 )
        {
          v15 = a1 + 48;
          goto LABEL_25;
        }
        if ( (unsigned __int8)v8 != 24 )
          goto LABEL_14;
        v21 = sub_10003D848(&v23);
        sub_100041018(a1, v21);
      }
      else
      {
        if ( v10 != 2 )
        {
          if ( v10 == 1 && (unsigned __int8)v8 == 10 )
          {
            *(_DWORD *)(a1 + 16) |= 1u;
            v16 = *(_QWORD *)(a1 + 8);
            v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFELL);
            if ( (v16 & 1) != 0 )
              v17 = (_QWORD *)*v17;
            v18 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(a1 + 72, v17);
            v14 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v18, v23, a3);
          }
          else
          {
LABEL_14:
            if ( v8 )
              v12 = (v8 & 7) == 4;
            else
              v12 = 1;
            if ( v12 )
            {
              *(_DWORD *)(a3 + 80) = v8 - 1;
              return v23;
            }
            if ( (*v6 & 1) != 0 )
              v13 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
            else
              v13 = sub_10003A0B4(a1 + 8);
            v14 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v13);
          }
          goto LABEL_29;
        }
        if ( (unsigned __int8)v8 == 18 )
        {
          v15 = a1 + 24;
LABEL_25:
          v14 = (google::protobuf::internal *)google::protobuf::internal::PackedUInt32Parser(v15, (int)v7, a3);
LABEL_29:
          v23 = v14;
          if ( !v14 )
            return 0LL;
          goto LABEL_30;
        }
        if ( (unsigned __int8)v8 != 16 )
          goto LABEL_14;
        v22 = sub_10003D848(&v23);
        sub_10003D8A8(a1, v22);
      }
      if ( !v23 )
        return 0LL;
LABEL_30:
      if ( (sub_10003A040(a3, &v23, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        return v23;
    }
    v7 = (google::protobuf::internal *)((char *)v23 + 2);
LABEL_7:
    v23 = v7;
    goto LABEL_8;
  }
  return v23;
}