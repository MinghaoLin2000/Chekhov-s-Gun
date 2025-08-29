__ZNK6google8protobuf15DescriptorProto13IsInitializedEv
__int64 __fastcall google::protobuf::DescriptorProto::IsInitialized(google::protobuf::DescriptorProto *this)
{
  __int64 v2; // x8
  __int64 v3; // x20
  char IsInitialized; // w0
  __int64 result; // x0
  __int64 v6; // x8
  __int64 v7; // x20
  char v8; // w0
  __int64 v9; // x8
  __int64 v10; // x20
  char v11; // w0
  __int64 v12; // x8
  __int64 v13; // x20
  char v14; // w0
  __int64 v15; // x9
  __int64 v16; // x20
  char v17; // w8
  __int64 v18; // x19

  v2 = *((unsigned int *)this + 8);
  while ( (int)v2 >= 1 )
  {
    v3 = v2 - 1;
    IsInitialized = google::protobuf::FieldDescriptorProto::IsInitialized(*(google::protobuf::FieldDescriptorProto **)(*((_QWORD *)this + 5) + 8 * v2));
    v2 = v3;
    if ( (IsInitialized & 1) == 0 )
      return 0LL;
  }
  result = sub_1000A3EFC((char *)this + 48);
  if ( (_DWORD)result )
  {
    v6 = *((unsigned int *)this + 20);
    while ( (int)v6 >= 1 )
    {
      v7 = v6 - 1;
      v8 = google::protobuf::EnumDescriptorProto::IsInitialized(*(google::protobuf::EnumDescriptorProto **)(*((_QWORD *)this + 11) + 8 * v6));
      v6 = v7;
      if ( (v8 & 1) == 0 )
        return 0LL;
    }
    v9 = *((unsigned int *)this + 26);
    while ( (int)v9 >= 1 )
    {
      v10 = v9 - 1;
      v11 = google::protobuf::DescriptorProto_ExtensionRange::IsInitialized(*(google::protobuf::DescriptorProto_ExtensionRange **)(*((_QWORD *)this + 14) + 8 * v9));
      v9 = v10;
      if ( (v11 & 1) == 0 )
        return 0LL;
    }
    v12 = *((unsigned int *)this + 32);
    while ( (int)v12 >= 1 )
    {
      v13 = v12 - 1;
      v14 = google::protobuf::FieldDescriptorProto::IsInitialized(*(google::protobuf::FieldDescriptorProto **)(*((_QWORD *)this + 17) + 8 * v12));
      v12 = v13;
      if ( (v14 & 1) == 0 )
        return 0LL;
    }
    v15 = *((unsigned int *)this + 38);
    while ( (int)v15 >= 1 )
    {
      v16 = v15 - 1;
      v17 = google::protobuf::OneofDescriptorProto::IsInitialized(*(google::protobuf::OneofDescriptorProto **)(*((_QWORD *)this + 20) + 8 * v15));
      result = 0LL;
      v15 = v16;
      if ( (v17 & 1) == 0 )
        return result;
    }
    if ( (*((_BYTE *)this + 16) & 2) == 0 )
      return 1LL;
    v18 = *((_QWORD *)this + 28);
    result = google::protobuf::internal::ExtensionSet::IsInitialized((google::protobuf::internal::ExtensionSet *)(v18 + 16));
    if ( (_DWORD)result )
    {
      result = sub_1000A7B4C(v18 + 48);
      if ( (_DWORD)result )
        return 1LL;
    }
  }
  return result;
}