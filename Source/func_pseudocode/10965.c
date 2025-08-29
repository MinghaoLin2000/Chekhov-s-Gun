__ZN6google8protobuf17DescriptorBuilder17OptionInterpreter18SetAggregateOptionEPKNS0_15FieldDescriptorEPNS0_15UnknownFieldSetE
__int64 __fastcall google::protobuf::DescriptorBuilder::OptionInterpreter::SetAggregateOption(
        google::protobuf::DescriptorBuilder::OptionInterpreter *this,
        const std::string::value_type ***a2,
        google::protobuf::UnknownFieldSet *a3)
{
  std::string *v5; // x0
  __int128 v6; // q0
  int v7; // w10
  const std::string::value_type *v8; // x1
  std::string::size_type v9; // x2
  std::string *v10; // x0
  __int128 v11; // q0
  std::string *v12; // x0
  __int128 v13; // q0
  int v14; // w10
  const std::string::value_type *v15; // x1
  std::string::size_type v16; // x2
  std::string *v17; // x0
  __int128 v18; // q0
  std::string *v19; // x0
  __int128 v20; // q0
  __int64 v21; // x21
  const google::protobuf::Descriptor *v23; // x0
  __int64 Prototype; // x0
  __int64 v25; // x19
  __int64 v26; // x0
  __int64 v27; // x21
  google::protobuf::internal::LogMessage *v28; // x0
  std::string::size_type v29; // x8
  std::once_flag::_State_type *v30; // x0
  int v31; // w8
  std::string *v32; // x0
  std::string *v33; // x0
  __int128 v34; // q0
  const std::string::value_type *size; // x1
  std::string::size_type v36; // x2
  std::string *v37; // x0
  __int128 v38; // q0
  void *v39; // x0
  std::once_flag::_State_type *v40; // x0
  google::protobuf::internal::LogMessage *v41; // x0
  google::protobuf::UnknownFieldSet *v42; // x0
  int v43; // w2
  std::string *p_str; // x1
  char v46; // [xsp+Fh] [xbp-141h] BYREF
  std::string v47; // [xsp+10h] [xbp-140h] BYREF
  std::string v48; // [xsp+40h] [xbp-110h] BYREF
  __int64 v49; // [xsp+58h] [xbp-F8h]
  void *__p[2]; // [xsp+60h] [xbp-F0h] BYREF
  std::string::size_type v51; // [xsp+70h] [xbp-E0h]
  std::string v52; // [xsp+98h] [xbp-B8h] BYREF
  std::string v53; // [xsp+B0h] [xbp-A0h] BYREF
  std::string __str; // [xsp+D0h] [xbp-80h] BYREF
  const std::string::value_type ***v55; // [xsp+F0h] [xbp-60h] BYREF
  __int64 (__fastcall *v56)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // [xsp+F8h] [xbp-58h] BYREF

  if ( (*(_BYTE *)(*((_QWORD *)this + 2) + 16LL) & 4) == 0 )
  {
    std::operator+<char>("Option \"", a2[1]);
    v5 = std::string::append(&v52, "\" is a message. To set the entire message, use syntax like \"");
    v6 = *(_OWORD *)&v5->__r_.__value_.__l.__data_;
    v53.__r_.__value_.__r.__words[2] = v5->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v53.__r_.__value_.__l.__data_ = v6;
    v5->__r_.__value_.__l.__size_ = 0LL;
    v5->__r_.__value_.__r.__words[2] = 0LL;
    v5->__r_.__value_.__r.__words[0] = 0LL;
    v7 = *((char *)*a2 + 23);
    if ( v7 >= 0 )
      v8 = (const std::string::value_type *)*a2;
    else
      v8 = **a2;
    if ( v7 >= 0 )
      v9 = *((unsigned __int8 *)*a2 + 23);
    else
      v9 = (std::string::size_type)(*a2)[1];
    v10 = std::string::append(&v53, v8, v9);
    v11 = *(_OWORD *)&v10->__r_.__value_.__l.__data_;
    __str.__r_.__value_.__r.__words[2] = v10->__r_.__value_.__r.__words[2];
    *(_OWORD *)&__str.__r_.__value_.__l.__data_ = v11;
    v10->__r_.__value_.__l.__size_ = 0LL;
    v10->__r_.__value_.__r.__words[2] = 0LL;
    v10->__r_.__value_.__r.__words[0] = 0LL;
    v12 = std::string::append(&__str, " = { <proto text format> }\". To set fields within it, use syntax like \"");
    v13 = *(_OWORD *)&v12->__r_.__value_.__l.__data_;
    v48.__r_.__value_.__r.__words[2] = v12->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v48.__r_.__value_.__l.__data_ = v13;
    v12->__r_.__value_.__l.__size_ = 0LL;
    v12->__r_.__value_.__r.__words[2] = 0LL;
    v12->__r_.__value_.__r.__words[0] = 0LL;
    v14 = *((char *)*a2 + 23);
    if ( v14 >= 0 )
      v15 = (const std::string::value_type *)*a2;
    else
      v15 = **a2;
    if ( v14 >= 0 )
      v16 = *((unsigned __int8 *)*a2 + 23);
    else
      v16 = (std::string::size_type)(*a2)[1];
    v17 = std::string::append(&v48, v15, v16);
    v18 = *(_OWORD *)&v17->__r_.__value_.__l.__data_;
    v47.__r_.__value_.__r.__words[2] = v17->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v47.__r_.__value_.__l.__data_ = v18;
    v17->__r_.__value_.__l.__size_ = 0LL;
    v17->__r_.__value_.__r.__words[2] = 0LL;
    v17->__r_.__value_.__r.__words[0] = 0LL;
    v19 = std::string::append(&v47, ".foo = value\".");
    v20 = *(_OWORD *)&v19->__r_.__value_.__l.__data_;
    v51 = v19->__r_.__value_.__r.__words[2];
    *(_OWORD *)__p = v20;
    v19->__r_.__value_.__l.__size_ = 0LL;
    v19->__r_.__value_.__r.__words[2] = 0LL;
    v19->__r_.__value_.__r.__words[0] = 0LL;
    google::protobuf::DescriptorBuilder::AddError(
      *(_QWORD *)this,
      *((_QWORD *)this + 1) + 24LL,
      *((_QWORD *)this + 2),
      8LL,
      (__int64)__p);
    if ( SHIBYTE(v51) < 0 )
      operator delete(__p[0]);
    if ( SHIBYTE(v47.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v47.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v48.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v48.__r_.__value_.__l.__data_);
    if ( SHIBYTE(__str.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(__str.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v53.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v53.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v52.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v52.__r_.__value_.__l.__data_);
    return 0LL;
  }
  v23 = (const google::protobuf::Descriptor *)google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)a2);
  Prototype = google::protobuf::DynamicMessageFactory::GetPrototype(
                (google::protobuf::DescriptorBuilder::OptionInterpreter *)((char *)this + 72),
                v23);
  v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Prototype + 24LL))(Prototype);
  if ( !v25 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      __p,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      7148LL);
    v26 = google::protobuf::internal::LogMessage::operator<<(__p, "CHECK failed: dynamic.get() != nullptr: ");
    v27 = google::protobuf::internal::LogMessage::operator<<(v26, "Could not create an instance of ");
    LOWORD(v48.__r_.__value_.__l.__data_) = 0;
    v48.__r_.__value_.__s.__data_[2] = 0;
    google::protobuf::FieldDescriptor::DebugStringWithOptions((__int64)a2, (__int64)&v48, &v47);
    v28 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v27, &v47);
    google::protobuf::internal::LogFinisher::operator=((int)&__str, v28);
    if ( SHIBYTE(v47.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v47.__r_.__value_.__l.__data_);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)__p);
  }
  v48.__r_.__value_.__r.__words[0] = (std::string::size_type)off_1001D7EA0;
  *(_OWORD *)&v48.__r_.__value_.__r.__words[1] = 0uLL;
  v49 = 0LL;
  v29 = *(_QWORD *)this;
  v52.__r_.__value_.__r.__words[0] = (std::string::size_type)&off_1001D7EE8;
  v52.__r_.__value_.__l.__size_ = v29;
  google::protobuf::TextFormat::Parser::Parser((google::protobuf::TextFormat::Parser *)&v47);
  v47.__r_.__value_.__r.__words[0] = (std::string::size_type)&v48;
  v47.__r_.__value_.__l.__size_ = (std::string::size_type)&v52;
  v21 = google::protobuf::TextFormat::Parser::ParseFromString(
          &v47,
          *(_QWORD *)(*((_QWORD *)this + 2) + 64LL) & 0xFFFFFFFFFFFFFFFELL,
          v25);
  if ( (v21 & 1) != 0 )
  {
    memset(&__str, 0, sizeof(__str));
    google::protobuf::MessageLite::SerializeToString(v25, &__str);
    v30 = (std::once_flag::_State_type *)a2[6];
    if ( v30 )
    {
      v55 = a2;
      v56 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v30, memory_order_acquire) != -1LL )
      {
        __p[0] = &v56;
        __p[1] = &v55;
        v53.__r_.__value_.__r.__words[0] = (std::string::size_type)__p;
        std::__call_once(v30, &v53, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    v31 = *((_DWORD *)a2 + 14);
    if ( v31 == 11 )
    {
      v32 = (std::string *)google::protobuf::UnknownFieldSet::AddLengthDelimited(a3, *((_DWORD *)a2 + 17));
      std::string::operator=(v32, &__str);
    }
    else
    {
      v40 = (std::once_flag::_State_type *)a2[6];
      if ( v40 )
      {
        v55 = a2;
        v56 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v40, memory_order_acquire) != -1LL )
        {
          __p[0] = &v56;
          __p[1] = &v55;
          v53.__r_.__value_.__r.__words[0] = (std::string::size_type)__p;
          std::__call_once(v40, &v53, (void (__cdecl *)(void *))sub_10007A460);
        }
        v31 = *((_DWORD *)a2 + 14);
      }
      if ( v31 != 10 )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          __p,
          3LL,
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/google/protobuf/descriptor.cc",
          7168LL);
        v41 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                          __p,
                                                          "CHECK failed: (option_field->type()) == (FieldDescriptor::TYPE_GROUP): ");
        google::protobuf::internal::LogFinisher::operator=((int)&v46, v41);
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)__p);
      }
      v42 = (google::protobuf::UnknownFieldSet *)google::protobuf::UnknownFieldSet::AddGroup(a3, *((_DWORD *)a2 + 17));
      if ( (__str.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
        v43 = HIBYTE(__str.__r_.__value_.__r.__words[2]);
      else
        v43 = __str.__r_.__value_.__r.__words[1];
      if ( (__str.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
        p_str = &__str;
      else
        p_str = (std::string *)__str.__r_.__value_.__r.__words[0];
      google::protobuf::UnknownFieldSet::ParseFromArray(v42, p_str, v43);
    }
    if ( (SHIBYTE(__str.__r_.__value_.__r.__words[2]) & 0x80000000) == 0 )
      goto LABEL_65;
    v39 = (void *)__str.__r_.__value_.__r.__words[0];
  }
  else
  {
    std::operator+<char>("Error while parsing option value for \"", *a2);
    v33 = std::string::append(&v53, "\": ");
    v34 = *(_OWORD *)&v33->__r_.__value_.__l.__data_;
    __str.__r_.__value_.__r.__words[2] = v33->__r_.__value_.__r.__words[2];
    *(_OWORD *)&__str.__r_.__value_.__l.__data_ = v34;
    v33->__r_.__value_.__l.__size_ = 0LL;
    v33->__r_.__value_.__r.__words[2] = 0LL;
    v33->__r_.__value_.__r.__words[0] = 0LL;
    if ( v49 >= 0 )
      size = &v48.__r_.__value_.__s.__data_[8];
    else
      size = (const std::string::value_type *)v48.__r_.__value_.__l.__size_;
    if ( v49 >= 0 )
      v36 = HIBYTE(v49);
    else
      v36 = v48.__r_.__value_.__r.__words[2];
    v37 = std::string::append(&__str, size, v36);
    v38 = *(_OWORD *)&v37->__r_.__value_.__l.__data_;
    v51 = v37->__r_.__value_.__r.__words[2];
    *(_OWORD *)__p = v38;
    v37->__r_.__value_.__l.__size_ = 0LL;
    v37->__r_.__value_.__r.__words[2] = 0LL;
    v37->__r_.__value_.__r.__words[0] = 0LL;
    google::protobuf::DescriptorBuilder::AddError(
      *(_QWORD *)this,
      *((_QWORD *)this + 1) + 24LL,
      *((_QWORD *)this + 2),
      8LL,
      (__int64)__p);
    if ( SHIBYTE(v51) < 0 )
      operator delete(__p[0]);
    if ( SHIBYTE(__str.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(__str.__r_.__value_.__l.__data_);
    if ( (SHIBYTE(v53.__r_.__value_.__r.__words[2]) & 0x80000000) == 0 )
      goto LABEL_65;
    v39 = (void *)v53.__r_.__value_.__r.__words[0];
  }
  operator delete(v39);
LABEL_65:
  google::protobuf::TextFormat::Parser::~Parser((google::protobuf::TextFormat::Parser *)&v47);
  google::protobuf::TextFormat::Finder::~Finder((google::protobuf::TextFormat::Finder *)&v52);
  v48.__r_.__value_.__r.__words[0] = (std::string::size_type)off_1001D7EA0;
  if ( SHIBYTE(v49) < 0 )
    operator delete((void *)v48.__r_.__value_.__l.__size_);
  google::protobuf::io::ErrorCollector::~ErrorCollector((google::protobuf::io::ErrorCollector *)&v48);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  return v21;
}