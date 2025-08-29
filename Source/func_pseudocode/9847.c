__ZN3TSP14EncryptionInfo14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::EncryptionInfo::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w24
  _QWORD *v7; // x22
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w23
  unsigned int v10; // w9
  unsigned int v11; // w8
  bool v13; // zf
  unsigned __int64 v14; // x1
  unsigned __int64 v15; // x0
  google::protobuf::internal *v16; // x2
  int *v17; // x8
  __int64 v18; // x10
  int v19; // w9
  __int64 v20; // x1
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  google::protobuf::internal *v24; // x8
  const char *v25; // x1
  int v26; // w8
  google::protobuf::internal *v27; // x8
  const char *v28; // x1
  int v29; // w8
  google::protobuf::internal *TagFallback; // x0
  unsigned int v31; // w1
  google::protobuf::internal *v32; // x0
  __int64 v33; // x1
  google::protobuf::internal *v34; // x0
  __int64 v35; // x1
  google::protobuf::internal *v36; // [xsp+8h] [xbp-38h] BYREF

  v36 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v36, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v36 + 1);
      v9 = *(unsigned __int8 *)v36;
      if ( (*(char *)v36 & 0x80000000) == 0 )
        goto LABEL_7;
      v10 = v9 + (*(unsigned __int8 *)v8 << 7);
      v9 = v10 - 128;
      if ( (*(char *)v8 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v36,
                                                    (const char *)(v10 - 128),
                                                    (unsigned int)v8);
      v36 = TagFallback;
      if ( !TagFallback )
        goto LABEL_54;
      v8 = TagFallback;
      v9 = v31;
LABEL_8:
      v11 = v9 >> 3;
      if ( v9 >> 3 == 3 )
      {
        if ( (unsigned __int8)v9 != 26 )
        {
LABEL_14:
          if ( v9 )
            v13 = (v9 & 7) == 4;
          else
            v13 = 1;
          if ( v13 )
          {
            *(_DWORD *)(a3 + 80) = v9 - 1;
            goto LABEL_2;
          }
          if ( (*v7 & 1) != 0 )
            v14 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
          else
            v14 = sub_10003A0B4(a1 + 8);
          v36 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v14);
          if ( !v36 )
          {
LABEL_54:
            v36 = 0LL;
            goto LABEL_2;
          }
          goto LABEL_44;
        }
        v15 = (unsigned __int64)v8 - 1;
        while ( 2 )
        {
          v16 = (google::protobuf::internal *)(v15 + 1);
          v36 = (google::protobuf::internal *)(v15 + 1);
          v17 = *(int **)(a1 + 40);
          if ( v17 )
          {
            v18 = *(int *)(a1 + 32);
            v19 = *v17;
            if ( (int)v18 < *v17 )
            {
              *(_DWORD *)(a1 + 32) = v18 + 1;
              v20 = *(_QWORD *)&v17[2 * v18 + 2];
              goto LABEL_31;
            }
            if ( v19 == *(_DWORD *)(a1 + 36) )
            {
LABEL_29:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 24),
                v19 + 1);
              v17 = *(int **)(a1 + 40);
              v19 = *v17;
            }
            *v17 = v19 + 1;
            v21 = google::protobuf::Arena::CreateMaybeMessage<TSP::EncryptionBlockInfo>(*(_QWORD *)(a1 + 24));
            LODWORD(v20) = v21;
            v22 = *(_QWORD *)(a1 + 40);
            v23 = *(int *)(a1 + 32);
            *(_DWORD *)(a1 + 32) = v23 + 1;
            *(_QWORD *)(v22 + 8 * v23 + 8) = v21;
            v16 = v36;
LABEL_31:
            v15 = sub_10004C2E0(a3, v20, v16);
            v36 = (google::protobuf::internal *)v15;
            if ( !v15 )
              goto LABEL_54;
            if ( *(_QWORD *)a3 <= v15 || *(_BYTE *)v15 != 26 )
              goto LABEL_44;
            continue;
          }
          break;
        }
        v19 = *(_DWORD *)(a1 + 36);
        goto LABEL_29;
      }
      if ( v11 == 2 )
      {
        if ( (unsigned __int8)v9 != 16 )
          goto LABEL_14;
        v5 |= 2u;
        v24 = (google::protobuf::internal *)((char *)v8 + 1);
        v25 = (const char *)*(unsigned __int8 *)v8;
        if ( (*(char *)v8 & 0x80000000) == 0 )
          goto LABEL_39;
        v26 = *(char *)v24;
        v25 = (const char *)((unsigned int)v25 + ((unsigned __int8)v26 << 7) - 128);
        if ( (v26 & 0x80000000) == 0 )
        {
          v24 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_39:
          v36 = v24;
          *(_QWORD *)(a1 + 56) = v25;
          goto LABEL_44;
        }
        v32 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v25, (unsigned int)v8);
        v36 = v32;
        *(_QWORD *)(a1 + 56) = v33;
        if ( !v32 )
          goto LABEL_54;
      }
      else
      {
        if ( v11 != 1 || (unsigned __int8)v9 != 8 )
          goto LABEL_14;
        v5 |= 1u;
        v27 = (google::protobuf::internal *)((char *)v8 + 1);
        v28 = (const char *)*(unsigned __int8 *)v8;
        if ( (*(char *)v8 & 0x80000000) == 0 )
          goto LABEL_43;
        v29 = *(char *)v27;
        v28 = (const char *)((unsigned int)v28 + ((unsigned __int8)v29 << 7) - 128);
        if ( (v29 & 0x80000000) == 0 )
        {
          v27 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_43:
          v36 = v27;
          *(_QWORD *)(a1 + 48) = v28;
          goto LABEL_44;
        }
        v34 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v28, (unsigned int)v8);
        v36 = v34;
        *(_QWORD *)(a1 + 48) = v35;
        if ( !v34 )
          goto LABEL_54;
      }
LABEL_44:
      if ( (sub_10003A040(a3, &v36, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        goto LABEL_2;
    }
    v8 = (google::protobuf::internal *)((char *)v36 + 2);
LABEL_7:
    v36 = v8;
    goto LABEL_8;
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v36;
}