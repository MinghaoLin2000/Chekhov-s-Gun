__ZN6google8protobuf3Api14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::Api::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // x21
  _QWORD *v6; // x22
  __int64 v7; // x23
  google::protobuf::internal::RepeatedPtrFieldBase *v8; // x24
  google::protobuf::internal::RepeatedPtrFieldBase *v9; // x25
  __int64 v10; // x26
  google::protobuf::internal *TagFallback; // x2
  unsigned int v12; // w27
  unsigned int v13; // w9
  _QWORD *v14; // x1
  std::string *v15; // x27
  __int64 v16; // x0
  __int64 v17; // x1
  const char *v18; // x2
  unsigned int v19; // w1
  unsigned __int64 v20; // x0
  google::protobuf::internal *v21; // x2
  int *v22; // x8
  __int64 v23; // x10
  int v24; // w9
  __int64 v25; // x1
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  unsigned __int64 v29; // x0
  google::protobuf::internal *v30; // x2
  int *v31; // x8
  __int64 v32; // x10
  int v33; // w9
  __int64 v34; // x1
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x9
  _QWORD *v38; // x1
  std::string *v39; // x27
  char v40; // w0
  int v41; // w8
  __int64 v42; // x1
  _QWORD *v43; // x0
  __int64 v44; // x0
  google::protobuf::internal *v45; // x0
  unsigned __int64 v46; // x0
  google::protobuf::internal *v47; // x2
  int *v48; // x8
  __int64 v49; // x10
  int v50; // w9
  __int64 v51; // x1
  __int64 v52; // x0
  __int64 v53; // x8
  __int64 v54; // x9
  google::protobuf::internal *v55; // x8
  const char *v56; // x1
  int v57; // w8
  bool v58; // zf
  unsigned __int64 v59; // x1
  google::protobuf::internal *v61; // [xsp+8h] [xbp-68h] BYREF
  __int64 v62; // [xsp+10h] [xbp-60h] BYREF
  __int64 v63; // [xsp+18h] [xbp-58h]

  v61 = a2;
  v5 = (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 64);
  v6 = (_QWORD *)(a1 + 8);
  v7 = a1 + 96;
  v8 = (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 40);
  v9 = (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 16);
  v10 = a1 + 88;
  while ( 2 )
  {
    if ( (sub_10003A040(a3, &v61, *(unsigned int *)(a3 + 92)) & 1) != 0 )
      return v61;
    TagFallback = (google::protobuf::internal *)((char *)v61 + 1);
    v12 = *(unsigned __int8 *)v61;
    if ( (*(char *)v61 & 0x80000000) == 0 )
      goto LABEL_6;
    v13 = v12 + (*(unsigned __int8 *)TagFallback << 7);
    v12 = v13 - 128;
    if ( (*(char *)TagFallback & 0x80000000) == 0 )
    {
      TagFallback = (google::protobuf::internal *)((char *)v61 + 2);
LABEL_6:
      v61 = TagFallback;
      goto LABEL_7;
    }
    TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                  v61,
                                                  (const char *)(v13 - 128),
                                                  (unsigned int)TagFallback);
    v61 = TagFallback;
    if ( !TagFallback )
      return TagFallback;
    v12 = v19;
