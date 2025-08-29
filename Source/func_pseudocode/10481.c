__ZN3TSP16PasteboardObject14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::PasteboardObject::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w28
  _QWORD *v7; // x22
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w27
  unsigned int v10; // w9
  __int64 v11; // x1
  _QWORD *v12; // x0
  __int64 v13; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v15; // w1
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
  _QWORD *v34; // x0
  __int64 v35; // x0
  _QWORD *v36; // x0
  __int64 v37; // x0
  google::protobuf::internal *v38; // x8
  const char *v39; // x1
  int v40; // w8
  google::protobuf::internal *v41; // x8
  const char *v42; // x1
  int v43; // w8
  _QWORD *v44; // x0
  __int64 v45; // x0
  unsigned __int64 v46; // x0
  google::protobuf::internal *v47; // x2
  int *v48; // x8
  __int64 v49; // x10
  int v50; // w9
  __int64 v51; // x1
  __int64 v52; // x0
  __int64 v53; // x8
  __int64 v54; // x9
  unsigned __int64 v55; // x0
  google::protobuf::internal *v56; // x2
  int *v57; // x8
  __int64 v58; // x10
  int v59; // w9
  __int64 v60; // x1
  __int64 v61; // x0
  __int64 v62; // x8
  __int64 v63; // x9
  _QWORD *v64; // x0
  __int64 v65; // x0
  google::protobuf::internal *v66; // x0
  unsigned __int64 v67; // x0
  google::protobuf::internal *v68; // x2
  int *v69; // x8
  __int64 v70; // x10
  int v71; // w9
  __int64 v72; // x1
  __int64 v73; // x0
  __int64 v74; // x8
  __int64 v75; // x9
  bool v76; // zf
  unsigned __int64 v77; // x1
  google::protobuf::internal *v78; // x0
  __int64 v79; // x1
  google::protobuf::internal *v80; // x0
  __int64 v81; // x1
  google::protobuf::internal *v82; // [xsp+8h] [xbp-58h] BYREF

  v82 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v82, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 2 )
    {
      v8 = (google::protobuf::internal *)((char *)v82 + 1);
      v9 = *(unsigned __int8 *)v82;
      if ( *(char *)v82 < 0 )
      {
        v10 = v9 + (*(unsigned __int8 *)v8 << 7);
        v9 = v10 - 128;
        if ( *(char *)v8 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v82,
                                                        (const char *)(v10 - 128),
                                                        (unsigned int)v8);
          v82 = TagFallback;
          if ( !TagFallback )
            goto LABEL_128;
          v8 = TagFallback;
          v9 = v15;
LABEL_8:
          switch ( v9 >> 3 )
          {
            case 1u:
              if ( (unsigned __int8)v9 != 10 )
                goto LABEL_116;
              *(_DWORD *)(a1 + 16) |= 1u;
              v11 = *(_QWORD *)(a1 + 144);
              if ( v11 )
                goto LABEL_99;
              v12 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFELL);
              if ( (*v7 & 1) != 0 )
                v12 = (_QWORD *)*v12;
              v13 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v12);
              LODWORD(v11) = v13;
              *(_QWORD *)(a1 + 144) = v13;
              goto LABEL_98;
            case 2u:
              if ( (unsigned __int8)v9 != 18 )
                goto LABEL_116;
              v16 = (unsigned __int64)v8 - 1;
              while ( 1 )
              {
                v17 = (google::protobuf::internal *)(v16 + 1);
                v82 = (google::protobuf::internal *)(v16 + 1);
                v18 = *(int **)(a1 + 40);
                if ( !v18 )
                  break;
                v19 = *(int *)(a1 + 32);
                v20 = *v18;
                if ( (int)v19 >= *v18 )
                {
                  if ( v20 == *(_DWORD *)(a1 + 36) )
                  {
LABEL_23:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 24),
                      v20 + 1);
                    v18 = *(int **)(a1 + 40);
                    v20 = *v18;
                  }
                  *v18 = v20 + 1;
                  v22 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(*(_QWORD *)(a1 + 24));
                  LODWORD(v21) = v22;
                  v23 = *(_QWORD *)(a1 + 40);
                  v24 = *(int *)(a1 + 32);
                  *(_DWORD *)(a1 + 32) = v24 + 1;
                  *(_QWORD *)(v23 + 8 * v24 + 8) = v22;
                  v17 = v82;
                  goto LABEL_25;
                }
                *(_DWORD *)(a1 + 32) = v19 + 1;
                v21 = *(_QWORD *)&v18[2 * v19 + 2];
