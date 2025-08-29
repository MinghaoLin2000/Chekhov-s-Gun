__ZN6google8protobuf4Type14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::Type::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v5; // x21
  google::protobuf::internal::RepeatedPtrFieldBase *v6; // x22
  google::protobuf::internal::RepeatedPtrFieldBase *v7; // x23
  google::protobuf::internal::RepeatedPtrFieldBase *v8; // x24
  __int64 v9; // x25
  google::protobuf::internal *TagFallback; // x2
  unsigned int v11; // w28
  unsigned int v12; // w9
  _QWORD *v13; // x1
  std::string *v14; // x28
  char v15; // w0
  int v16; // w8
  unsigned __int64 v17; // x0
  google::protobuf::internal *v18; // x2
  int *v19; // x8
  __int64 v20; // x10
  int v21; // w9
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  google::protobuf::internal *v26; // x8
  std::string::value_type *v27; // x1
  int *v28; // x8
  __int64 v29; // x10
  int v30; // w9
  std::string *v31; // x28
  __int64 v32; // x8
  __int64 v33; // x9
  unsigned __int64 v34; // x0
  google::protobuf::internal *v35; // x2
  int *v36; // x8
  __int64 v37; // x10
  int v38; // w9
  __int64 v39; // x1
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  __int64 v43; // x1
  _QWORD *v44; // x0
  __int64 v45; // x0
  google::protobuf::internal *v46; // x0
  google::protobuf::internal *v47; // x8
  unsigned __int64 v48; // x1
  int v49; // w8
  bool v50; // zf
  unsigned __int64 v51; // x1
  unsigned int v52; // w1
  google::protobuf::internal *v54; // [xsp+8h] [xbp-68h] BYREF
  google::protobuf::internal *v55; // [xsp+10h] [xbp-60h] BYREF
  const char *v56; // [xsp+18h] [xbp-58h]

  v54 = a2;
  v5 = (_QWORD *)(a1 + 8);
  v6 = (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 64);
  v7 = (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 40);
  v8 = (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 16);
  v9 = a1 + 88;
  while ( 2 )
  {
    if ( (sub_10003A040(a3, &v54, *(unsigned int *)(a3 + 92)) & 1) == 0 )
    {
      TagFallback = (google::protobuf::internal *)((char *)v54 + 1);
      v11 = *(unsigned __int8 *)v54;
      if ( *(char *)v54 < 0 )
      {
        v12 = v11 + (*(unsigned __int8 *)TagFallback << 7);
        v11 = v12 - 128;
        if ( *(char *)TagFallback < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v54,
                                                        (const char *)(v12 - 128));
          v54 = TagFallback;
          if ( !TagFallback )
            return TagFallback;
          v11 = v52;
LABEL_7:
          switch ( v11 >> 3 )
          {
            case 1u:
              if ( (unsigned __int8)v11 != 10 )
                goto LABEL_68;
              v13 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFELL);
              if ( (*v5 & 1) != 0 )
                v13 = (_QWORD *)*v13;
              v14 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v9, v13);
              v54 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(
                                                    v14,
                                                    (std::string::value_type *)v54,
                                                    a3);
              sub_10007A644(&v55, v14);
              v15 = google::protobuf::internal::VerifyUTF8(
                      v55,
                      v56,
                      (google::protobuf::internal *)"google.protobuf.Type.name");
              if ( v54 )
                v16 = 2;
              else
                v16 = 4;
              if ( (v15 & 1) != 0 )
                goto LABEL_77;
              return 0LL;
            case 2u:
              if ( (unsigned __int8)v11 != 18 )
                goto LABEL_68;
              v17 = (unsigned __int64)TagFallback - 1;
              while ( 1 )
              {
                v18 = (google::protobuf::internal *)(v17 + 1);
                v54 = (google::protobuf::internal *)(v17 + 1);
                v19 = *(int **)(a1 + 32);
                if ( !v19 )
                  break;
                v20 = *(int *)(a1 + 24);
                v21 = *v19;
                if ( (int)v20 >= *v19 )
                {
                  if ( v21 == *(_DWORD *)(a1 + 28) )
                  {
LABEL_23:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v8, v21 + 1);
                    v19 = *(int **)(a1 + 32);
                    v21 = *v19;
                  }
                  *v19 = v21 + 1;
                  v23 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::Field>(*(_QWORD *)(a1 + 16));
                  LODWORD(v22) = v23;
                  v24 = *(_QWORD *)(a1 + 32);
                  v25 = *(int *)(a1 + 24);
                  *(_DWORD *)(a1 + 24) = v25 + 1;
                  *(_QWORD *)(v24 + 8 * v25 + 8) = v23;
                  v18 = v54;
                  goto LABEL_25;
                }
                *(_DWORD *)(a1 + 24) = v20 + 1;
                v22 = *(_QWORD *)&v19[2 * v20 + 2];
LABEL_25:
                v17 = sub_1000F3390(a3, v22, v18);
                v54 = (google::protobuf::internal *)v17;
                if ( !v17 )
                  return 0LL;
                if ( *(_QWORD *)a3 <= v17 || *(_BYTE *)v17 != 18 )
                  goto LABEL_76;
              }
              v21 = *(_DWORD *)(a1 + 28);
              goto LABEL_23;
            case 3u:
              if ( (unsigned __int8)v11 != 26 )
                goto LABEL_68;
              v26 = (google::protobuf::internal *)((char *)TagFallback - 1);
              while ( 2 )
              {
                v27 = (char *)v26 + 1;
                v54 = (google::protobuf::internal *)((char *)v26 + 1);
                v28 = *(int **)(a1 + 56);
                if ( !v28 )
                {
                  v30 = *(_DWORD *)(a1 + 52);
LABEL_36:
                  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v7, v30 + 1);
                  v28 = *(int **)(a1 + 56);
                  v30 = *v28;
                  goto LABEL_37;
                }
                v29 = *(int *)(a1 + 48);
                v30 = *v28;
                if ( (int)v29 < *v28 )
                {
                  *(_DWORD *)(a1 + 48) = v29 + 1;
                  v31 = *(std::string **)&v28[2 * v29 + 2];
                  goto LABEL_38;
                }
                if ( v30 == *(_DWORD *)(a1 + 52) )
                  goto LABEL_36;
LABEL_37:
                *v28 = v30 + 1;
                v31 = (std::string *)sub_10007A808(*(_QWORD *)(a1 + 40));
                v32 = *(_QWORD *)(a1 + 56);
                v33 = *(int *)(a1 + 48);
                *(_DWORD *)(a1 + 48) = v33 + 1;
                *(_QWORD *)(v32 + 8 * v33 + 8) = v31;
                v27 = (std::string::value_type *)v54;
LABEL_38:
                v54 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v31, v27, a3);
                sub_10007A644(&v55, v31);
                if ( (unsigned int)google::protobuf::internal::VerifyUTF8(
                                     v55,
                                     v56,
                                     (google::protobuf::internal *)"google.protobuf.Type.oneofs") )
                {
                  v26 = v54;
                  if ( v54 )
                  {
                    if ( *(_QWORD *)a3 <= (unsigned __int64)v54 || *(_BYTE *)v54 != 26 )
                      goto LABEL_76;
                    continue;
                  }
                }
                return 0LL;
              }
            case 4u:
              if ( (unsigned __int8)v11 != 34 )
                goto LABEL_68;
              v34 = (unsigned __int64)TagFallback - 1;
              break;
            case 5u:
              if ( (unsigned __int8)v11 != 42 )
                goto LABEL_68;
              v43 = *(_QWORD *)(a1 + 96);
              if ( !v43 )
              {
                v44 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFELL);
                if ( (*v5 & 1) != 0 )
                  v44 = (_QWORD *)*v44;
                v45 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::SourceContext>(v44);
                LODWORD(v43) = v45;
                *(_QWORD *)(a1 + 96) = v45;
                TagFallback = v54;
              }
              v46 = (google::protobuf::internal *)sub_1000C9C5C(a3, v43, TagFallback);
              goto LABEL_75;
            case 6u:
              if ( (unsigned __int8)v11 != 48 )
                goto LABEL_68;
              v47 = (google::protobuf::internal *)((char *)TagFallback + 1);
              LODWORD(v48) = *(unsigned __int8 *)TagFallback;
              if ( (*(char *)TagFallback & 0x80000000) == 0 )
                goto LABEL_66;
              v49 = *(char *)v47;
              v48 = (unsigned int)v48 + ((unsigned __int8)v49 << 7) - 128;
              if ( v49 < 0 )
              {
                v54 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(TagFallback, v48);
                if ( !v54 )
                  return 0LL;
              }
              else
              {
                v47 = (google::protobuf::internal *)((char *)TagFallback + 2);
LABEL_66:
                v54 = v47;
              }
              *(_DWORD *)(a1 + 104) = v48;
              goto LABEL_76;
            default:
