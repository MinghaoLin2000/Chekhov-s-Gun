__ZN3TSP5Color14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::Color::_InternalParse(
        _DWORD *a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w23
  _QWORD *v7; // x21
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w22
  unsigned int v10; // w9
  google::protobuf::internal *v11; // x8
  unsigned __int64 v12; // x22
  int v13; // w8
  int v14; // w9
  google::protobuf::internal *TagFallback; // x0
  unsigned int v16; // w1
  google::protobuf::internal *v17; // x2
  int v18; // t1
  int v19; // t1
  int v20; // t1
  int v21; // t1
  int v22; // t1
  int v23; // t1
  int v24; // t1
  int v25; // t1
  int v26; // t1
  google::protobuf::internal *v27; // x8
  int v28; // w8
  int v29; // w9
  bool v30; // zf
  unsigned __int64 v31; // x1
  unsigned __int64 v32; // x1
  unsigned __int64 v33; // x1
  google::protobuf::UnknownFieldSet *v34; // x0
  int v35; // w1
  google::protobuf::internal *v36; // [xsp+8h] [xbp-38h] BYREF

  v36 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v36, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = a1 + 2;
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v36 + 1);
      v9 = *(unsigned __int8 *)v36;
      if ( *(char *)v36 < 0 )
      {
        v10 = v9 + (*(unsigned __int8 *)v8 << 7);
        v9 = v10 - 128;
        if ( *(char *)v8 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v36,
                                                        (const char *)(v10 - 128),
                                                        (unsigned int)v8);
          v36 = TagFallback;
          if ( !TagFallback )
            goto LABEL_69;
          v8 = TagFallback;
          v9 = v16;
          goto LABEL_8;
        }
        v8 = (google::protobuf::internal *)((char *)v36 + 2);
      }
      v36 = v8;
