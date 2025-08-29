__ZN3TSP8DataInfo14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::DataInfo::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  unsigned __int64 v5; // x1
  int v6; // w24
  _QWORD *v8; // x21
  google::protobuf::internal *v9; // x2
  unsigned int v10; // w23
  unsigned int v11; // w9
  google::protobuf::internal *v12; // x8
  const char *v13; // x1
  int v14; // w8
  google::protobuf::internal *TagFallback; // x0
  bool v17; // zf
  unsigned __int64 v18; // x1
  google::protobuf::internal *v19; // x0
  __int64 v20; // x8
  _QWORD *v21; // x1
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x8
  __int64 v27; // x8
  google::protobuf::internal *v28; // x8
  const char *v29; // x1
  int v30; // w8
  google::protobuf::internal *v31; // x8
  unsigned __int64 v32; // x23
  int v33; // w8
  int v34; // w9
  __int64 v35; // x1
  _QWORD *v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  _QWORD *v39; // x0
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x1
  _QWORD *v43; // x0
  __int64 v44; // x0
  google::protobuf::internal *v45; // x8
  const char *v46; // x1
  int v47; // w8
  google::protobuf::internal *v48; // x8
  const char *v49; // x1
  int v50; // w8
  google::protobuf::internal *v51; // x8
  int v52; // w8
  int v53; // w9
  google::protobuf::internal *v54; // x8
  const char *v55; // x1
  int v56; // w8
  __int64 v57; // x8
  std::string *v58; // x0
  google::protobuf::internal *v59; // x0
  __int64 v60; // x1
  google::protobuf::internal *v61; // x0
  __int64 v62; // x1
  unsigned __int64 v63; // x1
  google::protobuf::internal *v64; // x0
  __int64 v65; // x1
  google::protobuf::internal *v66; // x0
  __int64 v67; // x1
  google::protobuf::internal *v68; // x0
  __int64 v69; // x1
  google::protobuf::UnknownFieldSet *v70; // x0
  int v71; // w1
  google::protobuf::internal *v72; // [xsp+18h] [xbp-58h] BYREF

  v72 = a2;
  v6 = 0;
  if ( (sub_10003A040(a3, &v72, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v8 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v9 = (google::protobuf::internal *)((char *)v72 + 1);
      v10 = *(unsigned __int8 *)v72;
      if ( *(char *)v72 < 0 )
      {
        v11 = v10 + (*(unsigned __int8 *)v9 << 7);
        v10 = v11 - 128;
        if ( *(char *)v9 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v72,
                                                        (const char *)(v11 - 128),
                                                        (unsigned int)v9);
          v72 = TagFallback;
          if ( !TagFallback )
            goto LABEL_141;
          v9 = TagFallback;
          v10 = v5;
          goto LABEL_8;
        }
        v9 = (google::protobuf::internal *)((char *)v72 + 2);
      }
      v72 = v9;
LABEL_8:
      switch ( v10 >> 3 )
      {
        case 1u:
          if ( (unsigned __int8)v10 != 8 )
            goto LABEL_20;
          v6 |= 0x800u;
          v12 = (google::protobuf::internal *)((char *)v9 + 1);
          v13 = (const char *)*(unsigned __int8 *)v9;
          if ( (*(char *)v9 & 0x80000000) == 0 )
            goto LABEL_13;
          v14 = *(char *)v12;
          v13 = (const char *)((unsigned int)v13 + ((unsigned __int8)v14 << 7) - 128);
          if ( (v14 & 0x80000000) == 0 )
          {
            v12 = (google::protobuf::internal *)((char *)v9 + 2);
LABEL_13:
            v72 = v12;
            *(_QWORD *)(a1 + 112) = v13;
            goto LABEL_114;
          }
          v59 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v9, v13, (unsigned int)v9);
          v72 = v59;
          *(_QWORD *)(a1 + 112) = v60;
          if ( !v59 )
            goto LABEL_141;
          goto LABEL_114;
        case 2u:
          if ( (unsigned __int8)v10 != 18 )
            goto LABEL_20;
          *(_DWORD *)(a1 + 16) |= 1u;
          v20 = *(_QWORD *)(a1 + 8);
          v21 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v20 & 1) != 0 )
            v21 = (_QWORD *)*v21;
          v22 = a1 + 24;
          goto LABEL_112;
        case 3u:
          if ( (unsigned __int8)v10 != 26 )
            goto LABEL_20;
          *(_DWORD *)(a1 + 16) |= 2u;
          v23 = *(_QWORD *)(a1 + 8);
          v21 = (_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v23 & 1) != 0 )
            v21 = (_QWORD *)*v21;
          v22 = a1 + 32;
          goto LABEL_112;
        case 4u:
          if ( (unsigned __int8)v10 != 34 )
            goto LABEL_20;
          *(_DWORD *)(a1 + 16) |= 4u;
          v24 = *(_QWORD *)(a1 + 8);
          v21 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v24 & 1) != 0 )
            v21 = (_QWORD *)*v21;
          v22 = a1 + 40;
          goto LABEL_112;
        case 5u:
          if ( (unsigned __int8)v10 != 42 )
            goto LABEL_20;
          *(_DWORD *)(a1 + 16) |= 8u;
          v25 = *(_QWORD *)(a1 + 8);
          v21 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v25 & 1) != 0 )
            v21 = (_QWORD *)*v21;
          v22 = a1 + 48;
          goto LABEL_112;
        case 6u:
          if ( (unsigned __int8)v10 != 50 )
            goto LABEL_20;
          *(_DWORD *)(a1 + 16) |= 0x10u;
          v26 = *(_QWORD *)(a1 + 8);
          v21 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v26 & 1) != 0 )
            v21 = (_QWORD *)*v21;
          v22 = a1 + 56;
          goto LABEL_112;
        case 7u:
          if ( (unsigned __int8)v10 != 58 )
            goto LABEL_20;
          *(_DWORD *)(a1 + 16) |= 0x20u;
          v27 = *(_QWORD *)(a1 + 8);
          v21 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v27 & 1) != 0 )
            v21 = (_QWORD *)*v21;
          v22 = a1 + 64;
          goto LABEL_112;
        case 8u:
          if ( (unsigned __int8)v10 != 64 )
            goto LABEL_20;
          v6 |= 0x1000u;
          v28 = (google::protobuf::internal *)((char *)v9 + 1);
          v29 = (const char *)*(unsigned __int8 *)v9;
          if ( (*(char *)v9 & 0x80000000) == 0 )
            goto LABEL_55;
          v30 = *(char *)v28;
          v29 = (const char *)((unsigned int)v29 + ((unsigned __int8)v30 << 7) - 128);
          if ( v30 < 0 )
          {
            v61 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v9, v29, (unsigned int)v9);
            v72 = v61;
            *(_BYTE *)(a1 + 120) = v62 != 0;
            if ( !v61 )
              goto LABEL_141;
          }
          else
          {
            v28 = (google::protobuf::internal *)((char *)v9 + 2);
LABEL_55:
            v72 = v28;
            *(_BYTE *)(a1 + 120) = v29 != 0LL;
          }
          goto LABEL_114;
        case 9u:
          if ( (unsigned __int8)v10 != 72 )
            goto LABEL_20;
          v31 = (google::protobuf::internal *)((char *)v9 + 1);
          v32 = *(unsigned __int8 *)v9;
          if ( (*(char *)v9 & 0x80000000) == 0 )
            goto LABEL_60;
          v33 = *(char *)v31;
          v34 = v32 + ((unsigned __int8)v33 << 7);
          v32 = (unsigned int)(v34 - 128);
          if ( v33 < 0 )
          {
            v72 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                  v9,
                                                  (const char *)(unsigned int)(v34 - 128),
                                                  (unsigned int)v9);
            if ( !v72 )
              goto LABEL_141;
            v32 = v63;
          }
          else
          {
            v31 = (google::protobuf::internal *)((char *)v9 + 2);
LABEL_60:
            v72 = v31;
          }
          if ( (unsigned int)v32 <= 1 )
          {
            *(_DWORD *)(a1 + 16) |= 0x40000u;
            *(_DWORD *)(a1 + 152) = v32;
            goto LABEL_114;
          }
          if ( (*v8 & 1) != 0 )
            v70 = (google::protobuf::UnknownFieldSet *)((*v8 & 0xFFFFFFFFFFFFFFFELL) + 8);
          else
            v70 = (google::protobuf::UnknownFieldSet *)sub_10003A0B4(a1 + 8);
          v71 = 9;
          goto LABEL_136;
        case 0xAu:
          if ( (unsigned __int8)v10 != 82 )
            goto LABEL_20;
          *(_DWORD *)(a1 + 16) |= 0x100u;
          v35 = *(_QWORD *)(a1 + 88);
          if ( !v35 )
          {
            v36 = (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFFELL);
            if ( (*v8 & 1) != 0 )
              v36 = (_QWORD *)*v36;
            v37 = google::protobuf::Arena::CreateMaybeMessage<TSP::DataAttributes>(v36);
            LODWORD(v35) = v37;
            *(_QWORD *)(a1 + 88) = v37;
            v9 = v72;
          }
          v19 = (google::protobuf::internal *)sub_100049340(a3, v35, v9);
          goto LABEL_113;
        case 0xBu:
          if ( (unsigned __int8)v10 != 90 )
            goto LABEL_20;
          *(_DWORD *)(a1 + 16) |= 0x200u;
          v38 = *(_QWORD *)(a1 + 96);
          if ( !v38 )
          {
            v39 = (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFFELL);
            if ( (*v8 & 1) != 0 )
              v39 = (_QWORD *)*v39;
            v40 = google::protobuf::Arena::CreateMaybeMessage<TSP::EncryptionInfo>(v39);
            LODWORD(v38) = v40;
            *(_QWORD *)(a1 + 96) = v40;
            v9 = v72;
          }
          v19 = (google::protobuf::internal *)sub_100049410(a3, v38, v9);
          goto LABEL_113;
        case 0xCu:
          if ( (unsigned __int8)v10 != 98 )
            goto LABEL_20;
          *(_DWORD *)(a1 + 16) |= 0x40u;
          v41 = *(_QWORD *)(a1 + 8);
          v21 = (_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v41 & 1) != 0 )
            v21 = (_QWORD *)*v21;
          v22 = a1 + 72;
          goto LABEL_112;
        case 0xDu:
          if ( (unsigned __int8)v10 != 106 )
            goto LABEL_20;
          *(_DWORD *)(a1 + 16) |= 0x400u;
          v42 = *(_QWORD *)(a1 + 104);
          if ( !v42 )
          {
            v43 = (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFFELL);
            if ( (*v8 & 1) != 0 )
              v43 = (_QWORD *)*v43;
            v44 = google::protobuf::Arena::CreateMaybeMessage<TSP::IndexSet>(v43);
            LODWORD(v42) = v44;
            *(_QWORD *)(a1 + 104) = v44;
            v9 = v72;
          }
          v19 = (google::protobuf::internal *)sub_1000494E0(a3, v42, v9);
          goto LABEL_113;
        case 0xEu:
          if ( (unsigned __int8)v10 != 112 )
            goto LABEL_20;
          v6 |= 0x8000u;
          v45 = (google::protobuf::internal *)((char *)v9 + 1);
          v46 = (const char *)*(unsigned __int8 *)v9;
          if ( (*(char *)v9 & 0x80000000) == 0 )
            goto LABEL_89;
          v47 = *(char *)v45;
          v46 = (const char *)((unsigned int)v46 + ((unsigned __int8)v47 << 7) - 128);
          if ( v47 < 0 )
          {
            v64 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v9, v46, (unsigned int)v9);
            v72 = v64;
            *(_QWORD *)(a1 + 128) = v65;
            if ( !v64 )
              goto LABEL_141;
          }
          else
          {
            v45 = (google::protobuf::internal *)((char *)v9 + 2);
LABEL_89:
            v72 = v45;
            *(_QWORD *)(a1 + 128) = v46;
          }
          goto LABEL_114;
        case 0xFu:
          if ( (unsigned __int8)v10 != 120 )
            goto LABEL_20;
          v6 |= 0x2000u;
          v48 = (google::protobuf::internal *)((char *)v9 + 1);
          v49 = (const char *)*(unsigned __int8 *)v9;
          if ( (*(char *)v9 & 0x80000000) == 0 )
            goto LABEL_94;
          v50 = *(char *)v48;
          v49 = (const char *)((unsigned int)v49 + ((unsigned __int8)v50 << 7) - 128);
          if ( v50 < 0 )
          {
            v66 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v9, v49, (unsigned int)v9);
            v72 = v66;
            *(_BYTE *)(a1 + 121) = v67 != 0;
            if ( !v66 )
              goto LABEL_141;
          }
          else
          {
            v48 = (google::protobuf::internal *)((char *)v9 + 2);
LABEL_94:
            v72 = v48;
            *(_BYTE *)(a1 + 121) = v49 != 0LL;
          }
          goto LABEL_114;
        case 0x10u:
          if ( (unsigned __int8)v10 != 128 )
            goto LABEL_20;
          v51 = (google::protobuf::internal *)((char *)v9 + 1);
          v32 = *(unsigned __int8 *)v9;
          if ( (*(char *)v9 & 0x80000000) == 0 )
            goto LABEL_99;
          v52 = *(char *)v51;
          v53 = v32 + ((unsigned __int8)v52 << 7);
          v32 = (unsigned int)(v53 - 128);
          if ( v52 < 0 )
          {
            v72 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                  v9,
                                                  (const char *)(unsigned int)(v53 - 128),
                                                  (unsigned int)v9);
            if ( !v72 )
              goto LABEL_141;
            v32 = v5;
          }
          else
          {
            v51 = (google::protobuf::internal *)((char *)v9 + 2);
LABEL_99:
            v72 = v51;
          }
          if ( (unsigned int)TSP::DataUploadStatus_IsValid((TSP *)v32, v5) )
          {
            *(_DWORD *)(a1 + 16) |= 0x4000u;
            *(_DWORD *)(a1 + 124) = v32;
          }
          else
          {
            if ( (*v8 & 1) != 0 )
              v70 = (google::protobuf::UnknownFieldSet *)((*v8 & 0xFFFFFFFFFFFFFFFELL) + 8);
            else
              v70 = (google::protobuf::UnknownFieldSet *)sub_10003A0B4(a1 + 8);
            v71 = 16;
LABEL_136:
            google::protobuf::UnknownFieldSet::AddVarint(v70, v71, v32);
          }
          goto LABEL_114;
        case 0x11u:
          if ( (unsigned __int8)v10 != 137 )
            goto LABEL_20;
          v6 |= 0x10000u;
          *(_QWORD *)(a1 + 136) = *(_QWORD *)v9;
          v72 = (google::protobuf::internal *)((char *)v9 + 8);
          goto LABEL_114;
        case 0x12u:
          if ( (unsigned __int8)v10 != 144 )
            goto LABEL_20;
          v6 |= 0x20000u;
          v54 = (google::protobuf::internal *)((char *)v9 + 1);
          v55 = (const char *)*(unsigned __int8 *)v9;
          if ( (*(char *)v9 & 0x80000000) == 0 )
            goto LABEL_108;
          v56 = *(char *)v54;
          v55 = (const char *)((unsigned int)v55 + ((unsigned __int8)v56 << 7) - 128);
          if ( v56 < 0 )
          {
            v68 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v9, v55, (unsigned int)v9);
            v72 = v68;
            *(_QWORD *)(a1 + 144) = v69;
            if ( !v68 )
            {
LABEL_141:
              v72 = 0LL;
              goto LABEL_2;
            }
          }
          else
          {
            v54 = (google::protobuf::internal *)((char *)v9 + 2);
LABEL_108:
            v72 = v54;
            *(_QWORD *)(a1 + 144) = v55;
          }
          goto LABEL_114;
        default:
          if ( v10 >> 3 == 99 && (unsigned __int8)v10 == 26 )
          {
            *(_DWORD *)(a1 + 16) |= 0x80u;
            v57 = *(_QWORD *)(a1 + 8);
            v21 = (_QWORD *)(v57 & 0xFFFFFFFFFFFFFFFELL);
            if ( (v57 & 1) != 0 )
              v21 = (_QWORD *)*v21;
            v22 = a1 + 80;
LABEL_112:
            v58 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v22, v21);
            v19 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v58, v72, a3);
          }
          else
          {
LABEL_20:
            if ( v10 )
              v17 = (v10 & 7) == 4;
            else
              v17 = 1;
            if ( v17 )
            {
              *(_DWORD *)(a3 + 80) = v10 - 1;
              goto LABEL_2;
            }
            if ( (*v8 & 1) != 0 )
              v18 = (*v8 & 0xFFFFFFFFFFFFFFFELL) + 8;
            else
              v18 = sub_10003A0B4(a1 + 8);
            v19 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v10, v18);
          }
LABEL_113:
          v72 = v19;
          if ( !v19 )
            goto LABEL_141;
LABEL_114:
          if ( (sub_10003A040(a3, &v72, *(unsigned int *)(a3 + 92)) & 1) != 0 )
            goto LABEL_2;
          break;
      }
    }
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v6;
  return v72;
}