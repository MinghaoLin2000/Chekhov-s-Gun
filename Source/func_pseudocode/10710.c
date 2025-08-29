__ZN3TSP12FieldOptions14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::FieldOptions::_InternalParse(
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
  google::protobuf::internal *v11; // x8
  unsigned __int64 v12; // x22
  int v13; // w8
  int v14; // w9
  google::protobuf::internal *TagFallback; // x0
  unsigned int v16; // w1
  unsigned __int64 v17; // x1
  google::protobuf::UnknownFieldSet *v18; // x0
  google::protobuf::internal *v20; // [xsp+8h] [xbp-28h] BYREF

  v20 = a2;
  if ( (sub_10003A040(a3, &v20, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v5 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v6 = (google::protobuf::internal *)((char *)v20 + 1);
      v7 = *(unsigned __int8 *)v20;
      if ( (*(char *)v20 & 0x80000000) == 0 )
        goto LABEL_6;
      v8 = v7 + (*(unsigned __int8 *)v6 << 7);
      v7 = v8 - 128;
      if ( (*(char *)v6 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v20,
                                                    (const char *)(v8 - 128),
                                                    (unsigned int)v6);
      v20 = TagFallback;
      if ( !TagFallback )
        return 0LL;
      v6 = TagFallback;
      v7 = v16;
LABEL_7:
      if ( v7 == 8 )
      {
        v11 = (google::protobuf::internal *)((char *)v6 + 1);
        v12 = *(unsigned __int8 *)v6;
        if ( (*(char *)v6 & 0x80000000) == 0 )
          goto LABEL_19;
        v13 = *(char *)v11;
        v14 = v12 + ((unsigned __int8)v13 << 7);
        v12 = (unsigned int)(v14 - 128);
        if ( v13 < 0 )
        {
          v20 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                v6,
                                                (const char *)(unsigned int)(v14 - 128),
                                                (unsigned int)v6);
          if ( !v20 )
            return 0LL;
          v12 = v17;
        }
        else
        {
          v11 = (google::protobuf::internal *)((char *)v6 + 2);
LABEL_19:
          v20 = v11;
        }
        if ( (unsigned int)v12 > 7 )
        {
          if ( (*v5 & 1) != 0 )
            v18 = (google::protobuf::UnknownFieldSet *)((*v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
          else
            v18 = (google::protobuf::UnknownFieldSet *)sub_10003A0B4(a1 + 8);
          google::protobuf::UnknownFieldSet::AddVarint(v18, 1, v12);
        }
        else
        {
          *(_DWORD *)(a1 + 16) |= 1u;
          *(_DWORD *)(a1 + 24) = v12;
        }
        goto LABEL_22;
      }
      if ( v7 )
        v9 = (v7 & 7) == 4;
      else
        v9 = 1;
      if ( v9 )
      {
        *(_DWORD *)(a3 + 80) = v7 - 1;
        return v20;
      }
      if ( (*v5 & 1) != 0 )
        v10 = (*v5 & 0xFFFFFFFFFFFFFFFELL) + 8;
      else
        v10 = sub_10003A0B4(a1 + 8);
      v20 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v7, v10);
      if ( !v20 )
        return 0LL;
LABEL_22:
      if ( (sub_10003A040(a3, &v20, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        return v20;
    }
    v6 = (google::protobuf::internal *)((char *)v20 + 2);
LABEL_6:
    v20 = v6;
    goto LABEL_7;
  }
  return v20;
}