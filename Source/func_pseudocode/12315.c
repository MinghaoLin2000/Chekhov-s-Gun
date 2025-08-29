__ZN6google8protobuf8internal13VerifyVersionEiiPKc
void __fastcall google::protobuf::internal::VerifyVersion(
        google::protobuf::internal *this,
        google::protobuf::internal *a2,
        const std::string::value_type *a3,
        const char *a4)
{
  int v7; // w1
  const std::string::value_type *v8; // x1
  std::string::size_type v9; // x2
  const std::string::value_type *p_p; // x1
  std::string::size_type v11; // x2
  int v12; // w1
  const std::string::value_type *v13; // x1
  std::string::size_type v14; // x2
  const std::string::value_type *v15; // x1
  std::string::size_type v16; // x2
  void *__p; // [xsp+18h] [xbp-128h] BYREF
  std::string::size_type v18; // [xsp+20h] [xbp-120h]
  unsigned __int8 v19; // [xsp+2Fh] [xbp-111h]
  void *v20; // [xsp+30h] [xbp-110h] BYREF
  std::string::size_type v21; // [xsp+38h] [xbp-108h]
  unsigned __int8 v22; // [xsp+47h] [xbp-F9h]
  int v23; // [xsp+48h] [xbp-F8h] BYREF
  const char *v24; // [xsp+50h] [xbp-F0h]
  int v25; // [xsp+58h] [xbp-E8h]
  std::string v26; // [xsp+60h] [xbp-E0h] BYREF
  char __str[127]; // [xsp+78h] [xbp-C8h] BYREF
  char v28; // [xsp+F7h] [xbp-49h]

  if ( (int)a2 > 3014000 )
  {
    v23 = 3;
    v24 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/google/protobuf/stubs/common.cc";
    v25 = 78;
    memset(&v26, 0, sizeof(v26));
    std::string::append(&v26, "This program requires version ");
    google::protobuf::internal::VersionString((__int64 *)&v20, a2, v7);
    if ( (v22 & 0x80u) == 0 )
      v8 = (const std::string::value_type *)&v20;
    else
      v8 = (const std::string::value_type *)v20;
    if ( (v22 & 0x80u) == 0 )
      v9 = v22;
    else
      v9 = v21;
    std::string::append(&v26, v8, v9);
    std::string::append(&v26, " of the Protocol Buffer runtime library, but the installed version is ");
    snprintf(__str, 0x80uLL, "%d.%d.%d", 3, 14, 0);
    v28 = 0;
    sub_10007A754((int)&__p, __str);
    if ( (v19 & 0x80u) == 0 )
      p_p = (const std::string::value_type *)&__p;
    else
      p_p = (const std::string::value_type *)__p;
    if ( (v19 & 0x80u) == 0 )
      v11 = v19;
    else
      v11 = v18;
    std::string::append(&v26, p_p, v11);
    std::string::append(
      &v26,
      ".  Please update your library.  If you compiled the program yourself, make sure that your headers are from the sam"
      "e version of Protocol Buffers as your link-time library.  (Version verification failed in \"");
    std::string::append(&v26, a3);
    std::string::append(&v26, "\".)");
    google::protobuf::internal::LogMessage::Finish((google::protobuf::internal::LogMessage *)&v23);
    if ( (char)v19 < 0 )
      operator delete(__p);
    if ( (char)v22 < 0 )
      operator delete(v20);
    if ( SHIBYTE(v26.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v26.__r_.__value_.__l.__data_);
  }
  if ( (int)this < 3014000 )
  {
    v23 = 3;
    v24 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/google/protobuf/stubs/common.cc";
    v25 = 89;
    memset(&v26, 0, sizeof(v26));
    std::string::append(&v26, "This program was compiled against version ");
    google::protobuf::internal::VersionString((__int64 *)&v20, this, v12);
    if ( (v22 & 0x80u) == 0 )
      v13 = (const std::string::value_type *)&v20;
    else
      v13 = (const std::string::value_type *)v20;
    if ( (v22 & 0x80u) == 0 )
      v14 = v22;
    else
      v14 = v21;
    std::string::append(&v26, v13, v14);
    std::string::append(
      &v26,
      " of the Protocol Buffer runtime library, which is not compatible with the installed version (");
    snprintf(__str, 0x80uLL, "%d.%d.%d", 3, 14, 0);
    v28 = 0;
    sub_10007A754((int)&__p, __str);
    if ( (v19 & 0x80u) == 0 )
      v15 = (const std::string::value_type *)&__p;
    else
      v15 = (const std::string::value_type *)__p;
    if ( (v19 & 0x80u) == 0 )
      v16 = v19;
    else
      v16 = v18;
    std::string::append(&v26, v15, v16);
    std::string::append(
      &v26,
      ").  Contact the program author for an update.  If you compiled the program yourself, make sure that your headers a"
      "re from the same version of Protocol Buffers as your link-time library.  (Version verification failed in \"");
    std::string::append(&v26, a3);
    std::string::append(&v26, "\".)");
    google::protobuf::internal::LogMessage::Finish((google::protobuf::internal::LogMessage *)&v23);
    if ( (char)v19 < 0 )
      operator delete(__p);
    if ( (char)v22 < 0 )
      operator delete(v20);
    if ( SHIBYTE(v26.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v26.__r_.__value_.__l.__data_);
  }
}