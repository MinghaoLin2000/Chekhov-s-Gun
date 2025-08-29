__ZN3TSP27LargeLazyObjectArraySegment14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::LargeLazyObjectArraySegment::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v6; // x22
  google::protobuf::internal *v7; // x2
  unsigned int v8; // w23
  unsigned int v9; // w9
  bool v11; // zf
  unsigned __int64 v12; // x1
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
  __int64 v23; // x1
  _QWORD *v24; // x0
  __int64 v25; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v27; // w1
  google::protobuf::internal *v28; // [xsp+8h] [xbp-38h] BYREF

  v28 = a2;
  if ( (sub_10003A040(a3, &v28, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v6 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v7 = (google::protobuf::internal *)((char *)v28 + 1);
      v8 = *(unsigned __int8 *)v28;
      if ( (*(char *)v28 & 0x80000000) == 0 )
        goto LABEL_7;
      v9 = v8 + (*(unsigned __int8 *)v7 << 7);
      v8 = v9 - 128;
      if ( (*(char *)v7 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v28,
                                                    (const char *)(v9 - 128),
                                                    (unsigned int)v7);
      v28 = TagFallback;
      if ( !TagFallback )
        return 0LL;
      v7 = TagFallback;
      v8 = v27;
LABEL_8:
      if ( v8 >> 3 == 2 )
      {
        if ( (unsigned __int8)v8 != 18 )
          goto LABEL_13;
        v14 = (unsigned __int64)v7 - 1;
        while ( 2 )
        {
          v15 = (google::protobuf::internal *)(v14 + 1);
          v28 = (google::protobuf::internal *)(v14 + 1);
          v16 = *(int **)(a1 + 40);
          if ( v16 )
          {
            v17 = *(int *)(a1 + 32);
            v18 = *v16;
            if ( (int)v17 < *v16 )
            {
              *(_DWORD *)(a1 + 32) = v17 + 1;
              v19 = *(_QWORD *)&v16[2 * v17 + 2];
              goto LABEL_29;
            }
            if ( v18 == *(_DWORD *)(a1 + 36) )
            {
LABEL_27:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 24),
                v18 + 1);
              v16 = *(int **)(a1 + 40);
              v18 = *v16;
            }
            *v16 = v18 + 1;
            v20 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(*(_QWORD *)(a1 + 24));
            LODWORD(v19) = v20;
            v21 = *(_QWORD *)(a1 + 40);
            v22 = *(int *)(a1 + 32);
            *(_DWORD *)(a1 + 32) = v22 + 1;
            *(_QWORD *)(v21 + 8 * v22 + 8) = v20;
            v15 = v28;
LABEL_29:
            v14 = sub_100038B88(a3, v19, v15);
            v28 = (google::protobuf::internal *)v14;
            if ( !v14 )
              return 0LL;
            if ( *(_QWORD *)a3 <= v14 || *(_BYTE *)v14 != 18 )
              goto LABEL_39;
            continue;
          }
          break;
        }
        v18 = *(_DWORD *)(a1 + 36);
        goto LABEL_27;
      }
      if ( v8 >> 3 == 1 && (unsigned __int8)v8 == 10 )
      {
        *(_DWORD *)(a1 + 16) |= 1u;
        v23 = *(_QWORD *)(a1 + 48);
        if ( !v23 )
        {
          v24 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
          if ( (*v6 & 1) != 0 )
            v24 = (_QWORD *)*v24;
          v25 = google::protobuf::Arena::CreateMaybeMessage<TSP::LargeArraySegment>(v24);
          LODWORD(v23) = v25;
          *(_QWORD *)(a1 + 48) = v25;
          v7 = v28;
        }
        v13 = (google::protobuf::internal *)sub_10006E600(a3, v23, v7);
        goto LABEL_38;
      }
LABEL_13:
      if ( v8 )
        v11 = (v8 & 7) == 4;
      else
        v11 = 1;
      if ( v11 )
      {
        *(_DWORD *)(a3 + 80) = v8 - 1;
        return v28;
      }
      if ( (*v6 & 1) != 0 )
        v12 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
      else
        v12 = sub_10003A0B4(a1 + 8);
      v13 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v12);
LABEL_38:
      v28 = v13;
      if ( !v13 )
        return 0LL;
LABEL_39:
      if ( (sub_10003A040(a3, &v28, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        return v28;
    }
    v7 = (google::protobuf::internal *)((char *)v28 + 2);
LABEL_7:
    v28 = v7;
    goto LABEL_8;
  }
  return v28;
}