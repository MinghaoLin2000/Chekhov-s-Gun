__ZN6google8protobuf19FileDescriptorProto14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::FileDescriptorProto::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  google::protobuf::internal *v6; // x2
  unsigned int v7; // w21
  unsigned int v8; // w9
  __int64 v9; // x8
  _QWORD *v10; // x1
  __int64 v11; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v13; // w1
  __int64 v14; // x8
  unsigned __int64 v15; // x0
  google::protobuf::internal *v16; // x1
  int *v17; // x8
  __int64 v18; // x10
  int v19; // w9
  std::string *v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  unsigned __int64 v23; // x0
  google::protobuf::internal *v24; // x2
  int *v25; // x8
  __int64 v26; // x10
  int v27; // w9
  __int64 v28; // x1
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  unsigned __int64 v32; // x0
  google::protobuf::internal *v33; // x2
  int *v34; // x8
  __int64 v35; // x10
  int v36; // w9
  __int64 v37; // x1
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  unsigned __int64 v41; // x0
  google::protobuf::internal *v42; // x2
  int *v43; // x8
  __int64 v44; // x10
  int v45; // w9
  __int64 v46; // x1
  __int64 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  unsigned __int64 v50; // x0
  google::protobuf::internal *v51; // x2
  int *v52; // x8
  __int64 v53; // x10
  int v54; // w9
  __int64 v55; // x1
  __int64 v56; // x0
  __int64 v57; // x8
  __int64 v58; // x9
  __int64 v59; // x1
  _QWORD *v60; // x0
  __int64 v61; // x0
  google::protobuf::internal *v62; // x0
  __int64 v63; // x1
  _QWORD *v64; // x0
  __int64 v65; // x0
  unsigned __int8 *v66; // x0
  int v67; // w21
  int v68; // w10
  int v69; // w1
  __int64 v70; // x26
  int v71; // w25
  unsigned __int8 *v72; // x0
  int v73; // w21
  int v74; // w10
  int v75; // w1
  __int64 v76; // x26
  int v77; // w25
  __int64 v78; // x8
  std::string *v79; // x0
  int v80; // w0
  bool v81; // zf
  unsigned __int64 v82; // x1
  _QWORD *v83; // [xsp+20h] [xbp-70h]
  google::protobuf::internal *v84; // [xsp+38h] [xbp-58h] BYREF

  v84 = a2;
  if ( (sub_10003A040(a3, &v84, *(unsigned int *)(a3 + 92)) & 1) != 0 )
    return v84;
  v83 = (_QWORD *)(a1 + 8);
  while ( 2 )
  {
    v6 = (google::protobuf::internal *)((char *)v84 + 1);
    v7 = *(unsigned __int8 *)v84;
    if ( (*(char *)v84 & 0x80000000) == 0 )
      goto LABEL_7;
    v8 = v7 + (*(unsigned __int8 *)v6 << 7);
    v7 = v8 - 128;
    if ( (*(char *)v6 & 0x80000000) == 0 )
    {
      v6 = (google::protobuf::internal *)((char *)v84 + 2);
LABEL_7:
      v84 = v6;
      goto LABEL_8;
    }
    TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                  v84,
                                                  (const char *)(v8 - 128),
                                                  (unsigned int)v6);
    v84 = TagFallback;
    if ( !TagFallback )
      return 0LL;
    v6 = TagFallback;
    v7 = v13;
