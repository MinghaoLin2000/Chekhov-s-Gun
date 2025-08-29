__ZN6google8protobuf20FieldDescriptorProto14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::FieldDescriptorProto::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w28
  _QWORD *v7; // x21
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w27
  unsigned int v10; // w9
  __int64 v11; // x8
  _QWORD *v12; // x1
  __int64 v13; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v15; // w1
  __int64 v16; // x8
  const char *v17; // x1
  google::protobuf::internal *v18; // x8
  int v19; // w8
  google::protobuf::internal *v20; // x8
  unsigned __int64 v21; // x27
  int v22; // w8
  int v23; // w9
  google::protobuf::internal *v24; // x8
  int v25; // w8
  int v26; // w9
  __int64 v27; // x8
  __int64 v28; // x8
  __int64 v29; // x1
  _QWORD *v30; // x0
  __int64 v31; // x0
  google::protobuf::internal *v32; // x0
  const char *v33; // x1
  google::protobuf::internal *v34; // x8
  int v35; // w8
  __int64 v36; // x8
  std::string *v37; // x0
  google::protobuf::internal *v38; // x8
  const char *v39; // x1
  int v40; // w8
  bool v41; // zf
  unsigned __int64 v42; // x1
  google::protobuf::internal *v43; // x0
  int v44; // w1
  unsigned __int64 v45; // x1
  unsigned __int64 v46; // x1
  google::protobuf::internal *v47; // x0
  int v48; // w1
  google::protobuf::internal *v49; // x0
  __int64 v50; // x1
  google::protobuf::UnknownFieldSet *v51; // x0
  int v52; // w1
  google::protobuf::internal *v53; // [xsp+8h] [xbp-58h] BYREF

  v53 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v53, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v53 + 1);
      v9 = *(unsigned __int8 *)v53;
      if ( *(char *)v53 < 0 )
      {
        v10 = v9 + (*(unsigned __int8 *)v8 << 7);
        v9 = v10 - 128;
        if ( *(char *)v8 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v53,
                                                        (const char *)(v10 - 128),
                                                        (unsigned int)v8);
          v53 = TagFallback;
          if ( !TagFallback )
            goto LABEL_98;
          v8 = TagFallback;
          v9 = v15;
          goto LABEL_8;
        }
        v8 = (google::protobuf::internal *)((char *)v53 + 2);
      }
      v53 = v8;
