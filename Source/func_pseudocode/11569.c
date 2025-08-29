__ZN6google8protobuf6Method14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::Method::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // x21
  _QWORD *v6; // x22
  __int64 v7; // x23
  __int64 v8; // x24
  __int64 v9; // x25
  google::protobuf::internal *TagFallback; // x2
  unsigned int v11; // w26
  unsigned int v12; // w9
  _QWORD *v13; // x1
  std::string *v14; // x26
  __int64 v15; // x0
  __int64 v16; // x1
  const char *v17; // x2
  unsigned int v18; // w1
  _QWORD *v19; // x1
  std::string *v20; // x26
  google::protobuf::internal *v21; // x8
  const char *v22; // x1
  int v23; // w8
  _QWORD *v24; // x1
  std::string *v25; // x26
  char v26; // w0
  int v27; // w8
  google::protobuf::internal *v28; // x8
  const char *v29; // x1
  int v30; // w8
  unsigned __int64 v31; // x0
  google::protobuf::internal *v32; // x2
  int *v33; // x8
  __int64 v34; // x10
  int v35; // w9
  __int64 v36; // x1
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  google::protobuf::internal *v40; // x8
  const char *v41; // x1
  int v42; // w8
  bool v43; // zf
  unsigned __int64 v44; // x1
  google::protobuf::internal *v45; // x0
  __int64 v46; // x1
  google::protobuf::internal *v47; // x0
  __int64 v48; // x1
  google::protobuf::internal *v50; // [xsp+8h] [xbp-68h] BYREF
  __int64 v51; // [xsp+10h] [xbp-60h] BYREF
  __int64 v52; // [xsp+18h] [xbp-58h]

  v50 = a2;
  v5 = (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 16);
  v6 = (_QWORD *)(a1 + 8);
  v7 = a1 + 56;
  v8 = a1 + 48;
  v9 = a1 + 40;
  while ( 2 )
  {
    if ( (sub_10003A040(a3, &v50, *(unsigned int *)(a3 + 92)) & 1) == 0 )
    {
      TagFallback = (google::protobuf::internal *)((char *)v50 + 1);
      v11 = *(unsigned __int8 *)v50;
      if ( *(char *)v50 < 0 )
      {
        v12 = v11 + (*(unsigned __int8 *)TagFallback << 7);
        v11 = v12 - 128;
        if ( *(char *)TagFallback < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v50,
                                                        (const char *)(v12 - 128),
                                                        (unsigned int)TagFallback);
          v50 = TagFallback;
          if ( !TagFallback )
            return TagFallback;
          v11 = v18;
LABEL_7:
          switch ( v11 >> 3 )
          {
            case 1u:
              if ( (unsigned __int8)v11 != 10 )
                goto LABEL_56;
              v13 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
              if ( (*v6 & 1) != 0 )
                v13 = (_QWORD *)*v13;
              v14 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v9, v13);
              v50 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v14, v50, a3);
              sub_10007A644(&v51, v14);
              v15 = v51;
              v16 = v52;
              v17 = "google.protobuf.Method.name";
              goto LABEL_27;
            case 2u:
              if ( (unsigned __int8)v11 != 18 )
                goto LABEL_56;
              v19 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
              if ( (*v6 & 1) != 0 )
                v19 = (_QWORD *)*v19;
              v20 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v8, v19);
              v50 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v20, v50, a3);
              sub_10007A644(&v51, v20);
              v15 = v51;
              v16 = v52;
              v17 = "google.protobuf.Method.request_type_url";
              goto LABEL_27;
            case 3u:
              if ( (unsigned __int8)v11 != 24 )
                goto LABEL_56;
              v21 = (google::protobuf::internal *)((char *)TagFallback + 1);
              v22 = (const char *)*(unsigned __int8 *)TagFallback;
              if ( (*(char *)TagFallback & 0x80000000) == 0 )
                goto LABEL_22;
              v23 = *(char *)v21;
              v22 = (const char *)((unsigned int)v22 + ((unsigned __int8)v23 << 7) - 128);
              if ( v23 < 0 )
              {
                v45 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                      TagFallback,
                                                      v22,
                                                      (unsigned int)TagFallback);
                v50 = v45;
                *(_BYTE *)(a1 + 64) = v46 != 0;
                if ( !v45 )
                  return 0LL;
              }
              else
              {
                v21 = (google::protobuf::internal *)((char *)TagFallback + 2);
LABEL_22:
                v50 = v21;
                *(_BYTE *)(a1 + 64) = v22 != 0LL;
              }
              goto LABEL_63;
            case 4u:
              if ( (unsigned __int8)v11 != 34 )
                goto LABEL_56;
              v24 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
              if ( (*v6 & 1) != 0 )
                v24 = (_QWORD *)*v24;
              v25 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v7, v24);
              v50 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v25, v50, a3);
              sub_10007A644(&v51, v25);
              v15 = v51;
              v16 = v52;
              v17 = "google.protobuf.Method.response_type_url";
