__ZN6google8protobuf8internal14LazyDescriptor7SetLazyENS0_11StringPieceEPKNS0_14FileDescriptorE
_QWORD *__fastcall google::protobuf::internal::LazyDescriptor::SetLazy(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  google::protobuf::internal::LogMessage *v8; // x0
  google::protobuf::internal::LogMessage *v9; // x0
  google::protobuf::internal::LogMessage *v10; // x0
  google::protobuf::internal::LogMessage *v11; // x0
  __int64 v12; // x8
  google::protobuf::internal::LogMessage *v13; // x0
  google::protobuf::internal::LogMessage *v14; // x0
  google::protobuf::internal::LogMessage *v15; // x0
  _QWORD *result; // x0
  char v17; // [xsp+Fh] [xbp-51h] BYREF
  _BYTE v18[48]; // [xsp+10h] [xbp-50h] BYREF

  if ( *a1 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v18,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      7414LL);
    v8 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v18,
                                                     "CHECK failed: !descriptor_: ");
    google::protobuf::internal::LogFinisher::operator=((int)&v17, v8);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v18);
  }
  if ( a1[3] )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v18,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      7415LL);
    v9 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v18,
                                                     "CHECK failed: !file_: ");
    google::protobuf::internal::LogFinisher::operator=((int)&v17, v9);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v18);
  }
  if ( a1[1] )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v18,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      7416LL);
    v10 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                      v18,
                                                      "CHECK failed: !name_: ");
    google::protobuf::internal::LogFinisher::operator=((int)&v17, v10);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v18);
  }
  if ( a1[2] )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v18,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      7417LL);
    v11 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                      v18,
                                                      "CHECK failed: !once_: ");
    google::protobuf::internal::LogFinisher::operator=((int)&v17, v11);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v18);
  }
  if ( !a4 || (v12 = *(_QWORD *)(a4 + 16)) == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v18,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      7418LL);
    v13 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                      v18,
                                                      "CHECK failed: file && file->pool_: ");
    google::protobuf::internal::LogFinisher::operator=((int)&v17, v13);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v18);
    v12 = *(_QWORD *)(a4 + 16);
  }
  if ( !*(_BYTE *)(v12 + 41) )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v18,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      7419LL);
    v14 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                      v18,
                                                      "CHECK failed: file->pool_->lazily_build_dependencies_: ");
    google::protobuf::internal::LogFinisher::operator=((int)&v17, v14);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v18);
  }
  if ( *(_BYTE *)(a4 + 65) )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v18,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      7420LL);
    v15 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                      v18,
                                                      "CHECK failed: !file->finished_building_: ");
    google::protobuf::internal::LogFinisher::operator=((int)&v17, v15);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v18);
  }
  a1[3] = a4;
  a1[1] = google::protobuf::DescriptorPool::Tables::AllocateString(*(_QWORD **)(*(_QWORD *)(a4 + 16) + 32LL), a2, a3);
  result = google::protobuf::DescriptorPool::Tables::AllocateOnceDynamic(*(google::protobuf::DescriptorPool::Tables **)(*(_QWORD *)(a4 + 16) + 32LL));
  a1[2] = result;
  return result;
}