LABEL_8:
      switch ( v9 >> 3 )
      {
        case 1u:
          if ( (unsigned __int8)v9 != 8 )
            goto LABEL_46;
          v11 = (google::protobuf::internal *)((char *)v8 + 1);
          v12 = *(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_13;
          v13 = *(char *)v11;
          v14 = v12 + ((unsigned __int8)v13 << 7);
          v12 = (unsigned int)(v14 - 128);
          if ( v13 < 0 )
          {
            v36 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                  v8,
                                                  (const char *)(unsigned int)(v14 - 128),
                                                  (unsigned int)v8);
            if ( !v36 )
              goto LABEL_69;
            v12 = v32;
          }
          else
          {
            v11 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_13:
            v36 = v11;
          }
          if ( (unsigned int)(v12 - 1) <= 2 )
          {
            a1[4] |= 0x200u;
            a1[15] = v12;
            goto LABEL_37;
          }
          if ( (*v7 & 1) != 0 )
            v34 = (google::protobuf::UnknownFieldSet *)((*v7 & 0xFFFFFFFFFFFFFFFELL) + 8);
          else
            v34 = (google::protobuf::UnknownFieldSet *)sub_10003A0B4(a1 + 2);
          v35 = 1;
          goto LABEL_64;
        case 3u:
          if ( (unsigned __int8)v9 != 29 )
            goto LABEL_46;
          v18 = *(_DWORD *)v8;
          v17 = (google::protobuf::internal *)((char *)v8 + 4);
          v5 |= 1u;
          a1[6] = v18;
          goto LABEL_36;
        case 4u:
          if ( (unsigned __int8)v9 != 37 )
            goto LABEL_46;
          v19 = *(_DWORD *)v8;
          v17 = (google::protobuf::internal *)((char *)v8 + 4);
          v5 |= 2u;
          a1[7] = v19;
          goto LABEL_36;
        case 5u:
          if ( (unsigned __int8)v9 != 45 )
            goto LABEL_46;
          v20 = *(_DWORD *)v8;
          v17 = (google::protobuf::internal *)((char *)v8 + 4);
          v5 |= 4u;
          a1[8] = v20;
          goto LABEL_36;
        case 6u:
          if ( (unsigned __int8)v9 != 53 )
            goto LABEL_46;
          v21 = *(_DWORD *)v8;
          v17 = (google::protobuf::internal *)((char *)v8 + 4);
          v5 |= 0x400u;
          a1[16] = v21;
          goto LABEL_36;
        case 7u:
          if ( (unsigned __int8)v9 != 61 )
            goto LABEL_46;
          v22 = *(_DWORD *)v8;
          v17 = (google::protobuf::internal *)((char *)v8 + 4);
          v5 |= 8u;
          a1[9] = v22;
          goto LABEL_36;
        case 8u:
          if ( (unsigned __int8)v9 != 69 )
            goto LABEL_46;
          v23 = *(_DWORD *)v8;
          v17 = (google::protobuf::internal *)((char *)v8 + 4);
          v5 |= 0x10u;
          a1[10] = v23;
          goto LABEL_36;
        case 9u:
          if ( (unsigned __int8)v9 != 77 )
            goto LABEL_46;
          v24 = *(_DWORD *)v8;
          v17 = (google::protobuf::internal *)((char *)v8 + 4);
          v5 |= 0x20u;
          a1[11] = v24;
          goto LABEL_36;
        case 0xAu:
          if ( (unsigned __int8)v9 != 85 )
            goto LABEL_46;
          v25 = *(_DWORD *)v8;
          v17 = (google::protobuf::internal *)((char *)v8 + 4);
          v5 |= 0x40u;
          a1[12] = v25;
          goto LABEL_36;
        case 0xBu:
          if ( (unsigned __int8)v9 != 93 )
            goto LABEL_46;
          v26 = *(_DWORD *)v8;
          v17 = (google::protobuf::internal *)((char *)v8 + 4);
          v5 |= 0x80u;
          a1[13] = v26;
LABEL_36:
          v36 = v17;
          goto LABEL_37;
        case 0xCu:
          if ( (unsigned __int8)v9 != 96 )
            goto LABEL_46;
          v27 = (google::protobuf::internal *)((char *)v8 + 1);
          v12 = *(unsigned __int8 *)v8;
          if ( (*(char *)v8 & 0x80000000) == 0 )
            goto LABEL_43;
          v28 = *(char *)v27;
          v29 = v12 + ((unsigned __int8)v28 << 7);
          v12 = (unsigned int)(v29 - 128);
          if ( v28 < 0 )
          {
            v36 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                  v8,
                                                  (const char *)(unsigned int)(v29 - 128),
                                                  (unsigned int)v8);
            if ( !v36 )
              goto LABEL_69;
            v12 = v33;
          }
          else
          {
            v27 = (google::protobuf::internal *)((char *)v8 + 2);
LABEL_43:
            v36 = v27;
          }
          if ( (unsigned int)(v12 - 1) > 1 )
          {
            if ( (*v7 & 1) != 0 )
              v34 = (google::protobuf::UnknownFieldSet *)((*v7 & 0xFFFFFFFFFFFFFFFELL) + 8);
            else
              v34 = (google::protobuf::UnknownFieldSet *)sub_10003A0B4(a1 + 2);
            v35 = 12;
LABEL_64:
            google::protobuf::UnknownFieldSet::AddVarint(v34, v35, v12);
          }
          else
          {
            a1[4] |= 0x100u;
            a1[14] = v12;
          }
          goto LABEL_37;
        default:
LABEL_46:
          if ( v9 )
            v30 = (v9 & 7) == 4;
          else
            v30 = 1;
          if ( v30 )
          {
            *(_DWORD *)(a3 + 80) = v9 - 1;
            goto LABEL_2;
          }
          if ( (*v7 & 1) != 0 )
            v31 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
          else
            v31 = sub_10003A0B4(a1 + 2);
          v36 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v31);
          if ( !v36 )
          {
LABEL_69:
            v36 = 0LL;
            goto LABEL_2;
          }
LABEL_37:
          if ( (sub_10003A040(a3, &v36, *(unsigned int *)(a3 + 92)) & 1) != 0 )
            goto LABEL_2;
          break;
      }
    }
  }
LABEL_2:
  a1[4] |= v5;
  return v36;
}