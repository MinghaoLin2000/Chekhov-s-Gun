__ZN6google8protobuf15DescriptorProto14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::DescriptorProto::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  google::protobuf::internal *v6; // x2
  unsigned int v7; // w21
  unsigned int v8; // w9
  __int64 v9; // x8
  _QWORD *v10; // x1
  std::string *v11; // x0
  google::protobuf::internal *v12; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v14; // w1
  unsigned __int64 v15; // x0
  google::protobuf::internal *v16; // x2
  int *v17; // x8
  __int64 v18; // x10
  int v19; // w9
  __int64 v20; // x1
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  unsigned __int64 v24; // x0
  google::protobuf::internal *v25; // x2
  int *v26; // x8
  __int64 v27; // x10
  int v28; // w9
  __int64 v29; // x1
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  unsigned __int64 v33; // x0
  google::protobuf::internal *v34; // x2
  int *v35; // x8
  __int64 v36; // x10
  int v37; // w9
  __int64 v38; // x1
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  unsigned __int64 v42; // x0
  google::protobuf::internal *v43; // x2
  int *v44; // x8
  __int64 v45; // x10
  int v46; // w9
  __int64 v47; // x1
  __int64 v48; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  unsigned __int64 v51; // x0
  google::protobuf::internal *v52; // x2
  int *v53; // x8
  __int64 v54; // x10
  int v55; // w9
  __int64 v56; // x1
  __int64 v57; // x0
  __int64 v58; // x8
  __int64 v59; // x9
  __int64 v60; // x1
  _QWORD *v61; // x0
  __int64 v62; // x0
  unsigned __int64 v63; // x0
  google::protobuf::internal *v64; // x2
  int *v65; // x8
  __int64 v66; // x10
  int v67; // w9
  __int64 v68; // x1
  __int64 v69; // x0
  __int64 v70; // x8
  __int64 v71; // x9
  unsigned __int64 v72; // x0
  google::protobuf::internal *v73; // x2
  int *v74; // x8
  __int64 v75; // x10
  int v76; // w9
  __int64 v77; // x1
  __int64 v78; // x0
  __int64 v79; // x8
  __int64 v80; // x9
  unsigned __int64 v81; // x0
  google::protobuf::internal *v82; // x1
  int *v83; // x8
  __int64 v84; // x10
  int v85; // w9
  std::string *v86; // x0
  __int64 v87; // x8
  __int64 v88; // x9
  bool v89; // zf
  unsigned __int64 v90; // x1
  _QWORD *v91; // [xsp+8h] [xbp-68h]
  google::protobuf::internal *v92; // [xsp+18h] [xbp-58h] BYREF

  v92 = a2;
  if ( (sub_10003A040(a3, &v92, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v91 = (_QWORD *)(a1 + 8);
    while ( 2 )
    {
      v6 = (google::protobuf::internal *)((char *)v92 + 1);
      v7 = *(unsigned __int8 *)v92;
      if ( *(char *)v92 < 0 )
      {
        v8 = v7 + (*(unsigned __int8 *)v6 << 7);
        v7 = v8 - 128;
        if ( *(char *)v6 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v92,
                                                        (const char *)(v8 - 128),
                                                        (unsigned int)v6);
          v92 = TagFallback;
          if ( !TagFallback )
            return 0LL;
          v6 = TagFallback;
          v7 = v14;
LABEL_8:
          switch ( v7 >> 3 )
          {
            case 1u:
              if ( (unsigned __int8)v7 != 10 )
                goto LABEL_125;
              *(_DWORD *)(a1 + 16) |= 1u;
              v9 = *(_QWORD *)(a1 + 8);
              v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL);
              if ( (v9 & 1) != 0 )
                v10 = (_QWORD *)*v10;
              v11 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(a1 + 216, v10);
              v12 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v11, v92, a3);
              goto LABEL_132;
            case 2u:
              if ( (unsigned __int8)v7 != 18 )
                goto LABEL_125;
              v15 = (unsigned __int64)v6 - 1;
              while ( 1 )
              {
                v16 = (google::protobuf::internal *)(v15 + 1);
                v92 = (google::protobuf::internal *)(v15 + 1);
                v17 = *(int **)(a1 + 40);
                if ( !v17 )
                  break;
                v18 = *(int *)(a1 + 32);
                v19 = *v17;
                if ( (int)v18 >= *v17 )
                {
                  if ( v19 == *(_DWORD *)(a1 + 36) )
                  {
LABEL_22:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 24),
                      v19 + 1);
                    v17 = *(int **)(a1 + 40);
                    v19 = *v17;
                  }
                  *v17 = v19 + 1;
                  v21 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::FieldDescriptorProto>(*(_QWORD *)(a1 + 24));
                  LODWORD(v20) = v21;
                  v22 = *(_QWORD *)(a1 + 40);
                  v23 = *(int *)(a1 + 32);
                  *(_DWORD *)(a1 + 32) = v23 + 1;
                  *(_QWORD *)(v22 + 8 * v23 + 8) = v21;
                  v16 = v92;
                  goto LABEL_24;
                }
                *(_DWORD *)(a1 + 32) = v18 + 1;
                v20 = *(_QWORD *)&v17[2 * v18 + 2];
LABEL_24:
                v15 = sub_1000A26F4(a3, v20, v16);
                v92 = (google::protobuf::internal *)v15;
                if ( !v15 )
                  return 0LL;
                if ( *(_QWORD *)a3 <= v15 || *(_BYTE *)v15 != 18 )
                  goto LABEL_133;
              }
              v19 = *(_DWORD *)(a1 + 36);
              goto LABEL_22;
            case 3u:
              if ( (unsigned __int8)v7 != 26 )
                goto LABEL_125;
              v24 = (unsigned __int64)v6 - 1;
              while ( 1 )
              {
                v25 = (google::protobuf::internal *)(v24 + 1);
                v92 = (google::protobuf::internal *)(v24 + 1);
                v26 = *(int **)(a1 + 64);
                if ( !v26 )
                  break;
                v27 = *(int *)(a1 + 56);
                v28 = *v26;
                if ( (int)v27 >= *v26 )
                {
                  if ( v28 == *(_DWORD *)(a1 + 60) )
                  {
LABEL_35:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 48),
                      v28 + 1);
                    v26 = *(int **)(a1 + 64);
                    v28 = *v26;
                  }
                  *v26 = v28 + 1;
                  v30 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::DescriptorProto>(*(_QWORD *)(a1 + 48));
                  LODWORD(v29) = v30;
                  v31 = *(_QWORD *)(a1 + 64);
                  v32 = *(int *)(a1 + 56);
                  *(_DWORD *)(a1 + 56) = v32 + 1;
                  *(_QWORD *)(v31 + 8 * v32 + 8) = v30;
                  v25 = v92;
                  goto LABEL_37;
                }
                *(_DWORD *)(a1 + 56) = v27 + 1;
                v29 = *(_QWORD *)&v26[2 * v27 + 2];
LABEL_37:
                v24 = sub_1000A2484(a3, v29, v25);
                v92 = (google::protobuf::internal *)v24;
                if ( !v24 )
                  return 0LL;
                if ( *(_QWORD *)a3 <= v24 || *(_BYTE *)v24 != 26 )
                  goto LABEL_133;
              }
              v28 = *(_DWORD *)(a1 + 60);
              goto LABEL_35;
            case 4u:
              if ( (unsigned __int8)v7 != 34 )
                goto LABEL_125;
              v33 = (unsigned __int64)v6 - 1;
              while ( 1 )
              {
                v34 = (google::protobuf::internal *)(v33 + 1);
                v92 = (google::protobuf::internal *)(v33 + 1);
                v35 = *(int **)(a1 + 88);
                if ( !v35 )
                  break;
                v36 = *(int *)(a1 + 80);
                v37 = *v35;
                if ( (int)v36 >= *v35 )
                {
                  if ( v37 == *(_DWORD *)(a1 + 84) )
                  {
LABEL_48:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 72),
                      v37 + 1);
                    v35 = *(int **)(a1 + 88);
                    v37 = *v35;
                  }
                  *v35 = v37 + 1;
                  v39 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::EnumDescriptorProto>(*(_QWORD *)(a1 + 72));
                  LODWORD(v38) = v39;
                  v40 = *(_QWORD *)(a1 + 88);
                  v41 = *(int *)(a1 + 80);
                  *(_DWORD *)(a1 + 80) = v41 + 1;
                  *(_QWORD *)(v40 + 8 * v41 + 8) = v39;
                  v34 = v92;
                  goto LABEL_50;
                }
                *(_DWORD *)(a1 + 80) = v36 + 1;
                v38 = *(_QWORD *)&v35[2 * v36 + 2];
