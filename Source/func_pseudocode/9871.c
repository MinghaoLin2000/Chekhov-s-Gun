__ZN3TSP17ViewStateMetadata14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::ViewStateMetadata::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v6; // x23
  google::protobuf::internal *v7; // x2
  unsigned int v8; // w25
  unsigned int v9; // w9
  int v10; // w0
  __int64 v11; // x1
  _QWORD *v12; // x0
  __int64 v13; // x0
  google::protobuf::internal *v14; // x0
  __int64 v15; // x1
  _QWORD *v16; // x0
  __int64 v17; // x0
  unsigned __int64 v18; // x0
  google::protobuf::internal *v19; // x2
  int *v20; // x8
  __int64 v21; // x10
  int v22; // w9
  __int64 v23; // x1
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  google::protobuf::internal *TagFallback; // x0
  unsigned int v28; // w1
  __int64 v29; // x0
  __int64 v30; // x0
  bool v31; // zf
  unsigned __int64 v32; // x1
  google::protobuf::internal *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = a2;
  if ( (sub_10003A040(a3, &v33, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v6 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v7 = (google::protobuf::internal *)((char *)v33 + 1);
      v8 = *(unsigned __int8 *)v33;
      if ( *(char *)v33 < 0 )
      {
        v9 = v8 + (*(unsigned __int8 *)v7 << 7);
        v8 = v9 - 128;
        if ( *(char *)v7 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v33,
                                                        (const char *)(v9 - 128),
                                                        (unsigned int)v7);
          v33 = TagFallback;
          if ( !TagFallback )
            return 0LL;
          v7 = TagFallback;
          v8 = v28;
          goto LABEL_8;
        }
        v7 = (google::protobuf::internal *)((char *)v33 + 2);
      }
      v33 = v7;
LABEL_8:
      switch ( v8 >> 3 )
      {
        case 1u:
          if ( (unsigned __int8)v8 == 10 )
          {
            v10 = a1 + 24;
            goto LABEL_38;
          }
          if ( (unsigned __int8)v8 != 8 )
            goto LABEL_47;
          v29 = sub_10003D848(&v33);
          sub_10003D8A8(a1, v29);
          goto LABEL_45;
        case 3u:
          if ( (unsigned __int8)v8 != 26 )
            goto LABEL_47;
          *(_DWORD *)(a1 + 16) |= 1u;
          v11 = *(_QWORD *)(a1 + 96);
          if ( !v11 )
          {
            v12 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
            if ( (*v6 & 1) != 0 )
              v12 = (_QWORD *)*v12;
            v13 = google::protobuf::Arena::CreateMaybeMessage<TSP::ComponentInfo>(v12);
            LODWORD(v11) = v13;
            *(_QWORD *)(a1 + 96) = v13;
            v7 = v33;
          }
          v14 = (google::protobuf::internal *)sub_100045D70(a3, v11, v7);
          goto LABEL_54;
        case 4u:
          if ( (unsigned __int8)v8 != 34 )
            goto LABEL_47;
          *(_DWORD *)(a1 + 16) |= 2u;
          v15 = *(_QWORD *)(a1 + 104);
          if ( !v15 )
          {
            v16 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
            if ( (*v6 & 1) != 0 )
              v16 = (_QWORD *)*v16;
            v17 = google::protobuf::Arena::CreateMaybeMessage<TSP::UUID>(v16);
            LODWORD(v15) = v17;
            *(_QWORD *)(a1 + 104) = v17;
            v7 = v33;
          }
          v14 = (google::protobuf::internal *)sub_1000443E4(a3, v15, v7);
          goto LABEL_54;
        case 5u:
          if ( (unsigned __int8)v8 != 42 )
            goto LABEL_47;
          v18 = (unsigned __int64)v7 - 1;
          while ( 1 )
          {
            v19 = (google::protobuf::internal *)(v18 + 1);
            v33 = (google::protobuf::internal *)(v18 + 1);
            v20 = *(int **)(a1 + 64);
            if ( !v20 )
              break;
            v21 = *(int *)(a1 + 56);
            v22 = *v20;
            if ( (int)v21 >= *v20 )
            {
              if ( v22 == *(_DWORD *)(a1 + 60) )
              {
LABEL_30:
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                  (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 48),
                  v22 + 1);
                v20 = *(int **)(a1 + 64);
                v22 = *v20;
              }
              *v20 = v22 + 1;
              v24 = google::protobuf::Arena::CreateMaybeMessage<TSP::ObjectUUIDMapEntry>(*(_QWORD *)(a1 + 48));
              LODWORD(v23) = v24;
              v25 = *(_QWORD *)(a1 + 64);
              v26 = *(int *)(a1 + 56);
              *(_DWORD *)(a1 + 56) = v26 + 1;
              *(_QWORD *)(v25 + 8 * v26 + 8) = v24;
              v19 = v33;
              goto LABEL_32;
            }
            *(_DWORD *)(a1 + 56) = v21 + 1;
            v23 = *(_QWORD *)&v20[2 * v21 + 2];
LABEL_32:
            v18 = sub_100041228(a3, v23, v19);
            v33 = (google::protobuf::internal *)v18;
            if ( !v18 )
              return 0LL;
            if ( *(_QWORD *)a3 <= v18 || *(_BYTE *)v18 != 42 )
              goto LABEL_55;
          }
          v22 = *(_DWORD *)(a1 + 60);
          goto LABEL_30;
        case 6u:
          if ( (unsigned __int8)v8 == 50 )
          {
            v10 = a1 + 72;
LABEL_38:
            v14 = (google::protobuf::internal *)google::protobuf::internal::PackedUInt32Parser(v10, (int)v7, a3);
LABEL_54:
            v33 = v14;
            if ( !v14 )
              return 0LL;
            goto LABEL_55;
          }
          if ( (unsigned __int8)v8 != 48 )
          {
LABEL_47:
            if ( v8 )
              v31 = (v8 & 7) == 4;
            else
              v31 = 1;
            if ( v31 )
            {
              *(_DWORD *)(a3 + 80) = v8 - 1;
              return v33;
            }
            if ( (*v6 & 1) != 0 )
              v32 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
            else
              v32 = sub_10003A0B4(a1 + 8);
            v14 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v32);
            goto LABEL_54;
          }
          v30 = sub_10003D848(&v33);
          sub_10003F274(a1, v30);
LABEL_45:
          if ( !v33 )
            return 0LL;
LABEL_55:
          if ( (sub_10003A040(a3, &v33, *(unsigned int *)(a3 + 92)) & 1) != 0 )
            return v33;
          break;
        default:
          goto LABEL_47;
      }
    }
  }
  return v33;
}