LABEL_7:
    switch ( v12 >> 3 )
    {
      case 1u:
        if ( (unsigned __int8)v12 != 10 )
          goto LABEL_74;
        v14 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v6 & 1) != 0 )
          v14 = (_QWORD *)*v14;
        v15 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v10, v14);
        v61 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v15, v61, a3);
        sub_10007A644(&v62, v15);
        v16 = v62;
        v17 = v63;
        v18 = "google.protobuf.Api.name";
        goto LABEL_44;
      case 2u:
        if ( (unsigned __int8)v12 != 18 )
          goto LABEL_74;
        v20 = (unsigned __int64)TagFallback - 1;
        while ( 1 )
        {
          v21 = (google::protobuf::internal *)(v20 + 1);
          v61 = (google::protobuf::internal *)(v20 + 1);
          v22 = *(int **)(a1 + 32);
          if ( !v22 )
            break;
          v23 = *(int *)(a1 + 24);
          v24 = *v22;
          if ( (int)v23 >= *v22 )
          {
            if ( v24 == *(_DWORD *)(a1 + 28) )
            {
LABEL_21:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v9, v24 + 1);
              v22 = *(int **)(a1 + 32);
              v24 = *v22;
            }
            *v22 = v24 + 1;
            v26 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::Method>(*(_QWORD *)(a1 + 16));
            LODWORD(v25) = v26;
            v27 = *(_QWORD *)(a1 + 32);
            v28 = *(int *)(a1 + 24);
            *(_DWORD *)(a1 + 24) = v28 + 1;
            *(_QWORD *)(v27 + 8 * v28 + 8) = v26;
            v21 = v61;
            goto LABEL_23;
          }
          *(_DWORD *)(a1 + 24) = v23 + 1;
          v25 = *(_QWORD *)&v22[2 * v23 + 2];
LABEL_23:
          v20 = sub_1000C9ABC(a3, v25, v21);
          v61 = (google::protobuf::internal *)v20;
          if ( !v20 )
            return 0LL;
          if ( *(_QWORD *)a3 <= v20 || *(_BYTE *)v20 != 18 )
            goto LABEL_82;
        }
        v24 = *(_DWORD *)(a1 + 28);
        goto LABEL_21;
      case 3u:
        if ( (unsigned __int8)v12 != 26 )
          goto LABEL_74;
        v29 = (unsigned __int64)TagFallback - 1;
        while ( 1 )
        {
          v30 = (google::protobuf::internal *)(v29 + 1);
          v61 = (google::protobuf::internal *)(v29 + 1);
          v31 = *(int **)(a1 + 56);
          if ( !v31 )
            break;
          v32 = *(int *)(a1 + 48);
          v33 = *v31;
          if ( (int)v32 >= *v31 )
          {
            if ( v33 == *(_DWORD *)(a1 + 52) )
            {
LABEL_34:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v8, v33 + 1);
              v31 = *(int **)(a1 + 56);
              v33 = *v31;
            }
            *v31 = v33 + 1;
            v35 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::Option>(*(_QWORD *)(a1 + 40));
            LODWORD(v34) = v35;
            v36 = *(_QWORD *)(a1 + 56);
            v37 = *(int *)(a1 + 48);
            *(_DWORD *)(a1 + 48) = v37 + 1;
            *(_QWORD *)(v36 + 8 * v37 + 8) = v35;
            v30 = v61;
            goto LABEL_36;
          }
          *(_DWORD *)(a1 + 48) = v32 + 1;
          v34 = *(_QWORD *)&v31[2 * v32 + 2];
LABEL_36:
          v29 = sub_1000C9B8C(a3, v34, v30);
          v61 = (google::protobuf::internal *)v29;
          if ( !v29 )
            return 0LL;
          if ( *(_QWORD *)a3 <= v29 || *(_BYTE *)v29 != 26 )
            goto LABEL_82;
        }
        v33 = *(_DWORD *)(a1 + 52);
        goto LABEL_34;
      case 4u:
        if ( (unsigned __int8)v12 != 34 )
          goto LABEL_74;
        v38 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v6 & 1) != 0 )
          v38 = (_QWORD *)*v38;
        v39 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v7, v38);
        v61 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v39, v61, a3);
        sub_10007A644(&v62, v39);
        v16 = v62;
        v17 = v63;
        v18 = "google.protobuf.Api.version";
