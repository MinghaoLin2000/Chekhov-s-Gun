__ZNK6google8protobuf14DescriptorPool21BuildFileFromDatabaseERKNS0_19FileDescriptorProtoE
__int64 __fastcall google::protobuf::DescriptorPool::BuildFileFromDatabase(
        google::protobuf::DescriptorPool *this,
        const google::protobuf::FileDescriptorProto *a2)
{
  __int64 v4; // x21
  _BYTE v6[200]; // [xsp+8h] [xbp-E8h] BYREF

  if ( sub_10009BE60(*((_QWORD *)this + 4) + 24LL, *((_QWORD *)a2 + 22) & 0xFFFFFFFFFFFFFFFELL) )
    return 0LL;
  google::protobuf::DescriptorBuilder::DescriptorBuilder(v6, this, *((_QWORD *)this + 4), *((_QWORD *)this + 2));
  v4 = google::protobuf::DescriptorBuilder::BuildFile((google::protobuf::DescriptorBuilder *)v6, a2);
  google::protobuf::DescriptorBuilder::~DescriptorBuilder((google::protobuf::DescriptorBuilder *)v6);
  if ( !v4 )
    sub_10009C7C8(
      *((_QWORD *)this + 4) + 24LL,
      *((_QWORD *)a2 + 22) & 0xFFFFFFFFFFFFFFFELL,
      *((_QWORD *)a2 + 22) & 0xFFFFFFFFFFFFFFFELL);
  return v4;
}