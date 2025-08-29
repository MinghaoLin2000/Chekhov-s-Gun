__ZN6google8protobuf14DescriptorPool24InternalAddGeneratedFileEPKvi
void __fastcall google::protobuf::DescriptorPool::InternalAddGeneratedFile(
        google::protobuf::DescriptorPool *this,
        const void *a2)
{
  int v2; // w19
  google::protobuf::EncodedDescriptorDatabase *v4; // x0
  google::protobuf::internal::LogMessage *v5; // x0
  char v6; // [xsp+Fh] [xbp-41h] BYREF
  _BYTE v7[48]; // [xsp+10h] [xbp-40h] BYREF

  v2 = (int)a2;
  v4 = (google::protobuf::EncodedDescriptorDatabase *)sub_10007D47C();
  if ( (google::protobuf::EncodedDescriptorDatabase::Add(v4, this, v2) & 1) == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v7,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      1371LL);
    v5 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v7,
                                                     "CHECK failed: GeneratedDatabase()->Add(encoded_file_descriptor, size): ");
    google::protobuf::internal::LogFinisher::operator=((int)&v6, v5);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v7);
  }
}