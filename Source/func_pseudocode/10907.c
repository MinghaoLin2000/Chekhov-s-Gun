__ZN6google8protobuf17DescriptorBuilder24RecordPublicDependenciesEPKNS0_14FileDescriptorE
google::protobuf::FileDescriptor *__fastcall google::protobuf::DescriptorBuilder::RecordPublicDependencies(
        google::protobuf::FileDescriptor *this,
        const google::protobuf::FileDescriptor *a2)
{
  google::protobuf::DescriptorBuilder *v2; // x19
  char v3; // w1
  __int64 v4; // x20
  const google::protobuf::FileDescriptor *v5; // x0
  google::protobuf::FileDescriptor *v6; // [xsp+8h] [xbp-18h] BYREF

  v6 = a2;
  if ( a2 )
  {
    v2 = this;
    this = (google::protobuf::FileDescriptor *)sub_10009C2CC((char *)this + 96, &v6, &v6);
    if ( (v3 & 1) != 0 )
    {
      this = v6;
      if ( v6 )
      {
        v4 = 0LL;
        do
        {
          if ( v4 >= *((int *)this + 9) )
            break;
          v5 = (const google::protobuf::FileDescriptor *)google::protobuf::FileDescriptor::dependency(
                                                           this,
                                                           *(_DWORD *)(*((_QWORD *)this + 11) + 4 * v4));
          google::protobuf::DescriptorBuilder::RecordPublicDependencies(v2, v5);
          ++v4;
          this = v6;
        }
        while ( v6 );
      }
    }
  }
  return this;
}