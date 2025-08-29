__ZN3TSP23LargeNumberArraySegment14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::LargeNumberArraySegment::_InternalParse(
        __int64 a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  unsigned int *v6; // x21
  _QWORD *v7; // x22
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w23
  unsigned int v10; // w9
  bool v12; // zf
  unsigned __int64 v13; // x1
  google::protobuf::internal *v14; // x0
  _BYTE *v15; // x8
  unsigned int v16; // w24
  google::protobuf::internal *v17; // x9
  __int64 v18; // d8
  __int64 v19; // x1
  _QWORD *v20; // x0
  __int64 v21; // x0
  google::protobuf::internal *TagFallback; // x0
  unsigned int v23; // w1
  google::protobuf::internal *v24; // [xsp+8h] [xbp-48h] BYREF

  v24 = a2;
  if ( (sub_10003A040(a3, &v24, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v6 = (unsigned int *)(a1 + 24);
    v7 = (_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v24 + 1);
      v9 = *(unsigned __int8 *)v24;
      if ( (*(char *)v24 & 0x80000000) == 0 )
        goto LABEL_7;
      v10 = v9 + (*(unsigned __int8 *)v8 << 7);
      v9 = v10 - 128;
      if ( (*(char *)v8 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v24,
                                                    (const char *)(v10 - 128),
                                                    (unsigned int)v8);
      v24 = TagFallback;
      if ( !TagFallback )
        return 0LL;
      v8 = TagFallback;
      v9 = v23;
LABEL_8:
      if ( v9 >> 3 == 2 )
      {
        if ( (unsigned __int8)v9 == 17 )
        {
          v15 = (char *)v8 - 1;
          v16 = *v6;
          do
          {
            v17 = (google::protobuf::internal *)(v15 + 1);
            v24 = (google::protobuf::internal *)(v15 + 1);
            v18 = *(_QWORD *)(v15 + 1);
            if ( v16 == *(_DWORD *)(a1 + 28) )
            {
              google::protobuf::RepeatedField<double>::Reserve(a1 + 24, v16 + 1);
              *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v16) = v18;
              v17 = v24;
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v16) = v18;
            }
            *v6 = ++v16;
            v15 = (char *)v17 + 8;
            v24 = (google::protobuf::internal *)((char *)v17 + 8);
          }
          while ( *(_QWORD *)a3 > (unsigned __int64)v17 + 8 && *v15 == 17 );
          goto LABEL_34;
        }
        if ( (unsigned __int8)v9 == 18 )
        {
          v14 = (google::protobuf::internal *)google::protobuf::internal::PackedDoubleParser(a1 + 24, v8, a3);
          goto LABEL_33;
        }
      }
      else if ( v9 >> 3 == 1 && (unsigned __int8)v9 == 10 )
      {
        *(_DWORD *)(a1 + 16) |= 1u;
        v19 = *(_QWORD *)(a1 + 40);
        if ( !v19 )
        {
          v20 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFELL);
          if ( (*v7 & 1) != 0 )
            v20 = (_QWORD *)*v20;
          v21 = google::protobuf::Arena::CreateMaybeMessage<TSP::LargeArraySegment>(v20);
          LODWORD(v19) = v21;
          *(_QWORD *)(a1 + 40) = v21;
          v8 = v24;
        }
        v14 = (google::protobuf::internal *)sub_10006E600(a3, v19, v8);
        goto LABEL_33;
      }
      if ( v9 )
        v12 = (v9 & 7) == 4;
      else
        v12 = 1;
      if ( v12 )
      {
        *(_DWORD *)(a3 + 80) = v9 - 1;
        return v24;
      }
      if ( (*v7 & 1) != 0 )
        v13 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
      else
        v13 = sub_10003A0B4(a1 + 8);
      v14 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v13);
LABEL_33:
      v24 = v14;
      if ( !v14 )
        return 0LL;
LABEL_34:
      if ( (sub_10003A040(a3, &v24, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        return v24;
    }
    v8 = (google::protobuf::internal *)((char *)v24 + 2);
LABEL_7:
    v24 = v8;
    goto LABEL_8;
  }
  return v24;
}