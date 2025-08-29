__ZNK6google8protobuf10Reflection8SetFloatEPNS0_7MessageEPKNS0_15FieldDescriptorEf
__int64 __fastcall google::protobuf::Reflection::SetFloat(
        google::protobuf::Reflection *this,
        google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3,
        float a4)
{
  __int64 v7; // x0
  std::once_flag::_State_type *v8; // x0
  google::protobuf::internal::ExtensionSet *v9; // x20
  int v10; // w21
  std::once_flag::_State_type *v11; // x0
  float v13; // [xsp+4h] [xbp-4Ch] BYREF
  const google::protobuf::FieldDescriptor *v14; // [xsp+8h] [xbp-48h] BYREF
  void (__fastcall *v15)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-40h] BYREF
  void (__fastcall ***v16)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+18h] [xbp-38h] BYREF
  void (__fastcall **v17)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+20h] [xbp-30h] BYREF
  const google::protobuf::FieldDescriptor **v18; // [xsp+28h] [xbp-28h]

  v13 = a4;
  v7 = *(_QWORD *)this;
  if ( *((_QWORD *)a3 + 10) != v7 )
    sub_1000D8734(v7, a3, "SetFloat", "Field does not match message type.");
  if ( *((_DWORD *)a3 + 15) == 3 )
    sub_1000D8734(*(_QWORD *)this, a3, "SetFloat", "Field is repeated; the method requires a singular field.");
  v8 = (std::once_flag::_State_type *)*((_QWORD *)a3 + 6);
  if ( v8 )
  {
    v14 = a3;
    v15 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v8, memory_order_acquire) != -1LL )
    {
      v17 = &v15;
      v18 = &v14;
      v16 = &v17;
      std::__call_once(v8, &v16, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a3 + 14)] != 6 )
    sub_1000D8DD0(*(_QWORD *)this, a3, "SetFloat", 6LL);
  if ( !*((_BYTE *)a3 + 67) )
    return sub_1000D7B10(this, a2, a3, &v13);
  v9 = (google::protobuf::Message *)((char *)a2 + *((unsigned int *)this + 10));
  v10 = *((_DWORD *)a3 + 17);
  v11 = (std::once_flag::_State_type *)*((_QWORD *)a3 + 6);
  if ( v11 )
  {
    v14 = a3;
    v15 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v11, memory_order_acquire) != -1LL )
    {
      v17 = &v15;
      v18 = &v14;
      v16 = &v17;
      std::__call_once(v11, &v16, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  return google::protobuf::internal::ExtensionSet::SetFloat(v9, v10, *((_BYTE *)a3 + 56), v13, a3);
}