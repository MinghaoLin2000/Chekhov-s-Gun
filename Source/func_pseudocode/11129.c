__ZN6google8protobuf19EnumDescriptorProto14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::EnumDescriptorProto::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v6; // x23
  google::protobuf::internal *v7; // x2
  unsigned int v8; // w26
  unsigned int v9; // w9
  __int64 v10; // x8
  _QWORD *v11; // x1
  std::string *v12; // x0
  google::protobuf::internal *v13; // x0
  unsigned __int64 v14; // x0
  google::protobuf::internal *v15; // x2
  int *v16; // x8
  __int64 v17; // x10
  int v18; // w9
  __int64 v19; // x1
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  __int64 v23; // x1
  _QWORD *v24; // x0
  __int64 v25; // x0
  unsigned __int64 v26; // x0
  google::protobuf::internal *v27; // x2
  int *v28; // x8
  __int64 v29; // x10
  int v30; // w9
  __int64 v31; // x1
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  unsigned __int64 v35; // x0
  google::protobuf::internal *v36; // x1
  int *v37; // x8
  __int64 v38; // x10
  int v39; // w9
  std::string *v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  bool v43; // zf
  unsigned __int64 v44; // x1
  google::protobuf::internal *TagFallback; // x0
  unsigned int v46; // w1
  google::protobuf::internal *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = a2;
  if ( (sub_10003A040(a3, &v47, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v6 = (_QWORD *)(a1 + 8);
    while ( 2 )
    {
      v7 = (google::protobuf::internal *)((char *)v47 + 1);
      v8 = *(unsigned __int8 *)v47;
      if ( *(char *)v47 < 0 )
      {
        v9 = v8 + (*(unsigned __int8 *)v7 << 7);
        v8 = v9 - 128;
        if ( *(char *)v7 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v47,
                                                        (const char *)(v9 - 128),
                                                        (unsigned int)v7);
          v47 = TagFallback;
          if ( !TagFallback )
            return 0LL;
          v7 = TagFallback;
          v8 = v46;
LABEL_8:
          switch ( v8 >> 3 )
          {
            case 1u:
              if ( (unsigned __int8)v8 != 10 )
                goto LABEL_58;
              *(_DWORD *)(a1 + 16) |= 1u;
              v10 = *(_QWORD *)(a1 + 8);
              v11 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFELL);
              if ( (v10 & 1) != 0 )
                v11 = (_QWORD *)*v11;
              v12 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(a1 + 96, v11);
              v13 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v12, v47, a3);
              goto LABEL_65;
            case 2u:
              if ( (unsigned __int8)v8 != 18 )
                goto LABEL_58;
              v14 = (unsigned __int64)v7 - 1;
              while ( 1 )
              {
                v15 = (google::protobuf::internal *)(v14 + 1);
                v47 = (google::protobuf::internal *)(v14 + 1);
                v16 = *(int **)(a1 + 40);
                if ( !v16 )
                  break;
                v17 = *(int *)(a1 + 32);
                v18 = *v16;
                if ( (int)v17 >= *v16 )
                {
                  if ( v18 == *(_DWORD *)(a1 + 36) )
                  {
LABEL_20:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 24),
                      v18 + 1);
                    v16 = *(int **)(a1 + 40);
                    v18 = *v16;
                  }
                  *v16 = v18 + 1;
                  v20 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::EnumValueDescriptorProto>(*(_QWORD *)(a1 + 24));
                  LODWORD(v19) = v20;
                  v21 = *(_QWORD *)(a1 + 40);
                  v22 = *(int *)(a1 + 32);
                  *(_DWORD *)(a1 + 32) = v22 + 1;
                  *(_QWORD *)(v21 + 8 * v22 + 8) = v20;
                  v15 = v47;
                  goto LABEL_22;
                }
                *(_DWORD *)(a1 + 32) = v17 + 1;
                v19 = *(_QWORD *)&v16[2 * v17 + 2];
LABEL_22:
                v14 = sub_1000AABA8(a3, v19, v15);
                v47 = (google::protobuf::internal *)v14;
                if ( !v14 )
                  return 0LL;
                if ( *(_QWORD *)a3 <= v14 || *(_BYTE *)v14 != 18 )
                  goto LABEL_66;
              }
              v18 = *(_DWORD *)(a1 + 36);
              goto LABEL_20;
            case 3u:
              if ( (unsigned __int8)v8 != 26 )
                goto LABEL_58;
              *(_DWORD *)(a1 + 16) |= 2u;
              v23 = *(_QWORD *)(a1 + 104);
              if ( !v23 )
              {
                v24 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
                if ( (*v6 & 1) != 0 )
                  v24 = (_QWORD *)*v24;
                v25 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::EnumOptions>(v24);
                LODWORD(v23) = v25;
                *(_QWORD *)(a1 + 104) = v25;
                v7 = v47;
              }
              v13 = (google::protobuf::internal *)sub_1000AAC78(a3, v23, v7);
              goto LABEL_65;
            case 4u:
              if ( (unsigned __int8)v8 != 34 )
                goto LABEL_58;
              v26 = (unsigned __int64)v7 - 1;
              while ( 1 )
              {
                v27 = (google::protobuf::internal *)(v26 + 1);
                v47 = (google::protobuf::internal *)(v26 + 1);
                v28 = *(int **)(a1 + 64);
                if ( !v28 )
                  break;
                v29 = *(int *)(a1 + 56);
                v30 = *v28;
                if ( (int)v29 >= *v28 )
                {
                  if ( v30 == *(_DWORD *)(a1 + 60) )
                  {
LABEL_39:
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                      (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 48),
                      v30 + 1);
                    v28 = *(int **)(a1 + 64);
                    v30 = *v28;
                  }
                  *v28 = v30 + 1;
                  v32 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::EnumDescriptorProto_EnumReservedRange>(*(_QWORD *)(a1 + 48));
                  LODWORD(v31) = v32;
                  v33 = *(_QWORD *)(a1 + 64);
                  v34 = *(int *)(a1 + 56);
                  *(_DWORD *)(a1 + 56) = v34 + 1;
                  *(_QWORD *)(v33 + 8 * v34 + 8) = v32;
                  v27 = v47;
                  goto LABEL_41;
                }
                *(_DWORD *)(a1 + 56) = v29 + 1;
                v31 = *(_QWORD *)&v28[2 * v29 + 2];
LABEL_41:
                v26 = sub_1000AAD48(a3, v31, v27);
                v47 = (google::protobuf::internal *)v26;
                if ( !v26 )
                  return 0LL;
                if ( *(_QWORD *)a3 <= v26 || *(_BYTE *)v26 != 34 )
                  goto LABEL_66;
              }
              v30 = *(_DWORD *)(a1 + 60);
              goto LABEL_39;
            case 5u:
              if ( (unsigned __int8)v8 != 42 )
                goto LABEL_58;
              v35 = (unsigned __int64)v7 - 1;
              break;
            default:
LABEL_58:
              if ( v8 )
                v43 = (v8 & 7) == 4;
              else
                v43 = 1;
              if ( v43 )
              {
                *(_DWORD *)(a3 + 80) = v8 - 1;
                return v47;
              }
              if ( (*v6 & 1) != 0 )
                v44 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
              else
                v44 = sub_10003A0B4(a1 + 8);
              v13 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v44);
