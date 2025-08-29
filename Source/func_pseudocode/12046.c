__ZN6google8protobuf8internal14NoLocaleStrtodEPKcPPc
double __fastcall google::protobuf::internal::NoLocaleStrtod(google::protobuf::internal *this, char *a2, char **a3)
{
  double v5; // d8
  char *v6; // x21
  int v7; // w22
  google::protobuf::internal::LogMessage *v8; // x0
  google::protobuf::internal::LogMessage *v9; // x0
  google::protobuf::internal::LogMessage *v10; // x0
  size_t v11; // x0
  const std::string::value_type *v12; // x1
  std::string *v13; // x21
  char v14; // w22
  int v15; // w0
  int v16; // w8
  std::string v18; // [xsp+10h] [xbp-C0h] BYREF
  char *v19; // [xsp+28h] [xbp-A8h] BYREF
  char v20; // [xsp+37h] [xbp-99h] BYREF
  char *v21[6]; // [xsp+38h] [xbp-98h] BYREF
  char __str; // [xsp+68h] [xbp-68h] BYREF
  std::string::value_type v23[15]; // [xsp+69h] [xbp-67h] BYREF

  v19 = 0LL;
  v5 = strtod((const char *)this, &v19);
  v6 = v19;
  if ( a2 )
    *(_QWORD *)a2 = v19;
  if ( *v6 == 46 )
  {
    v7 = snprintf(&__str, 0x10uLL, "%.1f", 1.5);
    if ( __str != 49 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        v21,
        3LL,
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/google/protobuf/stubs/strutil.cc",
        2425LL);
      v8 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                       v21,
                                                       "CHECK failed: (temp[0]) == ('1'): ");
      google::protobuf::internal::LogFinisher::operator=((int)&v20, v8);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v21);
    }
    if ( v23[v7 - 2] != 53 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        v21,
        3LL,
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/google/protobuf/stubs/strutil.cc",
        2426LL);
      v9 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                       v21,
                                                       "CHECK failed: (temp[size - 1]) == ('5'): ");
      google::protobuf::internal::LogFinisher::operator=((int)&v20, v9);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v21);
    }
    if ( v7 >= 7 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        v21,
        3LL,
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/google/protobuf/stubs/strutil.cc",
        2427LL);
      v10 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                        v21,
                                                        "CHECK failed: (size) <= (6): ");
      google::protobuf::internal::LogFinisher::operator=((int)&v20, v10);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v21);
    }
    memset(&v18, 0, sizeof(v18));
    v11 = strlen((const char *)this);
    std::string::reserve(&v18, v11 + v7 - 3);
    sub_1000F2084(&v18);
    std::string::append(&v18, v23, v7 - 2);
    v12 = v6 + 1;
    v13 = &v18;
    std::string::append(&v18, v12);
    if ( (v18.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
      v13 = (std::string *)v18.__r_.__value_.__r.__words[0];
    v21[0] = 0LL;
    v5 = strtod((const char *)v13, v21);
    v14 = HIBYTE(v18.__r_.__value_.__r.__words[2]);
    if ( a2 && v21[0] - (char *)v13 > v19 - (char *)this )
    {
      v15 = strlen((const char *)this);
      if ( (v18.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
        v16 = HIBYTE(v18.__r_.__value_.__r.__words[2]);
      else
        v16 = v18.__r_.__value_.__r.__words[1];
      *(_QWORD *)a2 = (char *)this + v21[0] - ((char *)v13 + v16 - v15);
    }
    if ( v14 < 0 )
      operator delete(v18.__r_.__value_.__l.__data_);
  }
  return v5;
}