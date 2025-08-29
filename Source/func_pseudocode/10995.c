__ZNK6google8protobuf17FileDescriptorSet13IsInitializedEv
bool __fastcall google::protobuf::FileDescriptorSet::IsInitialized(google::protobuf::FileDescriptorSet *this)
{
  __int64 v2; // x8
  int v3; // w20
  __int64 v4; // x21
  char IsInitialized; // w0

  v2 = *((unsigned int *)this + 6);
  do
  {
    v3 = v2;
    if ( (int)v2 < 1 )
      break;
    v4 = v2 - 1;
    IsInitialized = google::protobuf::FileDescriptorProto::IsInitialized(*(google::protobuf::FileDescriptorProto **)(*((_QWORD *)this + 4) + 8 * v2));
    v2 = v4;
  }
  while ( (IsInitialized & 1) != 0 );
  return v3 < 1;
}