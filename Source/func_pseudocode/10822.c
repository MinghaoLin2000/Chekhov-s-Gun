__ZNK6google8protobuf14DescriptorPool31TryFindSymbolInFallbackDatabaseENS0_11StringPieceE
__int64 __fastcall google::protobuf::DescriptorPool::TryFindSymbolInFallbackDatabase(
        google::protobuf::DescriptorPool *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // x19
  __int64 v5; // x20
  __int64 v6; // x0
  __int128 v8; // [xsp+0h] [xbp-140h] BYREF
  _BYTE v9[176]; // [xsp+10h] [xbp-130h] BYREF
  __int64 v10; // [xsp+C0h] [xbp-80h]
  void *v11[2]; // [xsp+E8h] [xbp-58h] BYREF
  char v12; // [xsp+FFh] [xbp-41h]
  __int64 v13; // [xsp+100h] [xbp-40h] BYREF
  __int64 v14; // [xsp+108h] [xbp-38h]
  __int128 v15; // [xsp+110h] [xbp-30h] BYREF

  v13 = a2;
  v14 = a3;
  if ( !*((_QWORD *)a1 + 1) )
    return 0LL;
  sub_1000967C4(v11, &v13);
  if ( sub_10009BE60(*((_QWORD *)a1 + 4) + 64LL, v11) )
  {
    v4 = 0LL;
  }
  else
  {
    google::protobuf::FileDescriptorProto::FileDescriptorProto((google::protobuf::FileDescriptorProto *)v9, 0LL);
    if ( (google::protobuf::DescriptorPool::IsSubSymbolOfBuiltType(a1, v13, v14) & 1) != 0
      || !(*(unsigned int (__fastcall **)(_QWORD, void **, _BYTE *))(**((_QWORD **)a1 + 1) + 24LL))(
            *((_QWORD *)a1 + 1),
            v11,
            v9)
      || (v5 = *((_QWORD *)a1 + 4),
          sub_10007A644(&v8, v10 & 0xFFFFFFFFFFFFFFFELL),
          v15 = v8,
          (v6 = sub_100096644(v5 + 344, &v15)) != 0)
      && *(_QWORD *)(v6 + 32)
      || !google::protobuf::DescriptorPool::BuildFileFromDatabase(a1, (const google::protobuf::FileDescriptorProto *)v9) )
    {
      sub_10009BF64(*((_QWORD *)a1 + 4) + 64LL, v11, v11);
      v4 = 0LL;
    }
    else
    {
      v4 = 1LL;
    }
    google::protobuf::FileDescriptorProto::~FileDescriptorProto((google::protobuf::FileDescriptorProto *)v9);
  }
  if ( v12 < 0 )
    operator delete(v11[0]);
  return v4;
}