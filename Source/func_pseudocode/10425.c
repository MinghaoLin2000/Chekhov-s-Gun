__ZN3TSP15SparseUUIDArray14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::SparseUUIDArray::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w24
  _QWORD *v7; // x22
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w23
  unsigned int v10; // w9
  bool v12; // zf
  unsigned __int64 v13; // x1
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
  google::protobuf::internal *TagFallback; // x0
  unsigned int v27; // w1
  google::protobuf::internal *v28; // x0
  int v29; // w1
  google::protobuf::internal *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v30, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v30 + 1);
      v9 = *(unsigned __int8 *)v30;
      if ( (*(char *)v30 & 0x80000000) == 0 )
        goto LABEL_7;
      v10 = v9 + (*(unsigned __int8 *)v8 << 7);
      v9 = v10 - 128;
      if ( (*(char *)v8 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v30,
                                                    (const char *)(v10 - 128),
                                                    (unsigned int)v8);
      v30 = TagFallback;
      if ( !TagFallback )
        goto LABEL_46;
      v8 = TagFallback;
      v9 = v27;
LABEL_8:
      if ( v9 >> 3 == 2 )
      {
        if ( (unsigned __int8)v9 != 18 )
        {
LABEL_13:
          if ( v9 )
            v12 = (v9 & 7) == 4;
          else
            v12 = 1;
          if ( v12 )
          {
            *(_DWORD *)(a3 + 80) = v9 - 1;
            goto LABEL_2;
          }
          if ( (*v7 & 1) != 0 )
            v13 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
          else
            v13 = sub_10003A0B4(a1 + 8);
          v30 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v13);
          if ( !v30 )
          {
LABEL_46:
            v30 = 0LL;
            goto LABEL_2;
          }
          goto LABEL_38;
        }
        v14 = (unsigned __int64)v8 - 1;
        while ( 2 )
        {
          v15 = (google::protobuf::internal *)(v14 + 1);
          v30 = (google::protobuf::internal *)(v14 + 1);
          v16 = *(int **)(a1 + 40);
          if ( v16 )
          {
            v17 = *(int *)(a1 + 32);
            v18 = *v16;
            if ( (int)v17 < *v16 )
            {
              *(_DWORD *)(a1 + 32) = v17 + 1;
              v19 = *(_QWORD *)&v16[2 * v17 + 2];
              goto LABEL_30;
            }
            if ( v18 == *(_DWORD *)(a1 + 36) )
            {
LABEL_28:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 24),
                v18 + 1);
              v16 = *(int **)(a1 + 40);
              v18 = *v16;
            }
            *v16 = v18 + 1;
            v20 = google::protobuf::Arena::CreateMaybeMessage<TSP::SparseUUIDArray_Entry>(*(_QWORD *)(a1 + 24));
            LODWORD(v19) = v20;
            v21 = *(_QWORD *)(a1 + 40);
            v22 = *(int *)(a1 + 32);
            *(_DWORD *)(a1 + 32) = v22 + 1;
            *(_QWORD *)(v21 + 8 * v22 + 8) = v20;
            v15 = v30;
LABEL_30:
            v14 = sub_10006897C(a3, v19, v15);
            v30 = (google::protobuf::internal *)v14;
            if ( !v14 )
              goto LABEL_46;
            if ( *(_QWORD *)a3 <= v14 || *(_BYTE *)v14 != 18 )
              goto LABEL_38;
            continue;
          }
          break;
        }
        v18 = *(_DWORD *)(a1 + 36);
        goto LABEL_28;
      }
      if ( v9 >> 3 != 1 || (unsigned __int8)v9 != 8 )
        goto LABEL_13;
      v23 = (google::protobuf::internal *)((char *)v8 + 1);
      LODWORD(v24) = *(unsigned __int8 *)v8;
      if ( (*(char *)v8 & 0x80000000) == 0 )
        goto LABEL_37;
      v25 = *(char *)v23;
      v24 = (const char *)((unsigned int)v24 + ((unsigned __int8)v25 << 7) - 128);
      if ( (v25 & 0x80000000) == 0 )
      {
        v23 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_37:
        v30 = v23;
        *(_DWORD *)(a1 + 48) = (_DWORD)v24;
        v5 = 1;
        goto LABEL_38;
      }
      v28 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow32(v8, v24, (unsigned int)v8);
      v30 = v28;
      *(_DWORD *)(a1 + 48) = v29;
      v5 = 1;
      if ( !v28 )
        goto LABEL_46;
LABEL_38:
      if ( (sub_10003A040(a3, &v30, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        goto LABEL_2;
    }
    v8 = (google::protobuf::internal *)((char *)v30 + 2);
LABEL_7:
    v30 = v8;
    goto LABEL_8;
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v30;
}