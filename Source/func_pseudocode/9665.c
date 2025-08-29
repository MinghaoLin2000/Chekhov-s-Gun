__ZN3TSP13ComponentInfo14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::ComponentInfo::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w24
  google::protobuf::internal *v7; // x2
  unsigned int v8; // w23
  unsigned int v9; // w9
  google::protobuf::internal *v10; // x8
  const char *v11; // x1
  int v12; // w8
  google::protobuf::internal *TagFallback; // x0
  unsigned int v14; // w1
  __int64 v15; // x8
  _QWORD *v16; // x1
  __int64 v17; // x0
  __int64 v18; // x8
  std::string *v19; // x0
  google::protobuf::internal *v20; // x0
  int v21; // w0
  unsigned __int64 v22; // x0
  google::protobuf::internal *v23; // x2
  int *v24; // x8
  __int64 v25; // x10
  int v26; // w9
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
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
  unsigned __int64 v43; // x0
  google::protobuf::internal *v44; // x2
  int *v45; // x8
  __int64 v46; // x10
  int v47; // w9
  __int64 v48; // x1
  __int64 v49; // x0
  __int64 v50; // x8
  __int64 v51; // x9
  google::protobuf::internal *v52; // x8
  const char *v53; // x1
  int v54; // w8
  unsigned __int64 v55; // x0
  google::protobuf::internal *v56; // x2
  int *v57; // x8
  __int64 v58; // x10
  int v59; // w9
  __int64 v60; // x1
  __int64 v61; // x0
  __int64 v62; // x8
  __int64 v63; // x9
  google::protobuf::internal *v64; // x8
  const char *v65; // x1
  int v66; // w8
  google::protobuf::internal *v67; // x8
  const char *v68; // x1
  int v69; // w8
  unsigned __int64 v70; // x0
  google::protobuf::internal *v71; // x2
  int *v72; // x8
  __int64 v73; // x10
  int v74; // w9
  __int64 v75; // x1
  __int64 v76; // x0
  __int64 v77; // x8
  __int64 v78; // x9
  google::protobuf::internal *v79; // x8
  const char *v80; // x1
  int v81; // w8
  google::protobuf::internal *v82; // x8
  const char *v83; // x1
  int v84; // w8
  google::protobuf::internal *v85; // x0
  __int64 v86; // x1
  google::protobuf::internal *v87; // x0
  __int64 v88; // x1
  google::protobuf::internal *v89; // x0
  __int64 v90; // x1
  google::protobuf::internal *v91; // x0
  int v92; // w1
  google::protobuf::internal *v93; // x0
  __int64 v94; // x1
  google::protobuf::internal *v95; // x0
  __int64 v96; // x1
  google::protobuf::internal *v97; // x0
  int v98; // w1
  __int64 v99; // x0
  __int64 v100; // x0
  __int64 v101; // x0
  __int64 v102; // x0
  __int64 v103; // x0
  bool v104; // zf
  unsigned __int64 v105; // x1
  _QWORD *v106; // [xsp+0h] [xbp-90h]
  google::protobuf::internal *v107; // [xsp+38h] [xbp-58h] BYREF

  v107 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v107, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v106 = (_QWORD *)(a1 + 8);
    while ( 2 )
    {
      v7 = (google::protobuf::internal *)((char *)v107 + 1);
      v8 = *(unsigned __int8 *)v107;
      if ( *(char *)v107 < 0 )
      {
        v9 = v8 + (*(unsigned __int8 *)v7 << 7);
        v8 = v9 - 128;
        if ( *(char *)v7 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v107,
                                                        (const char *)(v9 - 128),
                                                        (unsigned int)v7);
          v107 = TagFallback;
          if ( !TagFallback )
            goto LABEL_168;
          v7 = TagFallback;
          v8 = v14;
LABEL_8:
          switch ( v8 >> 3 )
          {
            case 1u:
              if ( (unsigned __int8)v8 != 8 )
                goto LABEL_157;
              v5 |= 4u;
              v10 = (google::protobuf::internal *)((char *)v7 + 1);
              v11 = (const char *)*(unsigned __int8 *)v7;
              if ( (*(char *)v7 & 0x80000000) == 0 )
                goto LABEL_13;
              v12 = *(char *)v10;
              v11 = (const char *)((unsigned int)v11 + ((unsigned __int8)v12 << 7) - 128);
              if ( (v12 & 0x80000000) == 0 )
              {
                v10 = (google::protobuf::internal *)((char *)v7 + 2);
LABEL_13:
                v107 = v10;
                *(_QWORD *)(a1 + 280) = v11;
                goto LABEL_165;
              }
              v85 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                    v7,
                                                    v11,
                                                    (unsigned int)v7);
              v107 = v85;
              *(_QWORD *)(a1 + 280) = v86;
              if ( !v85 )
                goto LABEL_168;
              goto LABEL_165;
            case 2u:
              if ( (unsigned __int8)v8 != 18 )
                goto LABEL_157;
              *(_DWORD *)(a1 + 16) |= 1u;
              v15 = *(_QWORD *)(a1 + 8);
              v16 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFELL);
              if ( (v15 & 1) != 0 )
                v16 = (_QWORD *)*v16;
              v17 = a1 + 264;
              goto LABEL_24;
            case 3u:
              if ( (unsigned __int8)v8 != 26 )
                goto LABEL_157;
              *(_DWORD *)(a1 + 16) |= 2u;
              v18 = *(_QWORD *)(a1 + 8);
              v16 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL);
              if ( (v18 & 1) != 0 )
                v16 = (_QWORD *)*v16;
              v17 = a1 + 272;
