__ZN6google8protobuf12FieldOptions14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::FieldOptions::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w26
  _QWORD *v7; // x22
  google::protobuf::internal *v8; // x2
  const char *v9; // x1
  google::protobuf::internal *v10; // x9
  unsigned __int64 v11; // x8
  int v12; // w9
  unsigned __int64 v13; // x0
  google::protobuf::internal *v14; // x2
  int *v15; // x8
  __int64 v16; // x10
  int v17; // w9
  __int64 v18; // x1
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  google::protobuf::internal *TagFallback; // x0
  google::protobuf::internal *v23; // x8
  const char *v24; // x1
  int v25; // w8
  google::protobuf::internal *v26; // x8
  const char *v27; // x1
  int v28; // w8
  google::protobuf::internal *v29; // x8
  const char *v30; // x1
  int v31; // w8
  google::protobuf::internal *v32; // x9
  int v33; // w9
  google::protobuf::internal *v34; // x8
  const char *v35; // x1
  int v36; // w8
  bool v37; // zf
  __int64 v38; // x25
  google::protobuf::internal *v39; // x0
  unsigned __int64 v40; // x1
  unsigned __int64 v41; // x1
  google::protobuf::internal *v42; // x0
  __int64 v43; // x1
  google::protobuf::internal *v44; // x0
  __int64 v45; // x1
  google::protobuf::internal *v46; // x0
  __int64 v47; // x1
  unsigned __int64 v48; // x1
  google::protobuf::internal *v49; // x0
  __int64 v50; // x1
  google::protobuf::UnknownFieldSet *v51; // x0
  int v52; // w1
  unsigned __int64 v53; // x25
  unsigned __int64 v54; // x25
  google::protobuf::internal *v55; // [xsp+8h] [xbp-58h] BYREF

  v55 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v55, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v55 + 1);
      LODWORD(v9) = *(unsigned __int8 *)v55;
      if ( *(char *)v55 < 0 )
      {
        v9 = (const char *)((unsigned int)v9 + (*(unsigned __int8 *)v8 << 7) - 128);
        if ( *(char *)v8 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v55,
                                                        v9,
                                                        (unsigned int)v8);
          v55 = TagFallback;
          if ( !TagFallback )
            goto LABEL_94;
          v8 = TagFallback;
          goto LABEL_8;
        }
        v8 = (google::protobuf::internal *)((char *)v55 + 2);
      }
      v55 = v8;
