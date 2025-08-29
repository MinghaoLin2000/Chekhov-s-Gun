__ZN6google8protobuf11FileOptions14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::FileOptions::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w28
  _QWORD *v7; // x22
  google::protobuf::internal *v8; // x2
  const char *v9; // x1
  __int64 v10; // x8
  _QWORD *v11; // x1
  __int64 v12; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned __int64 v14; // x0
  google::protobuf::internal *v15; // x2
  int *v16; // x8
  __int64 v17; // x10
  int v18; // w9
  __int64 v19; // x1
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  __int64 v23; // x8
  google::protobuf::internal *v24; // x8
  unsigned __int64 v25; // x27
  int v26; // w8
  int v27; // w9
  google::protobuf::internal *v28; // x8
  const char *v29; // x1
  int v30; // w8
  __int64 v31; // x8
  google::protobuf::internal *v32; // x8
  const char *v33; // x1
  int v34; // w8
  google::protobuf::internal *v35; // x8
  const char *v36; // x1
  int v37; // w8
  google::protobuf::internal *v38; // x8
  const char *v39; // x1
  int v40; // w8
  google::protobuf::internal *v41; // x8
  const char *v42; // x1
  int v43; // w8
  google::protobuf::internal *v44; // x8
  const char *v45; // x1
  int v46; // w8
  google::protobuf::internal *v47; // x8
  const char *v48; // x1
  int v49; // w8
  google::protobuf::internal *v50; // x8
  const char *v51; // x1
  int v52; // w8
  __int64 v53; // x8
  __int64 v54; // x8
  __int64 v55; // x8
  __int64 v56; // x8
  __int64 v57; // x8
  google::protobuf::internal *v58; // x8
  const char *v59; // x1
  int v60; // w8
  __int64 v61; // x8
  __int64 v62; // x8
  std::string *v63; // x0
  google::protobuf::internal *v64; // x0
  bool v65; // zf
  __int64 v66; // x27
  unsigned __int64 v67; // x1
  unsigned __int64 v68; // x1
  google::protobuf::internal *v69; // x0
  __int64 v70; // x1
  google::protobuf::internal *v71; // x0
  __int64 v72; // x1
  google::protobuf::internal *v73; // x0
  __int64 v74; // x1
  google::protobuf::internal *v75; // x0
  __int64 v76; // x1
  google::protobuf::internal *v77; // x0
  __int64 v78; // x1
  google::protobuf::internal *v79; // x0
  __int64 v80; // x1
  google::protobuf::internal *v81; // x0
  __int64 v82; // x1
  google::protobuf::internal *v83; // x0
  __int64 v84; // x1
  google::protobuf::internal *v85; // x0
  __int64 v86; // x1
  google::protobuf::UnknownFieldSet *v87; // x0
  google::protobuf::internal *v88; // [xsp+48h] [xbp-58h] BYREF

  v88 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v88, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v88 + 1);
      LODWORD(v9) = *(unsigned __int8 *)v88;
      if ( *(char *)v88 < 0 )
      {
        v9 = (const char *)((unsigned int)v9 + (*(unsigned __int8 *)v8 << 7) - 128);
        if ( *(char *)v8 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v88,
                                                        v9,
                                                        (unsigned int)v8);
          v88 = TagFallback;
          if ( !TagFallback )
            goto LABEL_156;
          v8 = TagFallback;
          goto LABEL_8;
        }
        v8 = (google::protobuf::internal *)((char *)v88 + 2);
      }
      v88 = v8;
