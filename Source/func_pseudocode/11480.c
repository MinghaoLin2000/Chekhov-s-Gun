__ZN6google8protobuf8internal12ExtensionSet24RegisterMessageExtensionEPKNS0_11MessageLiteEihbbS5_
__int64 __fastcall google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        __int64 a6)
{
  google::protobuf::internal::LogMessage *v12; // x0
  _BYTE v14[8]; // [xsp+8h] [xbp-88h] BYREF
  __int64 v15; // [xsp+10h] [xbp-80h]
  __int64 v16; // [xsp+20h] [xbp-70h]
  char v17; // [xsp+2Fh] [xbp-61h] BYREF
  _BYTE v18[48]; // [xsp+30h] [xbp-60h] BYREF

  if ( (a3 & 0xFE) != 0xA )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v18,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/extension_set.cc",
      177LL);
    v12 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                      v18,
                                                      "CHECK failed: type == WireFormatLite::TYPE_MESSAGE || type == Wire"
                                                      "FormatLite::TYPE_GROUP: ");
    google::protobuf::internal::LogFinisher::operator=((int)&v17, v12);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v18);
  }
  v14[0] = a3;
  v14[1] = a4;
  v14[2] = a5;
  v15 = a6;
  v16 = 0LL;
  return sub_1000C0DEC(a1, a2, v14);
}