LABEL_8:
    switch ( v7 >> 3 )
    {
      case 1u:
        if ( (unsigned __int8)v7 != 10 )
          goto LABEL_134;
        *(_DWORD *)(a1 + 16) |= 1u;
        v9 = *(_QWORD *)(a1 + 8);
        v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL);
        if ( (v9 & 1) != 0 )
          v10 = (_QWORD *)*v10;
        v11 = a1 + 176;
        goto LABEL_128;
      case 2u:
        if ( (unsigned __int8)v7 != 18 )
          goto LABEL_134;
        *(_DWORD *)(a1 + 16) |= 2u;
        v14 = *(_QWORD *)(a1 + 8);
        v10 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFELL);
        if ( (v14 & 1) != 0 )
          v10 = (_QWORD *)*v10;
        v11 = a1 + 184;
        goto LABEL_128;
      case 3u:
        if ( (unsigned __int8)v7 != 26 )
          goto LABEL_134;
        v15 = (unsigned __int64)v6 - 1;
        while ( 1 )
        {
          v16 = (google::protobuf::internal *)(v15 + 1);
          v84 = (google::protobuf::internal *)(v15 + 1);
          v17 = *(int **)(a1 + 40);
          if ( !v17 )
            break;
          v18 = *(int *)(a1 + 32);
          v19 = *v17;
          if ( (int)v18 >= *v17 )
          {
            if ( v19 == *(_DWORD *)(a1 + 36) )
            {
LABEL_26:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 24),
                v19 + 1);
              v17 = *(int **)(a1 + 40);
              v19 = *v17;
            }
            *v17 = v19 + 1;
            v20 = (std::string *)sub_10007A808(*(_QWORD *)(a1 + 24));
            v21 = *(_QWORD *)(a1 + 40);
            v22 = *(int *)(a1 + 32);
            *(_DWORD *)(a1 + 32) = v22 + 1;
            *(_QWORD *)(v21 + 8 * v22 + 8) = v20;
            v16 = v84;
            goto LABEL_28;
          }
          *(_DWORD *)(a1 + 32) = v18 + 1;
          v20 = *(std::string **)&v17[2 * v18 + 2];
LABEL_28:
          v15 = google::protobuf::internal::InlineGreedyStringParser(v20, v16, a3);
          v84 = (google::protobuf::internal *)v15;
          if ( !v15 )
            return 0LL;
          if ( *(_QWORD *)a3 <= v15 || *(_BYTE *)v15 != 26 )
            goto LABEL_142;
        }
        v19 = *(_DWORD *)(a1 + 36);
        goto LABEL_26;
      case 4u:
        if ( (unsigned __int8)v7 != 34 )
          goto LABEL_134;
        v23 = (unsigned __int64)v6 - 1;
        while ( 1 )
        {
          v24 = (google::protobuf::internal *)(v23 + 1);
          v84 = (google::protobuf::internal *)(v23 + 1);
          v25 = *(int **)(a1 + 64);
          if ( !v25 )
            break;
          v26 = *(int *)(a1 + 56);
          v27 = *v25;
          if ( (int)v26 >= *v25 )
          {
            if ( v27 == *(_DWORD *)(a1 + 60) )
            {
LABEL_39:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 48),
                v27 + 1);
              v25 = *(int **)(a1 + 64);
              v27 = *v25;
            }
            *v25 = v27 + 1;
            v29 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::DescriptorProto>(*(_QWORD *)(a1 + 48));
            LODWORD(v28) = v29;
            v30 = *(_QWORD *)(a1 + 64);
            v31 = *(int *)(a1 + 56);
            *(_DWORD *)(a1 + 56) = v31 + 1;
            *(_QWORD *)(v30 + 8 * v31 + 8) = v29;
            v24 = v84;
            goto LABEL_41;
          }
          *(_DWORD *)(a1 + 56) = v26 + 1;
          v28 = *(_QWORD *)&v25[2 * v26 + 2];
