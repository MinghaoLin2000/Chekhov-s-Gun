__ZN3TSP21DataPropertiesEntryV114_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::DataPropertiesEntryV1::_InternalParse(
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
  google::protobuf::internal *v14; // x8
  unsigned __int64 v15; // x1
  int v16; // w8
  google::protobuf::internal *v17; // x0
  __int64 v18; // x8
  std::string *v19; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v21; // w1
  google::protobuf::internal *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x0
  bool v25; // zf
  unsigned __int64 v26; // x1
  google::protobuf::internal *v27; // [xsp+8h] [xbp-48h] BYREF

  v27 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v27, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v27 + 1);
      v9 = *(unsigned __int8 *)v27;
      if ( *(char *)v27 < 0 )
      {
        v10 = v9 + (*(unsigned __int8 *)v8 << 7);
        v9 = v10 - 128;
        if ( *(char *)v8 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v27,
                                                        (const char *)(v10 - 128),
                                                        (unsigned int)v8);
          v27 = TagFallback;
          if ( !TagFallback )
            goto LABEL_46;
          v8 = TagFallback;
          v9 = v21;
          goto LABEL_8;
        }
        v8 = (google::protobuf::internal *)((char *)v27 + 2);
      }
      v27 = v8;
LABEL_8:
      switch ( v9 >> 3 )
      {
        case 1u:
          if ( (unsigned __int8)v9 != 10 )
            goto LABEL_34;
          *(_DWORD *)(a1 + 16) |= 1u;
          v11 = *(_QWORD *)(a1 + 8);
          v12 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v11 & 1) != 0 )
            v12 = (_QWORD *)*v12;
          v13 = a1 + 48;
          goto LABEL_26;
        case 2u:
          if ( (unsigned __int8)v9 != 16 )
            goto LABEL_34;
          v5 |= 8u;
          v14 = (google::protobuf::internal *)((char *)v8 + 1);
          v15 = *(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_17;
          v16 = *(char *)v14;
          v15 = (unsigned int)v15 + ((unsigned __int8)v16 << 7) - 128;
          if ( v16 < 0 )
          {
            v22 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                  v8,
                                                  (const char *)v15,
                                                  (unsigned int)v8);
            v27 = v22;
            *(_BYTE *)(a1 + 72) = v23 != 0;
            if ( !v22 )
              goto LABEL_46;
          }
          else
          {
            v14 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_17:
            v27 = v14;
            *(_BYTE *)(a1 + 72) = v15 != 0;
          }
          goto LABEL_42;
        case 3u:
          if ( (unsigned __int8)v9 != 25 )
            goto LABEL_34;
          v5 |= 4u;
          *(_QWORD *)(a1 + 64) = *(_QWORD *)v8;
          v27 = (google::protobuf::internal *)((char *)v8 + 8);
          goto LABEL_42;
        case 4u:
          if ( (unsigned __int8)v9 == 34 )
          {
            v17 = (google::protobuf::internal *)google::protobuf::internal::PackedUInt32Parser(
                                                  (int)a1 + 24,
                                                  (int)v8,
                                                  a3);
          }
          else
          {
            if ( (unsigned __int8)v9 == 32 )
            {
              v24 = sub_10003D848(&v27);
              sub_10003D8A8(a1, v24);
              if ( !v27 )
                goto LABEL_46;
              goto LABEL_42;
            }
LABEL_34:
            if ( v9 )
              v25 = (v9 & 7) == 4;
            else
              v25 = 1;
            if ( v25 )
            {
              *(_DWORD *)(a3 + 80) = v9 - 1;
              goto LABEL_2;
            }
            if ( (*v7 & 1) != 0 )
              v26 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
            else
              v26 = sub_10003A0B4(a1 + 8);
            v17 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v26);
          }
LABEL_41:
          v27 = v17;
          if ( !v17 )
          {
LABEL_46:
            v27 = 0LL;
            goto LABEL_2;
          }
LABEL_42:
          if ( (sub_10003A040(a3, &v27, *(unsigned int *)(a3 + 92)) & 1) != 0 )
            goto LABEL_2;
          break;
        case 5u:
          if ( (unsigned __int8)v9 != 42 )
            goto LABEL_34;
          *(_DWORD *)(a1 + 16) |= 2u;
          v18 = *(_QWORD *)(a1 + 8);
          v12 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v18 & 1) != 0 )
            v12 = (_QWORD *)*v12;
          v13 = a1 + 56;
LABEL_26:
          v19 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v13, v12);
          v17 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v19, v27, a3);
          goto LABEL_41;
        default:
          goto LABEL_34;
      }
    }
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v27;
}