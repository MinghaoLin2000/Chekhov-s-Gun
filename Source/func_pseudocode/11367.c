__ZN6google8protobuf28GeneratedCodeInfo_Annotation14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::GeneratedCodeInfo_Annotation::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w25
  _QWORD *v7; // x21
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w24
  unsigned int v10; // w9
  google::protobuf::internal *v11; // x0
  __int64 v12; // x8
  _QWORD *v13; // x1
  std::string *v14; // x0
  const char *v15; // x1
  google::protobuf::internal *v16; // x8
  int v17; // w8
  const char *v18; // x1
  google::protobuf::internal *v19; // x8
  int v20; // w8
  google::protobuf::internal *TagFallback; // x0
  unsigned int v22; // w1
  google::protobuf::internal *v23; // x0
  int v24; // w1
  google::protobuf::internal *v25; // x0
  int v26; // w1
  __int64 v27; // x0
  bool v28; // zf
  unsigned __int64 v29; // x1
  google::protobuf::internal *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v30, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v30 + 1);
      v9 = *(unsigned __int8 *)v30;
      if ( *(char *)v30 < 0 )
      {
        v10 = v9 + (*(unsigned __int8 *)v8 << 7);
        v9 = v10 - 128;
        if ( *(char *)v8 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v30,
                                                        (const char *)(v10 - 128),
                                                        (unsigned int)v8);
          v30 = TagFallback;
          if ( !TagFallback )
            goto LABEL_46;
          v8 = TagFallback;
          v9 = v22;
          goto LABEL_8;
        }
        v8 = (google::protobuf::internal *)((char *)v30 + 2);
      }
      v30 = v8;
LABEL_8:
      switch ( v9 >> 3 )
      {
        case 1u:
          if ( (unsigned __int8)v9 == 10 )
          {
            v11 = (google::protobuf::internal *)google::protobuf::internal::PackedInt32Parser((int)a1 + 24, (int)v8, a3);
            goto LABEL_41;
          }
          if ( (unsigned __int8)v9 != 8 )
            goto LABEL_34;
          v27 = sub_10003C864(&v30);
          sub_1000B5798(a1, v27);
          if ( !v30 )
            goto LABEL_46;
          goto LABEL_42;
        case 2u:
          if ( (unsigned __int8)v9 != 18 )
            goto LABEL_34;
          *(_DWORD *)(a1 + 16) |= 1u;
          v12 = *(_QWORD *)(a1 + 8);
          v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v12 & 1) != 0 )
            v13 = (_QWORD *)*v13;
          v14 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(a1 + 48, v13);
          v11 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v14, v30, a3);
          goto LABEL_41;
        case 3u:
          if ( (unsigned __int8)v9 != 24 )
            goto LABEL_34;
          v5 |= 2u;
          v16 = (google::protobuf::internal *)((char *)v8 + 1);
          LODWORD(v15) = *(unsigned __int8 *)v8;
          if ( ((unsigned __int8)v15 & 0x80) == 0 )
            goto LABEL_19;
          v17 = *(char *)v16;
          v15 = (const char *)((unsigned int)v15 + ((unsigned __int8)v17 << 7) - 128);
          if ( v17 < 0 )
          {
            v23 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v15, (unsigned int)v8);
            v30 = v23;
            *(_DWORD *)(a1 + 56) = v24;
            if ( !v23 )
              goto LABEL_46;
          }
          else
          {
            v16 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_19:
            v30 = v16;
            *(_DWORD *)(a1 + 56) = (_DWORD)v15;
          }
          goto LABEL_42;
        case 4u:
          if ( (unsigned __int8)v9 != 32 )
            goto LABEL_34;
          v5 |= 4u;
          v19 = (google::protobuf::internal *)((char *)v8 + 1);
          LODWORD(v18) = *(unsigned __int8 *)v8;
          if ( ((unsigned __int8)v18 & 0x80) == 0 )
            goto LABEL_24;
          v20 = *(char *)v19;
          v18 = (const char *)((unsigned int)v18 + ((unsigned __int8)v20 << 7) - 128);
          if ( v20 < 0 )
          {
            v25 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v18, (unsigned int)v8);
            v30 = v25;
            *(_DWORD *)(a1 + 60) = v26;
            if ( !v25 )
              goto LABEL_46;
          }
          else
          {
            v19 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_24:
            v30 = v19;
            *(_DWORD *)(a1 + 60) = (_DWORD)v18;
          }
          goto LABEL_42;
        default:
LABEL_34:
          if ( v9 )
            v28 = (v9 & 7) == 4;
          else
            v28 = 1;
          if ( v28 )
          {
            *(_DWORD *)(a3 + 80) = v9 - 1;
            goto LABEL_2;
          }
          if ( (*v7 & 1) != 0 )
            v29 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
          else
            v29 = sub_10003A0B4(a1 + 8);
          v11 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v29);
LABEL_41:
          v30 = v11;
          if ( !v11 )
          {
LABEL_46:
            v30 = 0LL;
            goto LABEL_2;
          }
LABEL_42:
          if ( (sub_10003A040(a3, &v30, *(unsigned int *)(a3 + 92)) & 1) != 0 )
            goto LABEL_2;
          break;
      }
    }
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v30;
}