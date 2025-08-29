__ZNK6google8protobuf11MessageLite21AppendPartialToStringEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
bool __fastcall google::protobuf::MessageLite::AppendPartialToString(__int64 a1, std::string *a2)
{
  std::string *v2; // x21
  std::string::size_type size; // x23
  unsigned __int64 v5; // x0
  unsigned __int64 v6; // x20
  unsigned __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x0
  google::protobuf::internal::LogMessage *v10; // x0
  char v12; // [xsp+Fh] [xbp-91h] BYREF
  void *__p[2]; // [xsp+10h] [xbp-90h] BYREF
  char v14; // [xsp+27h] [xbp-79h]
  _QWORD v15[7]; // [xsp+28h] [xbp-78h] BYREF
  __int16 v16; // [xsp+60h] [xbp-40h]
  char v17; // [xsp+62h] [xbp-3Eh]

  v2 = a2;
  if ( SHIBYTE(a2->__r_.__value_.__r.__words[2]) < 0 )
    size = a2->__r_.__value_.__l.__size_;
  else
    size = HIBYTE(a2->__r_.__value_.__r.__words[2]);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
  v6 = v5;
  v7 = v5 >> 31;
  if ( v5 >> 31 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v15,
      2LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/message_lite.cc",
      457LL);
    (*(void (__fastcall **)(void **__return_ptr, __int64))(*(_QWORD *)a1 + 16LL))(__p, a1);
    v8 = google::protobuf::internal::LogMessage::operator<<(v15, __p);
    v9 = google::protobuf::internal::LogMessage::operator<<(v8, " exceeded maximum protobuf size of 2GB: ");
    v10 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v9, v6);
    google::protobuf::internal::LogFinisher::operator=((int)&v12, v10);
    if ( v14 < 0 )
      operator delete(__p[0]);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v15);
  }
  else
  {
    std::string::resize(v2, v5 + size, 0);
    if ( SHIBYTE(v2->__r_.__value_.__r.__words[2]) < 0 )
      v2 = (std::string *)v2->__r_.__value_.__r.__words[0];
    v15[0] = (char *)v2 + size + v6;
    v15[1] = 0LL;
    v15[6] = 0LL;
    v16 = 0;
    v17 = google::protobuf::io::CodedOutputStream::default_serialization_deterministic_ & 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
  }
  return v7 == 0;
}