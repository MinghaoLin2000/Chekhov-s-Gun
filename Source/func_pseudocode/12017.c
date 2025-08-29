__ZN6google8protobuf9FieldMask14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::FieldMask::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v5; // x21
  google::protobuf::internal *v6; // x2
  unsigned int v7; // w24
  unsigned int v8; // w9
  bool v9; // zf
  unsigned __int64 v10; // x1
  google::protobuf::internal *v11; // x8
  std::string::value_type *v12; // x1
  int *v13; // x8
  __int64 v14; // x10
  int v15; // w9
  std::string *v16; // x24
  __int64 v17; // x8
  __int64 v18; // x9
  google::protobuf::internal *TagFallback; // x0
  unsigned int v20; // w1
  google::protobuf::internal *v22; // [xsp+8h] [xbp-48h] BYREF
  google::protobuf::internal *v23[2]; // [xsp+10h] [xbp-40h] BYREF

  v22 = a2;
  if ( (sub_10003A040(a3, &v22, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v5 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v6 = (google::protobuf::internal *)((char *)v22 + 1);
      v7 = *(unsigned __int8 *)v22;
      if ( (*(char *)v22 & 0x80000000) == 0 )
        goto LABEL_6;
      v8 = v7 + (*(unsigned __int8 *)v6 << 7);
      v7 = v8 - 128;
      if ( (*(char *)v6 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v22,
                                                    (const char *)(v8 - 128));
      v22 = TagFallback;
      if ( !TagFallback )
        return 0LL;
      v6 = TagFallback;
      v7 = v20;
LABEL_7:
      if ( v7 == 10 )
      {
        v11 = (google::protobuf::internal *)((char *)v6 - 1);
        while ( 1 )
        {
          v12 = (char *)v11 + 1;
          v22 = (google::protobuf::internal *)((char *)v11 + 1);
          v13 = *(int **)(a1 + 32);
          if ( !v13 )
            break;
          v14 = *(int *)(a1 + 24);
          v15 = *v13;
          if ( (int)v14 >= *v13 )
          {
            if ( v15 == *(_DWORD *)(a1 + 28) )
            {
LABEL_22:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 16),
                v15 + 1);
              v13 = *(int **)(a1 + 32);
              v15 = *v13;
            }
            *v13 = v15 + 1;
            v16 = (std::string *)sub_10007A808(*(_QWORD *)(a1 + 16));
            v17 = *(_QWORD *)(a1 + 32);
            v18 = *(int *)(a1 + 24);
            *(_DWORD *)(a1 + 24) = v18 + 1;
            *(_QWORD *)(v17 + 8 * v18 + 8) = v16;
            v12 = (std::string::value_type *)v22;
            goto LABEL_24;
          }
          *(_DWORD *)(a1 + 24) = v14 + 1;
          v16 = *(std::string **)&v13[2 * v14 + 2];
LABEL_24:
          v22 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v16, v12, a3);
          sub_10007A644(v23, v16);
          if ( !(unsigned int)google::protobuf::internal::VerifyUTF8(
                                v23[0],
                                (const char *)v23[1],
                                (google::protobuf::internal *)"google.protobuf.FieldMask.paths") )
            return 0LL;
          v11 = v22;
          if ( !v22 )
            return 0LL;
          if ( *(_QWORD *)a3 <= (unsigned __int64)v22 || *(_BYTE *)v22 != 10 )
            goto LABEL_28;
        }
        v15 = *(_DWORD *)(a1 + 28);
        goto LABEL_22;
      }
      if ( v7 )
        v9 = (v7 & 7) == 4;
      else
        v9 = 1;
      if ( v9 )
      {
        *(_DWORD *)(a3 + 80) = v7 - 1;
        return v22;
      }
      if ( (*v5 & 1) != 0 )
        v10 = (*v5 & 0xFFFFFFFFFFFFFFFELL) + 8;
      else
        v10 = sub_10003A0B4(a1 + 8);
      v22 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v7, v10);
      if ( !v22 )
        return 0LL;
LABEL_28:
      if ( (unsigned int)sub_10003A040(a3, &v22, *(unsigned int *)(a3 + 92)) )
        return v22;
    }
    v6 = (google::protobuf::internal *)((char *)v22 + 2);
LABEL_6:
    v22 = v6;
    goto LABEL_7;
  }
  return v22;
}