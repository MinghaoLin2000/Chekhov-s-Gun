__ZN6google8protobuf14MessageFactory32InternalRegisterGeneratedMessageEPKNS0_10DescriptorEPKNS0_7MessageE
void __fastcall google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
        google::protobuf::MessageFactory *this,
        const google::protobuf::Descriptor *a2,
        const google::protobuf::Message *a3)
{
  __int64 v5; // x0
  char v6; // w1
  __int64 v7; // x0
  google::protobuf::internal::LogMessage *v8; // x0
  char v9; // [xsp+Fh] [xbp-41h] BYREF
  _QWORD v10[6]; // [xsp+10h] [xbp-40h] BYREF

  v5 = sub_1000E6224(this);
  v10[0] = this;
  v10[1] = a2;
  sub_1000E6EB0(v5 + 112, v10, v10);
  if ( (v6 & 1) == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v10,
      2LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/message.cc",
      226LL);
    v7 = google::protobuf::internal::LogMessage::operator<<(v10, "Type is already registered: ");
    v8 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v7,
                                                     *((_QWORD *)this + 1));
    google::protobuf::internal::LogFinisher::operator=((int)&v9, v8);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v10);
  }
}