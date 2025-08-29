__ZNK6google8protobuf30DescriptorProto_ExtensionRange13IsInitializedEv
__int64 __fastcall google::protobuf::DescriptorProto_ExtensionRange::IsInitialized(
        google::protobuf::DescriptorProto_ExtensionRange *this)
{
  __int64 v1; // x19
  __int64 result; // x0

  if ( (*((_BYTE *)this + 16) & 1) == 0 )
    return 1LL;
  v1 = *((_QWORD *)this + 3);
  result = google::protobuf::internal::ExtensionSet::IsInitialized((google::protobuf::internal::ExtensionSet *)(v1 + 16));
  if ( (_DWORD)result )
  {
    result = sub_1000A7B4C(v1 + 40);
    if ( (_DWORD)result )
      return 1LL;
  }
  return result;
}