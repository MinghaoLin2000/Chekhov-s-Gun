__ZN6google8protobuf2io16ArrayInputStream4SkipEi
bool __fastcall google::protobuf::io::ArrayInputStream::Skip(google::protobuf::io::ArrayInputStream *this, int a2)
{
  google::protobuf::internal::LogMessage *v4; // x0
  int v5; // w8
  int v6; // w9
  int v7; // w10
  _BOOL8 result; // x0
  int v9; // w9
  char v10; // [xsp+Fh] [xbp-41h] BYREF
  _BYTE v11[48]; // [xsp+10h] [xbp-40h] BYREF

  if ( a2 < 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v11,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/io/zero_copy_stream_impl_lite.cc",
      89LL);
    v4 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v11,
                                                     "CHECK failed: (count) >= (0): ");
    google::protobuf::internal::LogFinisher::operator=((int)&v10, v4);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v11);
  }
  v5 = *((_DWORD *)this + 4);
  v6 = *((_DWORD *)this + 6);
  v7 = v5 - v6;
  result = v5 - v6 >= a2;
  v9 = v6 + a2;
  if ( v7 >= a2 )
    v5 = v9;
  *((_DWORD *)this + 6) = v5;
  *((_DWORD *)this + 7) = 0;
  return result;
}