LABEL_50:
                v33 = sub_1000A2554(a3, v38, v34);
                v92 = (google::protobuf::internal *)v33;
                if ( !v33 )
                  return 0LL;
                if ( *(_QWORD *)a3 <= v33 || *(_BYTE *)v33 != 34 )
                  goto LABEL_133;
              }
              v37 = *(_DWORD *)(a1 + 84);
              goto LABEL_48;
            case 5u:
              if ( (unsigned __int8)v7 != 42 )
                goto LABEL_125;
              v42 = (unsigned __int64)v6 - 1;
              while ( 1 )
              {
                v43 = (google::protobuf::internal *)(v42 + 1);
                v92 = (google::protobuf::internal *)(v42 + 1);
                v44 = *(int **)(a1 + 112);
                if ( !v44 )
                  break;
                v45 = *(int *)(a1 + 104);
                v46 = *v44;
                if ( (int)v45 >= *v44 )
                {
                  if ( v46 == *(_DWORD *)(a1 + 108) )
                  {
LABEL_61:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 96),
                      v46 + 1);
                    v44 = *(int **)(a1 + 112);
                    v46 = *v44;
                  }
                  *v44 = v46 + 1;
                  v48 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::DescriptorProto_ExtensionRange>(*(_QWORD *)(a1 + 96));
                  LODWORD(v47) = v48;
                  v49 = *(_QWORD *)(a1 + 112);
                  v50 = *(int *)(a1 + 104);
                  *(_DWORD *)(a1 + 104) = v50 + 1;
                  *(_QWORD *)(v49 + 8 * v50 + 8) = v48;
                  v43 = v92;
                  goto LABEL_63;
                }
                *(_DWORD *)(a1 + 104) = v45 + 1;
                v47 = *(_QWORD *)&v44[2 * v45 + 2];
