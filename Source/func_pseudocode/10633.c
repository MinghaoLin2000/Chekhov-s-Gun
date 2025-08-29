__ZN3TSP10LargeArray14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::LargeArray::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w25
  _QWORD *v7; // x23
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w24
  unsigned int v10; // w9
  unsigned __int64 v11; // x0
  google::protobuf::internal *v12; // x2
  int *v13; // x8
  __int64 v14; // x10
  int v15; // w9
  __int64 v16; // x1
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x9
  google::protobuf::internal *TagFallback; // x0
  unsigned int v21; // w1
  unsigned __int64 v22; // x0
  google::protobuf::internal *v23; // x2
  int *v24; // x8
  __int64 v25; // x10
  int v26; // w9
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  google::protobuf::internal *v31; // x8
  const char *v32; // x1
  int v33; // w8
  google::protobuf::internal *v34; // x8
  const char *v35; // x1
  int v36; // w8
  google::protobuf::internal *v37; // x8
  const char *v38; // x1
  int v39; // w8
  google::protobuf::internal *v40; // x8
  const char *v41; // x1
  int v42; // w8
  google::protobuf::internal *v43; // x8
  const char *v44; // x1
  int v45; // w8
  google::protobuf::internal *v46; // x8
  const char *v47; // x1
  int v48; // w8
  google::protobuf::internal *v49; // x8
  const char *v50; // x1
  int v51; // w8
  bool v52; // zf
  unsigned __int64 v53; // x1
  google::protobuf::internal *v54; // x0
  __int64 v55; // x1
  google::protobuf::internal *v56; // x0
  __int64 v57; // x1
  google::protobuf::internal *v58; // x0
  __int64 v59; // x1
  google::protobuf::internal *v60; // x0
  int v61; // w1
  google::protobuf::internal *v62; // x0
  __int64 v63; // x1
  google::protobuf::internal *v64; // x0
  __int64 v65; // x1
  google::protobuf::internal *v66; // x0
  __int64 v67; // x1
  google::protobuf::internal *v68; // [xsp+8h] [xbp-48h] BYREF

  v68 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v68, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 2 )
    {
      v8 = (google::protobuf::internal *)((char *)v68 + 1);
      v9 = *(unsigned __int8 *)v68;
      if ( *(char *)v68 < 0 )
      {
        v10 = v9 + (*(unsigned __int8 *)v8 << 7);
        v9 = v10 - 128;
        if ( *(char *)v8 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v68,
                                                        (const char *)(v10 - 128),
                                                        (unsigned int)v8);
          v68 = TagFallback;
          if ( !TagFallback )
            goto LABEL_97;
          v8 = TagFallback;
          v9 = v21;
LABEL_8:
          switch ( v9 >> 3 )
          {
            case 1u:
              if ( (unsigned __int8)v9 != 10 )
                goto LABEL_72;
              v11 = (unsigned __int64)v8 - 1;
              while ( 1 )
              {
                v12 = (google::protobuf::internal *)(v11 + 1);
                v68 = (google::protobuf::internal *)(v11 + 1);
                v13 = *(int **)(a1 + 40);
                if ( !v13 )
                  break;
                v14 = *(int *)(a1 + 32);
                v15 = *v13;
                if ( (int)v14 >= *v13 )
                {
                  if ( v15 == *(_DWORD *)(a1 + 36) )
                  {
LABEL_16:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 24),
                      v15 + 1);
                    v13 = *(int **)(a1 + 40);
                    v15 = *v13;
                  }
                  *v13 = v15 + 1;
                  v17 = google::protobuf::Arena::CreateMaybeMessage<TSP::Range>(*(_QWORD *)(a1 + 24));
                  LODWORD(v16) = v17;
                  v18 = *(_QWORD *)(a1 + 40);
                  v19 = *(int *)(a1 + 32);
                  *(_DWORD *)(a1 + 32) = v19 + 1;
                  *(_QWORD *)(v18 + 8 * v19 + 8) = v17;
                  v12 = v68;
                  goto LABEL_18;
                }
                *(_DWORD *)(a1 + 32) = v14 + 1;
                v16 = *(_QWORD *)&v13[2 * v14 + 2];
LABEL_18:
                v11 = sub_100060C54(a3, v16, v12);
                v68 = (google::protobuf::internal *)v11;
                if ( !v11 )
                  goto LABEL_97;
                if ( *(_QWORD *)a3 <= v11 || *(_BYTE *)v11 != 10 )
                  goto LABEL_79;
              }
              v15 = *(_DWORD *)(a1 + 36);
              goto LABEL_16;
            case 2u:
              if ( (unsigned __int8)v9 != 18 )
                goto LABEL_72;
              v22 = (unsigned __int64)v8 - 1;
              break;
            case 3u:
              if ( (unsigned __int8)v9 != 24 )
                goto LABEL_72;
              v5 |= 1u;
              v31 = (google::protobuf::internal *)((char *)v8 + 1);
              v32 = (const char *)*(unsigned __int8 *)v8;
              if ( (*(char *)v8 & 0x80000000) == 0 )
                goto LABEL_41;
              v33 = *(char *)v31;
              v32 = (const char *)((unsigned int)v32 + ((unsigned __int8)v33 << 7) - 128);
              if ( v33 < 0 )
              {
                v54 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                      v8,
                                                      v32,
                                                      (unsigned int)v8);
                v68 = v54;
                *(_QWORD *)(a1 + 72) = v55;
                if ( !v54 )
                  goto LABEL_97;
              }
              else
              {
                v31 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_41:
                v68 = v31;
                *(_QWORD *)(a1 + 72) = v32;
              }
              goto LABEL_79;
            case 4u:
              if ( (unsigned __int8)v9 != 32 )
                goto LABEL_72;
              v5 |= 2u;
              v34 = (google::protobuf::internal *)((char *)v8 + 1);
              v35 = (const char *)*(unsigned __int8 *)v8;
              if ( (*(char *)v8 & 0x80000000) == 0 )
                goto LABEL_46;
              v36 = *(char *)v34;
              v35 = (const char *)((unsigned int)v35 + ((unsigned __int8)v36 << 7) - 128);
              if ( v36 < 0 )
              {
                v56 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                      v8,
                                                      v35,
                                                      (unsigned int)v8);
                v68 = v56;
                *(_QWORD *)(a1 + 80) = v57;
                if ( !v56 )
                  goto LABEL_97;
              }
              else
              {
                v34 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_46:
                v68 = v34;
                *(_QWORD *)(a1 + 80) = v35;
              }
              goto LABEL_79;
            case 5u:
              if ( (unsigned __int8)v9 != 40 )
                goto LABEL_72;
              v5 |= 8u;
              v37 = (google::protobuf::internal *)((char *)v8 + 1);
              v38 = (const char *)*(unsigned __int8 *)v8;
              if ( (*(char *)v8 & 0x80000000) == 0 )
                goto LABEL_51;
              v39 = *(char *)v37;
              v38 = (const char *)((unsigned int)v38 + ((unsigned __int8)v39 << 7) - 128);
              if ( v39 < 0 )
              {
                v58 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                      v8,
                                                      v38,
                                                      (unsigned int)v8);
                v68 = v58;
                *(_BYTE *)(a1 + 92) = v59 != 0;
                if ( !v58 )
                  goto LABEL_97;
              }
              else
              {
                v37 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_51:
                v68 = v37;
                *(_BYTE *)(a1 + 92) = v38 != 0LL;
              }
              goto LABEL_79;
            case 6u:
              if ( (unsigned __int8)v9 != 48 )
                goto LABEL_72;
              v5 |= 4u;
              v40 = (google::protobuf::internal *)((char *)v8 + 1);
              LODWORD(v41) = *(unsigned __int8 *)v8;
              if ( (*(char *)v8 & 0x80000000) == 0 )
                goto LABEL_56;
              v42 = *(char *)v40;
              v41 = (const char *)((unsigned int)v41 + ((unsigned __int8)v42 << 7) - 128);
              if ( v42 < 0 )
              {
                v60 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow32(
                                                      v8,
                                                      v41,
                                                      (unsigned int)v8);
                v68 = v60;
                *(_DWORD *)(a1 + 88) = v61;
                if ( !v60 )
                  goto LABEL_97;
              }
              else
              {
                v40 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_56:
                v68 = v40;
                *(_DWORD *)(a1 + 88) = (_DWORD)v41;
              }
              goto LABEL_79;
            case 7u:
              if ( (unsigned __int8)v9 != 56 )
                goto LABEL_72;
              v5 |= 0x10u;
              v43 = (google::protobuf::internal *)((char *)v8 + 1);
              v44 = (const char *)*(unsigned __int8 *)v8;
              if ( (*(char *)v8 & 0x80000000) == 0 )
                goto LABEL_61;
              v45 = *(char *)v43;
              v44 = (const char *)((unsigned int)v44 + ((unsigned __int8)v45 << 7) - 128);
              if ( v45 < 0 )
              {
                v62 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                      v8,
                                                      v44,
                                                      (unsigned int)v8);
                v68 = v62;
                *(_BYTE *)(a1 + 93) = v63 != 0;
                if ( !v62 )
                  goto LABEL_97;
              }
              else
              {
                v43 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_61:
                v68 = v43;
                *(_BYTE *)(a1 + 93) = v44 != 0LL;
              }
              goto LABEL_79;
            case 8u:
              if ( (unsigned __int8)v9 != 64 )
                goto LABEL_72;
              v5 |= 0x20u;
              v46 = (google::protobuf::internal *)((char *)v8 + 1);
              v47 = (const char *)*(unsigned __int8 *)v8;
              if ( (*(char *)v8 & 0x80000000) == 0 )
                goto LABEL_66;
              v48 = *(char *)v46;
              v47 = (const char *)((unsigned int)v47 + ((unsigned __int8)v48 << 7) - 128);
              if ( v48 < 0 )
              {
                v64 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                      v8,
                                                      v47,
                                                      (unsigned int)v8);
                v68 = v64;
                *(_QWORD *)(a1 + 96) = v65;
                if ( !v64 )
                  goto LABEL_97;
              }
              else
              {
                v46 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_66:
                v68 = v46;
                *(_QWORD *)(a1 + 96) = v47;
              }
              goto LABEL_79;
            case 9u:
              if ( (unsigned __int8)v9 != 72 )
                goto LABEL_72;
              v5 |= 0x40u;
              v49 = (google::protobuf::internal *)((char *)v8 + 1);
              v50 = (const char *)*(unsigned __int8 *)v8;
              if ( (*(char *)v8 & 0x80000000) == 0 )
                goto LABEL_71;
              v51 = *(char *)v49;
              v50 = (const char *)((unsigned int)v50 + ((unsigned __int8)v51 << 7) - 128);
              if ( v51 < 0 )
              {
                v66 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                      v8,
                                                      v50,
                                                      (unsigned int)v8);
                v68 = v66;
                *(_QWORD *)(a1 + 104) = v67;
                if ( !v66 )
                  goto LABEL_97;
              }
              else
              {
                v49 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_71:
                v68 = v49;
                *(_QWORD *)(a1 + 104) = v50;
              }
              goto LABEL_79;
            default:
