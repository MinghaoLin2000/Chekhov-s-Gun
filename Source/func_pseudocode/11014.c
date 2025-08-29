__ZNK6google8protobuf19FileDescriptorProto13IsInitializedEv
__int64 __fastcall google::protobuf::FileDescriptorProto::IsInitialized(google::protobuf::FileDescriptorProto *this)
{
  __int64 v2; // x8
  __int64 v3; // x20
  char IsInitialized; // w0
  __int64 v5; // x8
  __int64 v6; // x20
  char v7; // w0
  __int64 v8; // x8
  __int64 v9; // x20
  char v10; // w0
  __int64 v11; // x8
  __int64 v12; // x20
  char v13; // w0
  __int64 result; // x0
  __int64 v15; // x19

  v2 = *((unsigned int *)this + 14);
  while ( (int)v2 >= 1 )
  {
    v3 = v2 - 1;
    IsInitialized = google::protobuf::DescriptorProto::IsInitialized(*(google::protobuf::DescriptorProto **)(*((_QWORD *)this + 8) + 8 * v2));
    v2 = v3;
    if ( (IsInitialized & 1) == 0 )
      return 0LL;
  }
  v5 = *((unsigned int *)this + 20);
  while ( (int)v5 >= 1 )
  {
    v6 = v5 - 1;
    v7 = google::protobuf::EnumDescriptorProto::IsInitialized(*(google::protobuf::EnumDescriptorProto **)(*((_QWORD *)this + 11) + 8 * v5));
    v5 = v6;
    if ( (v7 & 1) == 0 )
      return 0LL;
  }
  v8 = *((unsigned int *)this + 26);
  while ( (int)v8 >= 1 )
  {
    v9 = v8 - 1;
    v10 = google::protobuf::ServiceDescriptorProto::IsInitialized(*(google::protobuf::ServiceDescriptorProto **)(*((_QWORD *)this + 14) + 8 * v8));
    v8 = v9;
    if ( (v10 & 1) == 0 )
      return 0LL;
  }
  v11 = *((unsigned int *)this + 32);
  while ( (int)v11 >= 1 )
  {
    v12 = v11 - 1;
    v13 = google::protobuf::FieldDescriptorProto::IsInitialized(*(google::protobuf::FieldDescriptorProto **)(*((_QWORD *)this + 17) + 8 * v11));
    v11 = v12;
    if ( (v13 & 1) == 0 )
      return 0LL;
  }
  if ( (*((_BYTE *)this + 16) & 8) == 0 )
    return 1LL;
  v15 = *((_QWORD *)this + 25);
  result = google::protobuf::internal::ExtensionSet::IsInitialized((google::protobuf::internal::ExtensionSet *)(v15 + 16));
  if ( (_DWORD)result )
  {
    result = sub_1000A7B4C(v15 + 48);
    if ( (_DWORD)result )
      return 1LL;
  }
  return result;
}