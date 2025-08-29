__ZNK6google8protobuf10Reflection18GetStringReferenceERKNS0_7MessageEPKNS0_15FieldDescriptorEPNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEE
unsigned __int64 __fastcall google::protobuf::Reflection::GetStringReference(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x0
  std::once_flag::_State_type *v7; // x0
  unsigned __int64 result; // x0
  __int64 v9; // x8
  __int64 v10; // [xsp+8h] [xbp-48h] BYREF
  void (__fastcall *v11)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-40h] BYREF
  _QWORD *v12; // [xsp+18h] [xbp-38h] BYREF
  _QWORD v13[2]; // [xsp+20h] [xbp-30h] BYREF

  v6 = *a1;
  if ( *(_QWORD *)(a3 + 80) != v6 )
    sub_1000D8734(v6, a3, "GetStringReference", "Field does not match message type.");
  if ( *(_DWORD *)(a3 + 60) == 3 )
    sub_1000D8734(*a1, a3, "GetStringReference", "Field is repeated; the method requires a singular field.");
  v7 = *(std::once_flag::_State_type **)(a3 + 48);
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
  }
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(a3 + 56)] != 9 )
    sub_1000D8DD0(*a1, a3, "GetStringReference", 9LL);
  if ( *(_BYTE *)(a3 + 67) )
    return google::protobuf::internal::ExtensionSet::GetString(
             (google::protobuf::internal::ExtensionSet *)(a2 + *((unsigned int *)a1 + 10)),
             *(_DWORD *)(a3 + 68),
             *(_QWORD *)(a3 + 144));
  v9 = *(_QWORD *)(a3 + 88);
  if ( v9
    && (*(_DWORD *)(v9 + 24) != 1 || !*(_BYTE *)(**(_QWORD **)(v9 + 32) + 65LL))
    && *(_DWORD *)(a2
                 + *((_DWORD *)a1 + 11)
                 - 1431655764 * (unsigned int)((unsigned __int64)(v9 - *(_QWORD *)(*(_QWORD *)(v9 + 16) + 48LL)) >> 4)) != *(_DWORD *)(a3 + 68) )
  {
    return *(_QWORD *)(a3 + 144);
  }
  result = *(_QWORD *)(a2 + (unsigned int)sub_1000DF774(a1 + 1, a3)) & 0xFFFFFFFFFFFFFFFELL;
  if ( !result )
    return *(_QWORD *)(a3 + 144);
  return result;
}