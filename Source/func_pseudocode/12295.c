__ZN6google8protobuf8internal17PrintUTF8ErrorLogEPKcS3_b
void __fastcall google::protobuf::internal::PrintUTF8ErrorLog(
        google::protobuf::internal *this,
        const char *a2,
        const char *a3)
{
  const char *v5; // x1
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  google::protobuf::internal::LogMessage *v14; // x0
  char v15; // [xsp+Fh] [xbp-71h] BYREF
  __int128 v16; // [xsp+10h] [xbp-70h] BYREF
  __int64 v17; // [xsp+20h] [xbp-60h]
  void *__p[2]; // [xsp+40h] [xbp-40h] BYREF
  __int64 v19; // [xsp+50h] [xbp-30h]
  void *v20[2]; // [xsp+58h] [xbp-28h] BYREF
  __int64 v21; // [xsp+68h] [xbp-18h]

  v20[0] = 0LL;
  v20[1] = 0LL;
  v21 = 0LL;
  sub_10007A754((int)__p, "");
  if ( this )
  {
    google::protobuf::StringPrintf((__int64 *)&v16, (google::protobuf *)" '%s'", v5, this);
    if ( SHIBYTE(v19) < 0 )
      operator delete(__p[0]);
    *(_OWORD *)__p = v16;
    v19 = v17;
  }
  google::protobuf::internal::LogMessage::LogMessage(
    &v16,
    2LL,
    "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkXPC"
    "/shared/persistence/google/protobuf/wire_format_lite.cc",
    577LL);
  v6 = google::protobuf::internal::LogMessage::operator<<(&v16, "String field");
  v7 = google::protobuf::internal::LogMessage::operator<<(v6, __p);
  v8 = google::protobuf::internal::LogMessage::operator<<(v7, " contains invalid ");
  v9 = google::protobuf::internal::LogMessage::operator<<(v8, "UTF-8 data when ");
  v10 = google::protobuf::internal::LogMessage::operator<<(v9, a2);
  v11 = google::protobuf::internal::LogMessage::operator<<(v10, " a protocol ");
  v12 = google::protobuf::internal::LogMessage::operator<<(
          v11,
          "buffer. Use the 'bytes' type if you intend to send raw ");
  v13 = google::protobuf::internal::LogMessage::operator<<(v12, "bytes. ");
  v14 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v13, v20);
  google::protobuf::internal::LogFinisher::operator=((int)&v15, v14);
  google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v16);
  if ( SHIBYTE(v19) < 0 )
    operator delete(__p[0]);
  if ( SHIBYTE(v21) < 0 )
    operator delete(v20[0]);
}