LABEL_8:
      switch ( (unsigned int)v9 >> 3 )
      {
        case 1u:
          if ( (unsigned __int8)v9 != 10 )
            goto LABEL_121;
          *(_DWORD *)(a1 + 40) |= 1u;
          v10 = *(_QWORD *)(a1 + 8);
          v11 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v10 & 1) != 0 )
            v11 = (_QWORD *)*v11;
          v12 = a1 + 72;
          goto LABEL_117;
        case 2u:
        case 3u:
        case 4u:
        case 5u:
        case 6u:
        case 7u:
        case 0xCu:
        case 0xDu:
        case 0xEu:
        case 0xFu:
        case 0x13u:
        case 0x15u:
        case 0x16u:
        case 0x18u:
        case 0x19u:
        case 0x1Au:
        case 0x1Cu:
        case 0x1Du:
        case 0x1Eu:
        case 0x20u:
        case 0x21u:
        case 0x22u:
        case 0x23u:
        case 0x26u:
        case 0x2Bu:
          goto LABEL_121;
        case 8u:
          if ( (unsigned __int8)v9 != 66 )
            goto LABEL_121;
          *(_DWORD *)(a1 + 40) |= 2u;
          v23 = *(_QWORD *)(a1 + 8);
          v11 = (_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v23 & 1) != 0 )
            v11 = (_QWORD *)*v11;
          v12 = a1 + 80;
          goto LABEL_117;
        case 9u:
          if ( (unsigned __int8)v9 != 72 )
            goto LABEL_121;
          v24 = (google::protobuf::internal *)((char *)v8 + 1);
          v25 = *(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_37;
          v26 = *(char *)v24;
          v27 = v25 + ((unsigned __int8)v26 << 7);
          v25 = (unsigned int)(v27 - 128);
          if ( v26 < 0 )
          {
            v88 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                  v8,
                                                  (const char *)(unsigned int)(v27 - 128),
                                                  (unsigned int)v8);
            if ( !v88 )
              goto LABEL_156;
            v25 = v68;
          }
          else
          {
            v24 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_37:
            v88 = v24;
          }
          if ( (unsigned int)(v25 - 1) > 2 )
          {
            if ( (*v7 & 1) != 0 )
              v87 = (google::protobuf::UnknownFieldSet *)((*v7 & 0xFFFFFFFFFFFFFFFELL) + 8);
            else
              v87 = (google::protobuf::UnknownFieldSet *)sub_10003A0B4(a1 + 8);
            google::protobuf::UnknownFieldSet::AddVarint(v87, 9, v25);
          }
          else
          {
            *(_DWORD *)(a1 + 40) |= 0x40000u;
            *(_DWORD *)(a1 + 160) = v25;
          }
          goto LABEL_119;
        case 0xAu:
          if ( (unsigned __int8)v9 != 80 )
            goto LABEL_121;
          v5 |= 0x400u;
          v28 = (google::protobuf::internal *)((char *)v8 + 1);
          v29 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_44;
          v30 = *(char *)v28;
          v29 = (const char *)((unsigned int)v29 + ((unsigned __int8)v30 << 7) - 128);
          if ( v30 < 0 )
          {
            v69 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v29, (unsigned int)v8);
            v88 = v69;
            *(_BYTE *)(a1 + 152) = v70 != 0;
            if ( !v69 )
              goto LABEL_156;
          }
          else
          {
            v28 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_44:
            v88 = v28;
            *(_BYTE *)(a1 + 152) = v29 != 0LL;
          }
          goto LABEL_119;
        case 0xBu:
          if ( (unsigned __int8)v9 != 90 )
            goto LABEL_121;
          *(_DWORD *)(a1 + 40) |= 4u;
          v31 = *(_QWORD *)(a1 + 8);
          v11 = (_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v31 & 1) != 0 )
            v11 = (_QWORD *)*v11;
          v12 = a1 + 88;
          goto LABEL_117;
        case 0x10u:
          if ( (unsigned __int8)v9 != 128 )
            goto LABEL_121;
          v5 |= 0x2000u;
          v32 = (google::protobuf::internal *)((char *)v8 + 1);
          v33 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_53;
          v34 = *(char *)v32;
          v33 = (const char *)((unsigned int)v33 + ((unsigned __int8)v34 << 7) - 128);
          if ( v34 < 0 )
          {
            v71 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v33, (unsigned int)v8);
            v88 = v71;
            *(_BYTE *)(a1 + 155) = v72 != 0;
            if ( !v71 )
              goto LABEL_156;
          }
          else
          {
            v32 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_53:
            v88 = v32;
            *(_BYTE *)(a1 + 155) = v33 != 0LL;
          }
          goto LABEL_119;
        case 0x11u:
          if ( (unsigned __int8)v9 != 136 )
            goto LABEL_121;
          v5 |= 0x4000u;
          v35 = (google::protobuf::internal *)((char *)v8 + 1);
          v36 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_58;
          v37 = *(char *)v35;
          v36 = (const char *)((unsigned int)v36 + ((unsigned __int8)v37 << 7) - 128);
          if ( v37 < 0 )
          {
            v73 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v36, (unsigned int)v8);
            v88 = v73;
            *(_BYTE *)(a1 + 156) = v74 != 0;
            if ( !v73 )
              goto LABEL_156;
          }
          else
          {
            v35 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_58:
            v88 = v35;
            *(_BYTE *)(a1 + 156) = v36 != 0LL;
          }
          goto LABEL_119;
        case 0x12u:
          if ( (unsigned __int8)v9 != 144 )
            goto LABEL_121;
          v5 |= 0x8000u;
          v38 = (google::protobuf::internal *)((char *)v8 + 1);
          v39 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_63;
          v40 = *(char *)v38;
          v39 = (const char *)((unsigned int)v39 + ((unsigned __int8)v40 << 7) - 128);
          if ( v40 < 0 )
          {
            v75 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v39, (unsigned int)v8);
            v88 = v75;
            *(_BYTE *)(a1 + 157) = v76 != 0;
            if ( !v75 )
              goto LABEL_156;
          }
          else
          {
            v38 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_63:
            v88 = v38;
            *(_BYTE *)(a1 + 157) = v39 != 0LL;
          }
          goto LABEL_119;
        case 0x14u:
          if ( (unsigned __int8)v9 != 160 )
            goto LABEL_121;
          v5 |= 0x800u;
          v41 = (google::protobuf::internal *)((char *)v8 + 1);
          v42 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_68;
          v43 = *(char *)v41;
          v42 = (const char *)((unsigned int)v42 + ((unsigned __int8)v43 << 7) - 128);
          if ( v43 < 0 )
          {
            v77 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v42, (unsigned int)v8);
            v88 = v77;
            *(_BYTE *)(a1 + 153) = v78 != 0;
            if ( !v77 )
              goto LABEL_156;
          }
          else
          {
            v41 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_68:
            v88 = v41;
            *(_BYTE *)(a1 + 153) = v42 != 0LL;
          }
          goto LABEL_119;
        case 0x17u:
          if ( (unsigned __int8)v9 != 184 )
            goto LABEL_121;
          v5 |= 0x20000u;
          v44 = (google::protobuf::internal *)((char *)v8 + 1);
          v45 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_73;
          v46 = *(char *)v44;
          v45 = (const char *)((unsigned int)v45 + ((unsigned __int8)v46 << 7) - 128);
          if ( v46 < 0 )
          {
            v79 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v45, (unsigned int)v8);
            v88 = v79;
            *(_BYTE *)(a1 + 159) = v80 != 0;
            if ( !v79 )
              goto LABEL_156;
          }
          else
          {
            v44 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_73:
            v88 = v44;
            *(_BYTE *)(a1 + 159) = v45 != 0LL;
          }
          goto LABEL_119;
        case 0x1Bu:
          if ( (unsigned __int8)v9 != 216 )
            goto LABEL_121;
          v5 |= 0x1000u;
          v47 = (google::protobuf::internal *)((char *)v8 + 1);
          v48 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_78;
          v49 = *(char *)v47;
          v48 = (const char *)((unsigned int)v48 + ((unsigned __int8)v49 << 7) - 128);
          if ( v49 < 0 )
          {
            v81 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v48, (unsigned int)v8);
            v88 = v81;
            *(_BYTE *)(a1 + 154) = v82 != 0;
            if ( !v81 )
              goto LABEL_156;
          }
          else
          {
            v47 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_78:
            v88 = v47;
            *(_BYTE *)(a1 + 154) = v48 != 0LL;
          }
          goto LABEL_119;
        case 0x1Fu:
          if ( (unsigned __int8)v9 != 248 )
            goto LABEL_121;
          v5 |= 0x80000u;
          v50 = (google::protobuf::internal *)((char *)v8 + 1);
          v51 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_83;
          v52 = *(char *)v50;
          v51 = (const char *)((unsigned int)v51 + ((unsigned __int8)v52 << 7) - 128);
          if ( v52 < 0 )
          {
            v83 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v51, (unsigned int)v8);
            v88 = v83;
            *(_BYTE *)(a1 + 164) = v84 != 0;
            if ( !v83 )
              goto LABEL_156;
          }
          else
          {
            v50 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_83:
            v88 = v50;
            *(_BYTE *)(a1 + 164) = v51 != 0LL;
          }
          goto LABEL_119;
        case 0x24u:
          if ( (unsigned __int8)v9 != 34 )
            goto LABEL_121;
          *(_DWORD *)(a1 + 40) |= 8u;
          v53 = *(_QWORD *)(a1 + 8);
          v11 = (_QWORD *)(v53 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v53 & 1) != 0 )
            v11 = (_QWORD *)*v11;
          v12 = a1 + 96;
          goto LABEL_117;
        case 0x25u:
          if ( (unsigned __int8)v9 != 42 )
            goto LABEL_121;
          *(_DWORD *)(a1 + 40) |= 0x10u;
          v54 = *(_QWORD *)(a1 + 8);
          v11 = (_QWORD *)(v54 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v54 & 1) != 0 )
            v11 = (_QWORD *)*v11;
          v12 = a1 + 104;
          goto LABEL_117;
        case 0x27u:
          if ( (unsigned __int8)v9 != 58 )
            goto LABEL_121;
          *(_DWORD *)(a1 + 40) |= 0x20u;
          v55 = *(_QWORD *)(a1 + 8);
          v11 = (_QWORD *)(v55 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v55 & 1) != 0 )
            v11 = (_QWORD *)*v11;
          v12 = a1 + 112;
          goto LABEL_117;
        case 0x28u:
          if ( (unsigned __int8)v9 != 66 )
            goto LABEL_121;
          *(_DWORD *)(a1 + 40) |= 0x40u;
          v56 = *(_QWORD *)(a1 + 8);
          v11 = (_QWORD *)(v56 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v56 & 1) != 0 )
            v11 = (_QWORD *)*v11;
          v12 = a1 + 120;
          goto LABEL_117;
        case 0x29u:
          if ( (unsigned __int8)v9 != 74 )
            goto LABEL_121;
          *(_DWORD *)(a1 + 40) |= 0x80u;
          v57 = *(_QWORD *)(a1 + 8);
          v11 = (_QWORD *)(v57 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v57 & 1) != 0 )
            v11 = (_QWORD *)*v11;
          v12 = a1 + 128;
          goto LABEL_117;
        case 0x2Au:
          if ( (unsigned __int8)v9 != 80 )
            goto LABEL_121;
          v5 |= 0x10000u;
          v58 = (google::protobuf::internal *)((char *)v8 + 1);
          v59 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_108;
          v60 = *(char *)v58;
          v59 = (const char *)((unsigned int)v59 + ((unsigned __int8)v60 << 7) - 128);
          if ( v60 < 0 )
          {
            v85 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v59, (unsigned int)v8);
            v88 = v85;
            *(_BYTE *)(a1 + 158) = v86 != 0;
            if ( !v85 )
              goto LABEL_156;
          }
          else
          {
            v58 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_108:
            v88 = v58;
            *(_BYTE *)(a1 + 158) = v59 != 0LL;
          }
          goto LABEL_119;
        case 0x2Cu:
          if ( (unsigned __int8)v9 != 98 )
            goto LABEL_121;
          *(_DWORD *)(a1 + 40) |= 0x100u;
          v61 = *(_QWORD *)(a1 + 8);
          v11 = (_QWORD *)(v61 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v61 & 1) != 0 )
            v11 = (_QWORD *)*v11;
          v12 = a1 + 136;
          goto LABEL_117;
        case 0x2Du:
          if ( (unsigned __int8)v9 != 106 )
            goto LABEL_121;
          *(_DWORD *)(a1 + 40) |= 0x200u;
          v62 = *(_QWORD *)(a1 + 8);
          v11 = (_QWORD *)(v62 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v62 & 1) != 0 )
            v11 = (_QWORD *)*v11;
          v12 = a1 + 144;
