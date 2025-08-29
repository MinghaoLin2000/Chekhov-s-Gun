__ZN6google8protobuf16EnumValueOptions14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::EnumValueOptions::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w27
  _QWORD *v7; // x22
  google::protobuf::internal *v8; // x2
  const char *v9; // x1
  bool v11; // zf
  __int64 v12; // x25
  google::protobuf::internal *v13; // x0
  unsigned __int64 v14; // x0
  google::protobuf::internal *v15; // x2
  int *v16; // x8
  __int64 v17; // x10
  int v18; // w9
  __int64 v19; // x1
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  google::protobuf::internal *v23; // x8
  const char *v24; // x1
  int v25; // w8
  unsigned __int64 v26; // x1
  google::protobuf::internal *TagFallback; // x0
  google::protobuf::internal *v28; // x0
  __int64 v29; // x1
  google::protobuf::internal *v30; // [xsp+8h] [xbp-58h] BYREF

  v30 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v30, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v30 + 1);
      LODWORD(v9) = *(unsigned __int8 *)v30;
      if ( (*(char *)v30 & 0x80000000) == 0 )
        goto LABEL_7;
      v9 = (const char *)((unsigned int)v9 + (*(unsigned __int8 *)v8 << 7) - 128);
      if ( (*(char *)v8 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(v30, v9, (unsigned int)v8);
      v30 = TagFallback;
      if ( !TagFallback )
        goto LABEL_48;
      v8 = TagFallback;
LABEL_8:
      if ( (unsigned int)v9 >> 3 == 999 )
      {
        if ( (unsigned __int8)v9 != 58 )
        {
LABEL_13:
          if ( (_DWORD)v9 )
            v11 = ((unsigned __int8)v9 & 7) == 4;
          else
            v11 = 1;
          if ( v11 )
          {
            *(_DWORD *)(a3 + 80) = (_DWORD)v9 - 1;
            goto LABEL_2;
          }
          v12 = (unsigned int)v9;
          if ( (unsigned int)v9 >> 6 < 0x7D )
          {
            if ( (*v7 & 1) != 0 )
              v26 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
            else
              v26 = sub_10003A0B4(a1 + 8);
            v13 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v12, v26);
          }
          else
          {
            v13 = (google::protobuf::internal *)google::protobuf::internal::ExtensionSet::ParseField(
                                                  a1 + 16,
                                                  (unsigned int)v9);
          }
          v30 = v13;
          if ( !v13 )
          {
LABEL_48:
            v30 = 0LL;
            goto LABEL_2;
          }
          goto LABEL_40;
        }
        v14 = (unsigned __int64)v8 - 2;
        while ( 2 )
        {
          v15 = (google::protobuf::internal *)(v14 + 2);
          v30 = (google::protobuf::internal *)(v14 + 2);
          v16 = *(int **)(a1 + 64);
          if ( v16 )
          {
            v17 = *(int *)(a1 + 56);
            v18 = *v16;
            if ( (int)v17 < *v16 )
            {
              *(_DWORD *)(a1 + 56) = v17 + 1;
              v19 = *(_QWORD *)&v16[2 * v17 + 2];
              goto LABEL_28;
            }
            if ( v18 == *(_DWORD *)(a1 + 60) )
            {
LABEL_26:
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
            v15 = v30;
LABEL_28:
            v14 = sub_1000A773C(a3, v19, v15);
            v30 = (google::protobuf::internal *)v14;
            if ( !v14 )
              goto LABEL_48;
            if ( *(_QWORD *)a3 <= v14 || *(_WORD *)v14 != 16058 )
              goto LABEL_40;
            continue;
          }
          break;
        }
        v18 = *(_DWORD *)(a1 + 60);
        goto LABEL_26;
      }
      if ( (unsigned int)v9 >> 3 != 1 || (unsigned __int8)v9 != 8 )
        goto LABEL_13;
      v23 = (google::protobuf::internal *)((char *)v8 + 1);
      v24 = (const char *)*(unsigned __int8 *)v8;
      if ( (*(char *)v8 & 0x80000000) == 0 )
        goto LABEL_35;
      v25 = *(char *)v23;
      v24 = (const char *)((unsigned int)v24 + ((unsigned __int8)v25 << 7) - 128);
      if ( (v25 & 0x80000000) == 0 )
      {
        v23 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_35:
        v30 = v23;
        *(_BYTE *)(a1 + 72) = v24 != 0LL;
        v5 = 1;
        goto LABEL_40;
      }
      v28 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v24, (unsigned int)v8);
      v30 = v28;
      *(_BYTE *)(a1 + 72) = v29 != 0;
      v5 = 1;
      if ( !v28 )
        goto LABEL_48;
LABEL_40:
      if ( (sub_10003A040(a3, &v30, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        goto LABEL_2;
    }
    v8 = (google::protobuf::internal *)((char *)v30 + 2);
LABEL_7:
    v30 = v8;
    goto LABEL_8;
  }
LABEL_2:
  *(_DWORD *)(a1 + 40) |= v5;
  return v30;
}