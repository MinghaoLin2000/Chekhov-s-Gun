__ZN6google8protobuf8internal14LazyDescriptor3SetEPKNS0_10DescriptorE
void __fastcall google::protobuf::internal::LazyDescriptor::Set(
        google::protobuf::internal::LazyDescriptor *this,
        const google::protobuf::Descriptor *a2)
{
  google::protobuf::internal::LogMessage *v4; // x0
  google::protobuf::internal::LogMessage *v5; // x0
  google::protobuf::internal::LogMessage *v6; // x0
  char v7; // [xsp+Fh] [xbp-41h] BYREF
  _BYTE v8[48]; // [xsp+10h] [xbp-40h] BYREF

  if ( *((_QWORD *)this + 1) )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v8,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      7405LL);
    v4 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v8,
                                                     "CHECK failed: !name_: ");
    google::protobuf::internal::LogFinisher::operator=((int)&v7, v4);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v8);
  }
  if ( *((_QWORD *)this + 2) )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v8,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      7406LL);
    v5 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v8,
                                                     "CHECK failed: !once_: ");
    google::protobuf::internal::LogFinisher::operator=((int)&v7, v5);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v8);
  }
  if ( *((_QWORD *)this + 3) )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v8,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      7407LL);
    v6 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v8,
                                                     "CHECK failed: !file_: ");
    google::protobuf::internal::LogFinisher::operator=((int)&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v8);
  }
  *(_QWORD *)this = a2;
}