LABEL_117:
          v63 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v12, v11);
          v64 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v63, v88, a3);
          goto LABEL_118;
        default:
          if ( (unsigned int)v9 >> 3 == 999 && (unsigned __int8)v9 == 58 )
          {
            v14 = (unsigned __int64)v8 - 2;
            while ( 1 )
            {
              v15 = (google::protobuf::internal *)(v14 + 2);
              v88 = (google::protobuf::internal *)(v14 + 2);
              v16 = *(int **)(a1 + 64);
              if ( !v16 )
                break;
              v17 = *(int *)(a1 + 56);
              v18 = *v16;
              if ( (int)v17 >= *v16 )
              {
                if ( v18 == *(_DWORD *)(a1 + 60) )
                {
LABEL_23:
                  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                    (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 48),
                    v18 + 1);
                  v16 = *(int **)(a1 + 64);
                  v18 = *v16;
                }
                *v16 = v18 + 1;
                v20 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::UninterpretedOption>(*(_QWORD *)(a1 + 48));
                LODWORD(v19) = v20;
                v21 = *(_QWORD *)(a1 + 64);
                v22 = *(int *)(a1 + 56);
                *(_DWORD *)(a1 + 56) = v22 + 1;
                *(_QWORD *)(v21 + 8 * v22 + 8) = v20;
                v15 = v88;
                goto LABEL_25;
              }
              *(_DWORD *)(a1 + 56) = v17 + 1;
              v19 = *(_QWORD *)&v16[2 * v17 + 2];
LABEL_25:
              v14 = sub_1000A773C(a3, v19, v15);
              v88 = (google::protobuf::internal *)v14;
              if ( !v14 )
                goto LABEL_156;
              if ( *(_QWORD *)a3 <= v14 || *(_WORD *)v14 != 16058 )
                goto LABEL_119;
            }
            v18 = *(_DWORD *)(a1 + 60);
            goto LABEL_23;
          }
LABEL_121:
          if ( (_DWORD)v9 )
            v65 = ((unsigned __int8)v9 & 7) == 4;
          else
            v65 = 1;
          if ( v65 )
          {
            *(_DWORD *)(a3 + 80) = (_DWORD)v9 - 1;
            goto LABEL_2;
          }
          v66 = (unsigned int)v9;
          if ( (unsigned int)v9 >> 6 < 0x7D )
          {
            if ( (*v7 & 1) != 0 )
              v67 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
            else
              v67 = sub_10003A0B4(a1 + 8);
            v64 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v66, v67);
          }
          else
          {
            v64 = (google::protobuf::internal *)google::protobuf::internal::ExtensionSet::ParseField(
                                                  a1 + 16,
                                                  (unsigned int)v9);
          }
LABEL_118:
          v88 = v64;
          if ( !v64 )
          {
LABEL_156:
            v88 = 0LL;
            goto LABEL_2;
          }
LABEL_119:
          if ( (sub_10003A040(a3, &v88, *(unsigned int *)(a3 + 92)) & 1) != 0 )
            goto LABEL_2;
          break;
      }
    }
  }
LABEL_2:
  *(_DWORD *)(a1 + 40) |= v5;
  return v88;
}