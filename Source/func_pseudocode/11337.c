__ZN6google8protobuf23SourceCodeInfo_Location14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::SourceCodeInfo_Location::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v6; // x22
  google::protobuf::internal *v7; // x2
  unsigned int v8; // w27
  unsigned int v9; // w9
  int v10; // w0
  google::protobuf::internal *v11; // x0
  __int64 v12; // x8
  _QWORD *v13; // x1
  __int64 v14; // x0
  __int64 v15; // x8
  std::string *v16; // x0
  unsigned __int64 v17; // x0
  google::protobuf::internal *v18; // x1
  int *v19; // x8
  __int64 v20; // x10
  int v21; // w9
  std::string *v22; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  google::protobuf::internal *TagFallback; // x0
  unsigned int v26; // w1
  __int64 v27; // x0
  __int64 v28; // x0
  bool v29; // zf
  unsigned __int64 v30; // x1
  google::protobuf::internal *v31; // [xsp+8h] [xbp-58h] BYREF

  v31 = a2;
  if ( (sub_10003A040(a3, &v31, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v6 = (_QWORD *)(a1 + 8);
    while ( 2 )
    {
      v7 = (google::protobuf::internal *)((char *)v31 + 1);
      v8 = *(unsigned __int8 *)v31;
      if ( *(char *)v31 < 0 )
      {
        v9 = v8 + (*(unsigned __int8 *)v7 << 7);
        v8 = v9 - 128;
        if ( *(char *)v7 < 0 )
        {
          TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                        v31,
                                                        (const char *)(v9 - 128),
                                                        (unsigned int)v7);
          v31 = TagFallback;
          if ( !TagFallback )
            return 0LL;
          v7 = TagFallback;
          v8 = v26;
LABEL_8:
          switch ( v8 >> 3 )
          {
            case 1u:
              if ( (unsigned __int8)v8 == 10 )
              {
                v10 = a1 + 24;
                goto LABEL_13;
              }
              if ( (unsigned __int8)v8 != 8 )
                goto LABEL_44;
              v27 = sub_10003C864(&v31);
              sub_1000B5798(a1, v27);
              goto LABEL_42;
            case 2u:
              if ( (unsigned __int8)v8 == 18 )
              {
                v10 = a1 + 48;
LABEL_13:
                v11 = (google::protobuf::internal *)google::protobuf::internal::PackedInt32Parser(v10, (int)v7, a3);
LABEL_51:
                v31 = v11;
                if ( !v11 )
                  return 0LL;
                goto LABEL_52;
              }
              if ( (unsigned __int8)v8 != 16 )
              {
LABEL_44:
                if ( v8 )
                  v29 = (v8 & 7) == 4;
                else
                  v29 = 1;
                if ( v29 )
                {
                  *(_DWORD *)(a3 + 80) = v8 - 1;
                  return v31;
                }
                if ( (*v6 & 1) != 0 )
                  v30 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
                else
                  v30 = sub_10003A0B4(a1 + 8);
                v11 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v30);
                goto LABEL_51;
              }
              v28 = sub_10003C864(&v31);
              sub_1000B5808(a1, v28);
LABEL_42:
              if ( !v31 )
                return 0LL;
LABEL_52:
              if ( (sub_10003A040(a3, &v31, *(unsigned int *)(a3 + 92)) & 1) != 0 )
                return v31;
              continue;
            case 3u:
              if ( (unsigned __int8)v8 != 26 )
                goto LABEL_44;
              *(_DWORD *)(a1 + 16) |= 1u;
              v12 = *(_QWORD *)(a1 + 8);
              v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFELL);
              if ( (v12 & 1) != 0 )
                v13 = (_QWORD *)*v13;
              v14 = a1 + 96;
              goto LABEL_22;
            case 4u:
              if ( (unsigned __int8)v8 != 34 )
                goto LABEL_44;
              *(_DWORD *)(a1 + 16) |= 2u;
              v15 = *(_QWORD *)(a1 + 8);
              v13 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFELL);
              if ( (v15 & 1) != 0 )
                v13 = (_QWORD *)*v13;
              v14 = a1 + 104;
LABEL_22:
              v16 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(v14, v13);
              v11 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v16, v31, a3);
              goto LABEL_51;
            case 6u:
              if ( (unsigned __int8)v8 != 50 )
                goto LABEL_44;
              v17 = (unsigned __int64)v7 - 1;
              break;
            default:
              goto LABEL_44;
          }
          while ( 1 )
          {
            v18 = (google::protobuf::internal *)(v17 + 1);
            v31 = (google::protobuf::internal *)(v17 + 1);
            v19 = *(int **)(a1 + 88);
            if ( !v19 )
              break;
            v20 = *(int *)(a1 + 80);
            v21 = *v19;
            if ( (int)v20 >= *v19 )
            {
              if ( v21 == *(_DWORD *)(a1 + 84) )
              {
LABEL_30:
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                  (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 72),
                  v21 + 1);
                v19 = *(int **)(a1 + 88);
                v21 = *v19;
              }
              *v19 = v21 + 1;
              v22 = (std::string *)sub_10007A808(*(_QWORD *)(a1 + 72));
              v23 = *(_QWORD *)(a1 + 88);
              v24 = *(int *)(a1 + 80);
              *(_DWORD *)(a1 + 80) = v24 + 1;
              *(_QWORD *)(v23 + 8 * v24 + 8) = v22;
              v18 = v31;
              goto LABEL_32;
            }
            *(_DWORD *)(a1 + 80) = v20 + 1;
            v22 = *(std::string **)&v19[2 * v20 + 2];
LABEL_32:
            v17 = google::protobuf::internal::InlineGreedyStringParser(v22, v18, a3);
            v31 = (google::protobuf::internal *)v17;
            if ( !v17 )
              return 0LL;
            if ( *(_QWORD *)a3 <= v17 || *(_BYTE *)v17 != 50 )
              goto LABEL_52;
          }
          v21 = *(_DWORD *)(a1 + 84);
          goto LABEL_30;
        }
        v7 = (google::protobuf::internal *)((char *)v31 + 2);
      }
      break;
    }
    v31 = v7;
    goto LABEL_8;
  }
  return v31;
}