__ZN6google8protobuf22ServiceDescriptorProto14_InternalParseEPKcPNS0_8internal12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::ServiceDescriptorProto::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v6; // x21
  google::protobuf::internal *v7; // x2
  unsigned int v8; // w24
  unsigned int v9; // w9
  unsigned int v10; // w8
  bool v12; // zf
  unsigned __int64 v13; // x1
  google::protobuf::internal *v14; // x0
  __int64 v15; // x1
  _QWORD *v16; // x0
  __int64 v17; // x0
  unsigned __int64 v18; // x0
  google::protobuf::internal *v19; // x2
  int *v20; // x8
  __int64 v21; // x10
  int v22; // w9
  __int64 v23; // x1
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  __int64 v27; // x8
  _QWORD *v28; // x1
  std::string *v29; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v31; // w1
  google::protobuf::internal *v32; // [xsp+8h] [xbp-38h] BYREF

  v32 = a2;
  if ( (sub_10003A040(a3, &v32, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v6 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v7 = (google::protobuf::internal *)((char *)v32 + 1);
      v8 = *(unsigned __int8 *)v32;
      if ( (*(char *)v32 & 0x80000000) == 0 )
        goto LABEL_7;
      v9 = v8 + (*(unsigned __int8 *)v7 << 7);
      v8 = v9 - 128;
      if ( (*(char *)v7 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v32,
                                                    (const char *)(v9 - 128),
                                                    (unsigned int)v7);
      v32 = TagFallback;
      if ( !TagFallback )
        return 0LL;
      v7 = TagFallback;
      v8 = v31;
LABEL_8:
      v10 = v8 >> 3;
      if ( v8 >> 3 == 3 )
      {
        if ( (unsigned __int8)v8 == 26 )
        {
          *(_DWORD *)(a1 + 16) |= 2u;
          v15 = *(_QWORD *)(a1 + 56);
          if ( !v15 )
          {
            v16 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
            if ( (*v6 & 1) != 0 )
              v16 = (_QWORD *)*v16;
            v17 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::ServiceOptions>(v16);
            LODWORD(v15) = v17;
            *(_QWORD *)(a1 + 56) = v17;
            v7 = v32;
          }
          v14 = (google::protobuf::internal *)sub_1000ACA00(a3, v15, v7);
          goto LABEL_43;
        }
        goto LABEL_14;
      }
      if ( v10 == 2 )
      {
        if ( (unsigned __int8)v8 != 18 )
          goto LABEL_14;
        v18 = (unsigned __int64)v7 - 1;
        while ( 2 )
        {
          v19 = (google::protobuf::internal *)(v18 + 1);
          v32 = (google::protobuf::internal *)(v18 + 1);
          v20 = *(int **)(a1 + 40);
          if ( v20 )
          {
            v21 = *(int *)(a1 + 32);
            v22 = *v20;
            if ( (int)v21 < *v20 )
            {
              *(_DWORD *)(a1 + 32) = v21 + 1;
              v23 = *(_QWORD *)&v20[2 * v21 + 2];
              goto LABEL_36;
            }
            if ( v22 == *(_DWORD *)(a1 + 36) )
            {
LABEL_34:
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                (google::protobuf::internal::RepeatedPtrFieldBase *)(a1 + 24),
                v22 + 1);
              v20 = *(int **)(a1 + 40);
              v22 = *v20;
            }
            *v20 = v22 + 1;
            v24 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::MethodDescriptorProto>(*(_QWORD *)(a1 + 24));
            LODWORD(v23) = v24;
            v25 = *(_QWORD *)(a1 + 40);
            v26 = *(int *)(a1 + 32);
            *(_DWORD *)(a1 + 32) = v26 + 1;
            *(_QWORD *)(v25 + 8 * v26 + 8) = v24;
            v19 = v32;
LABEL_36:
            v18 = sub_1000AC930(a3, v23, v19);
            v32 = (google::protobuf::internal *)v18;
            if ( !v18 )
              return 0LL;
            if ( *(_QWORD *)a3 <= v18 || *(_BYTE *)v18 != 18 )
              goto LABEL_44;
            continue;
          }
          break;
        }
        v22 = *(_DWORD *)(a1 + 36);
        goto LABEL_34;
      }
      if ( v10 == 1 && (unsigned __int8)v8 == 10 )
      {
        *(_DWORD *)(a1 + 16) |= 1u;
        v27 = *(_QWORD *)(a1 + 8);
        v28 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFELL);
        if ( (v27 & 1) != 0 )
          v28 = (_QWORD *)*v28;
        v29 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable(a1 + 48, v28);
        v14 = (google::protobuf::internal *)google::protobuf::internal::InlineGreedyStringParser(v29, v32, a3);
        goto LABEL_43;
      }
LABEL_14:
      if ( v8 )
        v12 = (v8 & 7) == 4;
      else
        v12 = 1;
      if ( v12 )
      {
        *(_DWORD *)(a3 + 80) = v8 - 1;
        return v32;
      }
      if ( (*v6 & 1) != 0 )
        v13 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
      else
        v13 = sub_10003A0B4(a1 + 8);
      v14 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v13);
LABEL_43:
      v32 = v14;
      if ( !v14 )
        return 0LL;
LABEL_44:
      if ( (sub_10003A040(a3, &v32, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        return v32;
    }
    v7 = (google::protobuf::internal *)((char *)v32 + 2);
LABEL_7:
    v32 = v7;
    goto LABEL_8;
  }
  return v32;
}