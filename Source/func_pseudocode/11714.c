__ZNK6google8protobuf10Reflection12AddEnumValueEPNS0_7MessageEPKNS0_15FieldDescriptorEi
unsigned int *__fastcall google::protobuf::Reflection::AddEnumValue(
        google::protobuf::Reflection *this,
        google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3,
        signed int a4)
{
  __int64 v8; // x0
  std::once_flag::_State_type *v9; // x0
  google::protobuf::EnumDescriptor *v10; // x0
  _QWORD *v12; // x0
  google::protobuf::UnknownFieldSet *v13; // x0
  const google::protobuf::FieldDescriptor *v14; // [xsp+8h] [xbp-48h] BYREF
  void (__fastcall *v15)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-40h] BYREF
  _QWORD *v16; // [xsp+18h] [xbp-38h] BYREF
  _QWORD v17[2]; // [xsp+20h] [xbp-30h] BYREF

  v8 = *(_QWORD *)this;
  if ( *((_QWORD *)a3 + 10) != v8 )
    sub_1000D8734(v8, a3, "AddEnum", "Field does not match message type.");
  if ( *((_DWORD *)a3 + 15) != 3 )
    sub_1000D8734(*(_QWORD *)this, a3, "AddEnum", "Field is singular; the method requires a repeated field.");
  v9 = (std::once_flag::_State_type *)*((_QWORD *)a3 + 6);
  if ( v9 )
  {
    v14 = a3;
    v15 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v9, memory_order_acquire) != -1LL )
    {
      v17[0] = &v15;
      v17[1] = &v14;
      v16 = v17;
      std::__call_once(v9, &v16, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a3 + 14)] != 8 )
    sub_1000D8DD0(*(_QWORD *)this, a3, "AddEnum", 8LL);
  if ( *(_DWORD *)(*((_QWORD *)a3 + 5) + 60LL) == 3 )
    return google::protobuf::Reflection::AddEnumValueInternal(this, a2, a3, a4);
  v10 = (google::protobuf::EnumDescriptor *)google::protobuf::FieldDescriptor::enum_type(a3);
  if ( google::protobuf::EnumDescriptor::FindValueByNumber(v10, a4) )
    return google::protobuf::Reflection::AddEnumValueInternal(this, a2, a3, a4);
  v12 = (_QWORD *)((char *)a2 + *((unsigned int *)this + 9));
  if ( (*v12 & 1) != 0 )
    v13 = (google::protobuf::UnknownFieldSet *)((*v12 & 0xFFFFFFFFFFFFFFFELL) + 8);
  else
    v13 = (google::protobuf::UnknownFieldSet *)sub_10003A0B4(v12);
  return (unsigned int *)google::protobuf::UnknownFieldSet::AddVarint(v13, *((_DWORD *)a3 + 17), a4);
}