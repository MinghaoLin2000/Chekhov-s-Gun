__ZN6google8protobuf2io18StringOutputStream4NextEPPvPi
__int64 __fastcall google::protobuf::io::StringOutputStream::Next(
        google::protobuf::io::StringOutputStream *this,
        void **a2,
        int *a3)
{
  __int64 v6; // x0
  google::protobuf::internal::LogMessage *v7; // x0
  unsigned __int64 v8; // x22
  unsigned __int64 v9; // x8
  std::string::size_type v10; // x1
  __int64 **v11; // x8
  __int64 v12; // x8
  char v14; // [xsp+Fh] [xbp-51h] BYREF
  _BYTE v15[48]; // [xsp+10h] [xbp-50h] BYREF

  v6 = *((_QWORD *)this + 1);
  if ( !v6 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v15,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/io/zero_copy_stream_impl_lite.cc",
      142LL);
    v7 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v15,
                                                     "CHECK failed: target_ != NULL: ");
    google::protobuf::internal::LogFinisher::operator=((int)&v14, v7);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v15);
    v6 = *((_QWORD *)this + 1);
  }
  if ( *(char *)(v6 + 23) < 0 )
  {
    v8 = *(_QWORD *)(v6 + 8);
    v9 = (*(_QWORD *)(v6 + 16) & 0x7FFFFFFFFFFFFFFFLL) - 1;
    if ( v8 < v9 )
      goto LABEL_8;
  }
  else
  {
    v8 = *(unsigned __int8 *)(v6 + 23);
    if ( *(unsigned __int8 *)(v6 + 23) < 0x16u )
    {
      v9 = 22LL;
      goto LABEL_8;
    }
  }
  v9 = 2 * v8;
LABEL_8:
  if ( v8 + 0x7FFFFFFF < v9 )
    v9 = v8 + 0x7FFFFFFF;
  if ( v9 <= 0x10 )
    v10 = 16LL;
  else
    v10 = v9;
  std::string::resize((std::string *)v6, v10, 0);
  v11 = (__int64 **)*((_QWORD *)this + 1);
  if ( *((char *)v11 + 23) < 0 )
    v11 = (__int64 **)*v11;
  *a2 = (char *)v11 + v8;
  v12 = *((_QWORD *)this + 1);
  if ( *(char *)(v12 + 23) < 0 )
    v12 = *(_QWORD *)(v12 + 8);
  else
    LODWORD(v12) = *(unsigned __int8 *)(v12 + 23);
  *a3 = v12 - v8;
  return 1LL;
}