__ZN3TSP6Pose3D14_InternalParseEPKcPN6google8protobuf8internal12ParseContextE
google::protobuf::internal *__fastcall TSP::Pose3D::_InternalParse(
        _DWORD *a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  int v5; // w23
  _QWORD *v7; // x21
  google::protobuf::internal *v8; // x2
  unsigned int v9; // w22
  unsigned int v10; // w9
  unsigned int v11; // w8
  bool v13; // zf
  unsigned __int64 v14; // x1
  google::protobuf::internal *v15; // x2
  int v16; // t1
  int v17; // t1
  int v18; // t1
  google::protobuf::internal *TagFallback; // x0
  unsigned int v20; // w1
  google::protobuf::internal *v21; // [xsp+8h] [xbp-38h] BYREF

  v21 = a2;
  v5 = 0;
  if ( (sub_10003A040(a3, &v21, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    v7 = a1 + 2;
    while ( 1 )
    {
      v8 = (google::protobuf::internal *)((char *)v21 + 1);
      v9 = *(unsigned __int8 *)v21;
      if ( (*(char *)v21 & 0x80000000) == 0 )
        goto LABEL_7;
      v10 = v9 + (*(unsigned __int8 *)v8 << 7);
      v9 = v10 - 128;
      if ( (*(char *)v8 & 0x80000000) == 0 )
        break;
      TagFallback = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(
                                                    v21,
                                                    (const char *)(v10 - 128),
                                                    (unsigned int)v8);
      v21 = TagFallback;
      if ( !TagFallback )
        goto LABEL_34;
      v8 = TagFallback;
      v9 = v20;
LABEL_8:
      v11 = v9 >> 3;
      if ( v9 >> 3 == 3 )
      {
        if ( (unsigned __int8)v9 == 29 )
        {
          v16 = *(_DWORD *)v8;
          v15 = (google::protobuf::internal *)((char *)v8 + 4);
          v5 |= 4u;
          a1[8] = v16;
LABEL_27:
          v21 = v15;
          goto LABEL_28;
        }
      }
      else if ( v11 == 2 )
      {
        if ( (unsigned __int8)v9 == 21 )
        {
          v17 = *(_DWORD *)v8;
          v15 = (google::protobuf::internal *)((char *)v8 + 4);
          v5 |= 2u;
          a1[7] = v17;
          goto LABEL_27;
        }
      }
      else if ( v11 == 1 && (unsigned __int8)v9 == 13 )
      {
        v18 = *(_DWORD *)v8;
        v15 = (google::protobuf::internal *)((char *)v8 + 4);
        v5 |= 1u;
        a1[6] = v18;
        goto LABEL_27;
      }
      if ( v9 )
        v13 = (v9 & 7) == 4;
      else
        v13 = 1;
      if ( v13 )
      {
        *(_DWORD *)(a3 + 80) = v9 - 1;
        goto LABEL_2;
      }
      if ( (*v7 & 1) != 0 )
        v14 = (*v7 & 0xFFFFFFFFFFFFFFFELL) + 8;
      else
        v14 = sub_10003A0B4(a1 + 2);
      v21 = (google::protobuf::internal *)google::protobuf::internal::UnknownFieldParse(v9, v14);
      if ( !v21 )
      {
LABEL_34:
        v21 = 0LL;
        goto LABEL_2;
      }
LABEL_28:
      if ( (sub_10003A040(a3, &v21, *(unsigned int *)(a3 + 92)) & 1) != 0 )
        goto LABEL_2;
    }
    v8 = (google::protobuf::internal *)((char *)v21 + 2);
LABEL_7:
    v21 = v8;
    goto LABEL_8;
  }
LABEL_2:
  a1[4] |= v5;
  return v21;
}