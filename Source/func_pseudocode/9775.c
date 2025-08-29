__ZN3TSP18PasteboardMetadata14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::PasteboardMetadata::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v6; // x22
  google::protobuf::internal *v7; // x2
  unsigned int v8; // w26
  unsigned int v9; // w9
  int v10; // w0
  __int64 v11; // x8
  _QWORD *v12; // x1
  std::string *v13; // x0
  google::protobuf::internal *v14; // x0
  unsigned __int64 v15; // x0
  google::protobuf::internal *v16; // x2
  int *v17; // x8
  __int64 v18; // x10
  int v19; // w9
  __int64 v20; // x1
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  __int64 v24; // x1
  _QWORD *v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  _QWORD *v28; // x0
  __int64 v29; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v31; // w1
  __int64 v32; // x0
  __int64 v33; // x0
  bool v34; // zf
  unsigned __int64 v35; // x1
  google::protobuf::internal *v36; // [xsp+8h] [xbp-48h] BYREF

  v36 = a2;
  if ( (sub_10003A040(a3, &v36, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v6 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v7 = (google::protobuf::internal *)((char *)v36 + 1);
      v8 = *(unsigned __int8 *)v36;
      if ( *(char *)v36 < 0 )
      {
        v9 = v8 + (*(unsigned __int8 *)v7 << 7);
        v8 = v9 - 128;
        if ( *(char *)v7 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v36,
                                                        (const char *)(v9 - 128),
                                                        (unsigned int)v7);
          v36 = TagFallback;
          if ( !TagFallback )
            return 0LL;
          v7 = TagFallback;
          v8 = v31;
          goto LABEL_8;
        }
        v7 = (google::protobuf::internal *)((char *)v36 + 2);
      }
      v36 = v7;
LABEL_8:
      switch ( v8 >> 3 )
      {
        case 1u:
          if ( (unsigned __int8)v8 == 10 )
          {
            v10 = a1 + 24;
            goto LABEL_42;
          }
          if ( (unsigned __int8)v8 != 8 )
            goto LABEL_51;
          v32 = sub_10003D848(&v36);
          sub_10003D8A8(a1, v32);
          goto LABEL_49;
        case 2u:
          if ( (unsigned __int8)v8 != 18 )
            goto LABEL_51;
          *(_DWORD *)(a1 + 16) |= 1u;
          v11 = *(_QWORD *)(a1 + 8);
          v12 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v11 & 1) != 0 )
            v12 = (_QWORD *)*v12;
          v13 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(a1 + 96, v12);
          v14 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v13, v36, a3);
          goto LABEL_58;
        case 3u:
          if ( (unsigned __int8)v8 != 26 )
            goto LABEL_51;
          v15 = (unsigned __int64)v7 - 1;
          while ( 1 )
          {
            v16 = (google::protobuf::internal *)(v15 + 1);
            v36 = (google::protobuf::internal *)(v15 + 1);
            v17 = *(int **)(a1 + 64);
            if ( !v17 )
              break;
            v18 = *(int *)(a1 + 56);
            v19 = *v17;
            if ( (int)v18 >= *v17 )
            {
              if ( v19 == *(_DWORD *)(a1 + 60) )
              {
LABEL_22:
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                  (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 48),
                  v19 + 1);
                v17 = *(int **)(a1 + 64);
                v19 = *v17;
              }
              *v17 = v19 + 1;
              v21 = google::protobuf::Arena::CreateMaybeMessage<TSP::DataInfo>(*(_QWORD *)(a1 + 48));
              LODWORD(v20) = v21;
              v22 = *(_QWORD *)(a1 + 64);
              v23 = *(int *)(a1 + 56);
              *(_DWORD *)(a1 + 56) = v23 + 1;
              *(_QWORD *)(v22 + 8 * v23 + 8) = v21;
              v16 = v36;
              goto LABEL_24;
            }
            *(_DWORD *)(a1 + 56) = v18 + 1;
            v20 = *(_QWORD *)&v17[2 * v18 + 2];
LABEL_24:
            v15 = sub_100045E40(a3, v20, v16);
            v36 = (google::protobuf::internal *)v15;
            if ( !v15 )
              return 0LL;
            if ( *(_QWORD *)a3 <= v15 || *(_BYTE *)v15 != 26 )
              goto LABEL_59;
          }
          v19 = *(_DWORD *)(a1 + 60);
          goto LABEL_22;
        case 5u:
          if ( (unsigned __int8)v8 != 42 )
            goto LABEL_51;
          *(_DWORD *)(a1 + 16) |= 2u;
          v24 = *(_QWORD *)(a1 + 104);
          if ( !v24 )
          {
            v25 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
            if ( (*v6 & 1) != 0 )
              v25 = (_QWORD *)*v25;
            v26 = google::protobuf::Arena::CreateMaybeMessage<TSP::UUID>(v25);
            LODWORD(v24) = v26;
            *(_QWORD *)(a1 + 104) = v26;
            v7 = v36;
          }
          v14 = (google::protobuf::internal *)sub_1000443E4(a3, v24, v7);
          goto LABEL_58;
        case 6u:
          if ( (unsigned __int8)v8 != 50 )
            goto LABEL_51;
          *(_DWORD *)(a1 + 16) |= 4u;
          v27 = *(_QWORD *)(a1 + 112);
          if ( !v27 )
          {
            v28 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
            if ( (*v6 & 1) != 0 )
              v28 = (_QWORD *)*v28;
            v29 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v28);
            LODWORD(v27) = v29;
            *(_QWORD *)(a1 + 112) = v29;
            v7 = v36;
          }
          v14 = (google::protobuf::internal *)sub_100038B88(a3, v27, v7);
          goto LABEL_58;
        case 7u:
          if ( (unsigned __int8)v8 == 58 )
          {
            v10 = a1 + 72;
LABEL_42:
            v14 = (google::protobuf::internal *)google::protobuf::internal::PackedUInt32Parser(v10, (int)v7, a3);
LABEL_58:
            v36 = v14;
            if ( !v14 )
              return 0LL;
            goto LABEL_59;
          }
          if ( (unsigned __int8)v8 != 56 )
          {
LABEL_51:
            if ( v8 )
              v34 = (v8 & 7) == 4;
            else
              v34 = 1;
            if ( v34 )
            {
              *(_DWORD *)(a3 + 80) = v8 - 1;
              return v36;
            }
            if ( (*v6 & 1) != 0 )
              v35 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
            else
              v35 = sub_10003A0B4(a1 + 8);
            v14 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v35);
            goto LABEL_58;
          }
          v33 = sub_10003D848(&v36);
          sub_10003F274(a1, v33);
LABEL_49:
          if ( !v36 )
            return 0LL;
LABEL_59:
          if ( (sub_10003A040(a3, &v36, *(unsigned int *)(a3 + 92)) & 1) != 0 )
            return v36;
          break;
        default:
          goto LABEL_51;
      }
    }
  }
  return v36;
}