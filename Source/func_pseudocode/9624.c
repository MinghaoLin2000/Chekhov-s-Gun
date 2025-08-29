__ZN3TSP11MessageInfo14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::MessageInfo::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w24
  _QWORD *v7; // x23
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w21
  unsigned int v10; // w9
  google::protobuf::internal *v11; // x8
  const char *v12; // x1
  int v13; // w8
  google::protobuf::internal *TagFallback; // x0
  unsigned int v15; // w1
  int v16; // w0
  google::protobuf::internal *v17; // x8
  const char *v18; // x1
  int v19; // w8
  unsigned __int64 v20; // x0
  google::protobuf::internal *v21; // x2
  int *v22; // x8
  __int64 v23; // x10
  int v24; // w9
  __int64 v25; // x1
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  int v29; // w0
  google::protobuf::internal *v30; // x0
  google::protobuf::internal *v31; // x8
  const char *v32; // x1
  int v33; // w8
  __int64 v34; // x1
  _QWORD *v35; // x0
  __int64 v36; // x0
  unsigned __int64 v37; // x0
  google::protobuf::internal *v38; // x2
  int *v39; // x8
  __int64 v40; // x10
  int v41; // w9
  __int64 v42; // x1
  __int64 v43; // x0
  __int64 v44; // x8
  __int64 v45; // x9
  google::protobuf::internal *v46; // x0
  int v47; // w1
  google::protobuf::internal *v48; // x0
  int v49; // w1
  google::protobuf::internal *v50; // x0
  int v51; // w1
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x0
  __int64 v56; // x0
  bool v57; // zf
  unsigned __int64 v58; // x1
  google::protobuf::internal *v59; // [xsp+18h] [xbp-58h] BYREF

  v59 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v59, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 2 )
    {
      v8 = (google::protobuf::internal *)((char *)v59 + 1);
      v9 = *(unsigned __int8 *)v59;
      if ( *(char *)v59 < 0 )
      {
        v10 = v9 + (*(unsigned __int8 *)v8 << 7);
        v9 = v10 - 128;
        if ( *(char *)v8 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v59,
                                                        (const char *)(v10 - 128),
                                                        (unsigned int)v8);
          v59 = TagFallback;
          if ( !TagFallback )
            goto LABEL_100;
          v8 = TagFallback;
          v9 = v15;
LABEL_8:
          switch ( v9 >> 3 )
          {
            case 1u:
              if ( (unsigned __int8)v9 != 8 )
                goto LABEL_88;
              v5 |= 2u;
              v11 = (google::protobuf::internal *)((char *)v8 + 1);
              LODWORD(v12) = *(unsigned __int8 *)v8;
              if ( (*(char *)v8 & 0x80000000) == 0 )
                goto LABEL_13;
              v13 = *(char *)v11;
              v12 = (const char *)((unsigned int)v12 + ((unsigned __int8)v13 << 7) - 128);
              if ( (v13 & 0x80000000) == 0 )
              {
                v11 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_13:
                v59 = v11;
                *(_DWORD *)(a1 + 200) = (_DWORD)v12;
                goto LABEL_96;
              }
              v46 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow32(
                                                    v8,
                                                    v12,
                                                    (unsigned int)v8);
              v59 = v46;
              *(_DWORD *)(a1 + 200) = v47;
              if ( !v46 )
                goto LABEL_100;
              goto LABEL_96;
            case 2u:
              if ( (unsigned __int8)v9 != 18 )
              {
                if ( (unsigned __int8)v9 == 16 )
                {
                  v52 = sub_10003D848(&v59);
                  sub_10003D8A8(a1, v52);
                  goto LABEL_86;
                }
LABEL_88:
                if ( v9 )
                  v57 = (v9 & 7) == 4;
                else
                  v57 = 1;
                if ( v57 )
                {
                  *(_DWORD *)(a3 + 80) = v9 - 1;
                  goto LABEL_2;
                }
                if ( (*v7 & 1) != 0 )
                  v58 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
                else
                  v58 = sub_10003A0B4(a1 + 8);
                v30 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v58);
                goto LABEL_95;
              }
              v16 = a1 + 24;
LABEL_69:
              v30 = (google::protobuf::internal *)google::protobuf::internal::PackedUInt32Parser(v16, (int)v8, a3);
              goto LABEL_95;
            case 3u:
              if ( (unsigned __int8)v9 != 24 )
                goto LABEL_88;
              v5 |= 4u;
              v17 = (google::protobuf::internal *)((char *)v8 + 1);
              LODWORD(v18) = *(unsigned __int8 *)v8;
              if ( (*(char *)v8 & 0x80000000) == 0 )
                goto LABEL_22;
              v19 = *(char *)v17;
              v18 = (const char *)((unsigned int)v18 + ((unsigned __int8)v19 << 7) - 128);
              if ( v19 < 0 )
              {
                v48 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow32(
                                                      v8,
                                                      v18,
                                                      (unsigned int)v8);
                v59 = v48;
                *(_DWORD *)(a1 + 204) = v49;
                if ( !v48 )
                  goto LABEL_100;
              }
              else
              {
                v17 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_22:
                v59 = v17;
                *(_DWORD *)(a1 + 204) = (_DWORD)v18;
              }
              goto LABEL_96;
            case 4u:
              if ( (unsigned __int8)v9 != 34 )
                goto LABEL_88;
              v20 = (unsigned __int64)v8 - 1;
              while ( 1 )
              {
                v21 = (google::protobuf::internal *)(v20 + 1);
                v59 = (google::protobuf::internal *)(v20 + 1);
                v22 = *(int **)(a1 + 64);
                if ( !v22 )
                  break;
                v23 = *(int *)(a1 + 56);
                v24 = *v22;
                if ( (int)v23 >= *v22 )
                {
                  if ( v24 == *(_DWORD *)(a1 + 60) )
                  {
LABEL_30:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 48),
                      v24 + 1);
                    v22 = *(int **)(a1 + 64);
                    v24 = *v22;
                  }
                  *v22 = v24 + 1;
                  v26 = google::protobuf::Arena::CreateMaybeMessage<TSP::FieldInfo>(*(_QWORD *)(a1 + 48));
                  LODWORD(v25) = v26;
                  v27 = *(_QWORD *)(a1 + 64);
                  v28 = *(int *)(a1 + 56);
                  *(_DWORD *)(a1 + 56) = v28 + 1;
                  *(_QWORD *)(v27 + 8 * v28 + 8) = v26;
                  v21 = v59;
                  goto LABEL_32;
                }
                *(_DWORD *)(a1 + 56) = v23 + 1;
                v25 = *(_QWORD *)&v22[2 * v23 + 2];
LABEL_32:
                v20 = sub_10003D918(a3, v25, v21);
                v59 = (google::protobuf::internal *)v20;
                if ( !v20 )
                  goto LABEL_100;
                if ( *(_QWORD *)a3 <= v20 || *(_BYTE *)v20 != 34 )
                  goto LABEL_96;
              }
              v24 = *(_DWORD *)(a1 + 60);
              goto LABEL_30;
            case 5u:
              if ( (unsigned __int8)v9 != 42 )
              {
                if ( (unsigned __int8)v9 == 40 )
                {
                  v53 = sub_10003C864(&v59);
                  sub_10003D9E8(a1, v53);
                  goto LABEL_86;
                }
                goto LABEL_88;
              }
              v29 = a1 + 72;
