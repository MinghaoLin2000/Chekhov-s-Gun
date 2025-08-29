__ZN6google8protobuf17GeneratedCodeInfo14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::GeneratedCodeInfo::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v5; // x21
  google::protobuf::internal *v6; // x2
  unsigned int v7; // w23
  unsigned int v8; // w9
  bool v9; // zf
  unsigned __int64 v10; // x1
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
  google::protobuf::internal *v23; // [xsp+8h] [xbp-38h] BYREF

  v23 = a2;
  if ( (sub_10003A040(a3, &v23, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v5 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v6 = (google::protobuf::internal *)((char *)v23 + 1);
      v7 = *(unsigned __int8 *)v23;
      if ( (*(char *)v23 & 0x80000000) == 0 )
        goto LABEL_6;
      v8 = v7 + (*(unsigned __int8 *)v6 << 7);
      v7 = v8 - 128;
      if ( (*(char *)v6 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v23,
                                                    (const char *)(v8 - 128),
                                                    (unsigned int)v6);
      v23 = TagFallback;
      if ( !TagFallback )
        return 0LL;
      v6 = TagFallback;
      v7 = v21;
LABEL_7:
      if ( v7 == 10 )
      {
        v11 = (unsigned __int64)v6 - 1;
        while ( 1 )
        {
          v12 = (google::protobuf::internal *)(v11 + 1);
          v23 = (google::protobuf::internal *)(v11 + 1);
          v13 = *(int **)(a1 + 32);
          if ( !v13 )
            break;
          v14 = *(int *)(a1 + 24);
          v15 = *v13;
          if ( (int)v14 >= *v13 )
          {
            if ( v15 == *(_DWORD *)(a1 + 28) )
            {
LABEL_22:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 16),
                v15 + 1);
              v13 = *(int **)(a1 + 32);
              v15 = *v13;
            }
            *v13 = v15 + 1;
            v17 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::GeneratedCodeInfo_Annotation>(*(_QWORD *)(a1 + 16));
            LODWORD(v16) = v17;
            v18 = *(_QWORD *)(a1 + 32);
            v19 = *(int *)(a1 + 24);
            *(_DWORD *)(a1 + 24) = v19 + 1;
            *(_QWORD *)(v18 + 8 * v19 + 8) = v17;
            v12 = v23;
            goto LABEL_24;
          }
          *(_DWORD *)(a1 + 24) = v14 + 1;
          v16 = *(_QWORD *)&v13[2 * v14 + 2];
LABEL_24:
          v11 = sub_1000B7390(a3, v16, v12);
          v23 = (google::protobuf::internal *)v11;
          if ( !v11 )
            return 0LL;
          if ( *(_QWORD *)a3 <= v11 || *(_BYTE *)v11 != 10 )
            goto LABEL_27;
        }
        v15 = *(_DWORD *)(a1 + 28);
        goto LABEL_22;
      }
      if ( v7 )
        v9 = (v7 & 7) == 4;
      else
        v9 = 1;
      if ( v9 )
      {
        *(_DWORD *)(a3 + 80) = v7 - 1;
        return v23;
      }
      if ( (*v5 & 1) != 0 )
        v10 = (*v5 & 0xFFFFFFFFFFFFFFFELL) + 8;
      else
        v10 = sub_10003A0B4(a1 + 8);
      v23 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v7, v10);
      if ( !v23 )
        return 0LL;
LABEL_27:
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