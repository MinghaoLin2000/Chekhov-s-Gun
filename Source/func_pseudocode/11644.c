__ZN6google8protobuf8internal12ExtensionSet14MutableMessageEPKNS0_15FieldDescriptorEPNS0_14MessageFactoryE
__int64 __fastcall google::protobuf::internal::ExtensionSet::MutableMessage(
        google::protobuf::internal::ExtensionSet *this,
        const google::protobuf::FieldDescriptor *a2,
        google::protobuf::MessageFactory *a3)
{
  std::once_flag::_State_type *v6; // x0
  google::protobuf::internal::ExtensionSet::Extension *v7; // x9
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  google::protobuf::internal::ExtensionSet::Extension *v11; // x8
  __int64 v12; // x20
  google::protobuf::internal::ExtensionSet::Extension *v13; // x8
  char v14; // w9
  __int64 v15; // x0
  __int64 v16; // x0
  google::protobuf::internal::ExtensionSet::Extension *v18; // [xsp+0h] [xbp-50h] BYREF
  const google::protobuf::FieldDescriptor *v19; // [xsp+8h] [xbp-48h] BYREF
  void (__fastcall *v20)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-40h] BYREF
  _QWORD *v21; // [xsp+18h] [xbp-38h] BYREF
  _QWORD v22[2]; // [xsp+20h] [xbp-30h] BYREF

  v18 = 0LL;
  if ( google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, *((_DWORD *)a2 + 17), a2, &v18) )
  {
    v6 = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
    if ( v6 )
    {
      v19 = a2;
      v20 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v6, memory_order_acquire) != -1LL )
      {
        v22[0] = &v20;
        v22[1] = &v19;
        v21 = v22;
        std::__call_once(v6, &v21, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    v7 = v18;
    *((_WORD *)v18 + 4) = (unsigned __int8)*((_DWORD *)a2 + 14);
    *((_BYTE *)v7 + 11) = 0;
    v8 = google::protobuf::FieldDescriptor::message_type(a2);
    v9 = (*(__int64 (__fastcall **)(google::protobuf::MessageFactory *, __int64))(*(_QWORD *)a3 + 16LL))(a3, v8);
    *((_BYTE *)v18 + 10) &= 0xFu;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, *(_QWORD *)this);
    *(_QWORD *)v18 = v10;
    v11 = v18;
    *((_BYTE *)v18 + 10) &= 0xF0u;
    return *(_QWORD *)v11;
  }
  else
  {
    v13 = v18;
    v14 = *((_BYTE *)v18 + 10);
    *((_BYTE *)v18 + 10) = v14 & 0xF0;
    v12 = *(_QWORD *)v13;
    if ( (v14 & 0x10) != 0 )
    {
      v15 = google::protobuf::FieldDescriptor::message_type(a2);
      v16 = (*(__int64 (__fastcall **)(google::protobuf::MessageFactory *, __int64))(*(_QWORD *)a3 + 16LL))(a3, v15);
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v16);
    }
  }
  return v12;
}