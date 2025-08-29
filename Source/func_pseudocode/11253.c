__ZN6google8protobuf11EnumOptions14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::EnumOptions::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w26
  _QWORD *v7; // x22
  google::protobuf::internal *v8; // x2
  const char *v9; // x1
  unsigned int v10; // w8
  bool v12; // zf
  __int64 v13; // x25
  google::protobuf::internal *v14; // x0
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
  unsigned __int64 v31; // x1
  google::protobuf::internal *v32; // x0
  __int64 v33; // x1
  google::protobuf::internal *v34; // x0
  __int64 v35; // x1
  google::protobuf::internal *v36; // [xsp+8h] [xbp-58h] BYREF

  v36 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v36, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v36 + 1);
      LODWORD(v9) = *(unsigned __int8 *)v36;
      if ( (*(char *)v36 & 0x80000000) == 0 )
        goto LABEL_7;
      v9 = (const char *)((unsigned int)v9 + (*(unsigned __int8 *)v8 << 7) - 128);
      if ( (*(char *)v8 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(v36, v9, (unsigned int)v8);
      v36 = TagFallback;
      if ( !TagFallback )
        goto LABEL_56;
      v8 = TagFallback;
LABEL_8:
      v10 = (unsigned int)v9 >> 3;
      if ( (unsigned int)v9 >> 3 == 999 )
      {
        if ( (unsigned __int8)v9 != 58 )
        {
LABEL_14:
          if ( (_DWORD)v9 )
            v12 = ((unsigned __int8)v9 & 7) == 4;
          else
            v12 = 1;
          if ( v12 )
          {
            *(_DWORD *)(a3 + 80) = (_DWORD)v9 - 1;
            goto LABEL_2;
          }
          v13 = (unsigned int)v9;
          if ( (unsigned int)v9 >> 6 < 0x7D )
          {
            if ( (*v7 & 1) != 0 )
              v31 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
            else
              v31 = sub_10003A0B4(a1 + 8);
            v14 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v13, v31);
          }
          else
          {
            v14 = (google::protobuf::internal *)google::protobuf::internal::ExtensionSet::ParseField(
                                                  a1 + 16,
                                                  (unsigned int)v9);
          }
          v36 = v14;
          if ( !v14 )
          {
LABEL_56:
            v36 = 0LL;
            goto LABEL_2;
          }
          goto LABEL_48;
        }
        v15 = (unsigned __int64)v8 - 2;
        while ( 2 )
        {
          v16 = (google::protobuf::internal *)(v15 + 2);
          v36 = (google::protobuf::internal *)(v15 + 2);
          v17 = *(int **)(a1 + 64);
          if ( v17 )
          {
            v18 = *(int *)(a1 + 56);
            v19 = *v17;
            if ( (int)v18 < *v17 )
            {
              *(_DWORD *)(a1 + 56) = v18 + 1;
              v20 = *(_QWORD *)&v17[2 * v18 + 2];
              goto LABEL_29;
            }
            if ( v19 == *(_DWORD *)(a1 + 60) )
            {
LABEL_27:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 48),
                v19 + 1);
              v17 = *(int **)(a1 + 64);
              v19 = *v17;
            }
            *v17 = v19 + 1;
            v21 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::UninterpretedOption>(*(_QWORD *)(a1 + 48));
            LODWORD(v20) = v21;
            v22 = *(_QWORD *)(a1 + 64);
            v23 = *(int *)(a1 + 56);
            *(_DWORD *)(a1 + 56) = v23 + 1;
            *(_QWORD *)(v22 + 8 * v23 + 8) = v21;
            v16 = v36;
LABEL_29:
            v15 = sub_1000A773C(a3, v20, v16);
            v36 = (google::protobuf::internal *)v15;
            if ( !v15 )
              goto LABEL_56;
            if ( *(_QWORD *)a3 <= v15 || *(_WORD *)v15 != 16058 )
              goto LABEL_48;
            continue;
          }
          break;
        }
        v19 = *(_DWORD *)(a1 + 60);
        goto LABEL_27;
      }
      if ( v10 == 3 )
      {
        if ( (unsigned __int8)v9 != 24 )
          goto LABEL_14;
        v5 |= 2u;
        v24 = (google::protobuf::internal *)((char *)v8 + 1);
        v25 = (const char *)*(unsigned __int8 *)v8;
        if ( (*(char *)v8 & 0x80000000) == 0 )
          goto LABEL_37;
        v26 = *(char *)v24;
        v25 = (const char *)((unsigned int)v25 + ((unsigned __int8)v26 << 7) - 128);
        if ( (v26 & 0x80000000) == 0 )
        {
          v24 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_37:
          v36 = v24;
          *(_BYTE *)(a1 + 73) = v25 != 0LL;
          goto LABEL_48;
        }
        v32 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v25, (unsigned int)v8);
        v36 = v32;
        *(_BYTE *)(a1 + 73) = v33 != 0;
        if ( !v32 )
          goto LABEL_56;
      }
      else
      {
        if ( v10 != 2 || (unsigned __int8)v9 != 16 )
          goto LABEL_14;
        v5 |= 1u;
        v27 = (google::protobuf::internal *)((char *)v8 + 1);
        v28 = (const char *)*(unsigned __int8 *)v8;
        if ( (*(char *)v8 & 0x80000000) == 0 )
          goto LABEL_41;
        v29 = *(char *)v27;
        v28 = (const char *)((unsigned int)v28 + ((unsigned __int8)v29 << 7) - 128);
        if ( (v29 & 0x80000000) == 0 )
        {
          v27 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_41:
          v36 = v27;
          *(_BYTE *)(a1 + 72) = v28 != 0LL;
          goto LABEL_48;
        }
        v34 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v28, (unsigned int)v8);
        v36 = v34;
        *(_BYTE *)(a1 + 72) = v35 != 0;
        if ( !v34 )
          goto LABEL_56;
      }
LABEL_48:
      if ( (sub_10003A040(a3, &v36, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        goto LABEL_2;
    }
    v8 = (google::protobuf::internal *)((char *)v36 + 2);
LABEL_7:
    v36 = v8;
    goto LABEL_8;
  }
LABEL_2:
  *(_DWORD *)(a1 + 40) |= v5;
  return v36;
}