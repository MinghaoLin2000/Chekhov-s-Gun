__ZN3TSP15PackageMetadata14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::PackageMetadata::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w23
  _QWORD *v7; // x22
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w28
  unsigned int v10; // w9
  google::protobuf::internal *v11; // x8
  const char *v12; // x1
  int v13; // w8
  google::protobuf::internal *TagFallback; // x0
  unsigned int v15; // w1
  __int64 v16; // x1
  _QWORD *v17; // x0
  __int64 v18; // x0
  google::protobuf::internal *v19; // x0
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
  int v38; // w0
  google::protobuf::internal *v39; // x8
  const char *v40; // x1
  int v41; // w8
  google::protobuf::internal *v42; // x8
  unsigned __int64 v43; // x28
  int v44; // w8
  int v45; // w9
  __int64 v46; // x1
  _QWORD *v47; // x0
  __int64 v48; // x0
  unsigned __int64 v49; // x0
  google::protobuf::internal *v50; // x2
  int *v51; // x8
  __int64 v52; // x10
  int v53; // w9
  __int64 v54; // x1
  __int64 v55; // x0
  __int64 v56; // x8
  __int64 v57; // x9
  google::protobuf::internal *v58; // x0
  __int64 v59; // x1
  google::protobuf::internal *v60; // x0
  __int64 v61; // x1
  unsigned __int64 v62; // x1
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x0
  bool v66; // zf
  unsigned __int64 v67; // x1
  google::protobuf::UnknownFieldSet *v68; // x0
  google::protobuf::internal *v69; // [xsp+8h] [xbp-58h] BYREF

  v69 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v69, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 2 )
    {
      v8 = (google::protobuf::internal *)((char *)v69 + 1);
      v9 = *(unsigned __int8 *)v69;
      if ( *(char *)v69 < 0 )
      {
        v10 = v9 + (*(unsigned __int8 *)v8 << 7);
        v9 = v10 - 128;
        if ( *(char *)v8 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v69,
                                                        (const char *)(v10 - 128),
                                                        (unsigned int)v8);
          v69 = TagFallback;
          if ( !TagFallback )
            goto LABEL_115;
          v8 = TagFallback;
          v9 = v15;
LABEL_8:
          switch ( v9 >> 3 )
          {
            case 1u:
              if ( (unsigned __int8)v9 != 8 )
                goto LABEL_100;
              v5 |= 4u;
              v11 = (google::protobuf::internal *)((char *)v8 + 1);
              v12 = (const char *)*(unsigned __int8 *)v8;
              if ( (*(char *)v8 & 0x80000000) == 0 )
                goto LABEL_13;
              v13 = *(char *)v11;
              v12 = (const char *)((unsigned int)v12 + ((unsigned __int8)v13 << 7) - 128);
              if ( (v13 & 0x80000000) == 0 )
              {
                v11 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_13:
                v69 = v11;
                *(_QWORD *)(a1 + 184) = v12;
                goto LABEL_108;
              }
              v58 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                    v8,
                                                    v12,
                                                    (unsigned int)v8);
              v69 = v58;
              *(_QWORD *)(a1 + 184) = v59;
              if ( !v58 )
                goto LABEL_115;
              goto LABEL_108;
            case 2u:
              if ( (unsigned __int8)v9 != 18 )
                goto LABEL_100;
              *(_DWORD *)(a1 + 16) |= 1u;
              v16 = *(_QWORD *)(a1 + 168);
              if ( !v16 )
              {
                v17 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFELL);
                if ( (*v7 & 1) != 0 )
                  v17 = (_QWORD *)*v17;
                v18 = google::protobuf::Arena::CreateMaybeMessage<TSP::DocumentRevision>(v17);
                LODWORD(v16) = v18;
                *(_QWORD *)(a1 + 168) = v18;
                v8 = v69;
              }
              v19 = (google::protobuf::internal *)sub_100045CA0(a3, v16, v8);
              goto LABEL_107;
            case 3u:
              if ( (unsigned __int8)v9 != 26 )
                goto LABEL_100;
              v20 = (unsigned __int64)v8 - 1;
              while ( 1 )
              {
                v21 = (google::protobuf::internal *)(v20 + 1);
                v69 = (google::protobuf::internal *)(v20 + 1);
                v22 = *(int **)(a1 + 40);
                if ( !v22 )
                  break;
                v23 = *(int *)(a1 + 32);
                v24 = *v22;
                if ( (int)v23 >= *v22 )
                {
                  if ( v24 == *(_DWORD *)(a1 + 36) )
                  {
LABEL_29:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 24),
                      v24 + 1);
                    v22 = *(int **)(a1 + 40);
                    v24 = *v22;
                  }
                  *v22 = v24 + 1;
                  v26 = google::protobuf::Arena::CreateMaybeMessage<TSP::ComponentInfo>(*(_QWORD *)(a1 + 24));
                  LODWORD(v25) = v26;
                  v27 = *(_QWORD *)(a1 + 40);
                  v28 = *(int *)(a1 + 32);
                  *(_DWORD *)(a1 + 32) = v28 + 1;
                  *(_QWORD *)(v27 + 8 * v28 + 8) = v26;
                  v21 = v69;
                  goto LABEL_31;
                }
                *(_DWORD *)(a1 + 32) = v23 + 1;
                v25 = *(_QWORD *)&v22[2 * v23 + 2];
