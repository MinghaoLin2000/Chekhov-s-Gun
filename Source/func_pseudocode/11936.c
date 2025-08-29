__ZNK6google8protobuf11MessageLite29LogInitializationErrorMessageEv
void __fastcall google::protobuf::MessageLite::LogInitializationErrorMessage(google::protobuf::MessageLite *this)
{
  const std::string::value_type *v2; // x1
  std::string::size_type v3; // x2
  const std::string::value_type *v4; // x1
  std::string::size_type v5; // x2
  google::protobuf::internal::LogMessage *v6; // x0
  std::string __p; // [xsp+0h] [xbp-70h] BYREF
  _BYTE v8[48]; // [xsp+18h] [xbp-58h] BYREF
  std::string::value_type *v9; // [xsp+48h] [xbp-28h] BYREF
  std::string::size_type v10; // [xsp+50h] [xbp-20h]
  unsigned __int8 v11; // [xsp+5Fh] [xbp-11h]

  google::protobuf::internal::LogMessage::LogMessage(
    v8,
    2LL,
    "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkXPC"
    "/shared/persistence/google/protobuf/message_lite.cc",
    133LL);
  memset(&__p, 0, sizeof(__p));
  std::string::append(&__p, "Can't ");
  std::string::append(&__p, "parse");
  std::string::append(&__p, " message of type \"");
  (*(void (__fastcall **)(std::string::value_type **__return_ptr, google::protobuf::MessageLite *))(*(_QWORD *)this
                                                                                                  + 16LL))(
    &v9,
    this);
  if ( (v11 & 0x80u) == 0 )
    v2 = (const std::string::value_type *)&v9;
  else
    v2 = v9;
  if ( (v11 & 0x80u) == 0 )
    v3 = v11;
  else
    v3 = v10;
  std::string::append(&__p, v2, v3);
  if ( (char)v11 < 0 )
    operator delete(v9);
  std::string::append(&__p, "\" because it is missing required fields: ");
  (*(void (__fastcall **)(std::string::value_type **__return_ptr, google::protobuf::MessageLite *))(*(_QWORD *)this
                                                                                                  + 56LL))(
    &v9,
    this);
  if ( (v11 & 0x80u) == 0 )
    v4 = (const std::string::value_type *)&v9;
  else
    v4 = v9;
  if ( (v11 & 0x80u) == 0 )
    v5 = v11;
  else
    v5 = v10;
  std::string::append(&__p, v4, v5);
  if ( (char)v11 < 0 )
    operator delete(v9);
  v6 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v8, &__p);
  google::protobuf::internal::LogFinisher::operator=((int)&v9, v6);
  if ( SHIBYTE(__p.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(__p.__r_.__value_.__l.__data_);
  google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v8);
}