__ZNK6google8protobuf10Reflection26GetRepeatedStringReferenceERKNS0_7MessageEPKNS0_15FieldDescriptorEiPNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEE
__int64 __fastcall google::protobuf::Reflection::GetRepeatedStringReference(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // x0
  std::once_flag::_State_type *v9; // x0
  __int64 v11; // [xsp+8h] [xbp-48h] BYREF
  void (__fastcall *v12)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-40h] BYREF
  _QWORD *v13; // [xsp+18h] [xbp-38h] BYREF
  _QWORD v14[2]; // [xsp+20h] [xbp-30h] BYREF

  v8 = *a1;
  if ( *(_QWORD *)(a3 + 80) != v8 )
    sub_1000D8734(v8, a3, "GetRepeatedStringReference", "Field does not match message type.");
  if ( *(_DWORD *)(a3 + 60) != 3 )
    sub_1000D8734(*a1, a3, "GetRepeatedStringReference", "Field is singular; the method requires a repeated field.");
  v9 = *(std::once_flag::_State_type **)(a3 + 48);
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
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(a3 + 56)] != 9 )
    sub_1000D8DD0(*a1, a3, "GetRepeatedStringReference", 9LL);
  if ( *(_BYTE *)(a3 + 67) )
    return google::protobuf::internal::ExtensionSet::GetRepeatedString(
             (google::protobuf::internal::ExtensionSet *)(a2 + *((unsigned int *)a1 + 10)),
             *(_DWORD *)(a3 + 68),
             a4);
  else
    return *(_QWORD *)(*(_QWORD *)(a2 + (unsigned int)sub_1000DF774(a1 + 1, a3) + 16) + 8LL * a4 + 8);
}