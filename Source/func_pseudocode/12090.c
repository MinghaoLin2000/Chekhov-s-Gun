__ZN6google8protobuf4Enum14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::Enum::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v5; // x21
  google::protobuf::internal::RepeatedPtrFieldBase *v6; // x22
  google::protobuf::internal::RepeatedPtrFieldBase *v7; // x23
  __int64 v8; // x24
  google::protobuf::internal *TagFallback; // x2
  unsigned int v10; // w26
  unsigned int v11; // w9
  _QWORD *v12; // x1
  std::string *v13; // x26
  char v14; // w0
  int v15; // w8
  unsigned __int64 v16; // x0
  google::protobuf::internal *v17; // x2
  int *v18; // x8
  __int64 v19; // x10
  int v20; // w9
  __int64 v21; // x1
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  unsigned __int64 v25; // x0
  google::protobuf::internal *v26; // x2
  int *v27; // x8
  __int64 v28; // x10
  int v29; // w9
  __int64 v30; // x1
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  __int64 v34; // x1
  _QWORD *v35; // x0
  __int64 v36; // x0
  google::protobuf::internal *v37; // x0
  google::protobuf::internal *v38; // x8
  unsigned __int64 v39; // x1
  int v40; // w8
  bool v41; // zf
  unsigned __int64 v42; // x1
  unsigned int v43; // w1
  google::protobuf::internal *v45; // [xsp+8h] [xbp-68h] BYREF
  google::protobuf::internal *v46[2]; // [xsp+10h] [xbp-60h] BYREF

  v45 = a2;
  v5 = (_QWORD *)(a1 + 8);
  v6 = (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 40);
  v7 = (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 16);
  v8 = a1 + 64;
  while ( 2 )
  {
    if ( (sub_10003A040(a3, &v45, *(unsigned int *)(a3 + 92)) & 1) != 0 )
      return v45;
    TagFallback = (google::protobuf::internal *)((char *)v45 + 1);
    v10 = *(unsigned __int8 *)v45;
    if ( (*(char *)v45 & 0x80000000) == 0 )
      goto LABEL_6;
    v11 = v10 + (*(unsigned __int8 *)TagFallback << 7);
    v10 = v11 - 128;
    if ( (*(char *)TagFallback & 0x80000000) == 0 )
    {
      TagFallback = (google::protobuf::internal *)((char *)v45 + 2);
LABEL_6:
      v45 = TagFallback;
      goto LABEL_7;
    }
    TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                  v45,
                                                  (const char *)(v11 - 128));
    v45 = TagFallback;
    if ( !TagFallback )
      return TagFallback;
    v10 = v43;
LABEL_7:
    switch ( v10 >> 3 )
    {
      case 1u:
        if ( (unsigned __int8)v10 != 10 )
          goto LABEL_54;
        v12 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v5 & 1) != 0 )
          v12 = (_QWORD *)*v12;
        v13 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v8, v12);
        v45 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(
                                              v13,
                                              (std::string::value_type *)v45,
                                              a3);
        sub_10007A644(v46, v13);
        v14 = google::protobuf::internal::VerifyUTF8(
                v46[0],
                (const char *)v46[1],
                (google::protobuf::internal *)"google.protobuf.Enum.name");
        if ( v45 )
          v15 = 2;
        else
          v15 = 4;
        if ( (v14 & 1) != 0 )
          goto LABEL_63;
        return 0LL;
      case 2u:
        if ( (unsigned __int8)v10 != 18 )
          goto LABEL_54;
        v16 = (unsigned __int64)TagFallback - 1;
        while ( 1 )
        {
          v17 = (google::protobuf::internal *)(v16 + 1);
          v45 = (google::protobuf::internal *)(v16 + 1);
          v18 = *(int **)(a1 + 32);
          if ( !v18 )
            break;
          v19 = *(int *)(a1 + 24);
          v20 = *v18;
          if ( (int)v19 >= *v18 )
          {
            if ( v20 == *(_DWORD *)(a1 + 28) )
            {
LABEL_23:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v7, v20 + 1);
              v18 = *(int **)(a1 + 32);
              v20 = *v18;
            }
            *v18 = v20 + 1;
            v22 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::EnumValue>(*(_QWORD *)(a1 + 16));
            LODWORD(v21) = v22;
            v23 = *(_QWORD *)(a1 + 32);
            v24 = *(int *)(a1 + 24);
            *(_DWORD *)(a1 + 24) = v24 + 1;
            *(_QWORD *)(v23 + 8 * v24 + 8) = v22;
            v17 = v45;
            goto LABEL_25;
          }
          *(_DWORD *)(a1 + 24) = v19 + 1;
          v21 = *(_QWORD *)&v18[2 * v19 + 2];
