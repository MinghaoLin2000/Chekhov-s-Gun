__ZN6google8protobuf8internal12ExtensionSet10AddMessageEPKNS0_15FieldDescriptorEPNS0_14MessageFactoryE
__int64 __fastcall google::protobuf::internal::ExtensionSet::AddMessage(
        google::protobuf::internal::ExtensionSet *this,
        const google::protobuf::FieldDescriptor *a2,
        google::protobuf::MessageFactory *a3)
{
  google::protobuf::internal::ExtensionSet::Extension *v6; // x0
  google::protobuf::internal::ExtensionSet::Extension *v7; // x19
  __int64 v8; // x8
  _DWORD *v9; // x9
  __int64 v10; // x10
  __int64 v11; // x23
  __int64 v12; // x0
  __int64 v13; // x0
  google::protobuf::internal::LogMessage *v14; // x0
  char v16; // [xsp+Fh] [xbp-61h] BYREF
  _BYTE v17[48]; // [xsp+10h] [xbp-60h] BYREF

  v6 = google::protobuf::internal::ExtensionSet::MaybeNewRepeatedExtension(this, a2);
  v7 = v6;
  v8 = *(_QWORD *)v6;
  v9 = *(_DWORD **)(*(_QWORD *)v6 + 16LL);
  if ( v9 )
  {
    v10 = *(int *)(v8 + 8);
    if ( (int)v10 < *v9 )
    {
      *(_DWORD *)(v8 + 8) = v10 + 1;
      v11 = *(_QWORD *)&v9[2 * v10 + 2];
      if ( v11 )
        return v11;
      v8 = *(_QWORD *)v6;
    }
  }
  if ( *(_DWORD *)(v8 + 8) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 8LL);
  }
  else
  {
    v13 = google::protobuf::FieldDescriptor::message_type(a2);
    v12 = (*(__int64 (__fastcall **)(google::protobuf::MessageFactory *, __int64))(*(_QWORD *)a3 + 16LL))(a3, v13);
    if ( !v12 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        v17,
        3LL,
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/google/protobuf/extension_set_heavy.cc",
        273LL);
      v14 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                        v17,
                                                        "CHECK failed: prototype != NULL: ");
      google::protobuf::internal::LogFinisher::operator=((int)&v16, v14);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v17);
      v12 = 0LL;
    }
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 32LL))(v12, *(_QWORD *)this);
  sub_1000C8848(*(_QWORD *)v7, v11);
  return v11;
}