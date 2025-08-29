__ZN6google8protobuf8internal14LazyDescriptor12OnceInternalEv
void __fastcall google::protobuf::internal::LazyDescriptor::OnceInternal(
        google::protobuf::internal::LazyDescriptor *this)
{
  google::protobuf::internal::LogMessage *v2; // x0
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x1
  __int64 v6[2]; // [xsp+8h] [xbp-58h] BYREF
  char v7; // [xsp+1Fh] [xbp-41h] BYREF
  _BYTE v8[48]; // [xsp+20h] [xbp-40h] BYREF

  if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 65LL) )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v8,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      7435LL);
    v2 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v8,
                                                     "CHECK failed: file_->finished_building_: ");
    google::protobuf::internal::LogFinisher::operator=((int)&v7, v2);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v8);
  }
  if ( !*(_QWORD *)this )
  {
    v3 = *((_QWORD *)this + 1);
    if ( v3 )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
      sub_10007A644(v6, v3);
      if ( (unsigned int)google::protobuf::DescriptorPool::CrossLinkOnDemandHelper(v4, v6[0], v6[1]) == 1 )
        *(_QWORD *)this = v5;
    }
  }
}