LABEL_40:
              v30 = (google::protobuf::internal *)google::protobuf::internal::PackedUInt64Parser(v29, (int)v8, a3);
LABEL_95:
              v59 = v30;
              if ( !v30 )
              {
LABEL_100:
                v59 = 0LL;
                goto LABEL_2;
              }
LABEL_96:
              if ( (sub_10003A040(a3, &v59, *(unsigned int *)(a3 + 92)) & 1) != 0 )
                goto LABEL_2;
              continue;
            case 6u:
              if ( (unsigned __int8)v9 != 50 )
              {
                if ( (unsigned __int8)v9 == 48 )
                {
                  v54 = sub_10003C864(&v59);
                  sub_10003DA58(a1, v54);
                  goto LABEL_86;
                }
                goto LABEL_88;
              }
              v29 = a1 + 96;
              goto LABEL_40;
            case 7u:
              if ( (unsigned __int8)v9 != 56 )
                goto LABEL_88;
              v5 |= 8u;
              v31 = (google::protobuf::internal *)((char *)v8 + 1);
              LODWORD(v32) = *(unsigned __int8 *)v8;
              if ( (*(char *)v8 & 0x80000000) == 0 )
                goto LABEL_45;
              v33 = *(char *)v31;
              v32 = (const char *)((unsigned int)v32 + ((unsigned __int8)v33 << 7) - 128);
              if ( v33 < 0 )
              {
                v50 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow32(
                                                      v8,
                                                      v32,
                                                      (unsigned int)v8);
                v59 = v50;
                *(_DWORD *)(a1 + 208) = v51;
                if ( !v50 )
                  goto LABEL_100;
              }
              else
              {
                v31 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_45:
                v59 = v31;
                *(_DWORD *)(a1 + 208) = (_DWORD)v32;
              }
              goto LABEL_96;
            case 8u:
              if ( (unsigned __int8)v9 != 66 )
              {
                if ( (unsigned __int8)v9 == 64 )
                {
                  v55 = sub_10003D848(&v59);
                  sub_10003DAC8(a1, v55);
                  goto LABEL_86;
                }
                goto LABEL_88;
              }
              v16 = a1 + 120;
              goto LABEL_69;
            case 9u:
              if ( (unsigned __int8)v9 != 74 )
                goto LABEL_88;
              *(_DWORD *)(a1 + 16) |= 1u;
              v34 = *(_QWORD *)(a1 + 192);
              if ( !v34 )
              {
                v35 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFELL);
                if ( (*v7 & 1) != 0 )
                  v35 = (_QWORD *)*v35;
                v36 = google::protobuf::Arena::CreateMaybeMessage<TSP::FieldPath>(v35);
                LODWORD(v34) = v36;
                *(_QWORD *)(a1 + 192) = v36;
                v8 = v59;
              }
              v30 = (google::protobuf::internal *)sub_10003DB38(a3, v34, v8);
              goto LABEL_95;
            case 0xAu:
              if ( (unsigned __int8)v9 != 82 )
                goto LABEL_88;
              v37 = (unsigned __int64)v8 - 1;
              break;
            case 0xBu:
              if ( (unsigned __int8)v9 != 90 )
              {
                if ( (unsigned __int8)v9 == 88 )
                {
                  v56 = sub_10003D848(&v59);
                  sub_10003DC08(a1, v56);
LABEL_86:
                  if ( !v59 )
                    goto LABEL_100;
                  goto LABEL_96;
                }
                goto LABEL_88;
              }
              v16 = a1 + 168;
              goto LABEL_69;
            default:
              goto LABEL_88;
          }
          while ( 1 )
          {
            v38 = (google::protobuf::internal *)(v37 + 1);
            v59 = (google::protobuf::internal *)(v37 + 1);
            v39 = *(int **)(a1 + 160);
            if ( !v39 )
              break;
            v40 = *(int *)(a1 + 152);
            v41 = *v39;
            if ( (int)v40 >= *v39 )
            {
              if ( v41 == *(_DWORD *)(a1 + 156) )
              {
LABEL_61:
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                  (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 144),
                  v41 + 1);
                v39 = *(int **)(a1 + 160);
                v41 = *v39;
              }
              *v39 = v41 + 1;
              v43 = google::protobuf::Arena::CreateMaybeMessage<TSP::FieldPath>(*(_QWORD *)(a1 + 144));
              LODWORD(v42) = v43;
              v44 = *(_QWORD *)(a1 + 160);
              v45 = *(int *)(a1 + 152);
              *(_DWORD *)(a1 + 152) = v45 + 1;
              *(_QWORD *)(v44 + 8 * v45 + 8) = v43;
              v38 = v59;
              goto LABEL_63;
            }
            *(_DWORD *)(a1 + 152) = v40 + 1;
            v42 = *(_QWORD *)&v39[2 * v40 + 2];
LABEL_63:
            v37 = sub_10003DB38(a3, v42, v38);
            v59 = (google::protobuf::internal *)v37;
            if ( !v37 )
              goto LABEL_100;
            if ( *(_QWORD *)a3 <= v37 || *(_BYTE *)v37 != 82 )
              goto LABEL_96;
          }
          v41 = *(_DWORD *)(a1 + 156);
          goto LABEL_61;
        }
        v8 = (google::protobuf::internal *)((char *)v59 + 2);
      }
      break;
    }
    v59 = v8;
    goto LABEL_8;
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v59;
}