LABEL_8:
      switch ( (unsigned int)v9 >> 3 )
      {
        case 1u:
          if ( (unsigned __int8)v9 != 8 )
            goto LABEL_59;
          v10 = (google::protobuf::internal *)((char *)v8 + 1);
          v11 = *(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_13;
          v12 = *(char *)v10;
          v11 = (unsigned int)v11 + ((unsigned __int8)v12 << 7) - 128;
          if ( v12 < 0 )
          {
            v55 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                  v8,
                                                  (const char *)v11,
                                                  (unsigned int)v8);
            if ( !v55 )
              goto LABEL_94;
            v11 = v41;
          }
          else
          {
            v10 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_13:
            v55 = v10;
          }
          if ( (unsigned int)v11 <= 2 )
          {
            *(_DWORD *)(a1 + 40) |= 1u;
            *(_DWORD *)(a1 + 72) = v11;
            goto LABEL_69;
          }
          if ( (*v7 & 1) != 0 )
          {
            v51 = (google::protobuf::UnknownFieldSet *)((*v7 & 0xFFFFFFFFFFFFFFFELL) + 8);
          }
          else
          {
            v53 = v11;
            v51 = (google::protobuf::UnknownFieldSet *)sub_10003A0B4(a1 + 8);
            v11 = v53;
          }
          v52 = 1;
          goto LABEL_89;
        case 2u:
          if ( (unsigned __int8)v9 != 16 )
            goto LABEL_59;
          v5 |= 2u;
          v23 = (google::protobuf::internal *)((char *)v8 + 1);
          v24 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_36;
          v25 = *(char *)v23;
          v24 = (const char *)((unsigned int)v24 + ((unsigned __int8)v25 << 7) - 128);
          if ( v25 < 0 )
          {
            v42 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v24, (unsigned int)v8);
            v55 = v42;
            *(_BYTE *)(a1 + 76) = v43 != 0;
            if ( !v42 )
              goto LABEL_94;
          }
          else
          {
            v23 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_36:
            v55 = v23;
            *(_BYTE *)(a1 + 76) = v24 != 0LL;
          }
          goto LABEL_69;
        case 3u:
          if ( (unsigned __int8)v9 != 24 )
            goto LABEL_59;
          v5 |= 8u;
          v26 = (google::protobuf::internal *)((char *)v8 + 1);
          v27 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_41;
          v28 = *(char *)v26;
          v27 = (const char *)((unsigned int)v27 + ((unsigned __int8)v28 << 7) - 128);
          if ( v28 < 0 )
          {
            v44 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v27, (unsigned int)v8);
            v55 = v44;
            *(_BYTE *)(a1 + 78) = v45 != 0;
            if ( !v44 )
              goto LABEL_94;
          }
          else
          {
            v26 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_41:
            v55 = v26;
            *(_BYTE *)(a1 + 78) = v27 != 0LL;
          }
          goto LABEL_69;
        case 4u:
        case 7u:
        case 8u:
        case 9u:
          goto LABEL_59;
        case 5u:
          if ( (unsigned __int8)v9 != 40 )
            goto LABEL_59;
          v5 |= 4u;
          v29 = (google::protobuf::internal *)((char *)v8 + 1);
          v30 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_46;
          v31 = *(char *)v29;
          v30 = (const char *)((unsigned int)v30 + ((unsigned __int8)v31 << 7) - 128);
          if ( v31 < 0 )
          {
            v46 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v30, (unsigned int)v8);
            v55 = v46;
            *(_BYTE *)(a1 + 77) = v47 != 0;
            if ( !v46 )
              goto LABEL_94;
          }
          else
          {
            v29 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_46:
            v55 = v29;
            *(_BYTE *)(a1 + 77) = v30 != 0LL;
          }
          goto LABEL_69;
        case 6u:
          if ( (unsigned __int8)v9 != 48 )
            goto LABEL_59;
          v32 = (google::protobuf::internal *)((char *)v8 + 1);
          v11 = *(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_51;
          v33 = *(char *)v32;
          v11 = (unsigned int)v11 + ((unsigned __int8)v33 << 7) - 128;
          if ( v33 < 0 )
          {
            v55 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                  v8,
                                                  (const char *)v11,
                                                  (unsigned int)v8);
            if ( !v55 )
              goto LABEL_94;
            v11 = v48;
          }
          else
          {
            v32 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_51:
            v55 = v32;
          }
          if ( (unsigned int)v11 > 2 )
          {
            if ( (*v7 & 1) != 0 )
            {
              v51 = (google::protobuf::UnknownFieldSet *)((*v7 & 0xFFFFFFFFFFFFFFFELL) + 8);
            }
            else
            {
              v54 = v11;
              v51 = (google::protobuf::UnknownFieldSet *)sub_10003A0B4(a1 + 8);
              v11 = v54;
            }
            v52 = 6;
LABEL_89:
            google::protobuf::UnknownFieldSet::AddVarint(v51, v52, v11);
          }
          else
          {
            *(_DWORD *)(a1 + 40) |= 0x20u;
            *(_DWORD *)(a1 + 80) = v11;
          }
          goto LABEL_69;
        case 0xAu:
          if ( (unsigned __int8)v9 != 80 )
            goto LABEL_59;
          v5 |= 0x10u;
          v34 = (google::protobuf::internal *)((char *)v8 + 1);
          v35 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_58;
          v36 = *(char *)v34;
          v35 = (const char *)((unsigned int)v35 + ((unsigned __int8)v36 << 7) - 128);
          if ( v36 < 0 )
          {
            v49 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v35, (unsigned int)v8);
            v55 = v49;
            *(_BYTE *)(a1 + 79) = v50 != 0;
            if ( !v49 )
              goto LABEL_94;
          }
          else
          {
            v34 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_58:
            v55 = v34;
            *(_BYTE *)(a1 + 79) = v35 != 0LL;
          }
          goto LABEL_69;
        default:
          if ( (unsigned int)v9 >> 3 == 999 && (unsigned __int8)v9 == 58 )
          {
            v13 = (unsigned __int64)v8 - 2;
            while ( 1 )
            {
              v14 = (google::protobuf::internal *)(v13 + 2);
              v55 = (google::protobuf::internal *)(v13 + 2);
              v15 = *(int **)(a1 + 64);
              if ( !v15 )
                break;
              v16 = *(int *)(a1 + 56);
              v17 = *v15;
              if ( (int)v16 >= *v15 )
              {
                if ( v17 == *(_DWORD *)(a1 + 60) )
                {
LABEL_24:
                  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                    (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 48),
                    v17 + 1);
                  v15 = *(int **)(a1 + 64);
                  v17 = *v15;
                }
                *v15 = v17 + 1;
                v19 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::UninterpretedOption>(*(_QWORD *)(a1 + 48));
                LODWORD(v18) = v19;
                v20 = *(_QWORD *)(a1 + 64);
                v21 = *(int *)(a1 + 56);
                *(_DWORD *)(a1 + 56) = v21 + 1;
                *(_QWORD *)(v20 + 8 * v21 + 8) = v19;
                v14 = v55;
                goto LABEL_26;
              }
              *(_DWORD *)(a1 + 56) = v16 + 1;
              v18 = *(_QWORD *)&v15[2 * v16 + 2];
LABEL_26:
              v13 = sub_1000A773C(a3, v18, v14);
              v55 = (google::protobuf::internal *)v13;
              if ( !v13 )
                goto LABEL_94;
              if ( *(_QWORD *)a3 <= v13 || *(_WORD *)v13 != 16058 )
                goto LABEL_69;
            }
            v17 = *(_DWORD *)(a1 + 60);
            goto LABEL_24;
          }
LABEL_59:
          if ( (_DWORD)v9 )
            v37 = ((unsigned __int8)v9 & 7) == 4;
          else
            v37 = 1;
          if ( v37 )
          {
            *(_DWORD *)(a3 + 80) = (_DWORD)v9 - 1;
            goto LABEL_2;
          }
          v38 = (unsigned int)v9;
          if ( (unsigned int)v9 >> 6 < 0x7D )
          {
            if ( (*v7 & 1) != 0 )
              v40 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
            else
              v40 = sub_10003A0B4(a1 + 8);
            v39 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v38, v40);
          }
          else
          {
            v39 = (google::protobuf::internal *)google::protobuf::internal::ExtensionSet::ParseField(
                                                  a1 + 16,
                                                  (unsigned int)v9);
          }
          v55 = v39;
          if ( !v39 )
          {
LABEL_94:
            v55 = 0LL;
            goto LABEL_2;
          }
LABEL_69:
          if ( (sub_10003A040(a3, &v55, *(unsigned int *)(a3 + 92)) & 1) != 0 )
            goto LABEL_2;
          break;
      }
    }
  }
LABEL_2:
  *(_DWORD *)(a1 + 40) |= v5;
  return v55;
}