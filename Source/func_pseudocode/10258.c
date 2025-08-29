__ZN3TSP12Path_Element14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::Path_Element::_InternalParse(
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
  unsigned __int64 v23; // x23
  int v24; // w8
  int v25; // w9
  google::protobuf::internal *TagFallback; // x0
  unsigned int v27; // w1
  unsigned __int64 v28; // x1
  google::protobuf::UnknownFieldSet *v29; // x0
  google::protobuf::internal *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = a2;
  if ( (sub_10003A040(a3, &v30, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v6 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v7 = (google::protobuf::internal *)((char *)v30 + 1);
      v8 = *(unsigned __int8 *)v30;
      if ( (*(char *)v30 & 0x80000000) == 0 )
        goto LABEL_7;
      v9 = v8 + (*(unsigned __int8 *)v7 << 7);
      v8 = v9 - 128;
      if ( (*(char *)v7 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v30,
                                                    (const char *)(v9 - 128),
                                                    (unsigned int)v7);
      v30 = TagFallback;
      if ( !TagFallback )
        return 0LL;
      v7 = TagFallback;
      v8 = v27;
LABEL_8:
      if ( v8 >> 3 == 2 )
      {
        if ( (unsigned __int8)v8 != 18 )
          goto LABEL_13;
        v13 = (unsigned __int64)v7 - 1;
        while ( 2 )
        {
          v14 = (google::protobuf::internal *)(v13 + 1);
          v30 = (google::protobuf::internal *)(v13 + 1);
          v15 = *(int **)(a1 + 40);
          if ( v15 )
          {
            v16 = *(int *)(a1 + 32);
            v17 = *v15;
            if ( (int)v16 < *v15 )
            {
              *(_DWORD *)(a1 + 32) = v16 + 1;
              v18 = *(_QWORD *)&v15[2 * v16 + 2];
              goto LABEL_30;
            }
            if ( v17 == *(_DWORD *)(a1 + 36) )
            {
LABEL_28:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 24),
                v17 + 1);
              v15 = *(int **)(a1 + 40);
              v17 = *v15;
            }
            *v15 = v17 + 1;
            v19 = google::protobuf::Arena::CreateMaybeMessage<TSP::Point>(*(_QWORD *)(a1 + 24));
            LODWORD(v18) = v19;
            v20 = *(_QWORD *)(a1 + 40);
            v21 = *(int *)(a1 + 32);
            *(_DWORD *)(a1 + 32) = v21 + 1;
            *(_QWORD *)(v20 + 8 * v21 + 8) = v19;
            v14 = v30;
LABEL_30:
            v13 = sub_10005F1EC(a3, v18, v14);
            v30 = (google::protobuf::internal *)v13;
            if ( !v13 )
              return 0LL;
            if ( *(_QWORD *)a3 <= v13 || *(_BYTE *)v13 != 18 )
              goto LABEL_40;
            continue;
          }
          break;
        }
        v17 = *(_DWORD *)(a1 + 36);
        goto LABEL_28;
      }
      if ( v8 >> 3 == 1 && (unsigned __int8)v8 == 8 )
      {
        v22 = (google::protobuf::internal *)((char *)v7 + 1);
        v23 = *(unsigned __int8 *)v7;
        if ( (*(char *)v7 & 0x80000000) == 0 )
          goto LABEL_37;
        v24 = *(char *)v22;
        v25 = v23 + ((unsigned __int8)v24 << 7);
        v23 = (unsigned int)(v25 - 128);
        if ( v24 < 0 )
        {
          v30 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                v7,
                                                (const char *)(unsigned int)(v25 - 128),
                                                (unsigned int)v7);
          if ( !v30 )
            return 0LL;
          v23 = v28;
        }
        else
        {
          v22 = (google::protobuf::internal *)((char *)v7 + 2);
LABEL_37:
          v30 = v22;
        }
        if ( (unsigned int)(v23 - 1) > 4 )
        {
          if ( (*v6 & 1) != 0 )
            v29 = (google::protobuf::UnknownFieldSet *)((*v6 & 0xFFFFFFFFFFFFFFFELL) + 8);
          else
            v29 = (google::protobuf::UnknownFieldSet *)sub_10003A0B4(a1 + 8);
          google::protobuf::UnknownFieldSet::AddVarint(v29, 1, v23);
        }
        else
        {
          *(_DWORD *)(a1 + 16) |= 1u;
          *(_DWORD *)(a1 + 48) = v23;
        }
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
        return v30;
      }
      if ( (*v6 & 1) != 0 )
        v12 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
      else
        v12 = sub_10003A0B4(a1 + 8);
      v30 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v12);
      if ( !v30 )
        return 0LL;
LABEL_40:
      if ( (sub_10003A040(a3, &v30, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        return v30;
    }
    v7 = (google::protobuf::internal *)((char *)v30 + 2);
LABEL_7:
    v30 = v7;
    goto LABEL_8;
  }
  return v30;
}