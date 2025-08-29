__ZN6google8protobuf17DescriptorBuilder10AddWarningERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS0_7MessageENS0_14DescriptorPool14ErrorCollector13ErrorLocationESA_
void __fastcall google::protobuf::DescriptorBuilder::AddWarning(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // x0
  void (*v9)(void); // x6
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  google::protobuf::internal::LogMessage *v14; // x0
  char v15; // [xsp+Fh] [xbp-51h] BYREF
  _BYTE v16[48]; // [xsp+10h] [xbp-50h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
  {
    v9 = *(void (**)(void))(*(_QWORD *)v8 + 24LL);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    v9();
  }
  else
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v16,
      1LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      3674LL);
    v10 = google::protobuf::internal::LogMessage::operator<<(v16, a1 + 56);
    v11 = google::protobuf::internal::LogMessage::operator<<(v10, " ");
    v12 = google::protobuf::internal::LogMessage::operator<<(v11, a2);
    v13 = google::protobuf::internal::LogMessage::operator<<(v12, ": ");
    v14 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v13, a5);
    google::protobuf::internal::LogFinisher::operator=((int)&v15, v14);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v16);
  }
}