__ZN6google8protobuf2io9Tokenizer10ParseFloatERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE
double __fastcall google::protobuf::io::Tokenizer::ParseFloat(__int64 a1, __int64 a2, char **a3)
{
  google::protobuf::io *v4; // x20
  double v5; // d0
  double v6; // d8
  unsigned __int8 *v7; // x8
  int v8; // w9
  unsigned __int8 *v9; // x10
  __int64 v10; // x9
  __int64 v11; // x20
  google::protobuf::internal::LogMessage *v12; // x0
  char v14; // [xsp+Fh] [xbp-71h] BYREF
  std::string __p; // [xsp+10h] [xbp-70h] BYREF
  char v16[48]; // [xsp+28h] [xbp-58h] BYREF
  char v17[8]; // [xsp+58h] [xbp-28h] BYREF

  if ( *(char *)(a1 + 23) >= 0 )
    v4 = (google::protobuf::io *)a1;
  else
    v4 = *(google::protobuf::io **)a1;
  *(_QWORD *)v17 = 0LL;
  google::protobuf::io::NoLocaleStrtod(v4, v17, a3);
  v6 = v5;
  v7 = *(unsigned __int8 **)v17;
  v8 = (unsigned __int8)**(_BYTE **)v17;
  if ( (v8 | 0x20) == 0x65 )
  {
    v9 = (unsigned __int8 *)++*(_QWORD *)v17;
    v8 = v7[1];
    if ( v8 == 45 || v8 == 43 )
    {
      v9 = v7 + 2;
      *(_QWORD *)v17 = v7 + 2;
      v8 = v7[2];
    }
    v7 = v9;
  }
  if ( (v8 | 0x20) == 0x66 )
    *(_QWORD *)v17 = ++v7;
  v10 = *(unsigned __int8 *)(a1 + 23);
  if ( (v10 & 0x80u) != 0LL )
    v10 = *(_QWORD *)(a1 + 8);
  if ( v7 - (unsigned __int8 *)v4 != v10 || *(_BYTE *)v4 == 45 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v16,
      2LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/io/tokenizer.cc",
      921LL);
    v11 = google::protobuf::internal::LogMessage::operator<<(
            v16,
            " Tokenizer::ParseFloat() passed text that could not have been tokenized as a float: ");
    google::protobuf::CEscape(a1, &__p);
    v12 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v11, &__p);
    google::protobuf::internal::LogFinisher::operator=((int)&v14, v12);
    if ( SHIBYTE(__p.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(__p.__r_.__value_.__l.__data_);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v16);
  }
  return v6;
}