LABEL_63:
                v42 = sub_1000A5EB0(a3, v47, v43);
                v92 = (google::protobuf::internal *)v42;
                if ( !v42 )
                  return 0LL;
                if ( *(_QWORD *)a3 <= v42 || *(_BYTE *)v42 != 42 )
                  goto LABEL_133;
              }
              v46 = *(_DWORD *)(a1 + 108);
              goto LABEL_61;
            case 6u:
              if ( (unsigned __int8)v7 != 50 )
                goto LABEL_125;
              v51 = (unsigned __int64)v6 - 1;
              while ( 1 )
              {
                v52 = (google::protobuf::internal *)(v51 + 1);
                v92 = (google::protobuf::internal *)(v51 + 1);
                v53 = *(int **)(a1 + 136);
                if ( !v53 )
                  break;
                v54 = *(int *)(a1 + 128);
                v55 = *v53;
                if ( (int)v54 >= *v53 )
                {
                  if ( v55 == *(_DWORD *)(a1 + 132) )
                  {
LABEL_74:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 120),
                      v55 + 1);
                    v53 = *(int **)(a1 + 136);
                    v55 = *v53;
                  }
                  *v53 = v55 + 1;
                  v57 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::FieldDescriptorProto>(*(_QWORD *)(a1 + 120));
                  LODWORD(v56) = v57;
                  v58 = *(_QWORD *)(a1 + 136);
                  v59 = *(int *)(a1 + 128);
                  *(_DWORD *)(a1 + 128) = v59 + 1;
                  *(_QWORD *)(v58 + 8 * v59 + 8) = v57;
                  v52 = v92;
                  goto LABEL_76;
                }
                *(_DWORD *)(a1 + 128) = v54 + 1;
                v56 = *(_QWORD *)&v53[2 * v54 + 2];
