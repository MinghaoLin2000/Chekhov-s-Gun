__ZN3TSP16LargeObjectArray14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::LargeObjectArray::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  _QWORD *v5; // x21
  google::protobuf::internal *v6; // x2
  unsigned int v7; // w22
  unsigned int v8; // w9
  bool v9; // zf
  unsigned __int64 v10; // x1
  google::protobuf::internal *v11; // x0
  __int64 v12; // x1
  _QWORD *v13; // x0
  __int64 v14; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v16; // w1
  google::protobuf::internal *v18; // [xsp+8h] [xbp-28h] BYREF

  v18 = a2;
  if ( (sub_10003A040(a3, &v18, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v5 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v6 = (google::protobuf::internal *)((char *)v18 + 1);
      v7 = *(unsigned __int8 *)v18;
      if ( (*(char *)v18 & 0x80000000) == 0 )
        goto LABEL_6;
      v8 = v7 + (*(unsigned __int8 *)v6 << 7);
      v7 = v8 - 128;
      if ( (*(char *)v6 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v18,
                                                    (const char *)(v8 - 128),
                                                    (unsigned int)v6);
      v18 = TagFallback;
      if ( !TagFallback )
        return 0LL;
      v6 = TagFallback;
      v7 = v16;
LABEL_7:
      if ( v7 == 10 )
      {
        *(_DWORD *)(a1 + 16) |= 1u;
        v12 = *(_QWORD *)(a1 + 24);
        if ( !v12 )
        {
          v13 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFELL);
          if ( (*v5 & 1) != 0 )
            v13 = (_QWORD *)*v13;
          v14 = google::protobuf::Arena::CreateMaybeMessage<TSP::LargeArray>(v13);
          LODWORD(v12) = v14;
          *(_QWORD *)(a1 + 24) = v14;
          v6 = v18;
        }
        v11 = (google::protobuf::internal *)sub_100072A18(a3, v12, v6);
      }
      else
      {
        if ( v7 )
          v9 = (v7 & 7) == 4;
        else
          v9 = 1;
        if ( v9 )
        {
          *(_DWORD *)(a3 + 80) = v7 - 1;
          return v18;
        }
        if ( (*v5 & 1) != 0 )
          v10 = (*v5 & 0xFFFFFFFFFFFFFFFELL) + 8;
        else
          v10 = sub_10003A0B4(a1 + 8);
        v11 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v7, v10);
      }
      v18 = v11;
      if ( !v11 )
        return 0LL;
      if ( (sub_10003A040(a3, &v18, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        return v18;
    }
    v6 = (google::protobuf::internal *)((char *)v18 + 2);
LABEL_6:
    v18 = v6;
    goto LABEL_7;
  }
  return v18;
}