LABEL_25:
          v16 = sub_1000F5844(a3, v21, v17);
          v45 = (google::protobuf::internal *)v16;
          if ( !v16 )
            return 0LL;
          if ( *(_QWORD *)a3 <= v16 || *(_BYTE *)v16 != 18 )
            goto LABEL_62;
        }
        v20 = *(_DWORD *)(a1 + 28);
        goto LABEL_23;
      case 3u:
        if ( (unsigned __int8)v10 != 26 )
          goto LABEL_54;
        v25 = (unsigned __int64)TagFallback - 1;
        while ( 1 )
        {
          v26 = (google::protobuf::internal *)(v25 + 1);
          v45 = (google::protobuf::internal *)(v25 + 1);
          v27 = *(int **)(a1 + 56);
          if ( !v27 )
            break;
          v28 = *(int *)(a1 + 48);
          v29 = *v27;
          if ( (int)v28 >= *v27 )
          {
            if ( v29 == *(_DWORD *)(a1 + 52) )
            {
LABEL_36:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v6, v29 + 1);
              v27 = *(int **)(a1 + 56);
              v29 = *v27;
            }
            *v27 = v29 + 1;
            v31 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::Option>(*(_QWORD *)(a1 + 40));
            LODWORD(v30) = v31;
            v32 = *(_QWORD *)(a1 + 56);
            v33 = *(int *)(a1 + 48);
            *(_DWORD *)(a1 + 48) = v33 + 1;
            *(_QWORD *)(v32 + 8 * v33 + 8) = v31;
            v26 = v45;
            goto LABEL_38;
          }
          *(_DWORD *)(a1 + 48) = v28 + 1;
          v30 = *(_QWORD *)&v27[2 * v28 + 2];
LABEL_38:
          v25 = sub_1000C9B8C(a3, v30, v26);
          v45 = (google::protobuf::internal *)v25;
          if ( !v25 )
            return 0LL;
          if ( *(_QWORD *)a3 <= v25 || *(_BYTE *)v25 != 26 )
            goto LABEL_62;
        }
        v29 = *(_DWORD *)(a1 + 52);
        goto LABEL_36;
      case 4u:
        if ( (unsigned __int8)v10 != 34 )
          goto LABEL_54;
        v34 = *(_QWORD *)(a1 + 72);
        if ( !v34 )
        {
          v35 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFELL);
          if ( (*v5 & 1) != 0 )
            v35 = (_QWORD *)*v35;
          v36 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::SourceContext>(v35);
          LODWORD(v34) = v36;
          *(_QWORD *)(a1 + 72) = v36;
          TagFallback = v45;
        }
        v37 = (google::protobuf::internal *)sub_1000C9C5C(a3, v34, TagFallback);
        goto LABEL_61;
      case 5u:
        if ( (unsigned __int8)v10 != 40 )
          goto LABEL_54;
        v38 = (google::protobuf::internal *)((char *)TagFallback + 1);
        LODWORD(v39) = *(unsigned __int8 *)TagFallback;
        if ( (*(char *)TagFallback & 0x80000000) == 0 )
          goto LABEL_52;
        v40 = *(char *)v38;
        v39 = (unsigned int)v39 + ((unsigned __int8)v40 << 7) - 128;
        if ( v40 < 0 )
        {
          v45 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(TagFallback, v39);
          if ( !v45 )
            return 0LL;
        }
        else
        {
          v38 = (google::protobuf::internal *)((char *)TagFallback + 2);
LABEL_52:
          v45 = v38;
        }
        *(_DWORD *)(a1 + 80) = v39;
        goto LABEL_62;
      default:
LABEL_54:
        if ( v10 )
          v41 = (v10 & 7) == 4;
        else
          v41 = 1;
        if ( v41 )
        {
          *(_DWORD *)(a3 + 80) = v10 - 1;
          return TagFallback;
        }
        if ( (*v5 & 1) != 0 )
          v42 = (*v5 & 0xFFFFFFFFFFFFFFFELL) + 8;
        else
          v42 = sub_10003A0B4(v5);
        v37 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v10, v42);
LABEL_61:
        v45 = v37;
        if ( v37 )
        {
LABEL_62:
          v15 = 2;
LABEL_63:
          if ( v15 != 2 )
            return 0LL;
          continue;
        }
        return 0LL;
    }
  }
}