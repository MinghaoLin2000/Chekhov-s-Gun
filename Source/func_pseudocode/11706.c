__ZNK6google8protobuf10Reflection12GetEnumValueERKNS0_7MessageEPKNS0_15FieldDescriptorE
__int64 __fastcall google::protobuf::Reflection::GetEnumValue(
        google::protobuf::Reflection *this,
        const google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3)
{
  __int64 v6; // x0
  std::once_flag::_State_type *v7; // x0
  google::protobuf::internal::ExtensionSet *v8; // x20
  int v9; // w21
  __int64 v10; // x0
  __int64 v12; // x8
  const google::protobuf::FieldDescriptor *v13; // [xsp+8h] [xbp-48h] BYREF
  void (__fastcall *v14)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-40h] BYREF
  _QWORD *v15; // [xsp+18h] [xbp-38h] BYREF
  _QWORD v16[2]; // [xsp+20h] [xbp-30h] BYREF

  v6 = *(_QWORD *)this;
  if ( *((_QWORD *)a3 + 10) != v6 )
    sub_1000D8734(v6, a3, "GetEnumValue", "Field does not match message type.");
  if ( *((_DWORD *)a3 + 15) == 3 )
    sub_1000D8734(*(_QWORD *)this, a3, "GetEnumValue", "Field is repeated; the method requires a singular field.");
  v7 = (std::once_flag::_State_type *)*((_QWORD *)a3 + 6);
  if ( v7 )
  {
    v13 = a3;
    v14 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v7, memory_order_acquire) != -1LL )
    {
      v16[0] = &v14;
      v16[1] = &v13;
      v15 = v16;
      std::__call_once(v7, &v15, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a3 + 14)] != 8 )
    sub_1000D8DD0(*(_QWORD *)this, a3, "GetEnumValue", 8LL);
  if ( *((_BYTE *)a3 + 67) )
  {
    v8 = (const google::protobuf::Message *)((char *)a2 + *((unsigned int *)this + 10));
    v9 = *((_DWORD *)a3 + 17);
    v10 = google::protobuf::FieldDescriptor::default_value_enum(a3);
    return google::protobuf::internal::ExtensionSet::GetEnum(v8, v9, *(unsigned int *)(v10 + 16));
  }
  else
  {
    v12 = *((_QWORD *)a3 + 11);
    if ( !v12
      || *(_DWORD *)(v12 + 24) == 1 && *(_BYTE *)(**(_QWORD **)(v12 + 32) + 65LL)
      || *(_DWORD *)((char *)a2
                   + *((_DWORD *)this + 11)
                   - 1431655764
                   * (unsigned int)((unsigned __int64)(v12 - *(_QWORD *)(*(_QWORD *)(v12 + 16) + 48LL)) >> 4)) == *((_DWORD *)a3 + 17) )
    {
      return *(unsigned int *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, a3));
    }
    else
    {
      return *(unsigned int *)(google::protobuf::FieldDescriptor::default_value_enum(a3) + 16);
    }
  }
}