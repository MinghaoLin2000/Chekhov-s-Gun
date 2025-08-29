__ZN6google8protobuf21ExtensionRangeOptions14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::ExtensionRangeOptions::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v5; // x21
  google::protobuf::internal *v6; // x2
  const char *v7; // x1
  bool v8; // zf
  __int64 v9; // x25
  google::protobuf::internal *v10; // x0
  unsigned __int64 v11; // x0
  google::protobuf::internal *v12; // x2
  int *v13; // x8
  __int64 v14; // x10
  int v15; // w9
  __int64 v16; // x1
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x9
  unsigned __int64 v20; // x1
  google::protobuf::internal *TagFallback; // x0
  google::protobuf::internal *v23; // [xsp+8h] [xbp-58h] BYREF

  v23 = a2;
  if ( (sub_10003A040(a3, &v23, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v5 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v6 = (google::protobuf::internal *)((char *)v23 + 1);
      LODWORD(v7) = *(unsigned __int8 *)v23;
      if ( (*(char *)v23 & 0x80000000) == 0 )
        goto LABEL_6;
      v7 = (const char *)((unsigned int)v7 + (*(unsigned __int8 *)v6 << 7) - 128);
      if ( (*(char *)v6 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(v23, v7, (unsigned int)v6);
      v23 = TagFallback;
      if ( !TagFallback )
        return 0LL;
      v6 = TagFallback;
LABEL_7:
      if ( (_DWORD)v7 == 7994 )
      {
        v11 = (unsigned __int64)v6 - 2;
        while ( 1 )
        {
          v12 = (google::protobuf::internal *)(v11 + 2);
          v23 = (google::protobuf::internal *)(v11 + 2);
          v13 = *(int **)(a1 + 56);
          if ( !v13 )
            break;
          v14 = *(int *)(a1 + 48);
          v15 = *v13;
          if ( (int)v14 >= *v13 )
          {
            if ( v15 == *(_DWORD *)(a1 + 52) )
            {
LABEL_20:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 40),
                v15 + 1);
              v13 = *(int **)(a1 + 56);
              v15 = *v13;
            }
            *v13 = v15 + 1;
            v17 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::UninterpretedOption>(*(_QWORD *)(a1 + 40));
            LODWORD(v16) = v17;
            v18 = *(_QWORD *)(a1 + 56);
            v19 = *(int *)(a1 + 48);
            *(_DWORD *)(a1 + 48) = v19 + 1;
            *(_QWORD *)(v18 + 8 * v19 + 8) = v17;
            v12 = v23;
            goto LABEL_22;
          }
          *(_DWORD *)(a1 + 48) = v14 + 1;
          v16 = *(_QWORD *)&v13[2 * v14 + 2];
LABEL_22:
          v11 = sub_1000A773C(a3, v16, v12);
          v23 = (google::protobuf::internal *)v11;
          if ( !v11 )
            return 0LL;
          if ( *(_QWORD *)a3 <= v11 || *(_WORD *)v11 != 16058 )
            goto LABEL_30;
        }
        v15 = *(_DWORD *)(a1 + 52);
        goto LABEL_20;
      }
      if ( (_DWORD)v7 )
        v8 = ((unsigned __int8)v7 & 7) == 4;
      else
        v8 = 1;
      if ( v8 )
      {
        *(_DWORD *)(a3 + 80) = (_DWORD)v7 - 1;
        return v23;
      }
      v9 = (unsigned int)v7;
      if ( (unsigned int)v7 >> 6 < 0x7D )
      {
        if ( (*v5 & 1) != 0 )
          v20 = (*v5 & 0xFFFFFFFFFFFFFFFELL) + 8;
        else
          v20 = sub_10003A0B4(a1 + 8);
        v10 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v20);
      }
      else
      {
        v10 = (google::protobuf::internal *)google::protobuf::internal::ExtensionSet::ParseField(
                                              a1 + 16,
                                              (unsigned int)v7);
      }
      v23 = v10;
      if ( !v10 )
        return 0LL;
LABEL_30:
      if ( (unsigned int)sub_10003A040(a3, &v23, *(unsigned int *)(a3 + 92)) )
        return v23;
    }
    v6 = (google::protobuf::internal *)((char *)v23 + 2);
LABEL_6:
    v23 = v6;
    goto LABEL_7;
  }
  return v23;
}