LABEL_76:
                v51 = sub_1000A26F4(a3, v56, v52);
                v92 = (google::protobuf::internal *)v51;
                if ( !v51 )
                  return 0LL;
                if ( *(_QWORD *)a3 <= v51 || *(_BYTE *)v51 != 50 )
                  goto LABEL_133;
              }
              v55 = *(_DWORD *)(a1 + 132);
              goto LABEL_74;
            case 7u:
              if ( (unsigned __int8)v7 != 58 )
                goto LABEL_125;
              *(_DWORD *)(a1 + 16) |= 2u;
              v60 = *(_QWORD *)(a1 + 224);
              if ( !v60 )
              {
                v61 = (_QWORD *)(*v91 & 0xFFFFFFFFFFFFFFFELL);
                if ( (*v91 & 1) != 0 )
                  v61 = (_QWORD *)*v61;
                v62 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::MessageOptions>(v61);
                LODWORD(v60) = v62;
                *(_QWORD *)(a1 + 224) = v62;
                v6 = v92;
              }
              v12 = (google::protobuf::internal *)sub_1000A5F80(a3, v60, v6);
              goto LABEL_132;
            case 8u:
              if ( (unsigned __int8)v7 != 66 )
                goto LABEL_125;
              v63 = (unsigned __int64)v6 - 1;
              while ( 1 )
              {
                v64 = (google::protobuf::internal *)(v63 + 1);
                v92 = (google::protobuf::internal *)(v63 + 1);
                v65 = *(int **)(a1 + 160);
                if ( !v65 )
                  break;
                v66 = *(int *)(a1 + 152);
                v67 = *v65;
                if ( (int)v66 >= *v65 )
                {
                  if ( v67 == *(_DWORD *)(a1 + 156) )
                  {
LABEL_93:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 144),
                      v67 + 1);
                    v65 = *(int **)(a1 + 160);
                    v67 = *v65;
                  }
                  *v65 = v67 + 1;
                  v69 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::OneofDescriptorProto>(*(_QWORD *)(a1 + 144));
                  LODWORD(v68) = v69;
                  v70 = *(_QWORD *)(a1 + 160);
                  v71 = *(int *)(a1 + 152);
                  *(_DWORD *)(a1 + 152) = v71 + 1;
                  *(_QWORD *)(v70 + 8 * v71 + 8) = v69;
                  v64 = v92;
                  goto LABEL_95;
                }
                *(_DWORD *)(a1 + 152) = v66 + 1;
                v68 = *(_QWORD *)&v65[2 * v66 + 2];
LABEL_95:
                v63 = sub_1000A6050(a3, v68, v64);
                v92 = (google::protobuf::internal *)v63;
                if ( !v63 )
                  return 0LL;
                if ( *(_QWORD *)a3 <= v63 || *(_BYTE *)v63 != 66 )
                  goto LABEL_133;
              }
              v67 = *(_DWORD *)(a1 + 156);
              goto LABEL_93;
            case 9u:
              if ( (unsigned __int8)v7 != 74 )
                goto LABEL_125;
              v72 = (unsigned __int64)v6 - 1;
              while ( 1 )
              {
                v73 = (google::protobuf::internal *)(v72 + 1);
                v92 = (google::protobuf::internal *)(v72 + 1);
                v74 = *(int **)(a1 + 184);
                if ( !v74 )
                  break;
                v75 = *(int *)(a1 + 176);
                v76 = *v74;
                if ( (int)v75 >= *v74 )
                {
                  if ( v76 == *(_DWORD *)(a1 + 180) )
                  {
LABEL_106:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 168),
                      v76 + 1);
                    v74 = *(int **)(a1 + 184);
                    v76 = *v74;
                  }
                  *v74 = v76 + 1;
                  v78 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::DescriptorProto_ReservedRange>(*(_QWORD *)(a1 + 168));
                  LODWORD(v77) = v78;
                  v79 = *(_QWORD *)(a1 + 184);
                  v80 = *(int *)(a1 + 176);
                  *(_DWORD *)(a1 + 176) = v80 + 1;
                  *(_QWORD *)(v79 + 8 * v80 + 8) = v78;
                  v73 = v92;
                  goto LABEL_108;
                }
                *(_DWORD *)(a1 + 176) = v75 + 1;
                v77 = *(_QWORD *)&v74[2 * v75 + 2];