LABEL_72:
              if ( v9 )
                v52 = (v9 & 7) == 4;
              else
                v52 = 1;
              if ( v52 )
              {
                *(_DWORD *)(a3 + 80) = v9 - 1;
                goto LABEL_2;
              }
              if ( (*v7 & 1) != 0 )
                v53 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
              else
                v53 = sub_10003A0B4(a1 + 8);
              v68 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v53);
              if ( !v68 )
              {
LABEL_97:
                v68 = 0LL;
                goto LABEL_2;
              }
LABEL_79:
              if ( (sub_10003A040(a3, &v68, *(unsigned int *)(a3 + 92)) & 1) != 0 )
                goto LABEL_2;
              continue;
          }
          while ( 1 )
          {
            v23 = (google::protobuf::internal *)(v22 + 1);
            v68 = (google::protobuf::internal *)(v22 + 1);
            v24 = *(int **)(a1 + 64);
            if ( !v24 )
              break;
            v25 = *(int *)(a1 + 56);
            v26 = *v24;
            if ( (int)v25 >= *v24 )
            {
              if ( v26 == *(_DWORD *)(a1 + 60) )
              {
LABEL_31:
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                  (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 48),
                  v26 + 1);
                v24 = *(int **)(a1 + 64);
                v26 = *v24;
              }
              *v24 = v26 + 1;
              v28 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(*(_QWORD *)(a1 + 48));
              LODWORD(v27) = v28;
              v29 = *(_QWORD *)(a1 + 64);
              v30 = *(int *)(a1 + 56);
              *(_DWORD *)(a1 + 56) = v30 + 1;
              *(_QWORD *)(v29 + 8 * v30 + 8) = v28;
              v23 = v68;
              goto LABEL_33;
            }
            *(_DWORD *)(a1 + 56) = v25 + 1;
            v27 = *(_QWORD *)&v24[2 * v25 + 2];
LABEL_33:
            v22 = sub_100038B88(a3, v27, v23);
            v68 = (google::protobuf::internal *)v22;
            if ( !v22 )
              goto LABEL_97;
            if ( *(_QWORD *)a3 <= v22 || *(_BYTE *)v22 != 18 )
              goto LABEL_79;
          }
          v26 = *(_DWORD *)(a1 + 60);
          goto LABEL_31;
        }
        v8 = (google::protobuf::internal *)((char *)v68 + 2);
      }
      break;
    }
    v68 = v8;
    goto LABEL_8;
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v68;
}