LABEL_41:
          v23 = sub_1000A2484(a3, v28, v24);
          v84 = (google::protobuf::internal *)v23;
          if ( !v23 )
            return 0LL;
          if ( *(_QWORD *)a3 <= v23 || *(_BYTE *)v23 != 34 )
            goto LABEL_142;
        }
        v27 = *(_DWORD *)(a1 + 60);
        goto LABEL_39;
      case 5u:
        if ( (unsigned __int8)v7 != 42 )
          goto LABEL_134;
        v32 = (unsigned __int64)v6 - 1;
        while ( 1 )
        {
          v33 = (google::protobuf::internal *)(v32 + 1);
          v84 = (google::protobuf::internal *)(v32 + 1);
          v34 = *(int **)(a1 + 88);
          if ( !v34 )
            break;
          v35 = *(int *)(a1 + 80);
          v36 = *v34;
          if ( (int)v35 >= *v34 )
          {
            if ( v36 == *(_DWORD *)(a1 + 84) )
            {
LABEL_52:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 72),
                v36 + 1);
              v34 = *(int **)(a1 + 88);
              v36 = *v34;
            }
            *v34 = v36 + 1;
            v38 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::EnumDescriptorProto>(*(_QWORD *)(a1 + 72));
            LODWORD(v37) = v38;
            v39 = *(_QWORD *)(a1 + 88);
            v40 = *(int *)(a1 + 80);
            *(_DWORD *)(a1 + 80) = v40 + 1;
            *(_QWORD *)(v39 + 8 * v40 + 8) = v38;
            v33 = v84;
            goto LABEL_54;
          }
          *(_DWORD *)(a1 + 80) = v35 + 1;
          v37 = *(_QWORD *)&v34[2 * v35 + 2];
LABEL_54:
          v32 = sub_1000A2554(a3, v37, v33);
          v84 = (google::protobuf::internal *)v32;
          if ( !v32 )
            return 0LL;
          if ( *(_QWORD *)a3 <= v32 || *(_BYTE *)v32 != 42 )
            goto LABEL_142;
        }
        v36 = *(_DWORD *)(a1 + 84);
        goto LABEL_52;
      case 6u:
        if ( (unsigned __int8)v7 != 50 )
          goto LABEL_134;
        v41 = (unsigned __int64)v6 - 1;
        while ( 1 )
        {
          v42 = (google::protobuf::internal *)(v41 + 1);
          v84 = (google::protobuf::internal *)(v41 + 1);
          v43 = *(int **)(a1 + 112);
          if ( !v43 )
            break;
          v44 = *(int *)(a1 + 104);
          v45 = *v43;
          if ( (int)v44 >= *v43 )
          {
            if ( v45 == *(_DWORD *)(a1 + 108) )
            {
LABEL_65:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 96),
                v45 + 1);
              v43 = *(int **)(a1 + 112);
              v45 = *v43;
            }
            *v43 = v45 + 1;
            v47 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::ServiceDescriptorProto>(*(_QWORD *)(a1 + 96));
            LODWORD(v46) = v47;
            v48 = *(_QWORD *)(a1 + 112);
            v49 = *(int *)(a1 + 104);
            *(_DWORD *)(a1 + 104) = v49 + 1;
            *(_QWORD *)(v48 + 8 * v49 + 8) = v47;
            v42 = v84;
            goto LABEL_67;
          }
          *(_DWORD *)(a1 + 104) = v44 + 1;
          v46 = *(_QWORD *)&v43[2 * v44 + 2];
LABEL_67:
          v41 = sub_1000A2624(a3, v46, v42);
          v84 = (google::protobuf::internal *)v41;
          if ( !v41 )
            return 0LL;
          if ( *(_QWORD *)a3 <= v41 || *(_BYTE *)v41 != 50 )
            goto LABEL_142;
        }
        v45 = *(_DWORD *)(a1 + 108);
        goto LABEL_65;
      case 7u:
        if ( (unsigned __int8)v7 != 58 )
          goto LABEL_134;
        v50 = (unsigned __int64)v6 - 1;
        while ( 1 )
        {
          v51 = (google::protobuf::internal *)(v50 + 1);
          v84 = (google::protobuf::internal *)(v50 + 1);
          v52 = *(int **)(a1 + 136);
          if ( !v52 )
            break;
          v53 = *(int *)(a1 + 128);
          v54 = *v52;
          if ( (int)v53 >= *v52 )
          {
            if ( v54 == *(_DWORD *)(a1 + 132) )
            {
LABEL_78:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 120),
                v54 + 1);
              v52 = *(int **)(a1 + 136);
              v54 = *v52;
            }
            *v52 = v54 + 1;
            v56 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::FieldDescriptorProto>(*(_QWORD *)(a1 + 120));
            LODWORD(v55) = v56;
            v57 = *(_QWORD *)(a1 + 136);
            v58 = *(int *)(a1 + 128);
            *(_DWORD *)(a1 + 128) = v58 + 1;
            *(_QWORD *)(v57 + 8 * v58 + 8) = v56;
            v51 = v84;
            goto LABEL_80;
          }
          *(_DWORD *)(a1 + 128) = v53 + 1;
          v55 = *(_QWORD *)&v52[2 * v53 + 2];
