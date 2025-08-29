__ZNK6google8protobuf22ServiceDescriptorProto13IsInitializedEv
__int64 __fastcall google::protobuf::ServiceDescriptorProto::IsInitialized(
        google::protobuf::ServiceDescriptorProto *this)
{
  __int64 v2; // x8
  __int64 v3; // x20
  char IsInitialized; // w0
  __int64 result; // x0
  __int64 v6; // x19

  v2 = *((unsigned int *)this + 8);
  while ( (int)v2 >= 1 )
  {
    v3 = v2 - 1;
    IsInitialized = google::protobuf::MethodDescriptorProto::IsInitialized(*(google::protobuf::MethodDescriptorProto **)(*((_QWORD *)this + 5) + 8 * v2));
    v2 = v3;
    if ( (IsInitialized & 1) == 0 )
      return 0LL;
  }
  if ( (*((_BYTE *)this + 16) & 2) == 0 )
    return 1LL;
  v6 = *((_QWORD *)this + 7);
  result = google::protobuf::internal::ExtensionSet::IsInitialized((google::protobuf::internal::ExtensionSet *)(v6 + 16));
  if ( (_DWORD)result )
  {
    result = sub_1000A7B4C(v6 + 48);
    if ( (_DWORD)result )
      return 1LL;
  }
  return result;
}