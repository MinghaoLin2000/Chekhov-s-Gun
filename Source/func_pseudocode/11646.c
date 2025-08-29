__ZN6google8protobuf8internal12ExtensionSet25MaybeNewRepeatedExtensionEPKNS0_15FieldDescriptorE
google::protobuf::internal::ExtensionSet::Extension *__fastcall google::protobuf::internal::ExtensionSet::MaybeNewRepeatedExtension(
        google::protobuf::internal::ExtensionSet *this,
        const google::protobuf::FieldDescriptor *a2)
{
  std::once_flag::_State_type *v4; // x0
  google::protobuf::internal::ExtensionSet::Extension *v5; // x9
  __int64 v6; // x0
  google::protobuf::internal::ExtensionSet::Extension *v8; // [xsp+0h] [xbp-40h] BYREF
  const google::protobuf::FieldDescriptor *v9; // [xsp+8h] [xbp-38h] BYREF
  void (__fastcall *v10)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-30h] BYREF
  _QWORD *v11; // [xsp+18h] [xbp-28h] BYREF
  _QWORD v12[2]; // [xsp+20h] [xbp-20h] BYREF

  v8 = 0LL;
  if ( google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, *((_DWORD *)a2 + 17), a2, &v8) )
  {
    v4 = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
    if ( v4 )
    {
      v9 = a2;
      v10 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v4, memory_order_acquire) != -1LL )
      {
        v12[0] = &v10;
        v12[1] = &v9;
        v11 = v12;
        std::__call_once(v4, &v11, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    v5 = v8;
    *((_BYTE *)v8 + 8) = *((_DWORD *)a2 + 14);
    *((_BYTE *)v5 + 9) = 1;
    v6 = sub_1000C8730(*(_QWORD *)this);
    *(_QWORD *)v8 = v6;
  }
  return v8;
}