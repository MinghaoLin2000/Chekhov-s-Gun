__ZN3TSP4Rect14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::Rect::_InternalParse(
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
  __int64 v17; // x1
  _QWORD *v18; // x0
  __int64 v19; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v21; // w1
  google::protobuf::internal *v22; // [xsp+8h] [xbp-28h] BYREF

  v22 = a2;
  if ( (sub_10003A040(a3, &v22, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v6 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v7 = (google::protobuf::internal *)((char *)v22 + 1);
      v8 = *(unsigned __int8 *)v22;
      if ( (*(char *)v22 & 0x80000000) == 0 )
        goto LABEL_7;
      v9 = v8 + (*(unsigned __int8 *)v7 << 7);
      v8 = v9 - 128;
      if ( (*(char *)v7 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v22,
                                                    (const char *)(v9 - 128),
                                                    (unsigned int)v7);
      v22 = TagFallback;
      if ( !TagFallback )
        return 0LL;
      v7 = TagFallback;
      v8 = v21;
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
            v16 = google::protobuf::Arena::CreateMaybeMessage<TSP::Size>(v15);
            LODWORD(v14) = v16;
            *(_QWORD *)(a1 + 32) = v16;
            v7 = v22;
          }
          v13 = (google::protobuf::internal *)sub_10005F2BC(a3, v14, v7);
          goto LABEL_31;
        }
      }
      else if ( v8 >> 3 == 1 && (unsigned __int8)v8 == 10 )
      {
        *(_DWORD *)(a1 + 16) |= 1u;
        v17 = *(_QWORD *)(a1 + 24);
        if ( !v17 )
        {
          v18 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFELL);
          if ( (*v6 & 1) != 0 )
            v18 = (_QWORD *)*v18;
          v19 = google::protobuf::Arena::CreateMaybeMessage<TSP::Point>(v18);
          LODWORD(v17) = v19;
          *(_QWORD *)(a1 + 24) = v19;
          v7 = v22;
        }
        v13 = (google::protobuf::internal *)sub_10005F1EC(a3, v17, v7);
        goto LABEL_31;
      }
      if ( v8 )
        v11 = (v8 & 7) == 4;
      else
        v11 = 1;
      if ( v11 )
      {
        *(_DWORD *)(a3 + 80) = v8 - 1;
        return v22;
      }
      if ( (*v6 & 1) != 0 )
        v12 = (*v6 & 0xFFFFFFFFFFFFFFFELL) + 8;
      else
        v12 = sub_10003A0B4(a1 + 8);
      v13 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v8, v12);
LABEL_31:
      v22 = v13;
      if ( !v13 )
        return 0LL;
      if ( (sub_10003A040(a3, &v22, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        return v22;
    }
    v7 = (google::protobuf::internal *)((char *)v22 + 2);
LABEL_7:
    v22 = v7;
    goto LABEL_8;
  }
  return v22;
}