LABEL_80:
          v50 = sub_1000A26F4(a3, v55, v51);
          v84 = (google::protobuf::internal *)v50;
          if ( !v50 )
            return 0LL;
          if ( *(_QWORD *)a3 <= v50 || *(_BYTE *)v50 != 58 )
            goto LABEL_142;
        }
        v54 = *(_DWORD *)(a1 + 132);
        goto LABEL_78;
      case 8u:
        if ( (unsigned __int8)v7 != 66 )
          goto LABEL_134;
        *(_DWORD *)(a1 + 16) |= 8u;
        v59 = *(_QWORD *)(a1 + 200);
        if ( !v59 )
        {
          v60 = (_QWORD *)(*v83 & 0xFFFFFFFFFFFFFFFELL);
          if ( (*v83 & 1) != 0 )
            v60 = (_QWORD *)*v60;
          v61 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::FileOptions>(v60);
          LODWORD(v59) = v61;
          *(_QWORD *)(a1 + 200) = v61;
          v6 = v84;
        }
        v62 = (google::protobuf::internal *)sub_1000A27C4(a3, v59, v6);
        goto LABEL_141;
      case 9u:
        if ( (unsigned __int8)v7 != 74 )
          goto LABEL_134;
        *(_DWORD *)(a1 + 16) |= 0x10u;
        v63 = *(_QWORD *)(a1 + 208);
        if ( !v63 )
        {
          v64 = (_QWORD *)(*v83 & 0xFFFFFFFFFFFFFFFELL);
          if ( (*v83 & 1) != 0 )
            v64 = (_QWORD *)*v64;
          v65 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::SourceCodeInfo>(v64);
          LODWORD(v63) = v65;
          *(_QWORD *)(a1 + 208) = v65;
          v6 = v84;
        }
        v62 = (google::protobuf::internal *)sub_1000A2894(a3, v63, v6);
        goto LABEL_141;
      case 0xAu:
        if ( (unsigned __int8)v7 == 80 )
        {
          v66 = (unsigned __int8 *)v6 - 1;
          while ( 1 )
          {
            v84 = (google::protobuf::internal *)(v66 + 1);
            v67 = v66[1];
            if ( (char)v66[1] < 0 )
            {
              v68 = v67 + (v66[2] << 7);
              v67 = v68 - 128;
              if ( (char)v66[2] < 0 )
              {
                v66 = (unsigned __int8 *)google::protobuf::internal::VarintParseSlow64(
                                           (google::protobuf::internal *)(v66 + 1),
                                           (const char *)(unsigned int)(v68 - 128),
                                           (unsigned int)v6);
                v67 = v69;
              }
              else
              {
                v66 += 3;
              }
            }
            else
            {
              v66 += 2;
            }
            v84 = (google::protobuf::internal *)v66;
            v70 = *(unsigned int *)(a1 + 144);
            if ( (_DWORD)v70 == *(_DWORD *)(a1 + 148) )
            {
              v71 = v70 + 1;
              google::protobuf::RepeatedField<int>::Reserve(a1 + 144, (unsigned int)(v70 + 1));
              *(_DWORD *)(*(_QWORD *)(a1 + 152) + 4 * v70) = v67;
              v66 = (unsigned __int8 *)v84;
            }
            else
            {
              *(_DWORD *)(*(_QWORD *)(a1 + 152) + 4 * v70) = v67;
              v71 = v70 + 1;
            }
            *(_DWORD *)(a1 + 144) = v71;
            if ( !v66 )
              return 0LL;
            if ( *(_QWORD *)a3 <= (unsigned __int64)v66 || *v66 != 80 )
              goto LABEL_142;
          }
        }
        if ( (unsigned __int8)v7 != 82 )
          goto LABEL_134;
        v80 = a1 + 144;
        goto LABEL_133;
      case 0xBu:
        if ( (unsigned __int8)v7 != 88 )
        {
          if ( (unsigned __int8)v7 == 90 )
          {
            v80 = a1 + 160;
LABEL_133:
            v62 = (google::protobuf::internal *)google::protobuf::internal::PackedInt32Parser(v80, (int)v6, a3);
          }
          else
          {
LABEL_134:
            if ( v7 )
              v81 = (v7 & 7) == 4;
            else
              v81 = 1;
            if ( v81 )
            {
              *(_DWORD *)(a3 + 80) = v7 - 1;
              return v84;
            }
            if ( (*v83 & 1) != 0 )
              v82 = (*v83 & 0xFFFFFFFFFFFFFFFELL) + 8;
            else
              v82 = sub_10003A0B4(v83);
            v62 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v7, v82);
          }