LABEL_24:
              v19 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v17, v16);
              v20 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v19, v107, a3);
              goto LABEL_164;
            case 4u:
              if ( (unsigned __int8)v8 == 34 )
              {
                v21 = a1 + 24;
LABEL_95:
                v20 = (google::protobuf::internal *)google::protobuf::internal::PackedUInt32Parser(v21, (int)v7, a3);
                goto LABEL_164;
              }
              if ( (unsigned __int8)v8 == 32 )
              {
                v99 = sub_10003D848(&v107);
                sub_10003D8A8(a1, v99);
                goto LABEL_155;
              }
              goto LABEL_157;
            case 5u:
              if ( (unsigned __int8)v8 == 42 )
              {
                v21 = a1 + 48;
                goto LABEL_95;
              }
              if ( (unsigned __int8)v8 == 40 )
              {
                v100 = sub_10003D848(&v107);
                sub_100041018(a1, v100);
                goto LABEL_155;
              }
              goto LABEL_157;
            case 6u:
              if ( (unsigned __int8)v8 != 50 )
                goto LABEL_157;
              v22 = (unsigned __int64)v7 - 1;
              while ( 1 )
              {
                v23 = (google::protobuf::internal *)(v22 + 1);
                v107 = (google::protobuf::internal *)(v22 + 1);
                v24 = *(int **)(a1 + 88);
                if ( !v24 )
                  break;
                v25 = *(int *)(a1 + 80);
                v26 = *v24;
                if ( (int)v25 >= *v24 )
                {
                  if ( v26 == *(_DWORD *)(a1 + 84) )
                  {
LABEL_36:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 72),
                      v26 + 1);
                    v24 = *(int **)(a1 + 88);
                    v26 = *v24;
                  }
                  *v24 = v26 + 1;
                  v28 = google::protobuf::Arena::CreateMaybeMessage<TSP::ComponentExternalReference>(*(_QWORD *)(a1 + 72));
                  LODWORD(v27) = v28;
                  v29 = *(_QWORD *)(a1 + 88);
                  v30 = *(int *)(a1 + 80);
                  *(_DWORD *)(a1 + 80) = v30 + 1;
                  *(_QWORD *)(v29 + 8 * v30 + 8) = v28;
                  v23 = v107;
                  goto LABEL_38;
                }
                *(_DWORD *)(a1 + 80) = v25 + 1;
                v27 = *(_QWORD *)&v24[2 * v25 + 2];
