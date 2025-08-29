__ZN6google8protobuf21MethodDescriptorProto14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::MethodDescriptorProto::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w26
  _QWORD *v7; // x21
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w25
  unsigned int v10; // w9
  __int64 v11; // x8
  _QWORD *v12; // x1
  __int64 v13; // x0
  __int64 v14; // x8
  __int64 v15; // x8
  std::string *v16; // x0
  google::protobuf::internal *v17; // x0
  __int64 v18; // x1
  _QWORD *v19; // x0
  __int64 v20; // x0
  google::protobuf::internal *v21; // x8
  const char *v22; // x1
  int v23; // w8
  google::protobuf::internal *v24; // x8
  const char *v25; // x1
  int v26; // w8
  bool v27; // zf
  unsigned __int64 v28; // x1
  google::protobuf::internal *TagFallback; // x0
  unsigned int v30; // w1
  google::protobuf::internal *v31; // x0
  __int64 v32; // x1
  google::protobuf::internal *v33; // x0
  __int64 v34; // x1
  google::protobuf::internal *v35; // [xsp+8h] [xbp-48h] BYREF

  v35 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v35, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v35 + 1);
      v9 = *(unsigned __int8 *)v35;
      if ( *(char *)v35 < 0 )
      {
        v10 = v9 + (*(unsigned __int8 *)v8 << 7);
        v9 = v10 - 128;
        if ( *(char *)v8 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v35,
                                                        (const char *)(v10 - 128),
                                                        (unsigned int)v8);
          v35 = TagFallback;
          if ( !TagFallback )
            goto LABEL_56;
          v8 = TagFallback;
          v9 = v30;
          goto LABEL_8;
        }
        v8 = (google::protobuf::internal *)((char *)v35 + 2);
      }
      v35 = v8;
LABEL_8:
      switch ( v9 >> 3 )
      {
        case 1u:
          if ( (unsigned __int8)v9 != 10 )
            goto LABEL_38;
          *(_DWORD *)(a1 + 16) |= 1u;
          v11 = *(_QWORD *)(a1 + 8);
          v12 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v11 & 1) != 0 )
            v12 = (_QWORD *)*v12;
          v13 = a1 + 24;
          goto LABEL_21;
        case 2u:
          if ( (unsigned __int8)v9 != 18 )
            goto LABEL_38;
          *(_DWORD *)(a1 + 16) |= 2u;
          v14 = *(_QWORD *)(a1 + 8);
          v12 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v14 & 1) != 0 )
            v12 = (_QWORD *)*v12;
          v13 = a1 + 32;
          goto LABEL_21;
        case 3u:
          if ( (unsigned __int8)v9 != 26 )
            goto LABEL_38;
          *(_DWORD *)(a1 + 16) |= 4u;
          v15 = *(_QWORD *)(a1 + 8);
          v12 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v15 & 1) != 0 )
            v12 = (_QWORD *)*v12;
          v13 = a1 + 40;
LABEL_21:
          v16 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v13, v12);
          v17 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v16, v35, a3);
          goto LABEL_45;
        case 4u:
          if ( (unsigned __int8)v9 != 34 )
            goto LABEL_38;
          *(_DWORD *)(a1 + 16) |= 8u;
          v18 = *(_QWORD *)(a1 + 48);
          if ( !v18 )
          {
            v19 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFELL);
            if ( (*v7 & 1) != 0 )
              v19 = (_QWORD *)*v19;
            v20 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::MethodOptions>(v19);
            LODWORD(v18) = v20;
            *(_QWORD *)(a1 + 48) = v20;
            v8 = v35;
          }
          v17 = (google::protobuf::internal *)sub_1000AD918(a3, v18, v8);
          goto LABEL_45;
        case 5u:
          if ( (unsigned __int8)v9 != 40 )
            goto LABEL_38;
          v5 |= 0x10u;
          v21 = (google::protobuf::internal *)((char *)v8 + 1);
          v22 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_32;
          v23 = *(char *)v21;
          v22 = (const char *)((unsigned int)v22 + ((unsigned __int8)v23 << 7) - 128);
          if ( v23 < 0 )
          {
            v31 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v22, (unsigned int)v8);
            v35 = v31;
            *(_BYTE *)(a1 + 56) = v32 != 0;
            if ( !v31 )
              goto LABEL_56;
          }
          else
          {
            v21 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_32:
            v35 = v21;
            *(_BYTE *)(a1 + 56) = v22 != 0LL;
          }
          goto LABEL_46;
        case 6u:
          if ( (unsigned __int8)v9 != 48 )
            goto LABEL_38;
          v5 |= 0x20u;
          v24 = (google::protobuf::internal *)((char *)v8 + 1);
          v25 = (const char *)*(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_37;
          v26 = *(char *)v24;
          v25 = (const char *)((unsigned int)v25 + ((unsigned __int8)v26 << 7) - 128);
          if ( v26 < 0 )
          {
            v33 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v25, (unsigned int)v8);
            v35 = v33;
            *(_BYTE *)(a1 + 57) = v34 != 0;
            if ( !v33 )
              goto LABEL_56;
          }
          else
          {
            v24 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_37:
            v35 = v24;
            *(_BYTE *)(a1 + 57) = v25 != 0LL;
          }
          goto LABEL_46;
        default:
LABEL_38:
          if ( v9 )
            v27 = (v9 & 7) == 4;
          else
            v27 = 1;
          if ( v27 )
          {
            *(_DWORD *)(a3 + 80) = v9 - 1;
            goto LABEL_2;
          }
          if ( (*v7 & 1) != 0 )
            v28 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
          else
            v28 = sub_10003A0B4(a1 + 8);
          v17 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v28);
LABEL_45:
          v35 = v17;
          if ( !v17 )
          {
LABEL_56:
            v35 = 0LL;
            goto LABEL_2;
          }
LABEL_46:
          if ( (sub_10003A040(a3, &v35, *(unsigned int *)(a3 + 92)) & 1) != 0 )
            goto LABEL_2;
          break;
      }
    }
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v35;
}