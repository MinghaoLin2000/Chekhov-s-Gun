__ZN3TSP25ReferenceDictionary_Entry14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::ReferenceDictionary_Entry::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v6; // x21
  google::protobuf::internal *v7; // x2
  unsigned int v8; // w22
  unsigned int v9; // w9
  bool v11; // zf
  unsigned __int64 v12; // x1
  google::protobuf::internal *v13; // x0
  __int64 v14; // x1
  _QWORD *v15; // x0
  __int64 v16; // x0
  _QWORD *v17; // x0
  __int64 v18; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v20; // w1
  google::protobuf::internal *v21; // [xsp+8h] [xbp-28h] BYREF

  v21 = a2;
  if ( (sub_10003A040(a3, &v21, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v6 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v7 = (google::protobuf::internal *)((char *)v21 + 1);
      v8 = *(unsigned __int8 *)v21;
      if ( (*(char *)v21 & 0x80000000) == 0 )
        goto LABEL_7;
      v9 = v8 + (*(unsigned __int8 *)v7 << 7);
      v8 = v9 - 128;
      if ( (*(char *)v7 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v21,
                                                    (const char *)(v9 - 128),
                                                    (unsigned int)v7);
      v21 = TagFallback;
      if ( !TagFallback )
        return 0LL;
      v7 = TagFallback;
      v8 = v20;
LABEL_8:
      if ( v8 >> 3 == 2 )
      {
        if ( (unsigned __int8)v8 == 18 )
        {
          *(_DWORD *)(a1 + 16) |= 2u;
          v14 = *(_QWORD *)(a1 + 32);
          if ( !v14 )
          {
            v15 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
            if ( (*v6 & 1) != 0 )
              v15 = (_QWORD *)*v15;
            v16 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v15);
            LODWORD(v14) = v16;
            *(_QWORD *)(a1 + 32) = v16;
LABEL_29:
            v7 = v21;
          }
LABEL_30:
          v13 = (google::protobuf::internal *)sub_100038B88(a3, v14, v7);
          goto LABEL_31;
        }
      }
      else if ( v8 >> 3 == 1 && (unsigned __int8)v8 == 10 )
      {
        *(_DWORD *)(a1 + 16) |= 1u;
        v14 = *(_QWORD *)(a1 + 24);
        if ( !v14 )
        {
          v17 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
          if ( (*v6 & 1) != 0 )
            v17 = (_QWORD *)*v17;
          v18 = google::protobuf::Arena::CreateMaybeMessage<TSP::Reference>(v17);
          LODWORD(v14) = v18;
          *(_QWORD *)(a1 + 24) = v18;
          goto LABEL_29;
        }
        goto LABEL_30;
      }
      if ( v8 )
        v11 = (v8 & 7) == 4;
      else
        v11 = 1;
      if ( v11 )
      {
        *(_DWORD *)(a3 + 80) = v8 - 1;
        return v21;
      }
      if ( (*v6 & 1) != 0 )
        v12 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
      else
        v12 = sub_10003A0B4(a1 + 8);
      v13 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v12);
LABEL_31:
      v21 = v13;
      if ( !v13 )
        return 0LL;
      if ( (sub_10003A040(a3, &v21, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        return v21;
    }
    v7 = (google::protobuf::internal *)((char *)v21 + 2);
LABEL_7:
    v21 = v7;
    goto LABEL_8;
  }
  return v21;
}