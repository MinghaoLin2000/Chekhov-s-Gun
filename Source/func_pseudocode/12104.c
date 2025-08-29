__ZN6google8protobuf9EnumValue14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::EnumValue::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // x21
  _QWORD *v6; // x22
  __int64 v7; // x23
  google::protobuf::internal *TagFallback; // x2
  unsigned int v9; // w25
  unsigned int v10; // w9
  unsigned int v11; // w8
  bool v13; // zf
  unsigned __int64 v14; // x1
  unsigned __int64 v15; // x0
  google::protobuf::internal *v16; // x2
  int *v17; // x8
  __int64 v18; // x10
  int v19; // w9
  __int64 v20; // x1
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  unsigned __int64 v24; // x1
  google::protobuf::internal *v25; // x8
  int v26; // w8
  int v27; // w8
  _QWORD *v28; // x1
  std::string *v29; // x25
  char v30; // w0
  unsigned int v31; // w1
  google::protobuf::internal *v32; // x0
  int v33; // w1
  google::protobuf::internal *v35; // [xsp+8h] [xbp-68h] BYREF
  google::protobuf::internal *v36[2]; // [xsp+10h] [xbp-60h] BYREF

  v35 = a2;
  v5 = (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 16);
  v6 = (_QWORD *)(a1 + 8);
  v7 = a1 + 40;
  while ( 1 )
  {
    if ( (sub_10003A040(a3, &v35, *(unsigned int *)(a3 + 92)) & 1) != 0 )
      return v35;
    TagFallback = (google::protobuf::internal *)((char *)v35 + 1);
    v9 = *(unsigned __int8 *)v35;
    if ( (*(char *)v35 & 0x80000000) == 0 )
      goto LABEL_6;
    v10 = v9 + (*(unsigned __int8 *)TagFallback << 7);
    v9 = v10 - 128;
    if ( (*(char *)TagFallback & 0x80000000) == 0 )
    {
      TagFallback = (google::protobuf::internal *)((char *)v35 + 2);
LABEL_6:
      v35 = TagFallback;
      goto LABEL_7;
    }
    TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                  v35,
                                                  (const char *)(v10 - 128));
    v35 = TagFallback;
    if ( !TagFallback )
      return TagFallback;
    v9 = v31;
LABEL_7:
    v11 = v9 >> 3;
    if ( v9 >> 3 == 3 )
    {
      if ( (unsigned __int8)v9 != 26 )
      {
LABEL_13:
        if ( v9 )
          v13 = (v9 & 7) == 4;
        else
          v13 = 1;
        if ( v13 )
        {
          *(_DWORD *)(a3 + 80) = v9 - 1;
          return TagFallback;
        }
        if ( (*v6 & 1) != 0 )
          v14 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
        else
          v14 = sub_10003A0B4(v6);
        v35 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v14);
        if ( !v35 )
          return 0LL;
        goto LABEL_39;
      }
      v15 = (unsigned __int64)TagFallback - 1;
      while ( 1 )
      {
        v16 = (google::protobuf::internal *)(v15 + 1);
        v35 = (google::protobuf::internal *)(v15 + 1);
        v17 = *(int **)(a1 + 32);
        if ( !v17 )
          break;
        v18 = *(int *)(a1 + 24);
        v19 = *v17;
        if ( (int)v18 >= *v17 )
        {
          if ( v19 == *(_DWORD *)(a1 + 28) )
          {
LABEL_28:
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v5, v19 + 1);
            v17 = *(int **)(a1 + 32);
            v19 = *v17;
          }
          *v17 = v19 + 1;
          v21 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::Option>(*(_QWORD *)(a1 + 16));
          LODWORD(v20) = v21;
          v22 = *(_QWORD *)(a1 + 32);
          v23 = *(int *)(a1 + 24);
          *(_DWORD *)(a1 + 24) = v23 + 1;
          *(_QWORD *)(v22 + 8 * v23 + 8) = v21;
          v16 = v35;
          goto LABEL_30;
        }
        *(_DWORD *)(a1 + 24) = v18 + 1;
        v20 = *(_QWORD *)&v17[2 * v18 + 2];
LABEL_30:
        v15 = sub_1000C9B8C(a3, v20, v16);
        v35 = (google::protobuf::internal *)v15;
        if ( !v15 )
          return 0LL;
        if ( *(_QWORD *)a3 <= v15 || *(_BYTE *)v15 != 26 )
          goto LABEL_39;
      }
      v19 = *(_DWORD *)(a1 + 28);
      goto LABEL_28;
    }
    if ( v11 != 2 )
      break;
    if ( (unsigned __int8)v9 != 16 )
      goto LABEL_13;
    v25 = (google::protobuf::internal *)((char *)TagFallback + 1);
    LODWORD(v24) = *(unsigned __int8 *)TagFallback;
    if ( (v24 & 0x80) != 0 )
    {
      v26 = *(char *)v25;
      v24 = (unsigned int)v24 + ((unsigned __int8)v26 << 7) - 128;
      if ( v26 < 0 )
      {
        v32 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(TagFallback, v24);
        v35 = v32;
        *(_DWORD *)(a1 + 48) = v33;
        if ( !v32 )
          return 0LL;
        goto LABEL_39;
      }
      v25 = (google::protobuf::internal *)((char *)TagFallback + 2);
    }
    v35 = v25;
    *(_DWORD *)(a1 + 48) = v24;
LABEL_39:
    v27 = 2;
LABEL_46:
    if ( v27 != 2 )
      return 0LL;
  }
  if ( v11 != 1 || (unsigned __int8)v9 != 10 )
    goto LABEL_13;
  v28 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
  if ( (*v6 & 1) != 0 )
    v28 = (_QWORD *)*v28;
  v29 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v7, v28);
  v35 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(
                                        v29,
                                        (std::string::value_type *)v35,
                                        a3);
  sub_10007A644(v36, v29);
  v30 = google::protobuf::internal::VerifyUTF8(
          v36[0],
          (const char *)v36[1],
          (google::protobuf::internal *)"google.protobuf.EnumValue.name");
  if ( v35 )
    v27 = 2;
  else
    v27 = 4;
  if ( (v30 & 1) != 0 )
    goto LABEL_46;
  return 0LL;
}