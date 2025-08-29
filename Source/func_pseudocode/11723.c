__ZNK6google8protobuf10Reflection23MutableRawRepeatedFieldEPNS0_7MessageEPKNS0_15FieldDescriptorENS4_7CppTypeEiPKNS0_10DescriptorE
atomic_uint *__fastcall google::protobuf::Reflection::MutableRawRepeatedField(
        _QWORD *a1,
        __int64 a2,
        google::protobuf::FieldDescriptor *this,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  std::once_flag::_State_type *v11; // x0
  int v12; // w8
  std::once_flag::_State_type *v13; // x0
  __int64 v14; // x0
  google::protobuf::internal::LogMessage *v15; // x0
  google::protobuf::internal::ExtensionSet *v16; // x20
  int v17; // w21
  std::once_flag::_State_type *v18; // x0
  int v19; // w22
  char is_packed; // w0
  atomic_uint *result; // x0
  int v22; // w22
  void (__fastcall **v23)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+8h] [xbp-78h] BYREF
  google::protobuf::FieldDescriptor **v24; // [xsp+10h] [xbp-70h]
  google::protobuf::FieldDescriptor *v25; // [xsp+38h] [xbp-48h] BYREF
  void (__fastcall *v26)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+40h] [xbp-40h] BYREF
  void (__fastcall ***v27)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+48h] [xbp-38h] BYREF

  if ( *((_DWORD *)this + 15) != 3 )
    sub_1000D8734(*a1, this, "\"MutableRawRepeatedField\"", "Field is singular; the method requires a repeated field.");
  v11 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
  if ( v11 )
  {
    v25 = this;
    v26 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v11, memory_order_acquire) != -1LL )
    {
      v23 = &v26;
      v24 = &v25;
      v27 = &v23;
      std::__call_once(v11, &v27, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  v12 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)this + 14)];
  if ( v12 == (_DWORD)a4 )
    goto LABEL_13;
  v13 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
  if ( v13 )
  {
    v25 = this;
    v26 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v13, memory_order_acquire) != -1LL )
    {
      v23 = &v26;
      v24 = &v25;
      v27 = &v23;
      std::__call_once(v13, &v27, (void (__cdecl *)(void *))sub_10007A460);
    }
    v12 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)this + 14)];
  }
  if ( (_DWORD)a4 == 1 && v12 == 8 )
  {
LABEL_13:
    if ( !a6 )
      goto LABEL_18;
  }
  else
  {
    sub_1000D8DD0(*a1, this, "MutableRawRepeatedField", a4);
    if ( !a6 )
      goto LABEL_18;
  }
  if ( google::protobuf::FieldDescriptor::message_type(this) != a6 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v23,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/generated_message_reflection.cc",
      1789LL);
    v14 = google::protobuf::internal::LogMessage::operator<<(&v23, "CHECK failed: (field->message_type()) == (desc): ");
    v15 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                      v14,
                                                      "wrong submessage type");
    google::protobuf::internal::LogFinisher::operator=((int)&v27, v15);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v23);
  }
LABEL_18:
  if ( *((_BYTE *)this + 67) )
  {
    v16 = (google::protobuf::internal::ExtensionSet *)(a2 + *((unsigned int *)a1 + 10));
    v17 = *((_DWORD *)this + 17);
    v18 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
    if ( v18 )
    {
      v25 = this;
      v26 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v18, memory_order_acquire) != -1LL )
      {
        v23 = &v26;
        v24 = &v25;
        v27 = &v23;
        std::__call_once(v18, &v27, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    v19 = *((unsigned __int8 *)this + 56);
    is_packed = google::protobuf::FieldDescriptor::is_packed(this);
    return (atomic_uint *)google::protobuf::internal::ExtensionSet::MutableRawRepeatedField(
                            v16,
                            v17,
                            v19,
                            is_packed,
                            this);
  }
  else
  {
    v22 = sub_1000BF2A4(this);
    result = (atomic_uint *)(a2 + (unsigned int)sub_1000DF85C(a1 + 1, this));
    if ( v22 )
      return (atomic_uint *)google::protobuf::internal::MapFieldBase::MutableRepeatedField(result);
  }
  return result;
}