__ZNK6google8protobuf14DescriptorPool34TryFindExtensionInFallbackDatabaseEPKNS0_10DescriptorEi
bool __fastcall google::protobuf::DescriptorPool::TryFindExtensionInFallbackDatabase(
        google::protobuf::DescriptorPool *this,
        const google::protobuf::Descriptor *a2,
        __int64 a3)
{
  __int64 v6; // x20
  __int64 v7; // x0
  _BOOL8 v8; // x19
  __int128 v10; // [xsp+0h] [xbp-120h] BYREF
  _BYTE v11[176]; // [xsp+18h] [xbp-108h] BYREF
  __int64 v12; // [xsp+C8h] [xbp-58h]
  __int128 v13; // [xsp+F0h] [xbp-30h] BYREF

  if ( !*((_QWORD *)this + 1) )
    return 0LL;
  google::protobuf::FileDescriptorProto::FileDescriptorProto((google::protobuf::FileDescriptorProto *)v11, 0LL);
  v8 = ((*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _BYTE *))(**((_QWORD **)this + 1) + 32LL))(
          *((_QWORD *)this + 1),
          *((_QWORD *)a2 + 1),
          a3,
          v11) & 1) != 0
    && ((v6 = *((_QWORD *)this + 4),
         sub_10007A644(&v10, v12 & 0xFFFFFFFFFFFFFFFELL),
         v13 = v10,
         (v7 = sub_100096644(v6 + 344, &v13)) == 0)
     || !*(_QWORD *)(v7 + 32))
    && google::protobuf::DescriptorPool::BuildFileFromDatabase(this, (const google::protobuf::FileDescriptorProto *)v11) != 0;
  google::protobuf::FileDescriptorProto::~FileDescriptorProto((google::protobuf::FileDescriptorProto *)v11);
  return v8;
}