LABEL_31:
                v20 = sub_100045D70(a3, v25, v21);
                v69 = (google::protobuf::internal *)v20;
                if ( !v20 )
                  goto LABEL_115;
                if ( *(_QWORD *)a3 <= v20 || *(_BYTE *)v20 != 26 )
                  goto LABEL_108;
              }
              v24 = *(_DWORD *)(a1 + 36);
              goto LABEL_29;
            case 4u:
              if ( (unsigned __int8)v9 != 34 )
                goto LABEL_100;
              v29 = (unsigned __int64)v8 - 1;
              while ( 1 )
              {
                v30 = (google::protobuf::internal *)(v29 + 1);
                v69 = (google::protobuf::internal *)(v29 + 1);
                v31 = *(int **)(a1 + 64);
                if ( !v31 )
                  break;
                v32 = *(int *)(a1 + 56);
                v33 = *v31;
                if ( (int)v32 >= *v31 )
                {
                  if ( v33 == *(_DWORD *)(a1 + 60) )
                  {
LABEL_42:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 48),
                      v33 + 1);
                    v31 = *(int **)(a1 + 64);
                    v33 = *v31;
                  }
                  *v31 = v33 + 1;
                  v35 = google::protobuf::Arena::CreateMaybeMessage<TSP::DataInfo>(*(_QWORD *)(a1 + 48));
                  LODWORD(v34) = v35;
                  v36 = *(_QWORD *)(a1 + 64);
                  v37 = *(int *)(a1 + 56);
                  *(_DWORD *)(a1 + 56) = v37 + 1;
                  *(_QWORD *)(v36 + 8 * v37 + 8) = v35;
                  v30 = v69;
                  goto LABEL_44;
                }
                *(_DWORD *)(a1 + 56) = v32 + 1;
                v34 = *(_QWORD *)&v31[2 * v32 + 2];
LABEL_44:
                v29 = sub_100045E40(a3, v34, v30);
                v69 = (google::protobuf::internal *)v29;
                if ( !v29 )
                  goto LABEL_115;
                if ( *(_QWORD *)a3 <= v29 || *(_BYTE *)v29 != 34 )
                  goto LABEL_108;
              }
              v33 = *(_DWORD *)(a1 + 60);
              goto LABEL_42;
            case 5u:
              if ( (unsigned __int8)v9 == 42 )
              {
                v38 = a1 + 72;
LABEL_54:
                v19 = (google::protobuf::internal *)google::protobuf::internal::PackedUInt32Parser(v38, (int)v8, a3);
                goto LABEL_107;
              }
              if ( (unsigned __int8)v9 == 40 )
              {
                v63 = sub_10003D848(&v69);
                sub_10003F274(a1, v63);
                goto LABEL_98;
              }
              goto LABEL_100;
            case 6u:
              if ( (unsigned __int8)v9 == 50 )
              {
                v38 = a1 + 96;
                goto LABEL_54;
              }
              if ( (unsigned __int8)v9 == 48 )
              {
                v64 = sub_10003D848(&v69);
                sub_100045F10(a1, v64);
                goto LABEL_98;
              }
LABEL_100:
              if ( v9 )
                v66 = (v9 & 7) == 4;
              else
                v66 = 1;
              if ( v66 )
              {
                *(_DWORD *)(a3 + 80) = v9 - 1;
                goto LABEL_2;
              }
              if ( (*v7 & 1) != 0 )
                v67 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
              else
                v67 = sub_10003A0B4(a1 + 8);
              v19 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v67);
LABEL_107:
              v69 = v19;
              if ( !v19 )
              {
LABEL_115:
                v69 = 0LL;
                goto LABEL_2;
              }