LABEL_38:
                v22 = sub_100041088(a3, v27, v23);
                v107 = (google::protobuf::internal *)v22;
                if ( !v22 )
                  goto LABEL_168;
                if ( *(_QWORD *)a3 <= v22 || *(_BYTE *)v22 != 50 )
                  goto LABEL_165;
              }
              v26 = *(_DWORD *)(a1 + 84);
              goto LABEL_36;
            case 7u:
              if ( (unsigned __int8)v8 != 58 )
                goto LABEL_157;
              v31 = (unsigned __int64)v7 - 1;
              while ( 1 )
              {
                v32 = (google::protobuf::internal *)(v31 + 1);
                v107 = (google::protobuf::internal *)(v31 + 1);
                v33 = *(int **)(a1 + 112);
                if ( !v33 )
                  break;
                v34 = *(int *)(a1 + 104);
                v35 = *v33;
                if ( (int)v34 >= *v33 )
                {
                  if ( v35 == *(_DWORD *)(a1 + 108) )
                  {
LABEL_49:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 96),
                      v35 + 1);
                    v33 = *(int **)(a1 + 112);
                    v35 = *v33;
                  }
                  *v33 = v35 + 1;
                  v37 = google::protobuf::Arena::CreateMaybeMessage<TSP::ComponentDataReference>(*(_QWORD *)(a1 + 96));
                  LODWORD(v36) = v37;
                  v38 = *(_QWORD *)(a1 + 112);
                  v39 = *(int *)(a1 + 104);
                  *(_DWORD *)(a1 + 104) = v39 + 1;
                  *(_QWORD *)(v38 + 8 * v39 + 8) = v37;
                  v32 = v107;
                  goto LABEL_51;
                }
                *(_DWORD *)(a1 + 104) = v34 + 1;
                v36 = *(_QWORD *)&v33[2 * v34 + 2];
LABEL_51:
                v31 = sub_100041158(a3, v36, v32);
                v107 = (google::protobuf::internal *)v31;
                if ( !v31 )
                  goto LABEL_168;
                if ( *(_QWORD *)a3 <= v31 || *(_BYTE *)v31 != 58 )
                  goto LABEL_165;
              }
              v35 = *(_DWORD *)(a1 + 108);
              goto LABEL_49;
            case 0xAu:
              if ( (unsigned __int8)v8 != 80 )
                goto LABEL_157;
              v5 |= 0x10u;
              v40 = (google::protobuf::internal *)((char *)v7 + 1);
              v41 = (const char *)*(unsigned __int8 *)v7;
              if ( (*(char *)v7 & 0x80000000) == 0 )
                goto LABEL_59;
              v42 = *(char *)v40;
              v41 = (const char *)((unsigned int)v41 + ((unsigned __int8)v42 << 7) - 128);
              if ( v42 < 0 )
              {
                v87 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                      v7,
                                                      v41,
                                                      (unsigned int)v7);
                v107 = v87;
                *(_BYTE *)(a1 + 296) = v88 != 0;
                if ( !v87 )
                  goto LABEL_168;
              }
              else
              {
                v40 = (google::protobuf::internal *)((char *)v7 + 2);
LABEL_59:
                v107 = v40;
                *(_BYTE *)(a1 + 296) = v41 != 0LL;
              }
              goto LABEL_165;
            case 0xBu:
              if ( (unsigned __int8)v8 != 90 )
                goto LABEL_157;
              v43 = (unsigned __int64)v7 - 1;
              while ( 1 )
              {
                v44 = (google::protobuf::internal *)(v43 + 1);
                v107 = (google::protobuf::internal *)(v43 + 1);
                v45 = *(int **)(a1 + 136);
                if ( !v45 )
                  break;
                v46 = *(int *)(a1 + 128);
                v47 = *v45;
                if ( (int)v46 >= *v45 )
                {
                  if ( v47 == *(_DWORD *)(a1 + 132) )
                  {
LABEL_67:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 120),
                      v47 + 1);
                    v45 = *(int **)(a1 + 136);
                    v47 = *v45;
                  }
                  *v45 = v47 + 1;
                  v49 = google::protobuf::Arena::CreateMaybeMessage<TSP::ObjectUUIDMapEntry>(*(_QWORD *)(a1 + 120));
                  LODWORD(v48) = v49;
                  v50 = *(_QWORD *)(a1 + 136);
                  v51 = *(int *)(a1 + 128);
                  *(_DWORD *)(a1 + 128) = v51 + 1;
                  *(_QWORD *)(v50 + 8 * v51 + 8) = v49;
                  v44 = v107;
                  goto LABEL_69;
                }
                *(_DWORD *)(a1 + 128) = v46 + 1;
                v48 = *(_QWORD *)&v45[2 * v46 + 2];
