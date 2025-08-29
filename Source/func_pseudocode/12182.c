__ZN6google8protobuf11StringPiece18LogFatalSizeTooBigEmPKc
void __fastcall google::protobuf::StringPiece::LogFatalSizeTooBig(
        google::protobuf::StringPiece *this,
        __int64 a2,
        const char *a3)
{
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x0
  google::protobuf::internal::LogMessage *v8; // x0
  char v9; // [xsp+Fh] [xbp-41h] BYREF
  _BYTE v10[48]; // [xsp+10h] [xbp-40h] BYREF

  google::protobuf::internal::LogMessage::LogMessage(
    v10,
    3LL,
    "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkXPC"
    "/shared/persistence/google/protobuf/stubs/stringpiece.cc",
    49LL);
  v5 = google::protobuf::internal::LogMessage::operator<<(v10, "size too big: ");
  v6 = google::protobuf::internal::LogMessage::operator<<(v5, this);
  v7 = google::protobuf::internal::LogMessage::operator<<(v6, " details: ");
  v8 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v7, a2);
  google::protobuf::internal::LogFinisher::operator=((int)&v9, v8);
  google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v10);
}