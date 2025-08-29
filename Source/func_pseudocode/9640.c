__ZN3TSP9FieldInfo14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::FieldInfo::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v6; // x21
  google::protobuf::internal *v7; // x2
  unsigned int v8; // w26
  unsigned int v9; // w9
  __int64 v10; // x1
  _QWORD *v11; // x0
  __int64 v12; // x0
  google::protobuf::internal *v13; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v15; // w1
  google::protobuf::internal *v16; // x8
  unsigned __int64 v17; // x26
  int v18; // w8
  int v19; // w9
  google::protobuf::internal *v20; // x8
  int v21; // w8
  int v22; // w9
  int v23; // w0
  google::protobuf::internal *v24; // x8
  int v25; // w8
  int v26; // w9
  __int64 v27; // x8
  _QWORD *v28; // x1
  std::string *v29; // x0
  unsigned __int64 v30; // x1
  unsigned __int64 v31; // x1
  unsigned __int64 v32; // x1
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x0
  bool v36; // zf
  unsigned __int64 v37; // x1
  google::protobuf::UnknownFieldSet *v38; // x0
  int v39; // w1
  google::protobuf::internal *v40; // [xsp+8h] [xbp-48h] BYREF

  v40 = a2;
  if ( (sub_10003A040(a3, &v40, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v6 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v7 = (google::protobuf::internal *)((char *)v40 + 1);
      v8 = *(unsigned __int8 *)v40;
      if ( (*(char *)v40 & 0x80000000) == 0 )
        goto LABEL_7;
      v9 = v8 + (*(unsigned __int8 *)v7 << 7);
      v8 = v9 - 128;
      if ( (*(char *)v7 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v40,
                                                    (const char *)(v9 - 128),
                                                    (unsigned int)v7);
      v40 = TagFallback;
      if ( !TagFallback )
        return 0LL;
      v7 = TagFallback;
      v8 = v15;
LABEL_8:
      switch ( v8 >> 3 )
      {
        case 1u:
          if ( (unsigned __int8)v8 != 10 )
            goto LABEL_63;
          *(_DWORD *)(a1 + 16) |= 2u;
          v10 = *(_QWORD *)(a1 + 104);
          if ( !v10 )
          {
            v11 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
            if ( (*v6 & 1) != 0 )
              v11 = (_QWORD *)*v11;
            v12 = google::protobuf::Arena::CreateMaybeMessage<TSP::FieldPath>(v11);
            LODWORD(v10) = v12;
            *(_QWORD *)(a1 + 104) = v12;
            v7 = v40;
          }
          v13 = (google::protobuf::internal *)sub_10003DB38(a3, v10, v7);
          goto LABEL_70;
        case 2u:
          if ( (unsigned __int8)v8 != 16 )
            goto LABEL_63;
          v16 = (google::protobuf::internal *)((char *)v7 + 1);
          v17 = *(unsigned __int8 *)v7;
          if ( (*(char *)v7 & 0x80000000) == 0 )
            goto LABEL_21;
          v18 = *(char *)v16;
          v19 = v17 + ((unsigned __int8)v18 << 7);
          v17 = (unsigned int)(v19 - 128);
          if ( v18 < 0 )
          {
            v40 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                  v7,
                                                  (const char *)(unsigned int)(v19 - 128),
                                                  (unsigned int)v7);
            if ( !v40 )
              return 0LL;
            v17 = v30;
          }
          else
          {
            v16 = (google::protobuf::internal *)((char *)v7 + 2);
LABEL_21:
            v40 = v16;
          }
          if ( (unsigned int)v17 <= 3 )
          {
            *(_DWORD *)(a1 + 16) |= 4u;
            *(_DWORD *)(a1 + 112) = v17;
            goto LABEL_71;
          }
          if ( (*v6 & 1) != 0 )
            v38 = (google::protobuf::UnknownFieldSet *)((*v6 & 0xFFFFFFFFFFFFFFFELL) + 8);
          else
            v38 = (google::protobuf::UnknownFieldSet *)sub_10003A0B4(a1 + 8);
          v39 = 2;
          goto LABEL_82;
        case 3u:
          if ( (unsigned __int8)v8 != 24 )
            goto LABEL_63;
          v20 = (google::protobuf::internal *)((char *)v7 + 1);
          v17 = *(unsigned __int8 *)v7;
          if ( (*(char *)v7 & 0x80000000) == 0 )
            goto LABEL_28;
          v21 = *(char *)v20;
          v22 = v17 + ((unsigned __int8)v21 << 7);
          v17 = (unsigned int)(v22 - 128);
          if ( v21 < 0 )
          {
            v40 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                  v7,
                                                  (const char *)(unsigned int)(v22 - 128),
                                                  (unsigned int)v7);
            if ( !v40 )
              return 0LL;
            v17 = v31;
          }
          else
          {
            v20 = (google::protobuf::internal *)((char *)v7 + 2);
LABEL_28:
            v40 = v20;
          }
          if ( (unsigned int)(v17 + 1) <= 3 )
          {
            *(_DWORD *)(a1 + 16) |= 8u;
            *(_DWORD *)(a1 + 116) = v17;
            goto LABEL_71;
          }
          if ( (*v6 & 1) != 0 )
            v38 = (google::protobuf::UnknownFieldSet *)((*v6 & 0xFFFFFFFFFFFFFFFELL) + 8);
          else
            v38 = (google::protobuf::UnknownFieldSet *)sub_10003A0B4(a1 + 8);
          v39 = 3;
          goto LABEL_82;
        case 4u:
          if ( (unsigned __int8)v8 != 34 )
          {
            if ( (unsigned __int8)v8 == 32 )
            {
              v33 = sub_10003C864(&v40);
              sub_10003F194(a1, v33);
              goto LABEL_61;
            }
LABEL_63:
            if ( v8 )
              v36 = (v8 & 7) == 4;
            else
              v36 = 1;
            if ( v36 )
            {
              *(_DWORD *)(a3 + 80) = v8 - 1;
              return v40;
            }
            if ( (*v6 & 1) != 0 )
              v37 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
            else
              v37 = sub_10003A0B4(a1 + 8);
            v13 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v37);
            goto LABEL_70;
          }
          v23 = a1 + 24;
          break;
        case 5u:
          if ( (unsigned __int8)v8 != 42 )
          {
            if ( (unsigned __int8)v8 == 40 )
            {
              v34 = sub_10003C864(&v40);
              sub_10003F204(a1, v34);
              goto LABEL_61;
            }
            goto LABEL_63;
          }
          v23 = a1 + 48;
          break;
        case 6u:
          if ( (unsigned __int8)v8 != 48 )
            goto LABEL_63;
          v24 = (google::protobuf::internal *)((char *)v7 + 1);
          v17 = *(unsigned __int8 *)v7;
          if ( (*(char *)v7 & 0x80000000) == 0 )
            goto LABEL_40;
          v25 = *(char *)v24;
          v26 = v17 + ((unsigned __int8)v25 << 7);
          v17 = (unsigned int)(v26 - 128);
          if ( v25 < 0 )
          {
            v40 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                  v7,
                                                  (const char *)(unsigned int)(v26 - 128),
                                                  (unsigned int)v7);
            if ( !v40 )
              return 0LL;
            v17 = v32;
          }
          else
          {
            v24 = (google::protobuf::internal *)((char *)v7 + 2);
LABEL_40:
            v40 = v24;
          }
          if ( (unsigned int)v17 > 2 )
          {
            if ( (*v6 & 1) != 0 )
              v38 = (google::protobuf::UnknownFieldSet *)((*v6 & 0xFFFFFFFFFFFFFFFELL) + 8);
            else
              v38 = (google::protobuf::UnknownFieldSet *)sub_10003A0B4(a1 + 8);
            v39 = 6;
LABEL_82:
            google::protobuf::UnknownFieldSet::AddVarint(v38, v39, v17);
          }
          else
          {
            *(_DWORD *)(a1 + 16) |= 0x10u;
            *(_DWORD *)(a1 + 120) = v17;
          }
          goto LABEL_71;
        case 7u:
          if ( (unsigned __int8)v8 != 58 )
          {
            if ( (unsigned __int8)v8 == 56 )
            {
              v35 = sub_10003D848(&v40);
              sub_10003F274(a1, v35);
LABEL_61:
              if ( !v40 )
                return 0LL;
              goto LABEL_71;
            }
            goto LABEL_63;
          }
          v13 = (google::protobuf::internal *)google::protobuf::internal::PackedUInt32Parser((int)a1 + 72, (int)v7, a3);
          goto LABEL_70;
        case 8u:
          if ( (unsigned __int8)v8 != 66 )
            goto LABEL_63;
          *(_DWORD *)(a1 + 16) |= 1u;
          v27 = *(_QWORD *)(a1 + 8);
          v28 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v27 & 1) != 0 )
            v28 = (_QWORD *)*v28;
          v29 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(a1 + 96, v28);
          v13 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v29, v40, a3);
          goto LABEL_70;
        default:
          goto LABEL_63;
      }
      v13 = (google::protobuf::internal *)google::protobuf::internal::PackedUInt64Parser(v23, (int)v7, a3);
LABEL_70:
      v40 = v13;
      if ( !v13 )
        return 0LL;
LABEL_71:
      if ( (sub_10003A040(a3, &v40, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        return v40;
    }
    v7 = (google::protobuf::internal *)((char *)v40 + 2);
LABEL_7:
    v40 = v7;
    goto LABEL_8;
  }
  return v40;
}