LABEL_8:
      switch ( v9 >> 3 )
      {
        case 1u:
          if ( (unsigned __int8)v9 != 10 )
            goto LABEL_70;
          *(_DWORD *)(a1 + 16) |= 1u;
          v11 = *(_QWORD *)(a1 + 8);
          v12 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v11 & 1) != 0 )
            v12 = (_QWORD *)*v12;
          v13 = a1 + 24;
          goto LABEL_61;
        case 2u:
          if ( (unsigned __int8)v9 != 18 )
            goto LABEL_70;
          *(_DWORD *)(a1 + 16) |= 2u;
          v16 = *(_QWORD *)(a1 + 8);
          v12 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v16 & 1) != 0 )
            v12 = (_QWORD *)*v12;
          v13 = a1 + 32;
          goto LABEL_61;
        case 3u:
          if ( (unsigned __int8)v9 != 24 )
            goto LABEL_70;
          v5 |= 0x40u;
          v18 = (google::protobuf::internal *)((char *)v8 + 1);
          LODWORD(v17) = *(unsigned __int8 *)v8;
          if ( ((unsigned __int8)v17 & 0x80) == 0 )
            goto LABEL_23;
          v19 = *(char *)v18;
          v17 = (const char *)((unsigned int)v17 + ((unsigned __int8)v19 << 7) - 128);
          if ( v19 < 0 )
          {
            v43 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v17, (unsigned int)v8);
            v53 = v43;
            *(_DWORD *)(a1 + 72) = v44;
            if ( !v43 )
              goto LABEL_98;
          }
          else
          {
            v18 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_23:
            v53 = v18;
            *(_DWORD *)(a1 + 72) = (_DWORD)v17;
          }
          goto LABEL_63;
        case 4u:
          if ( (unsigned __int8)v9 != 32 )
            goto LABEL_70;
          v20 = (google::protobuf::internal *)((char *)v8 + 1);
          v21 = *(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_28;
          v22 = *(char *)v20;
          v23 = v21 + ((unsigned __int8)v22 << 7);
          v21 = (unsigned int)(v23 - 128);
          if ( v22 < 0 )
          {
            v53 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                  v8,
                                                  (const char *)(unsigned int)(v23 - 128),
                                                  (unsigned int)v8);
            if ( !v53 )
              goto LABEL_98;
            v21 = v45;
          }
          else
          {
            v20 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_28:
            v53 = v20;
          }
          if ( (unsigned int)(v21 - 1) <= 2 )
          {
            *(_DWORD *)(a1 + 16) |= 0x200u;
            *(_DWORD *)(a1 + 84) = v21;
            goto LABEL_63;
          }
          if ( (*v7 & 1) != 0 )
            v51 = (google::protobuf::UnknownFieldSet *)((*v7 & 0xFFFFFFFFFFFFFFFELL) + 8);
          else
            v51 = (google::protobuf::UnknownFieldSet *)sub_10003A0B4(a1 + 8);
          v52 = 4;
          goto LABEL_93;
        case 5u:
          if ( (unsigned __int8)v9 != 40 )
            goto LABEL_70;
          v24 = (google::protobuf::internal *)((char *)v8 + 1);
          v21 = *(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_35;
          v25 = *(char *)v24;
          v26 = v21 + ((unsigned __int8)v25 << 7);
          v21 = (unsigned int)(v26 - 128);
          if ( v25 < 0 )
          {
            v53 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                  v8,
                                                  (const char *)(unsigned int)(v26 - 128),
                                                  (unsigned int)v8);
            if ( !v53 )
              goto LABEL_98;
            v21 = v46;
          }
          else
          {
            v24 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_35:
            v53 = v24;
          }
          if ( (unsigned int)(v21 - 1) > 0x11 )
          {
            if ( (*v7 & 1) != 0 )
              v51 = (google::protobuf::UnknownFieldSet *)((*v7 & 0xFFFFFFFFFFFFFFFELL) + 8);
            else
              v51 = (google::protobuf::UnknownFieldSet *)sub_10003A0B4(a1 + 8);
            v52 = 5;
LABEL_93:
            google::protobuf::UnknownFieldSet::AddVarint(v51, v52, v21);
          }
          else
          {
            *(_DWORD *)(a1 + 16) |= 0x400u;
            *(_DWORD *)(a1 + 88) = v21;
          }
          goto LABEL_63;
        case 6u:
          if ( (unsigned __int8)v9 != 50 )
            goto LABEL_70;
          *(_DWORD *)(a1 + 16) |= 4u;
          v27 = *(_QWORD *)(a1 + 8);
          v12 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v27 & 1) != 0 )
            v12 = (_QWORD *)*v12;
          v13 = a1 + 40;
          goto LABEL_61;
        case 7u:
          if ( (unsigned __int8)v9 != 58 )
            goto LABEL_70;
          *(_DWORD *)(a1 + 16) |= 8u;
          v28 = *(_QWORD *)(a1 + 8);
          v12 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v28 & 1) != 0 )
            v12 = (_QWORD *)*v12;
          v13 = a1 + 48;
          goto LABEL_61;
        case 8u:
          if ( (unsigned __int8)v9 != 66 )
            goto LABEL_70;
          *(_DWORD *)(a1 + 16) |= 0x20u;
          v29 = *(_QWORD *)(a1 + 64);
          if ( !v29 )
          {
            v30 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFELL);
            if ( (*v7 & 1) != 0 )
              v30 = (_QWORD *)*v30;
            v31 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::FieldOptions>(v30);
            LODWORD(v29) = v31;
            *(_QWORD *)(a1 + 64) = v31;
            v8 = v53;
          }
          v32 = (google::protobuf::internal *)sub_1000A860C(a3, v29, v8);
          goto LABEL_62;
        case 9u:
          if ( (unsigned __int8)v9 != 72 )
            goto LABEL_70;
          v5 |= 0x80u;
          v34 = (google::protobuf::internal *)((char *)v8 + 1);
          LODWORD(v33) = *(unsigned __int8 *)v8;
          if ( ((unsigned __int8)v33 & 0x80) == 0 )
            goto LABEL_56;
          v35 = *(char *)v34;
          v33 = (const char *)((unsigned int)v33 + ((unsigned __int8)v35 << 7) - 128);
          if ( v35 < 0 )
          {
            v47 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v33, (unsigned int)v8);
            v53 = v47;
            *(_DWORD *)(a1 + 76) = v48;
            if ( !v47 )
              goto LABEL_98;
          }
          else
          {
            v34 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_56:
            v53 = v34;
            *(_DWORD *)(a1 + 76) = (_DWORD)v33;
          }
          goto LABEL_63;
        case 0xAu:
          if ( (unsigned __int8)v9 != 82 )
            goto LABEL_70;
          *(_DWORD *)(a1 + 16) |= 0x10u;
          v36 = *(_QWORD *)(a1 + 8);
          v12 = (_QWORD *)(v36 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v36 & 1) != 0 )
            v12 = (_QWORD *)*v12;
          v13 = a1 + 56;
LABEL_61:
          v37 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v13, v12);
          v32 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v37, v53, a3);
          goto LABEL_62;
        case 0x11u:
          if ( (unsigned __int8)v9 != 136 )
            goto LABEL_70;
          v5 |= 0x100u;
          v38 = (google::protobuf::internal *)((char *)v8 + 1);
          v39 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_69;
          v40 = *(char *)v38;
          v39 = (const char *)((unsigned int)v39 + ((unsigned __int8)v40 << 7) - 128);
          if ( v40 < 0 )
          {
            v49 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v39, (unsigned int)v8);
            v53 = v49;
            *(_BYTE *)(a1 + 80) = v50 != 0;
            if ( !v49 )
              goto LABEL_98;
          }
          else
          {
            v38 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_69:
            v53 = v38;
            *(_BYTE *)(a1 + 80) = v39 != 0LL;
          }
          goto LABEL_63;
        default:
LABEL_70:
          if ( v9 )
            v41 = (v9 & 7) == 4;
          else
            v41 = 1;
          if ( v41 )
          {
            *(_DWORD *)(a3 + 80) = v9 - 1;
            goto LABEL_2;
          }
          if ( (*v7 & 1) != 0 )
            v42 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
          else
            v42 = sub_10003A0B4(a1 + 8);
          v32 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v42);
LABEL_62:
          v53 = v32;
          if ( !v32 )
          {
LABEL_98:
            v53 = 0LL;
            goto LABEL_2;
          }
LABEL_63:
          if ( (sub_10003A040(a3, &v53, *(unsigned int *)(a3 + 92)) & 1) != 0 )
            goto LABEL_2;
          break;
      }
    }
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v53;
}