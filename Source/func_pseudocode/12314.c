__ZNK6google8protobuf2io18StringOutputStream9ByteCountEv
__int64 __fastcall google::protobuf::io::StringOutputStream::ByteCount(google::protobuf::io::StringOutputStream *this)
{
  __int64 v1; // x8
  google::protobuf::internal::LogMessage *v3; // x0
  char v5; // [xsp+Fh] [xbp-41h] BYREF
  _BYTE v6[48]; // [xsp+10h] [xbp-40h] BYREF

  v1 = *((_QWORD *)this + 1);
  if ( !v1 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v6,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/io/zero_copy_stream_impl_lite.cc",
      176LL);
    v3 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v6,
                                                     "CHECK failed: target_ != NULL: ");
    google::protobuf::internal::LogFinisher::operator=((int)&v5, v3);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v6);
    v1 = *((_QWORD *)this + 1);
  }
  if ( *(char *)(v1 + 23) < 0 )
    return *(_QWORD *)(v1 + 8);
  else
    return *(unsigned __int8 *)(v1 + 23);
}