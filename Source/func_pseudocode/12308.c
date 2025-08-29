__ZN6google8protobuf2io16ArrayInputStream6BackUpEi
void __fastcall google::protobuf::io::ArrayInputStream::BackUp(google::protobuf::io::ArrayInputStream *this, int a2)
{
  int v4; // w8
  __int64 v5; // x0
  google::protobuf::internal::LogMessage *v6; // x0
  google::protobuf::internal::LogMessage *v7; // x0
  google::protobuf::internal::LogMessage *v8; // x0
  char v9; // [xsp+Fh] [xbp-41h] BYREF
  _BYTE v10[48]; // [xsp+10h] [xbp-40h] BYREF

  v4 = *((_DWORD *)this + 7);
  if ( v4 <= 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v10,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/io/zero_copy_stream_impl_lite.cc",
      80LL);
    v5 = google::protobuf::internal::LogMessage::operator<<(v10, "CHECK failed: (last_returned_size_) > (0): ");
    v6 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v5,
                                                     "BackUp() can only be called after a successful Next().");
    google::protobuf::internal::LogFinisher::operator=((int)&v9, v6);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v10);
    v4 = *((_DWORD *)this + 7);
  }
  if ( v4 < a2 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v10,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/io/zero_copy_stream_impl_lite.cc",
      82LL);
    v7 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v10,
                                                     "CHECK failed: (count) <= (last_returned_size_): ");
    google::protobuf::internal::LogFinisher::operator=((int)&v9, v7);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v10);
  }
  if ( a2 < 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v10,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/io/zero_copy_stream_impl_lite.cc",
      83LL);
    v8 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v10,
                                                     "CHECK failed: (count) >= (0): ");
    google::protobuf::internal::LogFinisher::operator=((int)&v9, v8);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v10);
  }
  *((_QWORD *)this + 3) = (unsigned int)(*((_DWORD *)this + 6) - a2);
}