__ZN3TSP43SupportMetadata_DataCollaborationProperties14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::SupportMetadata_DataCollaborationProperties::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  unsigned __int64 v5; // x1
  int v6; // w24
  _QWORD *v8; // x21
  google::protobuf::internal *v9; // x2
  unsigned int v10; // w23
  unsigned int v11; // w9
  __int64 v12; // x8
  _QWORD *v13; // x1
  std::string *v14; // x0
  google::protobuf::internal *v15; // x0
  google::protobuf::internal *TagFallback; // x0
  google::protobuf::internal *v17; // x8
  const char *v18; // x1
  int v19; // w8
  google::protobuf::internal *v20; // x8
  const char *v21; // x1
  int v22; // w8
  google::protobuf::internal *v23; // x8
  unsigned __int64 v24; // x23
  int v25; // w8
  int v26; // w9
  const char *v27; // x1
  google::protobuf::internal *v28; // x8
  int v29; // w8
  google::protobuf::internal *v30; // x8
  const char *v31; // x1
  int v32; // w8
  const char *v33; // x1
  google::protobuf::internal *v34; // x8
  int v35; // w8
  bool v36; // zf
  unsigned __int64 v37; // x1
  google::protobuf::internal *v38; // x0
  __int64 v39; // x1
  google::protobuf::internal *v40; // x0
  __int64 v41; // x1
  google::protobuf::internal *v42; // x0
  int v43; // w1
  google::protobuf::internal *v44; // x0
  __int64 v45; // x1
  google::protobuf::internal *v46; // x0
  int v47; // w1
  google::protobuf::UnknownFieldSet *v48; // x0
  google::protobuf::internal *v49; // [xsp+8h] [xbp-38h] BYREF

  v49 = a2;
  v6 = 0;
  if ( (sub_10003A040(a3, &v49, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v8 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v9 = (google::protobuf::internal *)((char *)v49 + 1);
      v10 = *(unsigned __int8 *)v49;
      if ( *(char *)v49 < 0 )
      {
        v11 = v10 + (*(unsigned __int8 *)v9 << 7);
        v10 = v11 - 128;
        if ( *(char *)v9 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v49,
                                                        (const char *)(v11 - 128),
                                                        (unsigned int)v9);
          v49 = TagFallback;
          if ( !TagFallback )
            goto LABEL_75;
          v9 = TagFallback;
          v10 = v5;
          goto LABEL_8;
        }
        v9 = (google::protobuf::internal *)((char *)v49 + 2);
      }
      v49 = v9;
LABEL_8:
      switch ( v10 >> 3 )
      {
        case 1u:
          if ( (unsigned __int8)v10 != 10 )
            goto LABEL_47;
          *(_DWORD *)(a1 + 16) |= 1u;
          v12 = *(_QWORD *)(a1 + 8);
          v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v12 & 1) != 0 )
            v13 = (_QWORD *)*v13;
          v14 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(a1 + 24, v13);
          v15 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v14, v49, a3);
          goto LABEL_54;
        case 2u:
          if ( (unsigned __int8)v10 != 16 )
            goto LABEL_47;
          v6 |= 2u;
          v17 = (google::protobuf::internal *)((char *)v9 + 1);
          v18 = (const char *)*(unsigned __int8 *)v9;
          if ( (*(char *)v9 & 0x80000000) == 0 )
            goto LABEL_19;
          v19 = *(char *)v17;
          v18 = (const char *)((unsigned int)v18 + ((unsigned __int8)v19 << 7) - 128);
          if ( v19 < 0 )
          {
            v38 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v9, v18, (unsigned int)v9);
            v49 = v38;
            *(_BYTE *)(a1 + 32) = v39 != 0;
            if ( !v38 )
              goto LABEL_75;
          }
          else
          {
            v17 = (google::protobuf::internal *)((char *)v9 + 2);
LABEL_19:
            v49 = v17;
            *(_BYTE *)(a1 + 32) = v18 != 0LL;
          }
          goto LABEL_55;
        case 3u:
          if ( (unsigned __int8)v10 != 24 )
            goto LABEL_47;
          v6 |= 4u;
          v20 = (google::protobuf::internal *)((char *)v9 + 1);
          v21 = (const char *)*(unsigned __int8 *)v9;
          if ( (*(char *)v9 & 0x80000000) == 0 )
            goto LABEL_24;
          v22 = *(char *)v20;
          v21 = (const char *)((unsigned int)v21 + ((unsigned __int8)v22 << 7) - 128);
          if ( v22 < 0 )
          {
            v40 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v9, v21, (unsigned int)v9);
            v49 = v40;
            *(_BYTE *)(a1 + 33) = v41 != 0;
            if ( !v40 )
              goto LABEL_75;
          }
          else
          {
            v20 = (google::protobuf::internal *)((char *)v9 + 2);
LABEL_24:
            v49 = v20;
            *(_BYTE *)(a1 + 33) = v21 != 0LL;
          }
          goto LABEL_55;
        case 4u:
          if ( (unsigned __int8)v10 != 32 )
            goto LABEL_47;
          v23 = (google::protobuf::internal *)((char *)v9 + 1);
          v24 = *(unsigned __int8 *)v9;
          if ( (*(char *)v9 & 0x80000000) == 0 )
            goto LABEL_29;
          v25 = *(char *)v23;
          v26 = v24 + ((unsigned __int8)v25 << 7);
          v24 = (unsigned int)(v26 - 128);
          if ( v25 < 0 )
          {
            v49 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(
                                                  v9,
                                                  (const char *)(unsigned int)(v26 - 128),
                                                  (unsigned int)v9);
            if ( !v49 )
              goto LABEL_75;
            v24 = v5;
          }
          else
          {
            v23 = (google::protobuf::internal *)((char *)v9 + 2);
LABEL_29:
            v49 = v23;
          }
          if ( (unsigned int)TSP::DataUploadStatus_IsValid((TSP *)v24, v5) )
          {
            *(_DWORD *)(a1 + 16) |= 0x10u;
            *(_DWORD *)(a1 + 36) = v24;
          }
          else
          {
            if ( (*v8 & 1) != 0 )
              v48 = (google::protobuf::UnknownFieldSet *)((*v8 & 0xFFFFFFFFFFFFFFFELL) + 8);
            else
              v48 = (google::protobuf::UnknownFieldSet *)sub_10003A0B4(a1 + 8);
            google::protobuf::UnknownFieldSet::AddVarint(v48, 4, v24);
          }
          goto LABEL_55;
        case 5u:
          if ( (unsigned __int8)v10 != 40 )
            goto LABEL_47;
          v6 |= 0x20u;
          v28 = (google::protobuf::internal *)((char *)v9 + 1);
          LODWORD(v27) = *(unsigned __int8 *)v9;
          if ( ((unsigned __int8)v27 & 0x80) == 0 )
            goto LABEL_36;
          v29 = *(char *)v28;
          v27 = (const char *)((unsigned int)v27 + ((unsigned __int8)v29 << 7) - 128);
          if ( v29 < 0 )
          {
            v42 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v9, v27, (unsigned int)v9);
            v49 = v42;
            *(_DWORD *)(a1 + 40) = v43;
            if ( !v42 )
              goto LABEL_75;
          }
          else
          {
            v28 = (google::protobuf::internal *)((char *)v9 + 2);
LABEL_36:
            v49 = v28;
            *(_DWORD *)(a1 + 40) = (_DWORD)v27;
          }
          goto LABEL_55;
        case 6u:
          if ( (unsigned __int8)v10 != 48 )
            goto LABEL_47;
          v6 |= 8u;
          v30 = (google::protobuf::internal *)((char *)v9 + 1);
          v31 = (const char *)*(unsigned __int8 *)v9;
          if ( (*(char *)v9 & 0x80000000) == 0 )
            goto LABEL_41;
          v32 = *(char *)v30;
          v31 = (const char *)((unsigned int)v31 + ((unsigned __int8)v32 << 7) - 128);
          if ( v32 < 0 )
          {
            v44 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v9, v31, (unsigned int)v9);
            v49 = v44;
            *(_BYTE *)(a1 + 34) = v45 != 0;
            if ( !v44 )
              goto LABEL_75;
          }
          else
          {
            v30 = (google::protobuf::internal *)((char *)v9 + 2);
LABEL_41:
            v49 = v30;
            *(_BYTE *)(a1 + 34) = v31 != 0LL;
          }
          goto LABEL_55;
        case 7u:
          if ( (unsigned __int8)v10 != 56 )
            goto LABEL_47;
          v6 |= 0x40u;
          v34 = (google::protobuf::internal *)((char *)v9 + 1);
          LODWORD(v33) = *(unsigned __int8 *)v9;
          if ( ((unsigned __int8)v33 & 0x80) == 0 )
            goto LABEL_46;
          v35 = *(char *)v34;
          v33 = (const char *)((unsigned int)v33 + ((unsigned __int8)v35 << 7) - 128);
          if ( v35 < 0 )
          {
            v46 = (google::protobuf::internal *)google::protobuf::internal::VarintParseSlow64(v9, v33, (unsigned int)v9);
            v49 = v46;
            *(_DWORD *)(a1 + 44) = v47;
            if ( !v46 )
              goto LABEL_75;
          }
          else
          {
            v34 = (google::protobuf::internal *)((char *)v9 + 2);
LABEL_46:
            v49 = v34;
            *(_DWORD *)(a1 + 44) = (_DWORD)v33;
          }
          goto LABEL_55;
        default:
LABEL_47:
          if ( v10 )
            v36 = (v10 & 7) == 4;
          else
            v36 = 1;
          if ( v36 )
          {
            *(_DWORD *)(a3 + 80) = v10 - 1;
            goto LABEL_2;
          }
          if ( (*v8 & 1) != 0 )
            v37 = (*v8 & 0xFFFFFFFFFFFFFFFELL) + 8;
          else
            v37 = sub_10003A0B4(a1 + 8);
          v15 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v10, v37);
LABEL_54:
          v49 = v15;
          if ( !v15 )
          {
LABEL_75:
            v49 = 0LL;
            goto LABEL_2;
          }
LABEL_55:
          if ( (sub_10003A040(a3, &v49, *(unsigned int *)(a3 + 92)) & 1) != 0 )
            goto LABEL_2;
          break;
      }
    }
  }
LABEL_2:
  *(_DWORD *)(a1 + 16) |= v6;
  return v49;
}