LABEL_25:
                v16 = sub_100038B88(a3, v21, v17);
                v82 = (google::protobuf::internal *)v16;
                if ( !v16 )
                  goto LABEL_128;
                if ( *(_QWORD *)a3 <= v16 || *(_BYTE *)v16 != 18 )
                  goto LABEL_101;
              }
              v20 = *(_DWORD *)(a1 + 36);
              goto LABEL_23;
            case 3u:
              if ( (unsigned __int8)v9 != 26 )
                goto LABEL_116;
              v25 = (unsigned __int64)v8 - 1;
              while ( 1 )
              {
                v26 = (google::protobuf::internal *)(v25 + 1);
                v82 = (google::protobuf::internal *)(v25 + 1);
                v27 = *(int **)(a1 + 64);
                if ( !v27 )
                  break;
                v28 = *(int *)(a1 + 56);
                v29 = *v27;
                if ( (int)v28 >= *v27 )
                {
                  if ( v29 == *(_DWORD *)(a1 + 60) )
                  {
LABEL_36:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 48),
                      v29 + 1);
                    v27 = *(int **)(a1 + 64);
                    v29 = *v27;
                  }
                  *v27 = v29 + 1;
                  v31 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(*(_QWORD *)(a1 + 48));
                  LODWORD(v30) = v31;
                  v32 = *(_QWORD *)(a1 + 64);
                  v33 = *(int *)(a1 + 56);
                  *(_DWORD *)(a1 + 56) = v33 + 1;
                  *(_QWORD *)(v32 + 8 * v33 + 8) = v31;
                  v26 = v82;
                  goto LABEL_38;
                }
                *(_DWORD *)(a1 + 56) = v28 + 1;
                v30 = *(_QWORD *)&v27[2 * v28 + 2];
