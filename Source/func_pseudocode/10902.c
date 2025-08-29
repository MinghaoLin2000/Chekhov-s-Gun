__ZN6google8protobuf17DescriptorBuilder8AddErrorERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS0_7MessageENS0_14DescriptorPool14ErrorCollector13ErrorLocationESA_
void __fastcall google::protobuf::DescriptorBuilder::AddError(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  google::protobuf::internal::LogMessage *v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  google::protobuf::internal::LogMessage *v15; // x0
  char v16; // [xsp+Fh] [xbp-51h] BYREF
  _BYTE v17[48]; // [xsp+10h] [xbp-50h] BYREF

  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 16LL))(
      v8,
      a1 + 56,
      a2,
      a3,
      a4,
      a5);
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 48) )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        v17,
        2LL,
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/google/protobuf/descriptor.cc",
        3620LL);
      v9 = google::protobuf::internal::LogMessage::operator<<(v17, "Invalid proto descriptor for file \"");
      v10 = google::protobuf::internal::LogMessage::operator<<(v9, a1 + 56);
      v11 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v10, "\":");
      google::protobuf::internal::LogFinisher::operator=((int)&v16, v11);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v17);
    }
    google::protobuf::internal::LogMessage::LogMessage(
      v17,
      2LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      3623LL);
    v12 = google::protobuf::internal::LogMessage::operator<<(v17, "  ");
    v13 = google::protobuf::internal::LogMessage::operator<<(v12, a2);
    v14 = google::protobuf::internal::LogMessage::operator<<(v13, ": ");
    v15 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v14, a5);
    google::protobuf::internal::LogFinisher::operator=((int)&v16, v15);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v17);
  }
  *(_BYTE *)(a1 + 48) = 1;
}