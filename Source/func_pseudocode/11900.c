__ZN6google8protobuf7Message9MergeFromERKS1_
__int64 __fastcall google::protobuf::Message::MergeFrom(
        google::protobuf::Message *this,
        const google::protobuf::Message *a2)
{
  __int64 v4; // x21
  google::protobuf::Message *v5; // x2
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x21
  __int64 v10; // x0
  google::protobuf::internal::LogMessage *v11; // x0
  char v13; // [xsp+Fh] [xbp-51h] BYREF
  _BYTE v14[48]; // [xsp+10h] [xbp-50h] BYREF

  v4 = (*(__int64 (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)this + 152LL))(this);
  if ( (*(__int64 (__fastcall **)(const google::protobuf::Message *))(*(_QWORD *)a2 + 152LL))(a2) != v4 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v14,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/message.cc",
      83LL);
    v6 = google::protobuf::internal::LogMessage::operator<<(
           v14,
           "CHECK failed: (from.GetDescriptor()) == (descriptor): ");
    v7 = google::protobuf::internal::LogMessage::operator<<(
           v6,
           ": Tried to merge from a message with a different type.  to: ");
    v8 = google::protobuf::internal::LogMessage::operator<<(v7, *(_QWORD *)(v4 + 8));
    v9 = google::protobuf::internal::LogMessage::operator<<(v8, ", from: ");
    v10 = (*(__int64 (__fastcall **)(const google::protobuf::Message *))(*(_QWORD *)a2 + 152LL))(a2);
    v11 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                      v9,
                                                      *(_QWORD *)(v10 + 8));
    google::protobuf::internal::LogFinisher::operator=((int)&v13, v11);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v14);
  }
  return google::protobuf::internal::ReflectionOps::Merge(a2, this, v5);
}