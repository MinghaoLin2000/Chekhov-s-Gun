__ZN3TSP27ObjectSerializationMetadata14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::ObjectSerializationMetadata::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v6; // x22
  google::protobuf::internal *v7; // x2
  unsigned int v8; // w26
  unsigned int v9; // w9
  int v10; // w0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v12; // w1
  __int64 v13; // x1
  _QWORD *v14; // x0
  __int64 v15; // x0
  _QWORD *v16; // x0
  __int64 v17; // x0
  google::protobuf::internal *v18; // x0
  __int64 v19; // x1
  _QWORD *v20; // x0
  __int64 v21; // x0
  unsigned __int64 v22; // x0
  google::protobuf::internal *v23; // x2
  int *v24; // x8
  __int64 v25; // x10
  int v26; // w9
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  unsigned __int64 v31; // x0
  google::protobuf::internal *v32; // x2
  int *v33; // x8
  __int64 v34; // x10
  int v35; // w9
  __int64 v36; // x1
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  __int64 v40; // x1
  _QWORD *v41; // x0
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x0
  bool v45; // zf
  unsigned __int64 v46; // x1
  google::protobuf::internal *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = a2;
  if ( (sub_10003A040(a3, &v47, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v6 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v7 = (google::protobuf::internal *)((char *)v47 + 1);
      v8 = *(unsigned __int8 *)v47;
      if ( *(char *)v47 < 0 )
      {
        v9 = v8 + (*(unsigned __int8 *)v7 << 7);
        v8 = v9 - 128;
        if ( *(char *)v7 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v47,
                                                        (const char *)(v9 - 128),
                                                        (unsigned int)v7);
          v47 = TagFallback;
          if ( !TagFallback )
            return 0LL;
          v7 = TagFallback;
          v8 = v12;
          goto LABEL_8;
        }
        v7 = (google::protobuf::internal *)((char *)v47 + 2);
      }
      v47 = v7;
LABEL_8:
      switch ( v8 >> 3 )
      {
        case 1u:
          if ( (unsigned __int8)v8 == 10 )
          {
            v10 = a1 + 24;
            goto LABEL_65;
          }
          if ( (unsigned __int8)v8 != 8 )
            goto LABEL_72;
          v43 = sub_10003D848(&v47);
          sub_10003D8A8(a1, v43);
          goto LABEL_70;
        case 2u:
          if ( (unsigned __int8)v8 != 18 )
            goto LABEL_72;
          *(_DWORD *)(a1 + 16) |= 1u;
          v13 = *(_QWORD *)(a1 + 120);
          if ( v13 )
            goto LABEL_24;
          v14 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
          if ( (*v6 & 1) != 0 )
            v14 = (_QWORD *)*v14;
          v15 = google::protobuf::Arena::CreateMaybeMessage<TSP::UUID>(v14);
          LODWORD(v13) = v15;
          *(_QWORD *)(a1 + 120) = v15;
          goto LABEL_23;
        case 3u:
          if ( (unsigned __int8)v8 != 26 )
            goto LABEL_72;
          *(_DWORD *)(a1 + 16) |= 2u;
          v13 = *(_QWORD *)(a1 + 128);
          if ( v13 )
            goto LABEL_24;
          v16 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
          if ( (*v6 & 1) != 0 )
            v16 = (_QWORD *)*v16;
          v17 = google::protobuf::Arena::CreateMaybeMessage<TSP::UUID>(v16);
          LODWORD(v13) = v17;
          *(_QWORD *)(a1 + 128) = v17;
LABEL_23:
          v7 = v47;
LABEL_24:
          v18 = (google::protobuf::internal *)sub_1000443E4(a3, v13, v7);
          goto LABEL_79;
        case 4u:
          if ( (unsigned __int8)v8 != 34 )
            goto LABEL_72;
          *(_DWORD *)(a1 + 16) |= 4u;
          v19 = *(_QWORD *)(a1 + 136);
          if ( !v19 )
          {
            v20 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
            if ( (*v6 & 1) != 0 )
              v20 = (_QWORD *)*v20;
            v21 = google::protobuf::Arena::CreateMaybeMessage<TSP::ComponentInfo>(v20);
            LODWORD(v19) = v21;
            *(_QWORD *)(a1 + 136) = v21;
            v7 = v47;
          }
          v18 = (google::protobuf::internal *)sub_100045D70(a3, v19, v7);
          goto LABEL_79;
        case 5u:
          if ( (unsigned __int8)v8 != 42 )
            goto LABEL_72;
          v22 = (unsigned __int64)v7 - 1;
          while ( 1 )
          {
            v23 = (google::protobuf::internal *)(v22 + 1);
            v47 = (google::protobuf::internal *)(v22 + 1);
            v24 = *(int **)(a1 + 64);
            if ( !v24 )
              break;
            v25 = *(int *)(a1 + 56);
            v26 = *v24;
            if ( (int)v25 >= *v24 )
            {
              if ( v26 == *(_DWORD *)(a1 + 60) )
              {
LABEL_38:
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                  (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 48),
                  v26 + 1);
                v24 = *(int **)(a1 + 64);
                v26 = *v24;
              }
              *v24 = v26 + 1;
              v28 = google::protobuf::Arena::CreateMaybeMessage<TSP::DataInfo>(*(_QWORD *)(a1 + 48));
              LODWORD(v27) = v28;
              v29 = *(_QWORD *)(a1 + 64);
              v30 = *(int *)(a1 + 56);
              *(_DWORD *)(a1 + 56) = v30 + 1;
              *(_QWORD *)(v29 + 8 * v30 + 8) = v28;
              v23 = v47;
              goto LABEL_40;
            }
            *(_DWORD *)(a1 + 56) = v25 + 1;
            v27 = *(_QWORD *)&v24[2 * v25 + 2];
LABEL_40:
            v22 = sub_100045E40(a3, v27, v23);
            v47 = (google::protobuf::internal *)v22;
            if ( !v22 )
              return 0LL;
            if ( *(_QWORD *)a3 <= v22 || *(_BYTE *)v22 != 42 )
              goto LABEL_80;
          }
          v26 = *(_DWORD *)(a1 + 60);
          goto LABEL_38;
        case 6u:
          if ( (unsigned __int8)v8 != 50 )
            goto LABEL_72;
          v31 = (unsigned __int64)v7 - 1;
          while ( 1 )
          {
            v32 = (google::protobuf::internal *)(v31 + 1);
            v47 = (google::protobuf::internal *)(v31 + 1);
            v33 = *(int **)(a1 + 88);
            if ( !v33 )
              break;
            v34 = *(int *)(a1 + 80);
            v35 = *v33;
            if ( (int)v34 >= *v33 )
            {
              if ( v35 == *(_DWORD *)(a1 + 84) )
              {
LABEL_51:
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                  (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 72),
                  v35 + 1);
                v33 = *(int **)(a1 + 88);
                v35 = *v33;
              }
              *v33 = v35 + 1;
              v37 = google::protobuf::Arena::CreateMaybeMessage<TSP::ObjectUUIDMapEntry>(*(_QWORD *)(a1 + 72));
              LODWORD(v36) = v37;
              v38 = *(_QWORD *)(a1 + 88);
              v39 = *(int *)(a1 + 80);
              *(_DWORD *)(a1 + 80) = v39 + 1;
              *(_QWORD *)(v38 + 8 * v39 + 8) = v37;
              v32 = v47;
              goto LABEL_53;
            }
            *(_DWORD *)(a1 + 80) = v34 + 1;
            v36 = *(_QWORD *)&v33[2 * v34 + 2];
LABEL_53:
            v31 = sub_100041228(a3, v36, v32);
            v47 = (google::protobuf::internal *)v31;
            if ( !v31 )
              return 0LL;
            if ( *(_QWORD *)a3 <= v31 || *(_BYTE *)v31 != 50 )
              goto LABEL_80;
          }
          v35 = *(_DWORD *)(a1 + 84);
          goto LABEL_51;
        case 7u:
          if ( (unsigned __int8)v8 != 58 )
            goto LABEL_72;
          *(_DWORD *)(a1 + 16) |= 8u;
          v40 = *(_QWORD *)(a1 + 144);
          if ( !v40 )
          {
            v41 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
            if ( (*v6 & 1) != 0 )
              v41 = (_QWORD *)*v41;
            v42 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v41);
            LODWORD(v40) = v42;
            *(_QWORD *)(a1 + 144) = v42;
            v7 = v47;
          }
          v18 = (google::protobuf::internal *)sub_100038B88(a3, v40, v7);
          goto LABEL_79;
        case 8u:
          if ( (unsigned __int8)v8 == 66 )
          {
            v10 = a1 + 96;
LABEL_65:
            v18 = (google::protobuf::internal *)google::protobuf::internal::PackedUInt32Parser(v10, (int)v7, a3);
LABEL_79:
            v47 = v18;
            if ( !v18 )
              return 0LL;
            goto LABEL_80;
          }
          if ( (unsigned __int8)v8 != 64 )
          {
LABEL_72:
            if ( v8 )
              v45 = (v8 & 7) == 4;
            else
              v45 = 1;
            if ( v45 )
            {
              *(_DWORD *)(a3 + 80) = v8 - 1;
              return v47;
            }
            if ( (*v6 & 1) != 0 )
              v46 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
            else
              v46 = sub_10003A0B4(a1 + 8);
            v18 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v46);
            goto LABEL_79;
          }
          v44 = sub_10003D848(&v47);
          sub_100045F10(a1, v44);
LABEL_70:
          if ( !v47 )
            return 0LL;
LABEL_80:
          if ( (sub_10003A040(a3, &v47, *(unsigned int *)(a3 + 92)) & 1) != 0 )
            return v47;
          break;
        default:
          goto LABEL_72;
      }
    }
  }
  return v47;
}