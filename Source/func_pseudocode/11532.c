__ZNK6google8protobuf8internal12ExtensionSet18GetRepeatedMessageEii
__int64 __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedMessage(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        int a3)
{
  _DWORD *v4; // x20
  __int64 v5; // x0
  google::protobuf::internal::LogMessage *v6; // x0
  char v8; // [xsp+Fh] [xbp-41h] BYREF
  _BYTE v9[48]; // [xsp+10h] [xbp-40h] BYREF

  v4 = google::protobuf::internal::ExtensionSet::FindOrNull(this, a2);
  if ( !v4 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v9,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/extension_set.cc",
      744LL);
    v5 = google::protobuf::internal::LogMessage::operator<<(v9, "CHECK failed: extension != NULL: ");
    v6 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v5,
                                                     "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=((int)&v8, v6);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v9);
  }
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 16LL) + 8LL * a3 + 8);
}