LABEL_68:
              if ( v11 )
                v50 = (v11 & 7) == 4;
              else
                v50 = 1;
              if ( v50 )
              {
                *(_DWORD *)(a3 + 80) = v11 - 1;
                return TagFallback;
              }
              if ( (*v5 & 1) != 0 )
                v51 = (*v5 & 0xFFFFFFFFFFFFFFFELL) + 8;
              else
                v51 = sub_10003A0B4(v5);
              v46 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v11, v51);
LABEL_75:
              v54 = v46;
              if ( !v46 )
                return 0LL;
LABEL_76:
              v16 = 2;
LABEL_77:
              if ( v16 != 2 )
                return 0LL;
              continue;
          }
          while ( 1 )
          {
            v35 = (google::protobuf::internal *)(v34 + 1);
            v54 = (google::protobuf::internal *)(v34 + 1);
            v36 = *(int **)(a1 + 80);
            if ( !v36 )
              break;
            v37 = *(int *)(a1 + 72);
            v38 = *v36;
            if ( (int)v37 >= *v36 )
            {
              if ( v38 == *(_DWORD *)(a1 + 76) )
              {
LABEL_50:
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v6, v38 + 1);
                v36 = *(int **)(a1 + 80);
                v38 = *v36;
              }
              *v36 = v38 + 1;
              v40 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::Option>(*(_QWORD *)(a1 + 64));
              LODWORD(v39) = v40;
              v41 = *(_QWORD *)(a1 + 80);
              v42 = *(int *)(a1 + 72);
              *(_DWORD *)(a1 + 72) = v42 + 1;
              *(_QWORD *)(v41 + 8 * v42 + 8) = v40;
              v35 = v54;
              goto LABEL_52;
            }
            *(_DWORD *)(a1 + 72) = v37 + 1;
            v39 = *(_QWORD *)&v36[2 * v37 + 2];
LABEL_52:
            v34 = sub_1000C9B8C(a3, v39, v35);
            v54 = (google::protobuf::internal *)v34;
            if ( !v34 )
              return 0LL;
            if ( *(_QWORD *)a3 <= v34 || *(_BYTE *)v34 != 34 )
              goto LABEL_76;
          }
          v38 = *(_DWORD *)(a1 + 76);
          goto LABEL_50;
        }
        TagFallback = (google::protobuf::internal *)((char *)v54 + 2);
      }
      v54 = TagFallback;
      goto LABEL_7;
    }
    return v54;
  }
}