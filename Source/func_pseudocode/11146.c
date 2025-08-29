__ZN6google8protobuf24EnumValueDescriptorProto14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::EnumValueDescriptorProto::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w24
  _QWORD *v7; // x21
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w23
  unsigned int v10; // w9
  unsigned int v11; // w8
  bool v13; // zf
  unsigned __int64 v14; // x1
  google::protobuf::internal *v15; // x0
  __int64 v16; // x1
  _QWORD *v17; // x0
  __int64 v18; // x0
  const char *v19; // x1
  google::protobuf::internal *v20; // x8
  int v21; // w8
  __int64 v22; // x8
  _QWORD *v23; // x1
  std::string *v24; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v26; // w1
  google::protobuf::internal *v27; // x0
  int v28; // w1
  google::protobuf::internal *v29; // [xsp+8h] [xbp-38h] BYREF

  v29 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v29, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v29 + 1);
      v9 = *(unsigned __int8 *)v29;
      if ( (*(char *)v29 & 0x80000000) == 0 )
        goto LABEL_7;
      v10 = v9 + (*(unsigned __int8 *)v8 << 7);
      v9 = v10 - 128;
      if ( (*(char *)v8 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v29,
                                                    (const char *)(v10 - 128),
                                                    (unsigned int)v8);
      v29 = TagFallback;
      if ( !TagFallback )
        goto LABEL_44;
      v8 = TagFallback;
      v9 = v26;
LABEL_8:
      v11 = v9 >> 3;
      if ( v9 >> 3 == 3 )
      {
        if ( (unsigned __int8)v9 != 26 )
          goto LABEL_14;
        *(_DWORD *)(a1 + 16) |= 2u;
        v16 = *(_QWORD *)(a1 + 32);
        if ( !v16 )
        {
          v17 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFELL);
          if ( (*v7 & 1) != 0 )
            v17 = (_QWORD *)*v17;
          v18 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::EnumValueOptions>(v17);
          LODWORD(v16) = v18;
          *(_QWORD *)(a1 + 32) = v18;
          v8 = v29;
        }
        v15 = (google::protobuf::internal *)sub_1000ABC80(a3, v16, v8);
LABEL_35:
        v29 = v15;
        if ( !v15 )
          goto LABEL_44;
        goto LABEL_36;
      }
      if ( v11 != 2 )
      {
        if ( v11 == 1 && (unsigned __int8)v9 == 10 )
        {
          *(_DWORD *)(a1 + 16) |= 1u;
          v22 = *(_QWORD *)(a1 + 8);
          v23 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v22 & 1) != 0 )
            v23 = (_QWORD *)*v23;
          v24 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(a1 + 24, v23);
          v15 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v24, v29, a3);
        }
        else
        {
LABEL_14:
          if ( v9 )
            v13 = (v9 & 7) == 4;
          else
            v13 = 1;
          if ( v13 )
          {
            *(_DWORD *)(a3 + 80) = v9 - 1;
            goto LABEL_2;
          }
          if ( (*v7 & 1) != 0 )
            v14 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
          else
            v14 = sub_10003A0B4(a1 + 8);
          v15 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v14);
        }
        goto LABEL_35;
      }
      if ( (unsigned __int8)v9 != 16 )
        goto LABEL_14;
      v5 |= 4u;
      v20 = (google::protobuf::internal *)((char *)v8 + 1);
      LODWORD(v19) = *(unsigned __int8 *)v8;
      if ( ((unsigned __int8)v19 & 0x80) == 0 )
        goto LABEL_31;
      v21 = *(char *)v20;
      v19 = (const char *)((unsigned int)v19 + ((unsigned __int8)v21 << 7) - 128);
      if ( (v21 & 0x80000000) == 0 )
      {
        v20 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_31:
        v29 = v20;
        *(_DWORD *)(a1 + 40) = (_DWORD)v19;
        goto LABEL_36;
      }
      v27 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v19, (unsigned int)v8);
      v29 = v27;
      *(_DWORD *)(a1 + 40) = v28;
      if ( !v27 )
      {
LABEL_44:
        v29 = 0LL;
        goto LABEL_2;
      }
LABEL_36:
      if ( (sub_10003A040(a3, &v29, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        goto LABEL_2;
    }
    v8 = (google::protobuf::internal *)((char *)v29 + 2);
LABEL_7:
    v29 = v8;
    goto LABEL_8;
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v29;
}