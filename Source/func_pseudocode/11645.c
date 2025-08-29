__ZN6google8protobuf8internal12ExtensionSet25UnsafeArenaReleaseMessageEPKNS0_15FieldDescriptorEPNS0_14MessageFactoryE
__int64 __fastcall google::protobuf::internal::ExtensionSet::UnsafeArenaReleaseMessage(
        google::protobuf::internal::ExtensionSet *this,
        const google::protobuf::FieldDescriptor *a2,
        google::protobuf::MessageFactory *a3)
{
  _DWORD *v6; // x0
  _QWORD *v7; // x22
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x0

  v6 = google::protobuf::internal::ExtensionSet::FindOrNull(this, *((_DWORD *)a2 + 17));
  if ( !v6 )
    return 0LL;
  v7 = v6;
  v8 = *(_QWORD *)v6;
  if ( (*((_BYTE *)v6 + 10) & 0x10) != 0 )
  {
    v9 = google::protobuf::FieldDescriptor::message_type(a2);
    v10 = (*(__int64 (__fastcall **)(google::protobuf::MessageFactory *, __int64))(*(_QWORD *)a3 + 16LL))(a3, v9);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 64LL))(v8, v10);
    if ( !*(_QWORD *)this )
    {
      if ( *v7 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
    }
  }
  google::protobuf::internal::ExtensionSet::Erase(this, *((_DWORD *)a2 + 17));
  return v8;
}