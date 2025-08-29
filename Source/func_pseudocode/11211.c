__ZN6google8protobuf14MessageOptions14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::MessageOptions::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w26
  _QWORD *v7; // x22
  google::protobuf::internal *v8; // x2
  const char *v9; // x1
  google::protobuf::internal *v10; // x8
  const char *v11; // x1
  int v12; // w8
  unsigned __int64 v13; // x0
  google::protobuf::internal *v14; // x2
  int *v15; // x8
  __int64 v16; // x10
  int v17; // w9
  __int64 v18; // x1
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  google::protobuf::internal *v22; // x8
  const char *v23; // x1
  int v24; // w8
  google::protobuf::internal *v25; // x8
  const char *v26; // x1
  int v27; // w8
  google::protobuf::internal *v28; // x8
  const char *v29; // x1
  int v30; // w8
  bool v31; // zf
  __int64 v32; // x25
  google::protobuf::internal *v33; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned __int64 v35; // x1
  google::protobuf::internal *v36; // x0
  __int64 v37; // x1
  google::protobuf::internal *v38; // x0
  __int64 v39; // x1
  google::protobuf::internal *v40; // x0
  __int64 v41; // x1
  google::protobuf::internal *v42; // x0
  __int64 v43; // x1
  google::protobuf::internal *v44; // [xsp+8h] [xbp-58h] BYREF

  v44 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v44, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v44 + 1);
      LODWORD(v9) = *(unsigned __int8 *)v44;
      if ( *(char *)v44 < 0 )
      {
        v9 = (const char *)((unsigned int)v9 + (*(unsigned __int8 *)v8 << 7) - 128);
        if ( *(char *)v8 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v44,
                                                        v9,
                                                        (unsigned int)v8);
          v44 = TagFallback;
          if ( !TagFallback )
            goto LABEL_67;
          v8 = TagFallback;
          goto LABEL_8;
        }
        v8 = (google::protobuf::internal *)((char *)v44 + 2);
      }
      v44 = v8;
