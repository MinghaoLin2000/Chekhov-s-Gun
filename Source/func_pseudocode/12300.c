__ZN6google8protobuf2io20ZeroCopyOutputStream15WriteAliasedRawEPKvi
__int64 __fastcall google::protobuf::io::ZeroCopyOutputStream::WriteAliasedRaw(
        google::protobuf::io::ZeroCopyOutputStream *this,
        const void *a2)
{
  google::protobuf::internal::LogMessage *v2; // x0
  char v4; // [xsp+Fh] [xbp-41h] BYREF
  _BYTE v5[48]; // [xsp+10h] [xbp-40h] BYREF

  google::protobuf::internal::LogMessage::LogMessage(
    v5,
    3LL,
    "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkXPC"
    "/shared/persistence/google/protobuf/io/zero_copy_stream.cc",
    47LL);
  v2 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                   v5,
                                                   "This ZeroCopyOutputStream doesn't support aliasing. Reaching here usu"
                                                   "ally means a ZeroCopyOutputStream implementation bug.");
  google::protobuf::internal::LogFinisher::operator=((int)&v4, v2);
  google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v5);
  return 0LL;
}