__ZN6google8protobuf8internal29DescriptorPoolExtensionFinder4FindEiPNS1_13ExtensionInfoE
bool __fastcall google::protobuf::internal::DescriptorPoolExtensionFinder::Find(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 ExtensionByNumber; // x0
  __int64 v6; // x19
  std::once_flag::_State_type *v7; // x0
  int v8; // w8
  int v9; // w8
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  google::protobuf::internal::LogMessage *v15; // x0
  std::once_flag::_State_type *v16; // x0
  void (__fastcall **v18)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+8h] [xbp-68h] BYREF
  __int64 *v19; // [xsp+10h] [xbp-60h]
  __int64 v20; // [xsp+38h] [xbp-38h] BYREF
  void (__fastcall *v21)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+40h] [xbp-30h] BYREF
  void (__fastcall ***v22)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+48h] [xbp-28h] BYREF

  ExtensionByNumber = google::protobuf::DescriptorPool::FindExtensionByNumber(
                        *(std::mutex ***)(a1 + 8),
                        *(const google::protobuf::Descriptor **)(a1 + 24),
                        a2);
  v6 = ExtensionByNumber;
  if ( ExtensionByNumber )
  {
    v7 = *(std::once_flag::_State_type **)(ExtensionByNumber + 48);
    if ( v7 )
    {
      v21 = google::protobuf::FieldDescriptor::TypeOnceInit;
      v20 = v6;
      if ( atomic_load_explicit((atomic_ullong *volatile)v7, memory_order_acquire) != -1LL )
      {
        v18 = &v21;
        v19 = &v20;
        v22 = &v18;
        std::__call_once(v7, &v22, (void (__cdecl *)(void *))sub_10007A460);
      }
      v7 = *(std::once_flag::_State_type **)(v6 + 48);
    }
    v8 = *(_DWORD *)(v6 + 56);
    *(_BYTE *)a3 = v8;
    *(_BYTE *)(a3 + 1) = *(_DWORD *)(v6 + 60) == 3;
    *(_BYTE *)(a3 + 2) = *(_BYTE *)(*(_QWORD *)(v6 + 120) + 76LL);
    *(_QWORD *)(a3 + 24) = v6;
    if ( v7 )
    {
      v21 = google::protobuf::FieldDescriptor::TypeOnceInit;
      v20 = v6;
      if ( atomic_load_explicit((atomic_ullong *volatile)v7, memory_order_acquire) != -1LL )
      {
        v18 = &v21;
        v19 = &v20;
        v22 = &v18;
        std::__call_once(v7, &v22, (void (__cdecl *)(void *))sub_10007A460);
      }
      v8 = *(_DWORD *)(v6 + 56);
    }
    v9 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v8];
    if ( v9 == 10 )
    {
      v10 = *(_QWORD *)(a1 + 16);
      v11 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)v6);
      v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 16LL))(v10, v11);
      *(_QWORD *)(a3 + 8) = v12;
      if ( !v12 )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          &v18,
          3LL,
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/google/protobuf/extension_set_heavy.cc",
          308LL);
        v13 = google::protobuf::internal::LogMessage::operator<<(
                &v18,
                "CHECK failed: output->message_info.prototype != nullptr: ");
        v14 = google::protobuf::internal::LogMessage::operator<<(
                v13,
                "Extension factory's GetPrototype() returned NULL for extension: ");
        v15 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                          v14,
                                                          *(_QWORD *)(v6 + 8));
        google::protobuf::internal::LogFinisher::operator=((int)&v22, v15);
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v18);
      }
    }
    else
    {
      v16 = *(std::once_flag::_State_type **)(v6 + 48);
      if ( v16 )
      {
        v21 = google::protobuf::FieldDescriptor::TypeOnceInit;
        v20 = v6;
        if ( atomic_load_explicit((atomic_ullong *volatile)v16, memory_order_acquire) != -1LL )
        {
          v18 = &v21;
          v19 = &v20;
          v22 = &v18;
          std::__call_once(v16, &v22, (void (__cdecl *)(void *))sub_10007A460);
        }
        v9 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v6 + 56)];
      }
      if ( v9 == 8 )
      {
        *(_QWORD *)(a3 + 8) = sub_1000D3CD0;
        *(_QWORD *)(a3 + 16) = google::protobuf::FieldDescriptor::enum_type((google::protobuf::FieldDescriptor *)v6);
      }
    }
  }
  return v6 != 0;
}