LABEL_27:
              v26 = google::protobuf::internal::VerifyUTF8(v15, v16, v17);
              if ( v50 )
                v27 = 2;
              else
                v27 = 4;
              if ( (v26 & 1) == 0 )
                return 0LL;
              goto LABEL_64;
            case 5u:
              if ( (unsigned __int8)v11 != 40 )
                goto LABEL_56;
              v28 = (google::protobuf::internal *)((char *)TagFallback + 1);
              v29 = (const char *)*(unsigned __int8 *)TagFallback;
              if ( (*(char *)TagFallback & 0x80000000) == 0 )
                goto LABEL_36;
              v30 = *(char *)v28;
              v29 = (const char *)((unsigned int)v29 + ((unsigned __int8)v30 << 7) - 128);
              if ( v30 < 0 )
              {
                v47 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                      TagFallback,
                                                      v29,
                                                      (unsigned int)TagFallback);
                v50 = v47;
                *(_BYTE *)(a1 + 65) = v48 != 0;
                if ( !v47 )
                  return 0LL;
              }
              else
              {
                v28 = (google::protobuf::internal *)((char *)TagFallback + 2);
LABEL_36:
                v50 = v28;
                *(_BYTE *)(a1 + 65) = v29 != 0LL;
              }
              goto LABEL_63;
            case 6u:
              if ( (unsigned __int8)v11 != 50 )
                goto LABEL_56;
              v31 = (unsigned __int64)TagFallback - 1;
              break;
            case 7u:
              if ( (unsigned __int8)v11 != 56 )
                goto LABEL_56;
              v40 = (google::protobuf::internal *)((char *)TagFallback + 1);
              LODWORD(v41) = *(unsigned __int8 *)TagFallback;
              if ( (*(char *)TagFallback & 0x80000000) == 0 )
                goto LABEL_54;
              v42 = *(char *)v40;
              v41 = (const char *)((unsigned int)v41 + ((unsigned __int8)v42 << 7) - 128);
              if ( v42 < 0 )
              {
                v50 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                      TagFallback,
                                                      v41,
                                                      (unsigned int)TagFallback);
                if ( !v50 )
                  return 0LL;
              }
              else
              {
                v40 = (google::protobuf::internal *)((char *)TagFallback + 2);
LABEL_54:
                v50 = v40;
              }
              *(_DWORD *)(a1 + 68) = (_DWORD)v41;
              goto LABEL_63;
            default:
LABEL_56:
              if ( v11 )
                v43 = (v11 & 7) == 4;
              else
                v43 = 1;
              if ( v43 )
              {
                *(_DWORD *)(a3 + 80) = v11 - 1;
                return TagFallback;
              }
              if ( (*v6 & 1) != 0 )
                v44 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
              else
                v44 = sub_10003A0B4(v6);
              v50 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v11, v44);
              if ( !v50 )
                return 0LL;
LABEL_63:
              v27 = 2;
LABEL_64:
              if ( v27 == 2 )
                continue;
              return 0LL;
          }
          while ( 1 )
          {
            v32 = (google::protobuf::internal *)(v31 + 1);
            v50 = (google::protobuf::internal *)(v31 + 1);
            v33 = *(int **)(a1 + 32);
            if ( !v33 )
              break;
            v34 = *(int *)(a1 + 24);
            v35 = *v33;
            if ( (int)v34 >= *v33 )
            {
              if ( v35 == *(_DWORD *)(a1 + 28) )
              {
LABEL_44:
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v5, v35 + 1);
                v33 = *(int **)(a1 + 32);
                v35 = *v33;
              }
              *v33 = v35 + 1;
              v37 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::Option>(*(_QWORD *)(a1 + 16));
              LODWORD(v36) = v37;
              v38 = *(_QWORD *)(a1 + 32);
              v39 = *(int *)(a1 + 24);
              *(_DWORD *)(a1 + 24) = v39 + 1;
              *(_QWORD *)(v38 + 8 * v39 + 8) = v37;
              v32 = v50;
              goto LABEL_46;
            }
            *(_DWORD *)(a1 + 24) = v34 + 1;
            v36 = *(_QWORD *)&v33[2 * v34 + 2];
LABEL_46:
            v31 = sub_1000C9B8C(a3, v36, v32);
            v50 = (google::protobuf::internal *)v31;
            if ( !v31 )
              return 0LL;
            if ( *(_QWORD *)a3 <= v31 || *(_BYTE *)v31 != 50 )
              goto LABEL_63;
          }
          v35 = *(_DWORD *)(a1 + 28);
          goto LABEL_44;
        }
        TagFallback = (google::protobuf::internal *)((char *)v50 + 2);
      }
      v50 = TagFallback;
      goto LABEL_7;
    }
    return v50;
  }
}