LABEL_44:
        v40 = google::protobuf::internal::VerifyUTF8(v16, v17, v18);
        if ( v61 )
          v41 = 2;
        else
          v41 = 4;
        if ( (v40 & 1) == 0 )
          return 0LL;
        goto LABEL_83;
      case 5u:
        if ( (unsigned __int8)v12 != 42 )
          goto LABEL_74;
        v42 = *(_QWORD *)(a1 + 104);
        if ( !v42 )
        {
          v43 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
          if ( (*v6 & 1) != 0 )
            v43 = (_QWORD *)*v43;
          v44 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::SourceContext>(v43);
          LODWORD(v42) = v44;
          *(_QWORD *)(a1 + 104) = v44;
          TagFallback = v61;
        }
        v45 = (google::protobuf::internal *)sub_1000C9C5C(a3, v42, TagFallback);
        goto LABEL_81;
      case 6u:
        if ( (unsigned __int8)v12 != 50 )
          goto LABEL_74;
        v46 = (unsigned __int64)TagFallback - 1;
        while ( 1 )
        {
          v47 = (google::protobuf::internal *)(v46 + 1);
          v61 = (google::protobuf::internal *)(v46 + 1);
          v48 = *(int **)(a1 + 80);
          if ( !v48 )
            break;
          v49 = *(int *)(a1 + 72);
          v50 = *v48;
          if ( (int)v49 >= *v48 )
          {
            if ( v50 == *(_DWORD *)(a1 + 76) )
            {
LABEL_62:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v5, v50 + 1);
              v48 = *(int **)(a1 + 80);
              v50 = *v48;
            }
            *v48 = v50 + 1;
            v52 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::Mixin>(*(_QWORD *)(a1 + 64));
            LODWORD(v51) = v52;
            v53 = *(_QWORD *)(a1 + 80);
            v54 = *(int *)(a1 + 72);
            *(_DWORD *)(a1 + 72) = v54 + 1;
            *(_QWORD *)(v53 + 8 * v54 + 8) = v52;
            v47 = v61;
            goto LABEL_64;
          }
          *(_DWORD *)(a1 + 72) = v49 + 1;
          v51 = *(_QWORD *)&v48[2 * v49 + 2];
LABEL_64:
          v46 = sub_1000C9D2C(a3, v51, v47);
          v61 = (google::protobuf::internal *)v46;
          if ( !v46 )
            return 0LL;
          if ( *(_QWORD *)a3 <= v46 || *(_BYTE *)v46 != 50 )
            goto LABEL_82;
        }
        v50 = *(_DWORD *)(a1 + 76);
        goto LABEL_62;
      case 7u:
        if ( (unsigned __int8)v12 != 56 )
          goto LABEL_74;
        v55 = (google::protobuf::internal *)((char *)TagFallback + 1);
        LODWORD(v56) = *(unsigned __int8 *)TagFallback;
        if ( (*(char *)TagFallback & 0x80000000) == 0 )
          goto LABEL_72;
        v57 = *(char *)v55;
        v56 = (const char *)((unsigned int)v56 + ((unsigned __int8)v57 << 7) - 128);
        if ( v57 < 0 )
        {
          v61 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                TagFallback,
                                                v56,
                                                (unsigned int)TagFallback);
          if ( !v61 )
            return 0LL;
        }
        else
        {
          v55 = (google::protobuf::internal *)((char *)TagFallback + 2);
LABEL_72:
          v61 = v55;
        }
        *(_DWORD *)(a1 + 112) = (_DWORD)v56;
        goto LABEL_82;
      default:
LABEL_74:
        if ( v12 )
          v58 = (v12 & 7) == 4;
        else
          v58 = 1;
        if ( v58 )
        {
          *(_DWORD *)(a3 + 80) = v12 - 1;
          return TagFallback;
        }
        if ( (*v6 & 1) != 0 )
          v59 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
        else
          v59 = sub_10003A0B4(v6);
        v45 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v12, v59);
LABEL_81:
        v61 = v45;
        if ( v45 )
        {
LABEL_82:
          v41 = 2;
LABEL_83:
          if ( v41 != 2 )
            return 0LL;
          continue;
        }
        return 0LL;
    }
  }
}