LABEL_38:
                v25 = sub_100038B88(a3, v30, v26);
                v82 = (google::protobuf::internal *)v25;
                if ( !v25 )
                  goto LABEL_128;
                if ( *(_QWORD *)a3 <= v25 || *(_BYTE *)v25 != 26 )
                  goto LABEL_101;
              }
              v29 = *(_DWORD *)(a1 + 60);
              goto LABEL_36;
            case 5u:
              if ( (unsigned __int8)v9 != 42 )
                goto LABEL_116;
              *(_DWORD *)(a1 + 16) |= 2u;
              v11 = *(_QWORD *)(a1 + 152);
              if ( v11 )
                goto LABEL_99;
              v34 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFELL);
              if ( (*v7 & 1) != 0 )
                v34 = (_QWORD *)*v34;
              v35 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v34);
              LODWORD(v11) = v35;
              *(_QWORD *)(a1 + 152) = v35;
              goto LABEL_98;
            case 6u:
              if ( (unsigned __int8)v9 != 50 )
                goto LABEL_116;
              *(_DWORD *)(a1 + 16) |= 4u;
              v11 = *(_QWORD *)(a1 + 160);
              if ( v11 )
                goto LABEL_99;
              v36 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFELL);
              if ( (*v7 & 1) != 0 )
                v36 = (_QWORD *)*v36;
              v37 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v36);
              LODWORD(v11) = v37;
              *(_QWORD *)(a1 + 160) = v37;
              goto LABEL_98;
            case 7u:
              if ( (unsigned __int8)v9 != 56 )
                goto LABEL_116;
              v5 |= 0x20u;
              v38 = (google::protobuf::internal *)((char *)v8 + 1);
              v39 = (const char *)*(unsigned __int8 *)v8;
              if ( (*(char *)v8 & 0x80000000) == 0 )
                goto LABEL_56;
              v40 = *(char *)v38;
              v39 = (const char *)((unsigned int)v39 + ((unsigned __int8)v40 << 7) - 128);
              if ( v40 < 0 )
              {
                v78 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                      v8,
                                                      v39,
                                                      (unsigned int)v8);
                v82 = v78;
                *(_BYTE *)(a1 + 184) = v79 != 0;
                if ( !v78 )
                  goto LABEL_128;
              }
              else
              {
                v38 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_56:
                v82 = v38;
                *(_BYTE *)(a1 + 184) = v39 != 0LL;
              }
              goto LABEL_101;
            case 8u:
              if ( (unsigned __int8)v9 != 64 )
                goto LABEL_116;
              v5 |= 0x40u;
              v41 = (google::protobuf::internal *)((char *)v8 + 1);
              v42 = (const char *)*(unsigned __int8 *)v8;
              if ( (*(char *)v8 & 0x80000000) == 0 )
                goto LABEL_61;
              v43 = *(char *)v41;
              v42 = (const char *)((unsigned int)v42 + ((unsigned __int8)v43 << 7) - 128);
              if ( v43 < 0 )
              {
                v80 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                      v8,
                                                      v42,
                                                      (unsigned int)v8);
                v82 = v80;
                *(_BYTE *)(a1 + 185) = v81 != 0;
                if ( !v80 )
                  goto LABEL_128;
              }
              else
              {
                v41 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_61:
                v82 = v41;
                *(_BYTE *)(a1 + 185) = v42 != 0LL;
              }
              goto LABEL_101;
            case 9u:
              if ( (unsigned __int8)v9 != 74 )
                goto LABEL_116;
              *(_DWORD *)(a1 + 16) |= 8u;
              v11 = *(_QWORD *)(a1 + 168);
              if ( v11 )
                goto LABEL_99;
              v44 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFELL);
              if ( (*v7 & 1) != 0 )
                v44 = (_QWORD *)*v44;
              v45 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v44);
              LODWORD(v11) = v45;
              *(_QWORD *)(a1 + 168) = v45;
              goto LABEL_98;
            case 0xAu:
              if ( (unsigned __int8)v9 != 82 )
                goto LABEL_116;
              v46 = (unsigned __int64)v8 - 1;
              while ( 1 )
              {
                v47 = (google::protobuf::internal *)(v46 + 1);
                v82 = (google::protobuf::internal *)(v46 + 1);
                v48 = *(int **)(a1 + 88);
                if ( !v48 )
                  break;
                v49 = *(int *)(a1 + 80);
                v50 = *v48;
                if ( (int)v49 >= *v48 )
                {
                  if ( v50 == *(_DWORD *)(a1 + 84) )
                  {
LABEL_74:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 72),
                      v50 + 1);
                    v48 = *(int **)(a1 + 88);
                    v50 = *v48;
                  }
                  *v48 = v50 + 1;
                  v52 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(*(_QWORD *)(a1 + 72));
                  LODWORD(v51) = v52;
                  v53 = *(_QWORD *)(a1 + 88);
                  v54 = *(int *)(a1 + 80);
                  *(_DWORD *)(a1 + 80) = v54 + 1;
                  *(_QWORD *)(v53 + 8 * v54 + 8) = v52;
                  v47 = v82;
                  goto LABEL_76;
                }
                *(_DWORD *)(a1 + 80) = v49 + 1;
                v51 = *(_QWORD *)&v48[2 * v49 + 2];
LABEL_76:
                v46 = sub_100038B88(a3, v51, v47);
                v82 = (google::protobuf::internal *)v46;
                if ( !v46 )
                  goto LABEL_128;
                if ( *(_QWORD *)a3 <= v46 || *(_BYTE *)v46 != 82 )
                  goto LABEL_101;
              }
              v50 = *(_DWORD *)(a1 + 84);
              goto LABEL_74;
            case 0xBu:
              if ( (unsigned __int8)v9 != 90 )
                goto LABEL_116;
              v55 = (unsigned __int64)v8 - 1;
              while ( 1 )
              {
                v56 = (google::protobuf::internal *)(v55 + 1);
                v82 = (google::protobuf::internal *)(v55 + 1);
                v57 = *(int **)(a1 + 112);
                if ( !v57 )
                  break;
                v58 = *(int *)(a1 + 104);
                v59 = *v57;
                if ( (int)v58 >= *v57 )
                {
                  if ( v59 == *(_DWORD *)(a1 + 108) )
                  {
LABEL_87:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 96),
                      v59 + 1);
                    v57 = *(int **)(a1 + 112);
                    v59 = *v57;
                  }
                  *v57 = v59 + 1;
                  v61 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(*(_QWORD *)(a1 + 96));
                  LODWORD(v60) = v61;
                  v62 = *(_QWORD *)(a1 + 112);
                  v63 = *(int *)(a1 + 104);
                  *(_DWORD *)(a1 + 104) = v63 + 1;
                  *(_QWORD *)(v62 + 8 * v63 + 8) = v61;
                  v56 = v82;
                  goto LABEL_89;
                }
                *(_DWORD *)(a1 + 104) = v58 + 1;
                v60 = *(_QWORD *)&v57[2 * v58 + 2];