LABEL_69:
                v43 = sub_100041228(a3, v48, v44);
                v107 = (google::protobuf::internal *)v43;
                if ( !v43 )
                  goto LABEL_168;
                if ( *(_QWORD *)a3 <= v43 || *(_BYTE *)v43 != 90 )
                  goto LABEL_165;
              }
              v47 = *(_DWORD *)(a1 + 132);
              goto LABEL_67;
            case 0xCu:
              if ( (unsigned __int8)v8 != 96 )
                goto LABEL_157;
              v5 |= 8u;
              v52 = (google::protobuf::internal *)((char *)v7 + 1);
              v53 = (const char *)*(unsigned __int8 *)v7;
              if ( (*(char *)v7 & 0x80000000) == 0 )
                goto LABEL_77;
              v54 = *(char *)v52;
              v53 = (const char *)((unsigned int)v53 + ((unsigned __int8)v54 << 7) - 128);
              if ( v54 < 0 )
              {
                v89 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                      v7,
                                                      v53,
                                                      (unsigned int)v7);
                v107 = v89;
                *(_QWORD *)(a1 + 288) = v90;
                if ( !v89 )
                  goto LABEL_168;
              }
              else
              {
                v52 = (google::protobuf::internal *)((char *)v7 + 2);
LABEL_77:
                v107 = v52;
                *(_QWORD *)(a1 + 288) = v53;
              }
              goto LABEL_165;
            case 0xDu:
              if ( (unsigned __int8)v8 != 106 )
                goto LABEL_157;
              v55 = (unsigned __int64)v7 - 1;
              while ( 1 )
              {
                v56 = (google::protobuf::internal *)(v55 + 1);
                v107 = (google::protobuf::internal *)(v55 + 1);
                v57 = *(int **)(a1 + 160);
                if ( !v57 )
                  break;
                v58 = *(int *)(a1 + 152);
                v59 = *v57;
                if ( (int)v58 >= *v57 )
                {
                  if ( v59 == *(_DWORD *)(a1 + 156) )
                  {
LABEL_85:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 144),
                      v59 + 1);
                    v57 = *(int **)(a1 + 160);
                    v59 = *v57;
                  }
                  *v57 = v59 + 1;
                  v61 = google::protobuf::Arena::CreateMaybeMessage<TSP::FeatureInfo>(*(_QWORD *)(a1 + 144));
                  LODWORD(v60) = v61;
                  v62 = *(_QWORD *)(a1 + 160);
                  v63 = *(int *)(a1 + 152);
                  *(_DWORD *)(a1 + 152) = v63 + 1;
                  *(_QWORD *)(v62 + 8 * v63 + 8) = v61;
                  v56 = v107;
                  goto LABEL_87;
                }
                *(_DWORD *)(a1 + 152) = v58 + 1;
                v60 = *(_QWORD *)&v57[2 * v58 + 2];
