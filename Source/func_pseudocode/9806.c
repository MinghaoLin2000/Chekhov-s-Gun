__ZN3TSP36DataMetadataMap_DataMetadataMapEntry14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::DataMetadataMap_DataMetadataMapEntry::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w23
  _QWORD *v7; // x21
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w22
  unsigned int v10; // w9
  bool v12; // zf
  unsigned __int64 v13; // x1
  google::protobuf::internal *v14; // x0
  __int64 v15; // x1
  _QWORD *v16; // x0
  __int64 v17; // x0
  google::protobuf::internal *v18; // x8
  const char *v19; // x1
  int v20; // w8
  google::protobuf::internal *TagFallback; // x0
  unsigned int v22; // w1
  google::protobuf::internal *v23; // x0
  __int64 v24; // x1
  google::protobuf::internal *v25; // [xsp+8h] [xbp-38h] BYREF

  v25 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v25, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v25 + 1);
      v9 = *(unsigned __int8 *)v25;
      if ( (*(char *)v25 & 0x80000000) == 0 )
        goto LABEL_7;
      v10 = v9 + (*(unsigned __int8 *)v8 << 7);
      v9 = v10 - 128;
      if ( (*(char *)v8 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v25,
                                                    (const char *)(v10 - 128),
                                                    (unsigned int)v8);
      v25 = TagFallback;
      if ( !TagFallback )
        goto LABEL_40;
      v8 = TagFallback;
      v9 = v22;
LABEL_8:
      if ( v9 >> 3 == 2 )
      {
        if ( (unsigned __int8)v9 == 18 )
        {
          *(_DWORD *)(a1 + 16) |= 1u;
          v15 = *(_QWORD *)(a1 + 24);
          if ( !v15 )
          {
            v16 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFELL);
            if ( (*v7 & 1) != 0 )
              v16 = (_QWORD *)*v16;
            v17 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v16);
            LODWORD(v15) = v17;
            *(_QWORD *)(a1 + 24) = v17;
            v8 = v25;
          }
          v14 = (google::protobuf::internal *)sub_100038B88(a3, v15, v8);
        }
        else
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
          v14 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v13);
        }
        v25 = v14;
        if ( !v14 )
          goto LABEL_40;
        goto LABEL_32;
      }
      if ( v9 >> 3 != 1 || (unsigned __int8)v9 != 8 )
        goto LABEL_13;
      v5 |= 2u;
      v18 = (google::protobuf::internal *)((char *)v8 + 1);
      v19 = (const char *)*(unsigned __int8 *)v8;
      if ( (*(char *)v8 & 0x80000000) == 0 )
        goto LABEL_31;
      v20 = *(char *)v18;
      v19 = (const char *)((unsigned int)v19 + ((unsigned __int8)v20 << 7) - 128);
      if ( (v20 & 0x80000000) == 0 )
      {
        v18 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_31:
        v25 = v18;
        *(_QWORD *)(a1 + 32) = v19;
        goto LABEL_32;
      }
      v23 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v19, (unsigned int)v8);
      v25 = v23;
      *(_QWORD *)(a1 + 32) = v24;
      if ( !v23 )
      {
LABEL_40:
        v25 = 0LL;
        goto LABEL_2;
      }
LABEL_32:
      if ( (sub_10003A040(a3, &v25, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        goto LABEL_2;
    }
    v8 = (google::protobuf::internal *)((char *)v25 + 2);
LABEL_7:
    v25 = v8;
    goto LABEL_8;
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v25;
}