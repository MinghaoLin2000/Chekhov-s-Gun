__ZNK6google8protobuf7Message13SetCachedSizeEi
void __fastcall google::protobuf::Message::SetCachedSize(google::protobuf::Message *this)
{
  __int64 v2; // x20
  __int64 v3; // x0
  __int64 v4; // x0
  google::protobuf::internal::LogMessage *v5; // x0
  char v6; // [xsp+Fh] [xbp-41h] BYREF
  _BYTE v7[48]; // [xsp+10h] [xbp-40h] BYREF

  google::protobuf::internal::LogMessage::LogMessage(
    v7,
    3LL,
    "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkXPC"
    "/shared/persistence/google/protobuf/message.cc",
    156LL);
  v2 = google::protobuf::internal::LogMessage::operator<<(v7, "Message class \"");
  v3 = (*(__int64 (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)this + 152LL))(this);
  v4 = google::protobuf::internal::LogMessage::operator<<(v2, *(_QWORD *)(v3 + 8));
  v5 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                   v4,
                                                   "\" implements neither SetCachedSize() nor ByteSize().  Must implement"
                                                   " one or the other.");
  google::protobuf::internal::LogFinisher::operator=((int)&v6, v5);
  google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v7);
}