LABEL_65:
              v47 = v13;
              if ( !v13 )
                return 0LL;
LABEL_66:
              if ( (sub_10003A040(a3, &v47, *(unsigned int *)(a3 + 92)) & 1) != 0 )
                return v47;
              continue;
          }
          while ( 1 )
          {
            v36 = (google::protobuf::internal *)(v35 + 1);
            v47 = (google::protobuf::internal *)(v35 + 1);
            v37 = *(int **)(a1 + 88);
            if ( !v37 )
              break;
            v38 = *(int *)(a1 + 80);
            v39 = *v37;
            if ( (int)v38 >= *v37 )
            {
              if ( v39 == *(_DWORD *)(a1 + 84) )
              {
LABEL_52:
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                  (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 72),
                  v39 + 1);
                v37 = *(int **)(a1 + 88);
                v39 = *v37;
              }
              *v37 = v39 + 1;
              v40 = (std::string *)sub_10007A808(*(_QWORD *)(a1 + 72));
              v41 = *(_QWORD *)(a1 + 88);
              v42 = *(int *)(a1 + 80);
              *(_DWORD *)(a1 + 80) = v42 + 1;
              *(_QWORD *)(v41 + 8 * v42 + 8) = v40;
              v36 = v47;
              goto LABEL_54;
            }
            *(_DWORD *)(a1 + 80) = v38 + 1;
            v40 = *(std::string **)&v37[2 * v38 + 2];
LABEL_54:
            v35 = google::protobuf::internal::InlineGreedyStringParser(v40, v36, a3);
            v47 = (google::protobuf::internal *)v35;
            if ( !v35 )
              return 0LL;
            if ( *(_QWORD *)a3 <= v35 || *(_BYTE *)v35 != 42 )
              goto LABEL_66;
          }
          v39 = *(_DWORD *)(a1 + 84);
          goto LABEL_52;
        }
        v7 = (google::protobuf::internal *)((char *)v47 + 2);
      }
      break;
    }
    v47 = v7;
    goto LABEL_8;
  }
  return v47;
}