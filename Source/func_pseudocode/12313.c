__ZN6google8protobuf2io18StringOutputStream6BackUpEi
void __fastcall google::protobuf::io::StringOutputStream::BackUp(
        google::protobuf::io::StringOutputStream *this,
        int a2)
{
  google::protobuf::internal::LogMessage *v4; // x0
  __int64 v5; // x0
  google::protobuf::internal::LogMessage *v6; // x0
  __int64 v7; // x8
  unsigned __int64 v8; // x9
  google::protobuf::internal::LogMessage *v9; // x0
  char v10; // [xsp+Fh] [xbp-41h] BYREF
  _BYTE v11[48]; // [xsp+10h] [xbp-40h] BYREF

  if ( a2 < 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v11,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/io/zero_copy_stream_impl_lite.cc",
      169LL);
    v4 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v11,
                                                     "CHECK failed: (count) >= (0): ");
    google::protobuf::internal::LogFinisher::operator=((int)&v10, v4);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v11);
  }
  v5 = *((_QWORD *)this + 1);
  if ( !v5 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v11,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/io/zero_copy_stream_impl_lite.cc",
      170LL);
    v6 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v11,
                                                     "CHECK failed: target_ != NULL: ");
    google::protobuf::internal::LogFinisher::operator=((int)&v10, v6);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v11);
    v5 = *((_QWORD *)this + 1);
  }
  LODWORD(v7) = *(char *)(v5 + 23);
  if ( (v7 & 0x80000000) != 0 )
    v8 = *(_QWORD *)(v5 + 8);
  else
    v8 = *(unsigned __int8 *)(v5 + 23);
  if ( v8 < a2 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v11,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/io/zero_copy_stream_impl_lite.cc",
      171LL);
    v9 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v11,
                                                     "CHECK failed: (count) <= (target_->size()): ");
    google::protobuf::internal::LogFinisher::operator=((int)&v10, v9);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v11);
    v5 = *((_QWORD *)this + 1);
    LOBYTE(v7) = *(_BYTE *)(v5 + 23);
  }
  if ( (v7 & 0x80) != 0 )
    v7 = *(_QWORD *)(v5 + 8);
  else
    v7 = (unsigned __int8)v7;
  std::string::resize((std::string *)v5, v7 - a2, 0);
}