__ZN3TSP19UUIDMultiMapArchive14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::UUIDMultiMapArchive::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v6; // x23
  google::protobuf::internal *v7; // x2
  unsigned int v8; // w24
  unsigned int v9; // w9
  bool v11; // zf
  unsigned __int64 v12; // x1
  unsigned __int64 v13; // x0
  google::protobuf::internal *v14; // x2
  int *v15; // x8
  __int64 v16; // x10
  int v17; // w9
  __int64 v18; // x1
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  unsigned __int64 v22; // x0
  google::protobuf::internal *v23; // x2
  int *v24; // x8
  __int64 v25; // x10
  int v26; // w9
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  google::protobuf::internal *TagFallback; // x0
  unsigned int v32; // w1
  google::protobuf::internal *v33; // [xsp+8h] [xbp-38h] BYREF

  v33 = a2;
  if ( (sub_10003A040(a3, &v33, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v6 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v7 = (google::protobuf::internal *)((char *)v33 + 1);
      v8 = *(unsigned __int8 *)v33;
      if ( (*(char *)v33 & 0x80000000) == 0 )
        goto LABEL_7;
      v9 = v8 + (*(unsigned __int8 *)v7 << 7);
      v8 = v9 - 128;
      if ( (*(char *)v7 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v33,
                                                    (const char *)(v9 - 128),
                                                    (unsigned int)v7);
      v33 = TagFallback;
      if ( !TagFallback )
        return 0LL;
      v7 = TagFallback;
      v8 = v32;
LABEL_8:
      if ( v8 >> 3 == 2 )
      {
        if ( (unsigned __int8)v8 != 18 )
          goto LABEL_13;
        v13 = (unsigned __int64)v7 - 1;
        while ( 2 )
        {
          v14 = (google::protobuf::internal *)(v13 + 1);
          v33 = (google::protobuf::internal *)(v13 + 1);
          v15 = *(int **)(a1 + 56);
          if ( v15 )
          {
            v16 = *(int *)(a1 + 48);
            v17 = *v15;
            if ( (int)v16 < *v15 )
            {
              *(_DWORD *)(a1 + 48) = v16 + 1;
              v18 = *(_QWORD *)&v15[2 * v16 + 2];
              goto LABEL_30;
            }
            if ( v17 == *(_DWORD *)(a1 + 52) )
            {
LABEL_28:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 40),
                v17 + 1);
              v15 = *(int **)(a1 + 56);
              v17 = *v15;
            }
            *v15 = v17 + 1;
            v19 = google::protobuf::Arena::CreateMaybeMessage<TSP::UUID>(*(_QWORD *)(a1 + 40));
            LODWORD(v18) = v19;
            v20 = *(_QWORD *)(a1 + 56);
            v21 = *(int *)(a1 + 48);
            *(_DWORD *)(a1 + 48) = v21 + 1;
            *(_QWORD *)(v20 + 8 * v21 + 8) = v19;
            v14 = v33;
LABEL_30:
            v13 = sub_1000443E4(a3, v18, v14);
            v33 = (google::protobuf::internal *)v13;
            if ( !v13 )
              return 0LL;
            if ( *(_QWORD *)a3 <= v13 || *(_BYTE *)v13 != 18 )
              goto LABEL_45;
            continue;
          }
          break;
        }
        v17 = *(_DWORD *)(a1 + 52);
        goto LABEL_28;
      }
      if ( v8 >> 3 == 1 && (unsigned __int8)v8 == 10 )
      {
        v22 = (unsigned __int64)v7 - 1;
        while ( 1 )
        {
          v23 = (google::protobuf::internal *)(v22 + 1);
          v33 = (google::protobuf::internal *)(v22 + 1);
          v24 = *(int **)(a1 + 32);
          if ( !v24 )
            break;
          v25 = *(int *)(a1 + 24);
          v26 = *v24;
          if ( (int)v25 >= *v24 )
          {
            if ( v26 == *(_DWORD *)(a1 + 28) )
            {
LABEL_40:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 16),
                v26 + 1);
              v24 = *(int **)(a1 + 32);
              v26 = *v24;
            }
            *v24 = v26 + 1;
            v28 = google::protobuf::Arena::CreateMaybeMessage<TSP::UUID>(*(_QWORD *)(a1 + 16));
            LODWORD(v27) = v28;
            v29 = *(_QWORD *)(a1 + 32);
            v30 = *(int *)(a1 + 24);
            *(_DWORD *)(a1 + 24) = v30 + 1;
            *(_QWORD *)(v29 + 8 * v30 + 8) = v28;
            v23 = v33;
            goto LABEL_42;
          }
          *(_DWORD *)(a1 + 24) = v25 + 1;
          v27 = *(_QWORD *)&v24[2 * v25 + 2];
LABEL_42:
          v22 = sub_1000443E4(a3, v27, v23);
          v33 = (google::protobuf::internal *)v22;
          if ( !v22 )
            return 0LL;
          if ( *(_QWORD *)a3 <= v22 || *(_BYTE *)v22 != 10 )
            goto LABEL_45;
        }
        v26 = *(_DWORD *)(a1 + 28);
        goto LABEL_40;
      }
LABEL_13:
      if ( v8 )
        v11 = (v8 & 7) == 4;
      else
        v11 = 1;
      if ( v11 )
      {
        *(_DWORD *)(a3 + 80) = v8 - 1;
        return v33;
      }
      if ( (*v6 & 1) != 0 )
        v12 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
      else
        v12 = sub_10003A0B4(a1 + 8);
      v33 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v12);
      if ( !v33 )
        return 0LL;
LABEL_45:
      if ( (unsigned int)sub_10003A040(a3, &v33, *(unsigned int *)(a3 + 92)) )
        return v33;
    }
    v7 = (google::protobuf::internal *)((char *)v33 + 2);
LABEL_7:
    v33 = v7;
    goto LABEL_8;
  }
  return v33;
}