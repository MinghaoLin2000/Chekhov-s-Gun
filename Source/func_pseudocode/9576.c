__ZN3TSP24DatabaseImageDataArchive14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::DatabaseImageDataArchive::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v6; // x21
  google::protobuf::internal *v7; // x2
  unsigned int v8; // w22
  unsigned int v9; // w9
  bool v11; // zf
  unsigned __int64 v12; // x1
  google::protobuf::internal *v13; // x0
  google::protobuf::internal *v14; // x8
  unsigned __int64 v15; // x22
  int v16; // w8
  int v17; // w9
  __int64 v18; // x1
  _QWORD *v19; // x0
  __int64 v20; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v22; // w1
  unsigned __int64 v23; // x1
  google::protobuf::UnknownFieldSet *v24; // x0
  google::protobuf::internal *v25; // [xsp+8h] [xbp-28h] BYREF

  v25 = a2;
  if ( (sub_10003A040(a3, &v25, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v6 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v7 = (google::protobuf::internal *)((char *)v25 + 1);
      v8 = *(unsigned __int8 *)v25;
      if ( (*(char *)v25 & 0x80000000) == 0 )
        goto LABEL_7;
      v9 = v8 + (*(unsigned __int8 *)v7 << 7);
      v8 = v9 - 128;
      if ( (*(char *)v7 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v25,
                                                    (const char *)(v9 - 128),
                                                    (unsigned int)v7);
      v25 = TagFallback;
      if ( !TagFallback )
        return 0LL;
      v7 = TagFallback;
      v8 = v22;
LABEL_8:
      if ( v8 >> 3 == 2 )
      {
        if ( (unsigned __int8)v8 == 16 )
        {
          v14 = (google::protobuf::internal *)((char *)v7 + 1);
          v15 = *(unsigned __int8 *)v7;
          if ( (*(char *)v7 & 0x80000000) == 0 )
            goto LABEL_24;
          v16 = *(char *)v14;
          v17 = v15 + ((unsigned __int8)v16 << 7);
          v15 = (unsigned int)(v17 - 128);
          if ( v16 < 0 )
          {
            v25 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                  v7,
                                                  (const char *)(unsigned int)(v17 - 128),
                                                  (unsigned int)v7);
            if ( !v25 )
              return 0LL;
            v15 = v23;
          }
          else
          {
            v14 = (google::protobuf::internal *)((char *)v7 + 2);
LABEL_24:
            v25 = v14;
          }
          if ( (unsigned int)v15 > 2 )
          {
            if ( (*v6 & 1) != 0 )
              v24 = (google::protobuf::UnknownFieldSet *)((*v6 & 0xFFFFFFFFFFFFFFFELL) + 8);
            else
              v24 = (google::protobuf::UnknownFieldSet *)sub_10003A0B4(a1 + 8);
            google::protobuf::UnknownFieldSet::AddVarint(v24, 2, v15);
          }
          else
          {
            *(_DWORD *)(a1 + 16) |= 2u;
            *(_DWORD *)(a1 + 32) = v15;
          }
          goto LABEL_33;
        }
      }
      else if ( v8 >> 3 == 1 && (unsigned __int8)v8 == 10 )
      {
        *(_DWORD *)(a1 + 16) |= 1u;
        v18 = *(_QWORD *)(a1 + 24);
        if ( !v18 )
        {
          v19 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
          if ( (*v6 & 1) != 0 )
            v19 = (_QWORD *)*v19;
          v20 = google::protobuf::Arena::CreateMaybeMessage<TSP::DatabaseDataArchive>(v19);
          LODWORD(v18) = v20;
          *(_QWORD *)(a1 + 24) = v20;
          v7 = v25;
        }
        v13 = (google::protobuf::internal *)sub_1000397F8(a3, v18, v7);
        goto LABEL_32;
      }
      if ( v8 )
        v11 = (v8 & 7) == 4;
      else
        v11 = 1;
      if ( v11 )
      {
        *(_DWORD *)(a3 + 80) = v8 - 1;
        return v25;
      }
      if ( (*v6 & 1) != 0 )
        v12 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
      else
        v12 = sub_10003A0B4(a1 + 8);
      v13 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v12);
LABEL_32:
      v25 = v13;
      if ( !v13 )
        return 0LL;
LABEL_33:
      if ( (sub_10003A040(a3, &v25, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        return v25;
    }
    v7 = (google::protobuf::internal *)((char *)v25 + 2);
LABEL_7:
    v25 = v7;
    goto LABEL_8;
  }
  return v25;
}