LABEL_108:
                v72 = sub_1000A6120(a3, v77, v73);
                v92 = (google::protobuf::internal *)v72;
                if ( !v72 )
                  return 0LL;
                if ( *(_QWORD *)a3 <= v72 || *(_BYTE *)v72 != 74 )
                  goto LABEL_133;
              }
              v76 = *(_DWORD *)(a1 + 180);
              goto LABEL_106;
            case 0xAu:
              if ( (unsigned __int8)v7 != 82 )
                goto LABEL_125;
              v81 = (unsigned __int64)v6 - 1;
              break;
            default:
LABEL_125:
              if ( v7 )
                v89 = (v7 & 7) == 4;
              else
                v89 = 1;
              if ( v89 )
              {
                *(_DWORD *)(a3 + 80) = v7 - 1;
                return v92;
              }
              if ( (*v91 & 1) != 0 )
                v90 = (*v91 & 0xFFFFFFFFFFFFFFFELL) + 8;
              else
                v90 = sub_10003A0B4(v91);
              v12 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v7, v90);
LABEL_132:
              v92 = v12;
              if ( !v12 )
                return 0LL;
LABEL_133:
              if ( (sub_10003A040(a3, &v92, *(unsigned int *)(a3 + 92)) & 1) != 0 )
                return v92;
              continue;
          }
          while ( 1 )
          {
            v82 = (google::protobuf::internal *)(v81 + 1);
            v92 = (google::protobuf::internal *)(v81 + 1);
            v83 = *(int **)(a1 + 208);
            if ( !v83 )
              break;
            v84 = *(int *)(a1 + 200);
            v85 = *v83;
            if ( (int)v84 >= *v83 )
            {
              if ( v85 == *(_DWORD *)(a1 + 204) )
              {
LABEL_119:
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                  (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 192),
                  v85 + 1);
                v83 = *(int **)(a1 + 208);
                v85 = *v83;
              }
              *v83 = v85 + 1;
              v86 = (std::string *)sub_10007A808(*(_QWORD *)(a1 + 192));
              v87 = *(_QWORD *)(a1 + 208);
              v88 = *(int *)(a1 + 200);
              *(_DWORD *)(a1 + 200) = v88 + 1;
              *(_QWORD *)(v87 + 8 * v88 + 8) = v86;
              v82 = v92;
              goto LABEL_121;
            }
            *(_DWORD *)(a1 + 200) = v84 + 1;
            v86 = *(std::string **)&v83[2 * v84 + 2];
LABEL_121:
            v81 = google::protobuf::internal::InlineGreedyStringParser(v86, v82, a3);
            v92 = (google::protobuf::internal *)v81;
            if ( !v81 )
              return 0LL;
            if ( *(_QWORD *)a3 <= v81 || *(_BYTE *)v81 != 82 )
              goto LABEL_133;
          }
          v85 = *(_DWORD *)(a1 + 204);
          goto LABEL_119;
        }
        v6 = (google::protobuf::internal *)((char *)v92 + 2);
      }
      break;
    }
    v92 = v6;
    goto LABEL_8;
  }
  return v92;
}