LABEL_108:
              if ( (sub_10003A040(a3, &v69, *(unsigned int *)(a3 + 92)) & 1) != 0 )
                goto LABEL_2;
              continue;
            case 7u:
              if ( (unsigned __int8)v9 == 58 )
              {
                v38 = a1 + 120;
                goto LABEL_54;
              }
              if ( (unsigned __int8)v9 == 56 )
              {
                v65 = sub_10003D848(&v69);
                sub_10003DAC8(a1, v65);
LABEL_98:
                if ( !v69 )
                  goto LABEL_115;
                goto LABEL_108;
              }
              goto LABEL_100;
            case 8u:
              if ( (unsigned __int8)v9 != 64 )
                goto LABEL_100;
              v5 |= 8u;
              v39 = (google::protobuf::internal *)((char *)v8 + 1);
              v40 = (const char *)*(unsigned __int8 *)v8;
              if ( (*(char *)v8 & 0x80000000) == 0 )
                goto LABEL_59;
              v41 = *(char *)v39;
              v40 = (const char *)((unsigned int)v40 + ((unsigned __int8)v41 << 7) - 128);
              if ( v41 < 0 )
              {
                v60 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                      v8,
                                                      v40,
                                                      (unsigned int)v8);
                v69 = v60;
                *(_QWORD *)(a1 + 192) = v61;
                if ( !v60 )
                  goto LABEL_115;
              }
              else
              {
                v39 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_59:
                v69 = v39;
                *(_QWORD *)(a1 + 192) = v40;
              }
              goto LABEL_108;
            case 9u:
              if ( (unsigned __int8)v9 != 72 )
                goto LABEL_100;
              v42 = (google::protobuf::internal *)((char *)v8 + 1);
              v43 = *(unsigned __int8 *)v8;
              if ( (*(char *)v8 & 0x80000000) == 0 )
                goto LABEL_64;
              v44 = *(char *)v42;
              v45 = v43 + ((unsigned __int8)v44 << 7);
              v43 = (unsigned int)(v45 - 128);
              if ( v44 < 0 )
              {
                v69 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                      v8,
                                                      (const char *)(unsigned int)(v45 - 128),
                                                      (unsigned int)v8);
                if ( !v69 )
                  goto LABEL_115;
                v43 = v62;
              }
              else
              {
                v42 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_64:
                v69 = v42;
              }
              if ( (unsigned int)v43 > 2 )
              {
                if ( (*v7 & 1) != 0 )
                  v68 = (google::protobuf::UnknownFieldSet *)((*v7 & 0xFFFFFFFFFFFFFFFELL) + 8);
                else
                  v68 = (google::protobuf::UnknownFieldSet *)sub_10003A0B4(a1 + 8);
                google::protobuf::UnknownFieldSet::AddVarint(v68, 9, v43);
              }
              else
              {
                *(_DWORD *)(a1 + 16) |= 0x10u;
                *(_DWORD *)(a1 + 200) = v43;
              }
              goto LABEL_108;
            case 0xAu:
              if ( (unsigned __int8)v9 != 82 )
                goto LABEL_100;
              *(_DWORD *)(a1 + 16) |= 2u;
              v46 = *(_QWORD *)(a1 + 176);
              if ( !v46 )
              {
                v47 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFELL);
                if ( (*v7 & 1) != 0 )
                  v47 = (_QWORD *)*v47;
                v48 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v47);
                LODWORD(v46) = v48;
                *(_QWORD *)(a1 + 176) = v48;
                v8 = v69;
              }
              v19 = (google::protobuf::internal *)sub_100038B88(a3, v46, v8);
              goto LABEL_107;
            case 0xBu:
              if ( (unsigned __int8)v9 != 90 )
                goto LABEL_100;
              v49 = (unsigned __int64)v8 - 1;
              break;
            default:
              goto LABEL_100;
          }
          while ( 1 )
          {
            v50 = (google::protobuf::internal *)(v49 + 1);
            v69 = (google::protobuf::internal *)(v49 + 1);
            v51 = *(int **)(a1 + 160);
            if ( !v51 )
              break;
            v52 = *(int *)(a1 + 152);
            v53 = *v51;
            if ( (int)v52 >= *v51 )
            {
              if ( v53 == *(_DWORD *)(a1 + 156) )
              {
LABEL_80:
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                  (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 144),
                  v53 + 1);
                v51 = *(int **)(a1 + 160);
                v53 = *v51;
              }
              *v51 = v53 + 1;
              v55 = google::protobuf::Arena::CreateMaybeMessage<TSP::ComponentInfo>(*(_QWORD *)(a1 + 144));
              LODWORD(v54) = v55;
              v56 = *(_QWORD *)(a1 + 160);
              v57 = *(int *)(a1 + 152);
              *(_DWORD *)(a1 + 152) = v57 + 1;
              *(_QWORD *)(v56 + 8 * v57 + 8) = v55;
              v50 = v69;
              goto LABEL_82;
            }
            *(_DWORD *)(a1 + 152) = v52 + 1;
            v54 = *(_QWORD *)&v51[2 * v52 + 2];
LABEL_82:
            v49 = sub_100045D70(a3, v54, v50);
            v69 = (google::protobuf::internal *)v49;
            if ( !v49 )
              goto LABEL_115;
            if ( *(_QWORD *)a3 <= v49 || *(_BYTE *)v49 != 90 )
              goto LABEL_108;
          }
          v53 = *(_DWORD *)(a1 + 156);
          goto LABEL_80;
        }
        v8 = (google::protobuf::internal *)((char *)v69 + 2);
      }
      break;
    }
    v69 = v8;
    goto LABEL_8;
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v69;
}