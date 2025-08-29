__ZNK6google8protobuf14FileDescriptor28InternalDependenciesOnceInitEv
void __fastcall google::protobuf::FileDescriptor::InternalDependenciesOnceInit(google::protobuf::FileDescriptor *this)
{
  google::protobuf::internal::LogMessage *v2; // x0
  int v3; // w8
  __int64 i; // x20
  __int64 v5; // x1
  char v6; // [xsp+Fh] [xbp-41h] BYREF
  _BYTE v7[48]; // [xsp+10h] [xbp-40h] BYREF

  if ( !*((_BYTE *)this + 65) )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v7,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      7372LL);
    v2 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v7,
                                                     "CHECK failed: finished_building_ == true: ");
    google::protobuf::internal::LogFinisher::operator=((int)&v6, v2);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v7);
  }
  v3 = *((_DWORD *)this + 8);
  if ( v3 >= 1 )
  {
    for ( i = 0LL; i < v3; ++i )
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 10) + 8 * i);
      if ( v5 )
      {
        *(_QWORD *)(*((_QWORD *)this + 9) + 8 * i) = google::protobuf::DescriptorPool::FindFileByName(
                                                       *((_QWORD *)this + 2),
                                                       v5);
        v3 = *((_DWORD *)this + 8);
      }
    }
  }
}