LABEL_89:
                v55 = sub_100038B88(a3, v60, v56);
                v82 = (google::protobuf::internal *)v55;
                if ( !v55 )
                  goto LABEL_128;
                if ( *(_QWORD *)a3 <= v55 || *(_BYTE *)v55 != 90 )
                  goto LABEL_101;
              }
              v59 = *(_DWORD *)(a1 + 108);
              goto LABEL_87;
            case 0xCu:
              if ( (unsigned __int8)v9 != 98 )
                goto LABEL_116;
              *(_DWORD *)(a1 + 16) |= 0x10u;
              v11 = *(_QWORD *)(a1 + 176);
              if ( v11 )
                goto LABEL_99;
              v64 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFELL);
              if ( (*v7 & 1) != 0 )
                v64 = (_QWORD *)*v64;
              v65 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v64);
              LODWORD(v11) = v65;
              *(_QWORD *)(a1 + 176) = v65;
LABEL_98:
              v8 = v82;
LABEL_99:
              v66 = (google::protobuf::internal *)sub_100038B88(a3, v11, v8);
              goto LABEL_100;
            case 0xDu:
              if ( (unsigned __int8)v9 != 106 )
                goto LABEL_116;
              v67 = (unsigned __int64)v8 - 1;
              break;
            default:
LABEL_116:
              if ( v9 )
                v76 = (v9 & 7) == 4;
              else
                v76 = 1;
              if ( v76 )
              {
                *(_DWORD *)(a3 + 80) = v9 - 1;
                goto LABEL_2;
              }
              if ( (*v7 & 1) != 0 )
                v77 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
              else
                v77 = sub_10003A0B4(a1 + 8);
              v66 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v77);
LABEL_100:
              v82 = v66;
              if ( !v66 )
              {
LABEL_128:
                v82 = 0LL;
                goto LABEL_2;
              }
LABEL_101:
              if ( (sub_10003A040(a3, &v82, *(unsigned int *)(a3 + 92)) & 1) != 0 )
                goto LABEL_2;
              continue;
          }
          while ( 1 )
          {
            v68 = (google::protobuf::internal *)(v67 + 1);
            v82 = (google::protobuf::internal *)(v67 + 1);
            v69 = *(int **)(a1 + 136);
            if ( !v69 )
              break;
            v70 = *(int *)(a1 + 128);
            v71 = *v69;
            if ( (int)v70 >= *v69 )
            {
              if ( v71 == *(_DWORD *)(a1 + 132) )
              {
LABEL_110:
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                  (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 120),
                  v71 + 1);
                v69 = *(int **)(a1 + 136);
                v71 = *v69;
              }
              *v69 = v71 + 1;
              v73 = google::protobuf::Arena::CreateMaybeMessage<TSP::Range>(*(_QWORD *)(a1 + 120));
              LODWORD(v72) = v73;
              v74 = *(_QWORD *)(a1 + 136);
              v75 = *(int *)(a1 + 128);
              *(_DWORD *)(a1 + 128) = v75 + 1;
              *(_QWORD *)(v74 + 8 * v75 + 8) = v73;
              v68 = v82;
              goto LABEL_112;
            }
            *(_DWORD *)(a1 + 128) = v70 + 1;
            v72 = *(_QWORD *)&v69[2 * v70 + 2];
LABEL_112:
            v67 = sub_100060C54(a3, v72, v68);
            v82 = (google::protobuf::internal *)v67;
            if ( !v67 )
              goto LABEL_128;
            if ( *(_QWORD *)a3 <= v67 || *(_BYTE *)v67 != 106 )
              goto LABEL_101;
          }
          v71 = *(_DWORD *)(a1 + 132);
          goto LABEL_110;
        }
        v8 = (google::protobuf::internal *)((char *)v82 + 2);
      }
      break;
    }
    v82 = v8;
    goto LABEL_8;
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v82;
}