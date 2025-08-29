__ZNK6google8protobuf10Reflection17RepeatedFieldDataEPNS0_7MessageEPKNS0_15FieldDescriptorENS4_7CppTypeEPKNS0_10DescriptorE
__int64 __fastcall google::protobuf::Reflection::RepeatedFieldData(
        __int64 a1,
        __int64 a2,
        google::protobuf::FieldDescriptor *this,
        int a4,
        __int64 a5)
{
  google::protobuf::internal::LogMessage *v10; // x0
  std::once_flag::_State_type *v11; // x0
  int v12; // w8
  std::once_flag::_State_type *v13; // x0
  google::protobuf::internal::LogMessage *v14; // x0
  google::protobuf::internal::ExtensionSet *v15; // x20
  int v16; // w21
  std::once_flag::_State_type *v17; // x0
  int v18; // w22
  char is_packed; // w0
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  google::protobuf::internal::LogMessage *v24; // x0
  char v25; // [xsp+7h] [xbp-79h] BYREF
  void (__fastcall **v26)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+8h] [xbp-78h] BYREF
  google::protobuf::FieldDescriptor **v27; // [xsp+10h] [xbp-70h]
  google::protobuf::FieldDescriptor *v28; // [xsp+38h] [xbp-48h] BYREF
  void (__fastcall *v29)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+40h] [xbp-40h] BYREF
  void (__fastcall ***v30)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+48h] [xbp-38h] BYREF

  if ( *((_DWORD *)this + 15) != 3 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v26,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/generated_message_reflection.cc",
      2281LL);
    v10 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                      &v26,
                                                      "CHECK failed: field->is_repeated(): ");
    google::protobuf::internal::LogFinisher::operator=((int)&v30, v10);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v26);
  }
  v11 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
  if ( v11 )
  {
    v28 = this;
    v29 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v11, memory_order_acquire) != -1LL )
    {
      v26 = &v29;
      v27 = &v28;
      v30 = &v26;
      std::__call_once(v11, &v30, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  v12 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)this + 14)];
  if ( v12 == a4 )
    goto LABEL_13;
  v13 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
  if ( v13 )
  {
    v28 = this;
    v29 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v13, memory_order_acquire) != -1LL )
    {
      v26 = &v29;
      v27 = &v28;
      v30 = &v26;
      std::__call_once(v13, &v30, (void (__cdecl *)(void *))sub_10007A460);
    }
    v12 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)this + 14)];
  }
  if ( a4 == 1 && v12 == 8 )
  {
LABEL_13:
    if ( !a5 )
      goto LABEL_16;
  }
  else
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v26,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/generated_message_reflection.cc",
      2284LL);
    v21 = google::protobuf::internal::LogMessage::operator<<(
            &v26,
            "CHECK failed: field->cpp_type() == cpp_type || (field->cpp_type() == FieldDescriptor::CPPTYPE_ENUM && cpp_ty"
            "pe == FieldDescriptor::CPPTYPE_INT32): ");
    v22 = google::protobuf::internal::LogMessage::operator<<(
            v21,
            "The type parameter T in RepeatedFieldRef<T> API doesn't match ");
    v23 = google::protobuf::internal::LogMessage::operator<<(
            v22,
            "the actual field type (for enums T should be the generated enum ");
    v24 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                      v23,
                                                      "type or int32).");
    google::protobuf::internal::LogFinisher::operator=((int)&v25, v24);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v26);
    if ( !a5 )
      goto LABEL_16;
  }
  if ( google::protobuf::FieldDescriptor::message_type(this) != a5 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v26,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/generated_message_reflection.cc",
      2289LL);
    v14 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                      &v26,
                                                      "CHECK failed: (message_type) == (field->message_type()): ");
    google::protobuf::internal::LogFinisher::operator=((int)&v30, v14);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v26);
  }
LABEL_16:
  if ( !*((_BYTE *)this + 67) )
    return a2 + (unsigned int)sub_1000DF85C(a1 + 8, this);
  v15 = (google::protobuf::internal::ExtensionSet *)(a2 + *(unsigned int *)(a1 + 40));
  v16 = *((_DWORD *)this + 17);
  v17 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
  if ( v17 )
  {
    v28 = this;
    v29 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v17, memory_order_acquire) != -1LL )
    {
      v26 = &v29;
      v27 = &v28;
      v30 = &v26;
      std::__call_once(v17, &v30, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  v18 = *((unsigned __int8 *)this + 56);
  is_packed = google::protobuf::FieldDescriptor::is_packed(this);
  return google::protobuf::internal::ExtensionSet::MutableRawRepeatedField(v15, v16, v18, is_packed, this);
}