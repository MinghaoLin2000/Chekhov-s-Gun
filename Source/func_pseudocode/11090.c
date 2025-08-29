__ZNK6google8protobuf20FieldDescriptorProto13IsInitializedEv
__int64 __fastcall google::protobuf::FieldDescriptorProto::IsInitialized(google::protobuf::FieldDescriptorProto *this)
{
  __int64 v1; // x19
  __int64 result; // x0

  if ( (*((_BYTE *)this + 16) & 0x20) == 0 )
    return 1LL;
  v1 = *((_QWORD *)this + 8);
  result = google::protobuf::internal::ExtensionSet::IsInitialized((google::protobuf::internal::ExtensionSet *)(v1 + 16));
  if ( (_DWORD)result )
  {
    result = sub_1000A7B4C(v1 + 48);
    if ( (_DWORD)result )
      return 1LL;
  }
  return result;
}