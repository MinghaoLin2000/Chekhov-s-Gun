__ZN6google8protobuf19UninterpretedOption14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::UninterpretedOption::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w27
  _QWORD *v7; // x21
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w26
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
  __int64 v22; // x8
  _QWORD *v23; // x1
  __int64 v24; // x0
  google::protobuf::internal *v25; // x8
  unsigned __int64 v26; // x1
  int v27; // w8
  google::protobuf::internal *v28; // x8
  unsigned __int64 v29; // x1
  int v30; // w8
  __int64 v31; // x8
  __int64 v32; // x8
  std::string *v33; // x0
  google::protobuf::internal *v34; // x0
  bool v35; // zf
  unsigned __int64 v36; // x1
  google::protobuf::internal *v37; // x0
  __int64 v38; // x1
  google::protobuf::internal *v39; // x0
  __int64 v40; // x1
  google::protobuf::internal *v41; // [xsp+8h] [xbp-58h] BYREF

  v41 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v41, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 2 )
    {
      v8 = (google::protobuf::internal *)((char *)v41 + 1);
      v9 = *(unsigned __int8 *)v41;
      if ( *(char *)v41 < 0 )
      {
        v10 = v9 + (*(unsigned __int8 *)v8 << 7);
        v9 = v10 - 128;
        if ( *(char *)v8 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v41,
                                                        (const char *)(v10 - 128),
                                                        (unsigned int)v8);
          v41 = TagFallback;
          if ( !TagFallback )
            goto LABEL_65;
          v8 = TagFallback;
          v9 = v21;
LABEL_8:
          switch ( v9 >> 3 )
          {
            case 2u:
              if ( (unsigned __int8)v9 != 18 )
                goto LABEL_49;
              v11 = (unsigned __int64)v8 - 1;
              break;
            case 3u:
              if ( (unsigned __int8)v9 != 26 )
                goto LABEL_49;
              *(_DWORD *)(a1 + 16) |= 1u;
              v22 = *(_QWORD *)(a1 + 8);
              v23 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFELL);
              if ( (v22 & 1) != 0 )
                v23 = (_QWORD *)*v23;
              v24 = a1 + 48;
              goto LABEL_48;
            case 4u:
              if ( (unsigned __int8)v9 != 32 )
                goto LABEL_49;
              v5 |= 8u;
              v25 = (google::protobuf::internal *)((char *)v8 + 1);
              v26 = *(unsigned __int8 *)v8;
              if ( (*(char *)v8 & 0x80000000) == 0 )
                goto LABEL_32;
              v27 = *(char *)v25;
              v26 = (unsigned int)v26 + ((unsigned __int8)v27 << 7) - 128;
              if ( v27 < 0 )
              {
                v37 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                      v8,
                                                      (const char *)v26,
                                                      (unsigned int)v8);
                v41 = v37;
                *(_QWORD *)(a1 + 72) = v38;
                if ( !v37 )
                  goto LABEL_65;
              }
              else
              {
                v25 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_32:
                v41 = v25;
                *(_QWORD *)(a1 + 72) = v26;
              }
              goto LABEL_57;
            case 5u:
              if ( (unsigned __int8)v9 != 40 )
                goto LABEL_49;
              v5 |= 0x10u;
              v28 = (google::protobuf::internal *)((char *)v8 + 1);
              v29 = *(unsigned __int8 *)v8;
              if ( (*(char *)v8 & 0x80000000) == 0 )
                goto LABEL_37;
              v30 = *(char *)v28;
              v29 = (unsigned int)v29 + ((unsigned __int8)v30 << 7) - 128;
              if ( v30 < 0 )
              {
                v39 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                      v8,
                                                      (const char *)v29,
                                                      (unsigned int)v8);
                v41 = v39;
                *(_QWORD *)(a1 + 80) = v40;
                if ( !v39 )
                  goto LABEL_65;
              }
              else
              {
                v28 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_37:
                v41 = v28;
                *(_QWORD *)(a1 + 80) = v29;
              }
              goto LABEL_57;
            case 6u:
              if ( (unsigned __int8)v9 != 49 )
                goto LABEL_49;
              v5 |= 0x20u;
              *(_QWORD *)(a1 + 88) = *(_QWORD *)v8;
              v41 = (google::protobuf::internal *)((char *)v8 + 8);
              goto LABEL_57;
            case 7u:
              if ( (unsigned __int8)v9 != 58 )
                goto LABEL_49;
              *(_DWORD *)(a1 + 16) |= 2u;
              v31 = *(_QWORD *)(a1 + 8);
              v23 = (_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFELL);
              if ( (v31 & 1) != 0 )
                v23 = (_QWORD *)*v23;
              v24 = a1 + 56;
              goto LABEL_48;
            case 8u:
              if ( (unsigned __int8)v9 != 66 )
                goto LABEL_49;
              *(_DWORD *)(a1 + 16) |= 4u;
              v32 = *(_QWORD *)(a1 + 8);
              v23 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFELL);
              if ( (v32 & 1) != 0 )
                v23 = (_QWORD *)*v23;
              v24 = a1 + 64;
LABEL_48:
              v33 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v24, v23);
              v34 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v33, v41, a3);
              goto LABEL_56;
            default:
LABEL_49:
              if ( v9 )
                v35 = (v9 & 7) == 4;
              else
                v35 = 1;
              if ( v35 )
              {
                *(_DWORD *)(a3 + 80) = v9 - 1;
                goto LABEL_2;
              }
              if ( (*v7 & 1) != 0 )
                v36 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
              else
                v36 = sub_10003A0B4(a1 + 8);
              v34 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v36);
LABEL_56:
              v41 = v34;
              if ( !v34 )
              {
LABEL_65:
                v41 = 0LL;
                goto LABEL_2;
              }
LABEL_57:
              if ( (sub_10003A040(a3, &v41, *(unsigned int *)(a3 + 92)) & 1) != 0 )
                goto LABEL_2;
              continue;
          }
          while ( 1 )
          {
            v12 = (google::protobuf::internal *)(v11 + 1);
            v41 = (google::protobuf::internal *)(v11 + 1);
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
              v17 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::UninterpretedOption_NamePart>(*(_QWORD *)(a1 + 24));
              LODWORD(v16) = v17;
              v18 = *(_QWORD *)(a1 + 40);
              v19 = *(int *)(a1 + 32);
              *(_DWORD *)(a1 + 32) = v19 + 1;
              *(_QWORD *)(v18 + 8 * v19 + 8) = v17;
              v12 = v41;
              goto LABEL_18;
            }
            *(_DWORD *)(a1 + 32) = v14 + 1;
            v16 = *(_QWORD *)&v13[2 * v14 + 2];
LABEL_18:
            v11 = sub_1000B48C8(a3, v16, v12);
            v41 = (google::protobuf::internal *)v11;
            if ( !v11 )
              goto LABEL_65;
            if ( *(_QWORD *)a3 <= v11 || *(_BYTE *)v11 != 18 )
              goto LABEL_57;
          }
          v15 = *(_DWORD *)(a1 + 36);
          goto LABEL_16;
        }
        v8 = (google::protobuf::internal *)((char *)v41 + 2);
      }
      break;
    }
    v41 = v8;
    goto LABEL_8;
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v41;
}