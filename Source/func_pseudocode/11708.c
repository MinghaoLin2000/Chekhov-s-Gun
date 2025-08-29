__ZNK6google8protobuf10Reflection20SetEnumValueInternalEPNS0_7MessageEPKNS0_15FieldDescriptorEi
__int64 __fastcall google::protobuf::Reflection::SetEnumValueInternal(
        google::protobuf::Reflection *this,
        google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3,
        int a4)
{
  google::protobuf::internal::ExtensionSet *v5; // x20
  int v6; // w21
  std::once_flag::_State_type *v7; // x0
  int v9; // [xsp+4h] [xbp-4Ch] BYREF
  const google::protobuf::FieldDescriptor *v10; // [xsp+8h] [xbp-48h] BYREF
  void (__fastcall *v11)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-40h] BYREF
  _QWORD *v12; // [xsp+18h] [xbp-38h] BYREF
  _QWORD v13[2]; // [xsp+20h] [xbp-30h] BYREF

  v9 = a4;
  if ( !*((_BYTE *)a3 + 67) )
    return sub_1000D78C8(this, a2, a3, &v9);
  v5 = (google::protobuf::Message *)((char *)a2 + *((unsigned int *)this + 10));
  v6 = *((_DWORD *)a3 + 17);
  v7 = (std::once_flag::_State_type *)*((_QWORD *)a3 + 6);
  if ( v7 )
  {
    v10 = a3;
    v11 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v7, memory_order_acquire) != -1LL )
    {
      v13[0] = &v11;
      v13[1] = &v10;
      v12 = v13;
      std::__call_once(v7, &v12, (void (__cdecl *)(void *))sub_10007A460);
    }
    a4 = v9;
  }
  return google::protobuf::internal::ExtensionSet::SetEnum(v5, v6, *((_BYTE *)a3 + 56), a4, a3);
}