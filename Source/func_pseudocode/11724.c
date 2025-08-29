__ZNK6google8protobuf10Reflection19GetRawRepeatedFieldERKNS0_7MessageEPKNS0_15FieldDescriptorENS5_7CppTypeEiPKNS0_10DescriptorE
google::protobuf::internal::MapFieldBase *__fastcall google::protobuf::Reflection::GetRawRepeatedField(
        _QWORD *a1,
        __int64 a2,
        google::protobuf::FieldDescriptor *this,
        __int64 a4,
        int a5,
        __int64 a6)
{
  std::once_flag::_State_type *v12; // x0
  __int64 v13; // x0
  google::protobuf::internal::LogMessage *v14; // x0
  __int64 v15; // x0
  google::protobuf::internal::LogMessage *v16; // x0
  google::protobuf::internal::ExtensionSet *v17; // x20
  int v18; // w21
  std::once_flag::_State_type *v19; // x0
  int v20; // w22
  char is_packed; // w0
  google::protobuf::internal::MapFieldBase *result; // x0
  int v23; // w22
  void (__fastcall **v24)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+8h] [xbp-78h] BYREF
  google::protobuf::FieldDescriptor **v25; // [xsp+10h] [xbp-70h]
  google::protobuf::FieldDescriptor *v26; // [xsp+38h] [xbp-48h] BYREF
  void (__fastcall *v27)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+40h] [xbp-40h] BYREF
  void (__fastcall ***v28)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+48h] [xbp-38h] BYREF

  if ( *((_DWORD *)this + 15) != 3 )
    sub_1000D8734(*a1, this, "\"GetRawRepeatedField\"", "Field is singular; the method requires a repeated field.");
  v12 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
  if ( v12 )
  {
    v26 = this;
    v27 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v12, memory_order_acquire) != -1LL )
    {
      v24 = &v27;
      v25 = &v26;
      v28 = &v24;
      std::__call_once(v12, &v28, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)this + 14)] != (_DWORD)a4 )
    sub_1000D8DD0(*a1, this, "GetRawRepeatedField", a4);
  if ( (a5 & 0x80000000) == 0 && *(_DWORD *)(*((_QWORD *)this + 15) + 72LL) != a5 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v24,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/generated_message_reflection.cc",
      1813LL);
    v13 = google::protobuf::internal::LogMessage::operator<<(
            &v24,
            "CHECK failed: (field->options().ctype()) == (ctype): ");
    v14 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                      v13,
                                                      "subtype mismatch");
    google::protobuf::internal::LogFinisher::operator=((int)&v28, v14);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v24);
  }
  if ( a6 && google::protobuf::FieldDescriptor::message_type(this) != a6 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v24,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/generated_message_reflection.cc",
      1815LL);
    v15 = google::protobuf::internal::LogMessage::operator<<(&v24, "CHECK failed: (field->message_type()) == (desc): ");
    v16 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                      v15,
                                                      "wrong submessage type");
    google::protobuf::internal::LogFinisher::operator=((int)&v28, v16);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v24);
  }
  if ( *((_BYTE *)this + 67) )
  {
    v17 = (google::protobuf::internal::ExtensionSet *)(a2 + *((unsigned int *)a1 + 10));
    v18 = *((_DWORD *)this + 17);
    v19 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
    if ( v19 )
    {
      v26 = this;
      v27 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v19, memory_order_acquire) != -1LL )
      {
        v24 = &v27;
        v25 = &v26;
        v28 = &v24;
        std::__call_once(v19, &v28, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    v20 = *((unsigned __int8 *)this + 56);
    is_packed = google::protobuf::FieldDescriptor::is_packed(this);
    return (google::protobuf::internal::MapFieldBase *)google::protobuf::internal::ExtensionSet::MutableRawRepeatedField(
                                                         v17,
                                                         v18,
                                                         v20,
                                                         is_packed,
                                                         this);
  }
  else
  {
    v23 = sub_1000BF2A4(this);
    result = (google::protobuf::internal::MapFieldBase *)(a2 + (unsigned int)sub_1000DF85C(a1 + 1, this));
    if ( v23 )
      return (google::protobuf::internal::MapFieldBase *)google::protobuf::internal::MapFieldBase::GetRepeatedField(result);
  }
  return result;
}