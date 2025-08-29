__ZN6google8protobuf25EncodedDescriptorDatabase3AddEPKvi
__int64 __fastcall google::protobuf::EncodedDescriptorDatabase::Add(
        google::protobuf::EncodedDescriptorDatabase *this,
        const void *a2,
        unsigned int a3)
{
  __int64 v6; // x19
  google::protobuf::internal::LogMessage *v7; // x0
  char v9; // [xsp+7h] [xbp-129h] BYREF
  _BYTE v10[48]; // [xsp+8h] [xbp-128h] BYREF
  _QWORD v11[27]; // [xsp+38h] [xbp-F8h] BYREF

  google::protobuf::FileDescriptorProto::FileDescriptorProto(v11, 0LL);
  if ( (unsigned int)google::protobuf::MessageLite::ParseFromArray((google::protobuf::MessageLite *)v11, a2, a3) )
  {
    v6 = sub_1000BB128(*((_QWORD *)this + 1), v11, a2, a3);
  }
  else
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v10,
      2LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor_database.cc",
      559LL);
    v7 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v10,
                                                     "Invalid file descriptor data passed to EncodedDescriptorDatabase::Add().");
    google::protobuf::internal::LogFinisher::operator=((int)&v9, v7);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v10);
    v6 = 0LL;
  }
  google::protobuf::FileDescriptorProto::~FileDescriptorProto((google::protobuf::FileDescriptorProto *)v11);
  return v6;
}