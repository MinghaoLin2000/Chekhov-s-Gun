__ZN6google8protobuf2io16CodedInputStream25PrintTotalBytesLimitErrorEv
void __fastcall google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError(
        google::protobuf::io::CodedInputStream *this)
{
  std::string *v2; // x0
  std::string *v3; // x0
  std::string *v4; // x0
  char v5; // [xsp+Fh] [xbp-41h] BYREF
  std::string v6[2]; // [xsp+10h] [xbp-40h] BYREF

  google::protobuf::internal::LogMessage::LogMessage(
    (__int64)v6,
    2,
    (__int64)"/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources"
             "/iWorkXPC/shared/persistence/google/protobuf/io/coded_stream.cc",
    193);
  v2 = google::protobuf::internal::LogMessage::operator<<(
         v6,
         "A protocol message was rejected because it was too big (more than ");
  v3 = google::protobuf::internal::LogMessage::operator<<(v2, *((_DWORD *)this + 12));
  v4 = google::protobuf::internal::LogMessage::operator<<(
         v3,
         " bytes).  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesLimit() in t"
         "hird_party/protobuf/src/google/protobuf/io/coded_stream.h.");
  google::protobuf::internal::LogFinisher::operator=((int)&v5, (google::protobuf::internal::LogMessage *)v4);
  google::protobuf::internal::LogMessage::~LogMessage((void **)&v6[0].__r_.__value_.__l.__data_);
}