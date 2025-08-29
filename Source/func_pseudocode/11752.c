__ZN6google8protobuf8internal25RegisterFileLevelMetadataEPKNS1_15DescriptorTableE
void __fastcall google::protobuf::internal::RegisterFileLevelMetadata(__int64 a1)
{
  const google::protobuf::Message *v2; // x2
  __int64 v3; // x20
  __int64 v4; // x19

  google::protobuf::internal::AssignDescriptors(a1, 0);
  v3 = *(unsigned int *)(a1 + 96);
  if ( (int)v3 >= 1 )
  {
    v4 = *(_QWORD *)(a1 + 88) + 8LL;
    do
    {
      google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
        *(google::protobuf::MessageFactory **)(v4 - 8),
        *(const google::protobuf::Descriptor **)(*(_QWORD *)v4 + 8LL),
        v2);
      v4 += 16LL;
      --v3;
    }
    while ( v3 );
  }
}