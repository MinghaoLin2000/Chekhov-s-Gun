__ZN6google8protobuf17DescriptorBuilder17OptionInterpreterC2EPS1_
google::protobuf::DescriptorBuilder::OptionInterpreter *__fastcall google::protobuf::DescriptorBuilder::OptionInterpreter::OptionInterpreter(
        google::protobuf::DescriptorBuilder::OptionInterpreter *this,
        google::protobuf::DescriptorBuilder *a2)
{
  google::protobuf::internal::LogMessage *v3; // x0
  char v5; // [xsp+Fh] [xbp-61h] BYREF
  _BYTE v6[48]; // [xsp+10h] [xbp-60h] BYREF

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = (char *)this + 32;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_QWORD *)this + 8) = 0LL;
  google::protobuf::DynamicMessageFactory::DynamicMessageFactory((google::protobuf::DescriptorBuilder::OptionInterpreter *)((char *)this + 72));
  if ( !*(_QWORD *)this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v6,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      6378LL);
    v3 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v6,
                                                     "CHECK failed: builder_: ");
    google::protobuf::internal::LogFinisher::operator=((int)&v5, v3);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v6);
  }
  return this;
}