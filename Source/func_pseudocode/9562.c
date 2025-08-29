__ZN3TSP19DatabaseDataArchive14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::DatabaseDataArchive::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w25
  _QWORD *v7; // x21
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w24
  unsigned int v10; // w9
  __int64 v11; // x1
  _QWORD *v12; // x0
  __int64 v13; // x0
  google::protobuf::internal *v14; // x0
  __int64 v15; // x8
  _QWORD *v16; // x1
  __int64 v17; // x0
  __int64 v18; // x8
  std::string *v19; // x0
  google::protobuf::internal *v20; // x8
  const char *v21; // x1
  int v22; // w8
  google::protobuf::internal *v23; // x8
  const char *v24; // x1
  int v25; // w8
  google::protobuf::internal *v26; // x8
  const char *v27; // x1
  int v28; // w8
  bool v29; // zf
  unsigned __int64 v30; // x1
  google::protobuf::internal *TagFallback; // x0
  unsigned int v32; // w1
  google::protobuf::internal *v33; // x0
  __int64 v34; // x1
  google::protobuf::internal *v35; // x0
  int v36; // w1
  google::protobuf::internal *v37; // x0
  __int64 v38; // x1
  google::protobuf::internal *v39; // [xsp+8h] [xbp-48h] BYREF

  v39 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v39, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v39 + 1);
      v9 = *(unsigned __int8 *)v39;
      if ( *(char *)v39 < 0 )
      {
        v10 = v9 + (*(unsigned __int8 *)v8 << 7);
        v9 = v10 - 128;
        if ( *(char *)v8 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v39,
                                                        (const char *)(v10 - 128),
                                                        (unsigned int)v8);
          v39 = TagFallback;
          if ( !TagFallback )
            goto LABEL_59;
          v8 = TagFallback;
          v9 = v32;
          goto LABEL_8;
        }
        v8 = (google::protobuf::internal *)((char *)v39 + 2);
      }
      v39 = v8;
LABEL_8:
      switch ( v9 >> 3 )
      {
        case 1u:
          if ( (unsigned __int8)v9 != 10 )
            goto LABEL_39;
          *(_DWORD *)(a1 + 16) |= 4u;
          v11 = *(_QWORD *)(a1 + 40);
          if ( !v11 )
          {
            v12 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFELL);
            if ( (*v7 & 1) != 0 )
              v12 = (_QWORD *)*v12;
            v13 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v12);
            LODWORD(v11) = v13;
            *(_QWORD *)(a1 + 40) = v13;
            v8 = v39;
          }
          v14 = (google::protobuf::internal *)sub_100038B88(a3, v11, v8);
          goto LABEL_46;
        case 2u:
          if ( (unsigned __int8)v9 != 18 )
            goto LABEL_39;
          *(_DWORD *)(a1 + 16) |= 1u;
          v15 = *(_QWORD *)(a1 + 8);
          v16 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v15 & 1) != 0 )
            v16 = (_QWORD *)*v16;
          v17 = a1 + 24;
          goto LABEL_23;
        case 3u:
          if ( (unsigned __int8)v9 != 26 )
            goto LABEL_39;
          *(_DWORD *)(a1 + 16) |= 2u;
          v18 = *(_QWORD *)(a1 + 8);
          v16 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v18 & 1) != 0 )
            v16 = (_QWORD *)*v16;
          v17 = a1 + 32;
LABEL_23:
          v19 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v17, v16);
          v14 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v19, v39, a3);
          goto LABEL_46;
        case 4u:
          if ( (unsigned __int8)v9 != 32 )
            goto LABEL_39;
          v5 |= 8u;
          v20 = (google::protobuf::internal *)((char *)v8 + 1);
          v21 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_28;
          v22 = *(char *)v20;
          v21 = (const char *)((unsigned int)v21 + ((unsigned __int8)v22 << 7) - 128);
          if ( v22 < 0 )
          {
            v33 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v21, (unsigned int)v8);
            v39 = v33;
            *(_QWORD *)(a1 + 48) = v34;
            if ( !v33 )
              goto LABEL_59;
          }
          else
          {
            v20 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_28:
            v39 = v20;
            *(_QWORD *)(a1 + 48) = v21;
          }
          goto LABEL_47;
        case 5u:
          if ( (unsigned __int8)v9 != 40 )
            goto LABEL_39;
          v5 |= 0x10u;
          v23 = (google::protobuf::internal *)((char *)v8 + 1);
          LODWORD(v24) = *(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_33;
          v25 = *(char *)v23;
          v24 = (const char *)((unsigned int)v24 + ((unsigned __int8)v25 << 7) - 128);
          if ( v25 < 0 )
          {
            v35 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow32(v8, v24, (unsigned int)v8);
            v39 = v35;
            *(_DWORD *)(a1 + 56) = v36;
            if ( !v35 )
              goto LABEL_59;
          }
          else
          {
            v23 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_33:
            v39 = v23;
            *(_DWORD *)(a1 + 56) = (_DWORD)v24;
          }
          goto LABEL_47;
        case 6u:
          if ( (unsigned __int8)v9 != 48 )
            goto LABEL_39;
          v5 |= 0x20u;
          v26 = (google::protobuf::internal *)((char *)v8 + 1);
          v27 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_38;
          v28 = *(char *)v26;
          v27 = (const char *)((unsigned int)v27 + ((unsigned __int8)v28 << 7) - 128);
          if ( v28 < 0 )
          {
            v37 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v27, (unsigned int)v8);
            v39 = v37;
            *(_BYTE *)(a1 + 60) = v38 != 0;
            if ( !v37 )
              goto LABEL_59;
          }
          else
          {
            v26 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_38:
            v39 = v26;
            *(_BYTE *)(a1 + 60) = v27 != 0LL;
          }
          goto LABEL_47;
        default:
LABEL_39:
          if ( v9 )
            v29 = (v9 & 7) == 4;
          else
            v29 = 1;
          if ( v29 )
          {
            *(_DWORD *)(a3 + 80) = v9 - 1;
            goto LABEL_2;
          }
          if ( (*v7 & 1) != 0 )
            v30 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
          else
            v30 = sub_10003A0B4(a1 + 8);
          v14 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v30);
LABEL_46:
          v39 = v14;
          if ( !v14 )
          {
LABEL_59:
            v39 = 0LL;
            goto LABEL_2;
          }
LABEL_47:
          if ( (sub_10003A040(a3, &v39, *(unsigned int *)(a3 + 92)) & 1) != 0 )
            goto LABEL_2;
          break;
      }
    }
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v39;
}