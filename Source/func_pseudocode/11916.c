__ZN6google8protobuf14MessageFactory29InternalRegisterGeneratedFileEPKNS0_8internal15DescriptorTableE
void __fastcall google::protobuf::MessageFactory::InternalRegisterGeneratedFile(char **a1)
{
  __int64 v2; // x20
  char v3; // w1
  __int64 v4; // x0
  google::protobuf::internal::LogMessage *v5; // x0
  __int128 v6; // [xsp+0h] [xbp-50h] BYREF
  char **v7; // [xsp+10h] [xbp-40h]
  __int128 v8; // [xsp+30h] [xbp-20h] BYREF

  v2 = sub_1000E6224((google::protobuf::MessageFactory *)a1) + 8;
  sub_1000965F4((int)&v8, a1[2]);
  v6 = v8;
  v7 = a1;
  sub_10009B3DC(v2, &v6, &v6);
  if ( (v3 & 1) == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v6,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/message.cc",
      211LL);
    v4 = google::protobuf::internal::LogMessage::operator<<(&v6, "File is already registered: ");
    v5 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v4, a1[2]);
    google::protobuf::internal::LogFinisher::operator=((int)&v8, v5);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v6);
  }
}