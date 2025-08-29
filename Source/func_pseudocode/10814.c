__ZN6google8protobuf14FileDescriptor10SyntaxNameENS1_6SyntaxE
const char *__fastcall google::protobuf::FileDescriptor::SyntaxName(int a1)
{
  google::protobuf::internal::LogMessage *v2; // x0
  char v3; // [xsp+Fh] [xbp-41h] BYREF
  _BYTE v4[48]; // [xsp+10h] [xbp-40h] BYREF

  switch ( a1 )
  {
    case 0:
      return "unknown";
    case 2:
      return "proto2";
    case 3:
      return "proto3";
  }
  google::protobuf::internal::LogMessage::LogMessage(
    v4,
    3LL,
    "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkXPC"
    "/shared/persistence/google/protobuf/descriptor.cc",
    230LL);
  v2 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                   v4,
                                                   "can't reach here.");
  google::protobuf::internal::LogFinisher::operator=((int)&v3, v2);
  google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v4);
  return 0LL;
}