LABEL_8:
      switch ( (unsigned int)v9 >> 3 )
      {
        case 1u:
          if ( (unsigned __int8)v9 != 8 )
            goto LABEL_43;
          v5 |= 1u;
          v10 = (google::protobuf::internal *)((char *)v8 + 1);
          v11 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_13;
          v12 = *(char *)v10;
          v11 = (const char *)((unsigned int)v11 + ((unsigned __int8)v12 << 7) - 128);
          if ( (v12 & 0x80000000) == 0 )
          {
            v10 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_13:
            v44 = v10;
            *(_BYTE *)(a1 + 72) = v11 != 0LL;
            goto LABEL_55;
          }
          v36 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v11, (unsigned int)v8);
          v44 = v36;
          *(_BYTE *)(a1 + 72) = v37 != 0;
          if ( !v36 )
            goto LABEL_67;
          goto LABEL_55;
        case 2u:
          if ( (unsigned __int8)v9 != 16 )
            goto LABEL_43;
          v5 |= 2u;
          v22 = (google::protobuf::internal *)((char *)v8 + 1);
          v23 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_32;
          v24 = *(char *)v22;
          v23 = (const char *)((unsigned int)v23 + ((unsigned __int8)v24 << 7) - 128);
          if ( v24 < 0 )
          {
            v38 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v23, (unsigned int)v8);
            v44 = v38;
            *(_BYTE *)(a1 + 73) = v39 != 0;
            if ( !v38 )
              goto LABEL_67;
          }
          else
          {
            v22 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_32:
            v44 = v22;
            *(_BYTE *)(a1 + 73) = v23 != 0LL;
          }
          goto LABEL_55;
        case 3u:
          if ( (unsigned __int8)v9 != 24 )
            goto LABEL_43;
          v5 |= 4u;
          v25 = (google::protobuf::internal *)((char *)v8 + 1);
          v26 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_37;
          v27 = *(char *)v25;
          v26 = (const char *)((unsigned int)v26 + ((unsigned __int8)v27 << 7) - 128);
          if ( v27 < 0 )
          {
            v40 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v26, (unsigned int)v8);
            v44 = v40;
            *(_BYTE *)(a1 + 74) = v41 != 0;
            if ( !v40 )
              goto LABEL_67;
          }
          else
          {
            v25 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_37:
            v44 = v25;
            *(_BYTE *)(a1 + 74) = v26 != 0LL;
          }
          goto LABEL_55;
        case 4u:
        case 5u:
        case 6u:
          goto LABEL_43;
        case 7u:
          if ( (unsigned __int8)v9 != 56 )
            goto LABEL_43;
          v5 |= 8u;
          v28 = (google::protobuf::internal *)((char *)v8 + 1);
          v29 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_42;
          v30 = *(char *)v28;
          v29 = (const char *)((unsigned int)v29 + ((unsigned __int8)v30 << 7) - 128);
          if ( v30 < 0 )
          {
            v42 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v29, (unsigned int)v8);
            v44 = v42;
            *(_BYTE *)(a1 + 75) = v43 != 0;
            if ( !v42 )
              goto LABEL_67;
          }
          else
          {
            v28 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_42:
            v44 = v28;
            *(_BYTE *)(a1 + 75) = v29 != 0LL;
          }
          goto LABEL_55;
        default:
          if ( (unsigned int)v9 >> 3 == 999 && (unsigned __int8)v9 == 58 )
          {
            v13 = (unsigned __int64)v8 - 2;
            while ( 1 )
            {
              v14 = (google::protobuf::internal *)(v13 + 2);
              v44 = (google::protobuf::internal *)(v13 + 2);
              v15 = *(int **)(a1 + 64);
              if ( !v15 )
                break;
              v16 = *(int *)(a1 + 56);
              v17 = *v15;
              if ( (int)v16 >= *v15 )
              {
                if ( v17 == *(_DWORD *)(a1 + 60) )
                {
LABEL_22:
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
                v14 = v44;
                goto LABEL_24;
              }
              *(_DWORD *)(a1 + 56) = v16 + 1;
              v18 = *(_QWORD *)&v15[2 * v16 + 2];
LABEL_24:
              v13 = sub_1000A773C(a3, v18, v14);
              v44 = (google::protobuf::internal *)v13;
              if ( !v13 )
                goto LABEL_67;
              if ( *(_QWORD *)a3 <= v13 || *(_WORD *)v13 != 16058 )
                goto LABEL_55;
            }
            v17 = *(_DWORD *)(a1 + 60);
            goto LABEL_22;
          }
LABEL_43:
          if ( (_DWORD)v9 )
            v31 = ((unsigned __int8)v9 & 7) == 4;
          else
            v31 = 1;
          if ( v31 )
          {
            *(_DWORD *)(a3 + 80) = (_DWORD)v9 - 1;
            goto LABEL_2;
          }
          v32 = (unsigned int)v9;
          if ( (unsigned int)v9 >> 6 < 0x7D )
          {
            if ( (*v7 & 1) != 0 )
              v35 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
            else
              v35 = sub_10003A0B4(a1 + 8);
            v33 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v32, v35);
          }
          else
          {
            v33 = (google::protobuf::internal *)google::protobuf::internal::ExtensionSet::ParseField(
                                                  a1 + 16,
                                                  (unsigned int)v9);
          }
          v44 = v33;
          if ( !v33 )
          {
LABEL_67:
            v44 = 0LL;
            goto LABEL_2;
          }
LABEL_55:
          if ( (sub_10003A040(a3, &v44, *(unsigned int *)(a3 + 92)) & 1) != 0 )
            goto LABEL_2;
          break;
      }
    }
  }
LABEL_2:
  *(_DWORD *)(a1 + 40) |= v5;
  return v44;
}