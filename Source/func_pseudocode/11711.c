__ZNK6google8protobuf10Reflection20GetRepeatedEnumValueERKNS0_7MessageEPKNS0_15FieldDescriptorEi
__int64 __fastcall google::protobuf::Reflection::GetRepeatedEnumValue(
        google::protobuf::Reflection *this,
        const google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3,
        int a4)
{
  __int64 v8; // x0
  std::once_flag::_State_type *v9; // x0
  const google::protobuf::FieldDescriptor *v11; // [xsp+8h] [xbp-48h] BYREF
  void (__fastcall *v12)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-40h] BYREF
  _QWORD *v13; // [xsp+18h] [xbp-38h] BYREF
  _QWORD v14[2]; // [xsp+20h] [xbp-30h] BYREF

  v8 = *(_QWORD *)this;
  if ( *((_QWORD *)a3 + 10) != v8 )
    sub_1000D8734(v8, a3, "GetRepeatedEnumValue", "Field does not match message type.");
  if ( *((_DWORD *)a3 + 15) != 3 )
    sub_1000D8734(
      *(_QWORD *)this,
      a3,
      "GetRepeatedEnumValue",
      "Field is singular; the method requires a repeated field.");
  v9 = (std::once_flag::_State_type *)*((_QWORD *)a3 + 6);
  if ( v9 )
  {
    v11 = a3;
    v12 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v9, memory_order_acquire) != -1LL )
    {
      v14[0] = &v12;
      v14[1] = &v11;
      v13 = v14;
      std::__call_once(v9, &v13, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a3 + 14)] != 8 )
    sub_1000D8DD0(*(_QWORD *)this, a3, "GetRepeatedEnumValue", 8LL);
  if ( *((_BYTE *)a3 + 67) )
    return google::protobuf::internal::ExtensionSet::GetRepeatedEnum(
             (const google::protobuf::Message *)((char *)a2 + *((unsigned int *)this + 10)),
             *((_DWORD *)a3 + 17),
             a4);
  else
    return *(unsigned int *)(*(_QWORD *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, a3) + 8) + 4LL * a4);
}