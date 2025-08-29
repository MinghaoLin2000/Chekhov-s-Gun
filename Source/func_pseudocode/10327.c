__ZN3TSP13CFUUIDArchive14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::CFUUIDArchive::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w24
  _QWORD *v7; // x21
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w23
  unsigned int v10; // w9
  __int64 v11; // x8
  _QWORD *v12; // x1
  std::string *v13; // x0
  google::protobuf::internal *v14; // x0
  google::protobuf::internal *v15; // x8
  const char *v16; // x1
  int v17; // w8
  google::protobuf::internal *v18; // x8
  const char *v19; // x1
  int v20; // w8
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
  int v32; // w1
  google::protobuf::internal *v33; // x0
  int v34; // w1
  google::protobuf::internal *v35; // x0
  int v36; // w1
  google::protobuf::internal *v37; // x0
  int v38; // w1
  google::protobuf::internal *v39; // [xsp+8h] [xbp-38h] BYREF

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
            goto LABEL_55;
          v8 = TagFallback;
          v9 = v30;
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
            goto LABEL_33;
          *(_DWORD *)(a1 + 16) |= 1u;
          v11 = *(_QWORD *)(a1 + 8);
          v12 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v11 & 1) != 0 )
            v12 = (_QWORD *)*v12;
          v13 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(a1 + 24, v12);
          v14 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v13, v39, a3);
          goto LABEL_40;
        case 2u:
          if ( (unsigned __int8)v9 != 16 )
            goto LABEL_33;
          v5 |= 2u;
          v15 = (google::protobuf::internal *)((char *)v8 + 1);
          LODWORD(v16) = *(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_17;
          v17 = *(char *)v15;
          v16 = (const char *)((unsigned int)v16 + ((unsigned __int8)v17 << 7) - 128);
          if ( v17 < 0 )
          {
            v31 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow32(v8, v16, (unsigned int)v8);
            v39 = v31;
            *(_DWORD *)(a1 + 32) = v32;
            if ( !v31 )
              goto LABEL_55;
          }
          else
          {
            v15 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_17:
            v39 = v15;
            *(_DWORD *)(a1 + 32) = (_DWORD)v16;
          }
          goto LABEL_41;
        case 3u:
          if ( (unsigned __int8)v9 != 24 )
            goto LABEL_33;
          v5 |= 4u;
          v18 = (google::protobuf::internal *)((char *)v8 + 1);
          LODWORD(v19) = *(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_22;
          v20 = *(char *)v18;
          v19 = (const char *)((unsigned int)v19 + ((unsigned __int8)v20 << 7) - 128);
          if ( v20 < 0 )
          {
            v33 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow32(v8, v19, (unsigned int)v8);
            v39 = v33;
            *(_DWORD *)(a1 + 36) = v34;
            if ( !v33 )
              goto LABEL_55;
          }
          else
          {
            v18 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_22:
            v39 = v18;
            *(_DWORD *)(a1 + 36) = (_DWORD)v19;
          }
          goto LABEL_41;
        case 4u:
          if ( (unsigned __int8)v9 != 32 )
            goto LABEL_33;
          v5 |= 8u;
          v21 = (google::protobuf::internal *)((char *)v8 + 1);
          LODWORD(v22) = *(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_27;
          v23 = *(char *)v21;
          v22 = (const char *)((unsigned int)v22 + ((unsigned __int8)v23 << 7) - 128);
          if ( v23 < 0 )
          {
            v35 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow32(v8, v22, (unsigned int)v8);
            v39 = v35;
            *(_DWORD *)(a1 + 40) = v36;
            if ( !v35 )
              goto LABEL_55;
          }
          else
          {
            v21 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_27:
            v39 = v21;
            *(_DWORD *)(a1 + 40) = (_DWORD)v22;
          }
          goto LABEL_41;
        case 5u:
          if ( (unsigned __int8)v9 != 40 )
            goto LABEL_33;
          v5 |= 0x10u;
          v24 = (google::protobuf::internal *)((char *)v8 + 1);
          LODWORD(v25) = *(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_32;
          v26 = *(char *)v24;
          v25 = (const char *)((unsigned int)v25 + ((unsigned __int8)v26 << 7) - 128);
          if ( v26 < 0 )
          {
            v37 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow32(v8, v25, (unsigned int)v8);
            v39 = v37;
            *(_DWORD *)(a1 + 44) = v38;
            if ( !v37 )
              goto LABEL_55;
          }
          else
          {
            v24 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_32:
            v39 = v24;
            *(_DWORD *)(a1 + 44) = (_DWORD)v25;
          }
          goto LABEL_41;
        default:
LABEL_33:
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
          v14 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v28);
LABEL_40:
          v39 = v14;
          if ( !v14 )
          {
LABEL_55:
            v39 = 0LL;
            goto LABEL_2;
          }
LABEL_41:
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