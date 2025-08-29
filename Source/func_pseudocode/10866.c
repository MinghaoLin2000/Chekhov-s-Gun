__ZNK6google8protobuf15FieldDescriptor20DefaultValueAsStringEb
void __usercall google::protobuf::FieldDescriptor::DefaultValueAsString(
        google::protobuf::FieldDescriptor *this@<X0>,
        int a2@<W1>,
        char *a3@<X2>,
        _QWORD *a4@<X8>)
{
  __int64 v7; // x0
  google::protobuf::internal::LogMessage *v8; // x0
  std::once_flag::_State_type *v9; // x0
  int v10; // w8
  google::protobuf *v11; // x0
  google::protobuf *v12; // x0
  google::protobuf *v13; // x0
  google::protobuf *v14; // x0
  char *v15; // x1
  __int64 v16; // x0
  __int128 *v17; // x8
  __int128 v18; // q0
  __int64 v19; // x8
  std::string *v20; // x0
  __int128 v21; // q0
  std::string *v22; // x0
  __int128 v23; // q0
  google::protobuf::internal::LogMessage *v24; // x0
  google::protobuf::internal::LogMessage *v25; // x0
  std::once_flag::_State_type *v26; // x0
  __int128 *v27; // x0
  std::string v28; // [xsp+8h] [xbp-88h] BYREF
  google::protobuf::FieldDescriptor *v29; // [xsp+20h] [xbp-70h] BYREF
  __int64 (__fastcall *v30)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // [xsp+28h] [xbp-68h] BYREF
  std::string v31; // [xsp+30h] [xbp-60h] BYREF

  if ( !*((_BYTE *)this + 64) )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v31,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      1982LL);
    v7 = google::protobuf::internal::LogMessage::operator<<(&v31, "CHECK failed: has_default_value(): ");
    v8 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v7,
                                                     "No default value");
    google::protobuf::internal::LogFinisher::operator=((int)&v28, v8);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v31);
  }
  v9 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
  if ( v9 )
  {
    v29 = this;
    v30 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v9, memory_order_acquire) != -1LL )
    {
      v31.__r_.__value_.__r.__words[0] = (std::string::size_type)&v30;
      v31.__r_.__value_.__l.__size_ = (std::string::size_type)&v29;
      v28.__r_.__value_.__r.__words[0] = (std::string::size_type)&v31;
      std::__call_once(v9, &v28, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  v10 = *((_DWORD *)this + 14);
  switch ( v10 )
  {
    case 1:
      google::protobuf::SimpleDtoa((google::protobuf *)v9, *((double *)this + 18));
      break;
    case 2:
      google::protobuf::SimpleFtoa((google::protobuf *)v9, *((float *)this + 36));
      break;
    case 3:
    case 16:
    case 18:
      v12 = (google::protobuf *)*((_QWORD *)this + 18);
      v31.__r_.__value_.__r.__words[0] = (std::string::size_type)&v31.__r_.__value_.__r.__words[2];
      v31.__r_.__value_.__l.__size_ = google::protobuf::FastInt64ToBufferLeft(
                                        v12,
                                        (__int64)&v31.__r_.__value_.__r.__words[2],
                                        a3)
                                    - ((_QWORD)&v31.__r_.__value_.__l
                                     + 16);
      sub_10007A6A8(a4, v31.__r_.__value_.__l.__data_, v31.__r_.__value_.__l.__size_);
      break;
    case 4:
    case 6:
      v14 = (google::protobuf *)*((_QWORD *)this + 18);
      v31.__r_.__value_.__r.__words[0] = (std::string::size_type)&v31.__r_.__value_.__r.__words[2];
      v31.__r_.__value_.__l.__size_ = google::protobuf::FastUInt64ToBufferLeft(
                                        v14,
                                        (unsigned __int64)&v31.__r_.__value_.__r.__words[2],
                                        a3)
                                    - ((_QWORD)&v31.__r_.__value_.__l
                                     + 16);
      sub_10007A6A8(a4, v31.__r_.__value_.__l.__data_, v31.__r_.__value_.__l.__size_);
      break;
    case 5:
    case 15:
    case 17:
      v11 = (google::protobuf *)*((unsigned int *)this + 36);
      v31.__r_.__value_.__r.__words[0] = (std::string::size_type)&v31.__r_.__value_.__r.__words[2];
      v31.__r_.__value_.__l.__size_ = google::protobuf::FastInt32ToBufferLeft(
                                        v11,
                                        (int)&v31.__r_.__value_.__r.__words[2],
                                        a3)
                                    - ((_QWORD)&v31.__r_.__value_.__l
                                     + 16);
      sub_10007A6A8(a4, v31.__r_.__value_.__l.__data_, v31.__r_.__value_.__l.__size_);
      break;
    case 7:
    case 13:
      v13 = (google::protobuf *)*((unsigned int *)this + 36);
      v31.__r_.__value_.__r.__words[0] = (std::string::size_type)&v31.__r_.__value_.__r.__words[2];
      v31.__r_.__value_.__l.__size_ = google::protobuf::FastUInt32ToBufferLeft(
                                        v13,
                                        (unsigned int)&v31.__r_.__value_.__r.__words[2],
                                        a3)
                                    - ((_QWORD)&v31.__r_.__value_.__l
                                     + 16);
      sub_10007A6A8(a4, v31.__r_.__value_.__l.__data_, v31.__r_.__value_.__l.__size_);
      break;
    case 8:
      if ( *((_BYTE *)this + 144) )
        v15 = "true";
      else
        v15 = "false";
      sub_10007A754((int)a4, v15);
      break;
    case 9:
    case 12:
      if ( a2 )
      {
        google::protobuf::CEscape(*((_QWORD *)this + 18));
        v20 = std::string::insert(&v28, 0LL, "\"");
        v21 = *(_OWORD *)&v20->__r_.__value_.__l.__data_;
        v31.__r_.__value_.__r.__words[2] = v20->__r_.__value_.__r.__words[2];
        *(_OWORD *)&v31.__r_.__value_.__l.__data_ = v21;
        v20->__r_.__value_.__l.__size_ = 0LL;
        v20->__r_.__value_.__r.__words[2] = 0LL;
        v20->__r_.__value_.__r.__words[0] = 0LL;
        v22 = std::string::append(&v31, "\"");
        v23 = *(_OWORD *)&v22->__r_.__value_.__l.__data_;
        a4[2] = *((_QWORD *)&v22->__r_.__value_.__l + 2);
        *(_OWORD *)a4 = v23;
        v22->__r_.__value_.__l.__size_ = 0LL;
        v22->__r_.__value_.__r.__words[2] = 0LL;
        v22->__r_.__value_.__r.__words[0] = 0LL;
        if ( SHIBYTE(v31.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v31.__r_.__value_.__l.__data_);
        if ( SHIBYTE(v28.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v28.__r_.__value_.__l.__data_);
      }
      else
      {
        v26 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
        if ( v26 )
        {
          v29 = this;
          v30 = google::protobuf::FieldDescriptor::TypeOnceInit;
          if ( atomic_load_explicit((atomic_ullong *volatile)v26, memory_order_acquire) != -1LL )
          {
            v31.__r_.__value_.__r.__words[0] = (std::string::size_type)&v30;
            v31.__r_.__value_.__l.__size_ = (std::string::size_type)&v29;
            v28.__r_.__value_.__r.__words[0] = (std::string::size_type)&v31;
            std::__call_once(v26, &v28, (void (__cdecl *)(void *))sub_10007A460);
          }
          v10 = *((_DWORD *)this + 14);
        }
        v27 = (__int128 *)*((_QWORD *)this + 18);
        if ( v10 == 12 )
        {
          google::protobuf::CEscape(v27);
        }
        else
        {
          if ( (*((char *)v27 + 23) & 0x80000000) == 0 )
          {
            v18 = *v27;
            v19 = *((_QWORD *)v27 + 2);
            goto LABEL_35;
          }
          sub_10007A474(a4, *(void **)v27);
        }
      }
      break;
    case 10:
    case 11:
      google::protobuf::internal::LogMessage::LogMessage(
        &v31,
        2LL,
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/google/protobuf/descriptor.cc",
        2020LL);
      v24 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                        &v31,
                                                        "Messages can't have default values!");
      google::protobuf::internal::LogFinisher::operator=((int)&v28, v24);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v31);
      goto LABEL_25;
    case 14:
      v16 = google::protobuf::FieldDescriptor::default_value_enum(this);
      v17 = *(__int128 **)v16;
      if ( *(char *)(*(_QWORD *)v16 + 23LL) < 0 )
      {
        sub_10007A474(a4, *(void **)v17);
      }
      else
      {
        v18 = *v17;
        v19 = *((_QWORD *)v17 + 2);
LABEL_35:
        a4[2] = v19;
        *(_OWORD *)a4 = v18;
      }
      break;
    default:
LABEL_25:
      google::protobuf::internal::LogMessage::LogMessage(
        &v31,
        3LL,
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/google/protobuf/descriptor.cc",
        2023LL);
      v25 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                        &v31,
                                                        "Can't get here: failed to get default value as string");
      google::protobuf::internal::LogFinisher::operator=((int)&v28, v25);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v31);
      sub_10007A754((int)a4, "");
      break;
  }
}