LABEL_87:
                v55 = sub_1000412F8(a3, v60, v56);
                v107 = (google::protobuf::internal *)v55;
                if ( !v55 )
                  goto LABEL_168;
                if ( *(_QWORD *)a3 <= v55 || *(_BYTE *)v55 != 106 )
                  goto LABEL_165;
              }
              v59 = *(_DWORD *)(a1 + 156);
              goto LABEL_85;
            case 0xEu:
              if ( (unsigned __int8)v8 == 114 )
              {
                v21 = a1 + 168;
                goto LABEL_95;
              }
              if ( (unsigned __int8)v8 == 112 )
              {
                v101 = sub_10003D848(&v107);
                sub_10003DC08(a1, v101);
                goto LABEL_155;
              }
              goto LABEL_157;
            case 0xFu:
              if ( (unsigned __int8)v8 == 122 )
              {
                v21 = a1 + 192;
                goto LABEL_95;
              }
              if ( (unsigned __int8)v8 == 120 )
              {
                v102 = sub_10003D848(&v107);
                sub_1000413C8(a1, v102);
                goto LABEL_155;
              }
              goto LABEL_157;
            case 0x10u:
              if ( (unsigned __int8)v8 != 128 )
                goto LABEL_157;
              v5 |= 0x80u;
              v64 = (google::protobuf::internal *)((char *)v7 + 1);
              LODWORD(v65) = *(unsigned __int8 *)v7;
              if ( (*(char *)v7 & 0x80000000) == 0 )
                goto LABEL_100;
              v66 = *(char *)v64;
              v65 = (const char *)((unsigned int)v65 + ((unsigned __int8)v66 << 7) - 128);
              if ( v66 < 0 )
              {
                v91 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow32(
                                                      v7,
                                                      v65,
                                                      (unsigned int)v7);
                v107 = v91;
                *(_DWORD *)(a1 + 300) = v92;
                if ( !v91 )
                  goto LABEL_168;
              }
              else
              {
                v64 = (google::protobuf::internal *)((char *)v7 + 2);
LABEL_100:
                v107 = v64;
                *(_DWORD *)(a1 + 300) = (_DWORD)v65;
              }
              goto LABEL_165;
            case 0x11u:
              if ( (unsigned __int8)v8 != 136 )
                goto LABEL_157;
              v5 |= 0x20u;
              v67 = (google::protobuf::internal *)((char *)v7 + 1);
              v68 = (const char *)*(unsigned __int8 *)v7;
              if ( (*(char *)v7 & 0x80000000) == 0 )
                goto LABEL_105;
              v69 = *(char *)v67;
              v68 = (const char *)((unsigned int)v68 + ((unsigned __int8)v69 << 7) - 128);
              if ( v69 < 0 )
              {
                v93 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                      v7,
                                                      v68,
                                                      (unsigned int)v7);
                v107 = v93;
                *(_BYTE *)(a1 + 297) = v94 != 0;
                if ( !v93 )
                  goto LABEL_168;
              }
              else
              {
                v67 = (google::protobuf::internal *)((char *)v7 + 2);
LABEL_105:
                v107 = v67;
                *(_BYTE *)(a1 + 297) = v68 != 0LL;
              }
              goto LABEL_165;
            case 0x12u:
              if ( (unsigned __int8)v8 != 146 )
                goto LABEL_157;
              v70 = (unsigned __int64)v7 - 2;
              break;
            case 0x13u:
              if ( (unsigned __int8)v8 != 152 )
                goto LABEL_157;
              v5 |= 0x40u;
              v79 = (google::protobuf::internal *)((char *)v7 + 1);
              v80 = (const char *)*(unsigned __int8 *)v7;
              if ( (*(char *)v7 & 0x80000000) == 0 )
                goto LABEL_123;
              v81 = *(char *)v79;
              v80 = (const char *)((unsigned int)v80 + ((unsigned __int8)v81 << 7) - 128);
              if ( v81 < 0 )
              {
                v95 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                      v7,
                                                      v80,
                                                      (unsigned int)v7);
                v107 = v95;
                *(_BYTE *)(a1 + 298) = v96 != 0;
                if ( !v95 )
                  goto LABEL_168;
              }
              else
              {
                v79 = (google::protobuf::internal *)((char *)v7 + 2);
LABEL_123:
                v107 = v79;
                *(_BYTE *)(a1 + 298) = v80 != 0LL;
              }
              goto LABEL_165;
            case 0x14u:
              if ( (unsigned __int8)v8 == 162 )
              {
                v20 = (google::protobuf::internal *)google::protobuf::internal::PackedUInt64Parser(
                                                      (int)a1 + 240,
                                                      (int)v7,
                                                      a3);
              }
              else
              {
                if ( (unsigned __int8)v8 == 160 )
                {
                  v103 = sub_10003C864(&v107);
                  sub_100041438(a1, v103);
LABEL_155:
                  if ( !v107 )
                    goto LABEL_168;
                  goto LABEL_165;
                }
LABEL_157:
                if ( v8 )
                  v104 = (v8 & 7) == 4;
                else
                  v104 = 1;
                if ( v104 )
                {
                  *(_DWORD *)(a3 + 80) = v8 - 1;
                  goto LABEL_2;
                }
                if ( (*v106 & 1) != 0 )
                  v105 = (*v106 & 0xFFFFFFFFFFFFFFFELL) + 8;
                else
                  v105 = sub_10003A0B4(v106);
                v20 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v105);
              }
