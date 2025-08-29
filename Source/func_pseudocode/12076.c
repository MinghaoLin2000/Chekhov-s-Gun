__ZN6google8protobuf5Field14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::Field::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v5; // x21
  __int64 v6; // x23
  google::protobuf::internal::RepeatedPtrFieldBase *v7; // x24
  __int64 v8; // x25
  __int64 v9; // x26
  google::protobuf::internal *TagFallback; // x2
  unsigned int v11; // w27
  unsigned int v12; // w9
  google::protobuf::internal *v13; // x8
  unsigned __int64 v14; // x1
  int v15; // w8
  unsigned int v16; // w1
  google::protobuf::internal *v17; // x8
  unsigned __int64 v18; // x1
  int v19; // w8
  unsigned __int64 v20; // x1
  google::protobuf::internal *v21; // x8
  int v22; // w8
  _QWORD *v23; // x1
  std::string *v24; // x27
  google::protobuf::internal *v25; // x0
  const char *v26; // x1
  char *v27; // x2
  _QWORD *v28; // x1
  std::string *v29; // x27
  unsigned __int64 v30; // x1
  google::protobuf::internal *v31; // x8
  int v32; // w8
  google::protobuf::internal *v33; // x8
  unsigned __int64 v34; // x1
  int v35; // w8
  unsigned __int64 v36; // x0
  google::protobuf::internal *v37; // x2
  int *v38; // x8
  __int64 v39; // x10
  int v40; // w9
  __int64 v41; // x1
  __int64 v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  _QWORD *v45; // x1
  std::string *v46; // x27
  _QWORD *v47; // x1
  std::string *v48; // x27
  char v49; // w0
  int v50; // w8
  bool v51; // zf
  unsigned __int64 v52; // x1
  google::protobuf::internal *v53; // x0
  int v54; // w1
  google::protobuf::internal *v55; // x0
  int v56; // w1
  google::protobuf::internal *v57; // x0
  __int64 v58; // x1
  __int64 v60; // [xsp+0h] [xbp-70h]
  google::protobuf::internal *v61; // [xsp+8h] [xbp-68h] BYREF
  google::protobuf::internal *v62; // [xsp+10h] [xbp-60h] BYREF
  const char *v63; // [xsp+18h] [xbp-58h]

  v5 = (_QWORD *)(a1 + 8);
  v60 = a1 + 64;
  v61 = a2;
  v6 = a1 + 56;
  v7 = (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 16);
  v8 = a1 + 48;
  v9 = a1 + 40;
  while ( 2 )
  {
    if ( (sub_10003A040(a3, &v61, *(unsigned int *)(a3 + 92)) & 1) == 0 )
    {
      TagFallback = (google::protobuf::internal *)((char *)v61 + 1);
      v11 = *(unsigned __int8 *)v61;
      if ( *(char *)v61 < 0 )
      {
        v12 = v11 + (*(unsigned __int8 *)TagFallback << 7);
        v11 = v12 - 128;
        if ( *(char *)TagFallback < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v61,
                                                        (const char *)(v12 - 128));
          v61 = TagFallback;
          if ( !TagFallback )
            return TagFallback;
          v11 = v16;
LABEL_7:
          switch ( v11 >> 3 )
          {
            case 1u:
              if ( (unsigned __int8)v11 != 8 )
                goto LABEL_71;
              v13 = (google::protobuf::internal *)((char *)TagFallback + 1);
              LODWORD(v14) = *(unsigned __int8 *)TagFallback;
              if ( (*(char *)TagFallback & 0x80000000) == 0 )
                goto LABEL_12;
              v15 = *(char *)v13;
              v14 = (unsigned int)v14 + ((unsigned __int8)v15 << 7) - 128;
              if ( (v15 & 0x80000000) == 0 )
              {
                v13 = (google::protobuf::internal *)((char *)TagFallback + 2);
LABEL_12:
                v61 = v13;
LABEL_13:
                *(_DWORD *)(a1 + 72) = v14;
                goto LABEL_78;
              }
              v61 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(TagFallback, v14);
              if ( v61 )
                goto LABEL_13;
              return 0LL;
            case 2u:
              if ( (unsigned __int8)v11 != 16 )
                goto LABEL_71;
              v17 = (google::protobuf::internal *)((char *)TagFallback + 1);
              LODWORD(v18) = *(unsigned __int8 *)TagFallback;
              if ( (*(char *)TagFallback & 0x80000000) == 0 )
                goto LABEL_20;
              v19 = *(char *)v17;
              v18 = (unsigned int)v18 + ((unsigned __int8)v19 << 7) - 128;
              if ( v19 < 0 )
              {
                v61 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(TagFallback, v18);
                if ( !v61 )
                  return 0LL;
              }
              else
              {
                v17 = (google::protobuf::internal *)((char *)TagFallback + 2);
LABEL_20:
                v61 = v17;
              }
              *(_DWORD *)(a1 + 76) = v18;
              goto LABEL_78;
            case 3u:
              if ( (unsigned __int8)v11 != 24 )
                goto LABEL_71;
              v21 = (google::protobuf::internal *)((char *)TagFallback + 1);
              LODWORD(v20) = *(unsigned __int8 *)TagFallback;
              if ( (v20 & 0x80) == 0 )
                goto LABEL_26;
              v22 = *(char *)v21;
              v20 = (unsigned int)v20 + ((unsigned __int8)v22 << 7) - 128;
              if ( v22 < 0 )
              {
                v53 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(TagFallback, v20);
                v61 = v53;
                *(_DWORD *)(a1 + 80) = v54;
                if ( !v53 )
                  return 0LL;
              }
              else
              {
                v21 = (google::protobuf::internal *)((char *)TagFallback + 2);
LABEL_26:
                v61 = v21;
                *(_DWORD *)(a1 + 80) = v20;
              }
              goto LABEL_78;
            case 4u:
              if ( (unsigned __int8)v11 != 34 )
                goto LABEL_71;
              v23 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFELL);
              if ( (*v5 & 1) != 0 )
                v23 = (_QWORD *)*v23;
              v24 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v9, v23);
              v61 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(
                                                    v24,
                                                    (std::string::value_type *)v61,
                                                    a3);
              sub_10007A644(&v62, v24);
              v25 = v62;
              v26 = v63;
              v27 = "google.protobuf.Field.name";
              goto LABEL_66;
            case 6u:
              if ( (unsigned __int8)v11 != 50 )
                goto LABEL_71;
              v28 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFELL);
              if ( (*v5 & 1) != 0 )
                v28 = (_QWORD *)*v28;
              v29 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v8, v28);
              v61 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(
                                                    v29,
                                                    (std::string::value_type *)v61,
                                                    a3);
              sub_10007A644(&v62, v29);
              v25 = v62;
              v26 = v63;
              v27 = "google.protobuf.Field.type_url";
              goto LABEL_66;
            case 7u:
              if ( (unsigned __int8)v11 != 56 )
                goto LABEL_71;
              v31 = (google::protobuf::internal *)((char *)TagFallback + 1);
              LODWORD(v30) = *(unsigned __int8 *)TagFallback;
              if ( (v30 & 0x80) == 0 )
                goto LABEL_39;
              v32 = *(char *)v31;
              v30 = (unsigned int)v30 + ((unsigned __int8)v32 << 7) - 128;
              if ( v32 < 0 )
              {
                v55 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(TagFallback, v30);
                v61 = v55;
                *(_DWORD *)(a1 + 84) = v56;
                if ( !v55 )
                  return 0LL;
              }
              else
              {
                v31 = (google::protobuf::internal *)((char *)TagFallback + 2);
LABEL_39:
                v61 = v31;
                *(_DWORD *)(a1 + 84) = v30;
              }
              goto LABEL_78;
            case 8u:
              if ( (unsigned __int8)v11 != 64 )
                goto LABEL_71;
              v33 = (google::protobuf::internal *)((char *)TagFallback + 1);
              v34 = *(unsigned __int8 *)TagFallback;
              if ( (*(char *)TagFallback & 0x80000000) == 0 )
                goto LABEL_44;
              v35 = *(char *)v33;
              v34 = (unsigned int)v34 + ((unsigned __int8)v35 << 7) - 128;
              if ( v35 < 0 )
              {
                v57 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(TagFallback, v34);
                v61 = v57;
                *(_BYTE *)(a1 + 88) = v58 != 0;
                if ( !v57 )
                  return 0LL;
              }
              else
              {
                v33 = (google::protobuf::internal *)((char *)TagFallback + 2);
LABEL_44:
                v61 = v33;
                *(_BYTE *)(a1 + 88) = v34 != 0;
              }
              goto LABEL_78;
            case 9u:
              if ( (unsigned __int8)v11 != 74 )
                goto LABEL_71;
              v36 = (unsigned __int64)TagFallback - 1;
              break;
            case 0xAu:
              if ( (unsigned __int8)v11 != 82 )
                goto LABEL_71;
              v45 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFELL);
              if ( (*v5 & 1) != 0 )
                v45 = (_QWORD *)*v45;
              v46 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v6, v45);
              v61 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(
                                                    v46,
                                                    (std::string::value_type *)v61,
                                                    a3);
              sub_10007A644(&v62, v46);
              v25 = v62;
              v26 = v63;
              v27 = "google.protobuf.Field.json_name";
              goto LABEL_66;
            case 0xBu:
              if ( (unsigned __int8)v11 != 90 )
                goto LABEL_71;
              v47 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFELL);
              if ( (*v5 & 1) != 0 )
                v47 = (_QWORD *)*v47;
              v48 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v60, v47);
              v61 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(
                                                    v48,
                                                    (std::string::value_type *)v61,
                                                    a3);
              sub_10007A644(&v62, v48);
              v25 = v62;
              v26 = v63;
              v27 = "google.protobuf.Field.default_value";
