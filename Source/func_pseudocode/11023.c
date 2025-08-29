__ZN6google8protobuf30DescriptorProto_ExtensionRange14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::DescriptorProto_ExtensionRange::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w23
  _QWORD *v7; // x21
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w22
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
  const char *v22; // x1
  google::protobuf::internal *v23; // x8
  int v24; // w8
  google::protobuf::internal *TagFallback; // x0
  unsigned int v26; // w1
  google::protobuf::internal *v27; // x0
  int v28; // w1
  google::protobuf::internal *v29; // x0
  int v30; // w1
  google::protobuf::internal *v31; // [xsp+8h] [xbp-38h] BYREF

  v31 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v31, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v31 + 1);
      v9 = *(unsigned __int8 *)v31;
      if ( (*(char *)v31 & 0x80000000) == 0 )
        goto LABEL_7;
      v10 = v9 + (*(unsigned __int8 *)v8 << 7);
      v9 = v10 - 128;
      if ( (*(char *)v8 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v31,
                                                    (const char *)(v10 - 128),
                                                    (unsigned int)v8);
      v31 = TagFallback;
      if ( !TagFallback )
        goto LABEL_48;
      v8 = TagFallback;
      v9 = v26;
LABEL_8:
      v11 = v9 >> 3;
      if ( v9 >> 3 == 3 )
      {
        if ( (unsigned __int8)v9 == 26 )
        {
          *(_DWORD *)(a1 + 16) |= 1u;
          v16 = *(_QWORD *)(a1 + 24);
          if ( !v16 )
          {
            v17 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFELL);
            if ( (*v7 & 1) != 0 )
              v17 = (_QWORD *)*v17;
            v18 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::ExtensionRangeOptions>(v17);
            LODWORD(v16) = v18;
            *(_QWORD *)(a1 + 24) = v18;
            v8 = v31;
          }
          v15 = (google::protobuf::internal *)sub_1000A43AC(a3, v16, v8);
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
        v31 = v15;
        if ( !v15 )
          goto LABEL_48;
        goto LABEL_38;
      }
      if ( v11 == 2 )
      {
        if ( (unsigned __int8)v9 != 16 )
          goto LABEL_14;
        v5 |= 4u;
        v20 = (google::protobuf::internal *)((char *)v8 + 1);
        LODWORD(v19) = *(unsigned __int8 *)v8;
        if ( ((unsigned __int8)v19 & 0x80) == 0 )
          goto LABEL_33;
        v21 = *(char *)v20;
        v19 = (const char *)((unsigned int)v19 + ((unsigned __int8)v21 << 7) - 128);
        if ( (v21 & 0x80000000) == 0 )
        {
          v20 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_33:
          v31 = v20;
          *(_DWORD *)(a1 + 36) = (_DWORD)v19;
          goto LABEL_38;
        }
        v27 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v19, (unsigned int)v8);
        v31 = v27;
        *(_DWORD *)(a1 + 36) = v28;
        if ( !v27 )
          goto LABEL_48;
      }
      else
      {
        if ( v11 != 1 || (unsigned __int8)v9 != 8 )
          goto LABEL_14;
        v5 |= 2u;
        v23 = (google::protobuf::internal *)((char *)v8 + 1);
        LODWORD(v22) = *(unsigned __int8 *)v8;
        if ( ((unsigned __int8)v22 & 0x80) == 0 )
          goto LABEL_37;
        v24 = *(char *)v23;
        v22 = (const char *)((unsigned int)v22 + ((unsigned __int8)v24 << 7) - 128);
        if ( (v24 & 0x80000000) == 0 )
        {
          v23 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_37:
          v31 = v23;
          *(_DWORD *)(a1 + 32) = (_DWORD)v22;
          goto LABEL_38;
        }
        v29 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v8, v22, (unsigned int)v8);
        v31 = v29;
        *(_DWORD *)(a1 + 32) = v30;
        if ( !v29 )
        {
LABEL_48:
          v31 = 0LL;
          goto LABEL_2;
        }
      }
LABEL_38:
      if ( (sub_10003A040(a3, &v31, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        goto LABEL_2;
    }
    v8 = (google::protobuf::internal *)((char *)v31 + 2);
LABEL_7:
    v31 = v8;
    goto LABEL_8;
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v5;
  return v31;
}