LABEL_164:
              v107 = v20;
              if ( !v20 )
              {
LABEL_168:
                v107 = 0LL;
                goto LABEL_2;
              }
LABEL_165:
              if ( (sub_10003A040(a3, &v107, *(unsigned int *)(a3 + 92)) & 1) != 0 )
                goto LABEL_2;
              continue;
            case 0x15u:
              if ( (unsigned __int8)v8 != 168 )
                goto LABEL_157;
              v5 |= 0x100u;
              v82 = (google::protobuf::internal *)((char *)v7 + 1);
              LODWORD(v83) = *(unsigned __int8 *)v7;
              if ( (*(char *)v7 & 0x80000000) == 0 )
                goto LABEL_130;
              v84 = *(char *)v82;
              v83 = (const char *)((unsigned int)v83 + ((unsigned __int8)v84 << 7) - 128);
              if ( v84 < 0 )
              {
                v97 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow32(
                                                      v7,
                                                      v83,
                                                      (unsigned int)v7);
                v107 = v97;
                *(_DWORD *)(a1 + 304) = v98;
                if ( !v97 )
                  goto LABEL_168;
              }
              else
              {
                v82 = (google::protobuf::internal *)((char *)v7 + 2);
LABEL_130:
                v107 = v82;
                *(_DWORD *)(a1 + 304) = (_DWORD)v83;
              }
              goto LABEL_165;
            default:
              goto LABEL_157;
          }
          while ( 1 )
          {
            v71 = (google::protobuf::internal *)(v70 + 2);
            v107 = (google::protobuf::internal *)(v70 + 2);
            v72 = *(int **)(a1 + 232);
            if ( !v72 )
              break;
            v73 = *(int *)(a1 + 224);
            v74 = *v72;
            if ( (int)v73 >= *v72 )
            {
              if ( v74 == *(_DWORD *)(a1 + 228) )
              {
LABEL_113:
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                  (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 216),
                  v74 + 1);
                v72 = *(int **)(a1 + 232);
                v74 = *v72;
              }
              *v72 = v74 + 1;
              v76 = google::protobuf::Arena::CreateMaybeMessage<TSP::ComponentExternalReference>(*(_QWORD *)(a1 + 216));
              LODWORD(v75) = v76;
              v77 = *(_QWORD *)(a1 + 232);
              v78 = *(int *)(a1 + 224);
              *(_DWORD *)(a1 + 224) = v78 + 1;
              *(_QWORD *)(v77 + 8 * v78 + 8) = v76;
              v71 = v107;
              goto LABEL_115;
            }
            *(_DWORD *)(a1 + 224) = v73 + 1;
            v75 = *(_QWORD *)&v72[2 * v73 + 2];
LABEL_115:
            v70 = sub_100041088(a3, v75, v71);
            v107 = (google::protobuf::internal *)v70;
            if ( !v70 )
              goto LABEL_168;
            if ( *(_QWORD *)a3 <= v70 || *(_WORD *)v70 != 402 )
              goto LABEL_165;
          }
          v74 = *(_DWORD *)(a1 + 228);
          goto LABEL_113;
        }
        v7 = (google::protobuf::internal *)((char *)v107 + 2);
      }
      break;
    }
    v107 = v7;
    goto LABEL_8;
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v107;
}