LABEL_66:
              v49 = google::protobuf::internal::VerifyUTF8(v25, v26, (google::protobuf::internal *)v27);
              if ( v61 )
                v50 = 2;
              else
                v50 = 4;
              if ( (v49 & 1) == 0 )
                return 0LL;
              goto LABEL_79;
            default:
LABEL_71:
              if ( v11 )
                v51 = (v11 & 7) == 4;
              else
                v51 = 1;
              if ( v51 )
              {
                *(_DWORD *)(a3 + 80) = v11 - 1;
                return TagFallback;
              }
              if ( (*v5 & 1) != 0 )
                v52 = (*v5 & 0xFFFFFFFFFFFFFFFELL) + 8;
              else
                v52 = sub_10003A0B4(v5);
              v61 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v11, v52);
              if ( !v61 )
                return 0LL;
LABEL_78:
              v50 = 2;
LABEL_79:
              if ( v50 != 2 )
                return 0LL;
              continue;
          }
          while ( 1 )
          {
            v37 = (google::protobuf::internal *)(v36 + 1);
            v61 = (google::protobuf::internal *)(v36 + 1);
            v38 = *(int **)(a1 + 32);
            if ( !v38 )
              break;
            v39 = *(int *)(a1 + 24);
            v40 = *v38;
            if ( (int)v39 >= *v38 )
            {
              if ( v40 == *(_DWORD *)(a1 + 28) )
              {
LABEL_52:
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v7, v40 + 1);
                v38 = *(int **)(a1 + 32);
                v40 = *v38;
              }
              *v38 = v40 + 1;
              v42 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::Option>(*(_QWORD *)(a1 + 16));
              LODWORD(v41) = v42;
              v43 = *(_QWORD *)(a1 + 32);
              v44 = *(int *)(a1 + 24);
              *(_DWORD *)(a1 + 24) = v44 + 1;
              *(_QWORD *)(v43 + 8 * v44 + 8) = v42;
              v37 = v61;
              goto LABEL_54;
            }
            *(_DWORD *)(a1 + 24) = v39 + 1;
            v41 = *(_QWORD *)&v38[2 * v39 + 2];
LABEL_54:
            v36 = sub_1000C9B8C(a3, v41, v37);
            v61 = (google::protobuf::internal *)v36;
            if ( !v36 )
              return 0LL;
            if ( *(_QWORD *)a3 <= v36 || *(_BYTE *)v36 != 74 )
              goto LABEL_78;
          }
          v40 = *(_DWORD *)(a1 + 28);
          goto LABEL_52;
        }
        TagFallback = (google::protobuf::internal *)((char *)v61 + 2);
      }
      v61 = TagFallback;
      goto LABEL_7;
    }
    return v61;
  }
}