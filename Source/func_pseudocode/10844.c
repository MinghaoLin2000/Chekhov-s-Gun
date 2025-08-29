__ZNK6google8protobuf14DescriptorPool29TryFindFileInFallbackDatabaseENS0_11StringPieceE
__int64 __fastcall google::protobuf::DescriptorPool::TryFindFileInFallbackDatabase(
        google::protobuf::DescriptorPool *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // x19
  _BYTE v6[216]; // [xsp+0h] [xbp-110h] BYREF
  void *v7[2]; // [xsp+D8h] [xbp-38h] BYREF
  char v8; // [xsp+EFh] [xbp-21h]
  _QWORD v9[2]; // [xsp+F0h] [xbp-20h] BYREF

  v9[0] = a2;
  v9[1] = a3;
  if ( !*((_QWORD *)a1 + 1) )
    return 0LL;
  sub_1000967C4(v7, v9);
  if ( sub_10009BE60(*((_QWORD *)a1 + 4) + 24LL, v7) )
  {
    v4 = 0LL;
  }
  else
  {
    google::protobuf::FileDescriptorProto::FileDescriptorProto((google::protobuf::FileDescriptorProto *)v6, 0LL);
    if ( (*(unsigned int (__fastcall **)(_QWORD, void **, _BYTE *))(**((_QWORD **)a1 + 1) + 16LL))(
           *((_QWORD *)a1 + 1),
           v7,
           v6)
      && google::protobuf::DescriptorPool::BuildFileFromDatabase(a1, (const google::protobuf::FileDescriptorProto *)v6) )
    {
      v4 = 1LL;
    }
    else
    {
      sub_10009BF64(*((_QWORD *)a1 + 4) + 24LL, v7, v7);
      v4 = 0LL;
    }
    google::protobuf::FileDescriptorProto::~FileDescriptorProto((google::protobuf::FileDescriptorProto *)v6);
  }
  if ( v8 < 0 )
    operator delete(v7[0]);
  return v4;
}