LABEL_141:
          v84 = v62;
          if ( !v62 )
            return 0LL;
LABEL_142:
          if ( (sub_10003A040(a3, &v84, *(unsigned int *)(a3 + 92)) & 1) != 0 )
            return v84;
          continue;
        }
        v72 = (unsigned __int8 *)v6 - 1;
        while ( 1 )
        {
          v84 = (google::protobuf::internal *)(v72 + 1);
          v73 = v72[1];
          if ( (char)v72[1] < 0 )
          {
            v74 = v73 + (v72[2] << 7);
            v73 = v74 - 128;
            if ( (char)v72[2] < 0 )
            {
              v72 = (unsigned __int8 *)google::protobuf::internal::VarintParseSlow64(
                                         (google::protobuf::internal *)(v72 + 1),
                                         (const char *)(unsigned int)(v74 - 128),
                                         (unsigned int)v6);
              v73 = v75;
            }
            else
            {
              v72 += 3;
            }
          }
          else
          {
            v72 += 2;
          }
          v84 = (google::protobuf::internal *)v72;
          v76 = *(unsigned int *)(a1 + 160);
          if ( (_DWORD)v76 == *(_DWORD *)(a1 + 164) )
          {
            v77 = v76 + 1;
            google::protobuf::RepeatedField<int>::Reserve(a1 + 160, (unsigned int)(v76 + 1));
            *(_DWORD *)(*(_QWORD *)(a1 + 168) + 4 * v76) = v73;
            v72 = (unsigned __int8 *)v84;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 168) + 4 * v76) = v73;
            v77 = v76 + 1;
          }
          *(_DWORD *)(a1 + 160) = v77;
          if ( !v72 )
            return 0LL;
          if ( *(_QWORD *)a3 <= (unsigned __int64)v72 || *v72 != 88 )
            goto LABEL_142;
        }
      case 0xCu:
        if ( (unsigned __int8)v7 != 98 )
          goto LABEL_134;
        *(_DWORD *)(a1 + 16) |= 4u;
        v78 = *(_QWORD *)(a1 + 8);
        v10 = (_QWORD *)(v78 & 0xFFFFFFFFFFFFFFFELL);
        if ( (v78 & 1) != 0 )
          v10 = (_QWORD *)*v10;
        v11 = a1 + 192;
LABEL_128:
        v79 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v11, v10);
        v62 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v79, v84, a3);
        goto LABEL_141;
      default:
        goto LABEL_134;
    }
  }
}