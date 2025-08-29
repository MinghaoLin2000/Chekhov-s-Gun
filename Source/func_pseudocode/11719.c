__ZNK6google8protobuf10Reflection25UnsafeArenaReleaseMessageEPNS0_7MessageEPKNS0_15FieldDescriptorEPNS0_14MessageFactoryE
__int64 __fastcall google::protobuf::Reflection::UnsafeArenaReleaseMessage(
        std::once_flag::_State_type **this,
        google::protobuf::Message *a2,
        std::once_flag::_State_type **a3,
        google::protobuf::MessageFactory *a4)
{
  std::once_flag::_State_type *v8; // x0
  std::once_flag::_State_type *v9; // x0
  __int64 result; // x0
  std::once_flag::_State_type *v11; // x8
  unsigned int v12; // w0
  std::once_flag::_State_type *v13; // x8
  __int64 v14; // x8
  unsigned int v15; // w8
  const google::protobuf::FieldDescriptor *v16; // [xsp+8h] [xbp-48h] BYREF
  void (__fastcall *v17)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-40h] BYREF
  _QWORD *v18; // [xsp+18h] [xbp-38h] BYREF
  _QWORD v19[2]; // [xsp+20h] [xbp-30h] BYREF

  v8 = *this;
  if ( a3[10] != v8 )
    sub_1000D8734(v8, a3, "ReleaseMessage", "Field does not match message type.");
  if ( *((_DWORD *)a3 + 15) == 3 )
    sub_1000D8734(*this, a3, "ReleaseMessage", "Field is repeated; the method requires a singular field.");
  v9 = a3[6];
  if ( v9 )
  {
    v16 = (const google::protobuf::FieldDescriptor *)a3;
    v17 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v9, memory_order_acquire) != -1LL )
    {
      v19[0] = &v17;
      v19[1] = &v16;
      v18 = v19;
      std::__call_once(v9, &v18, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a3 + 14)] != 10 )
    sub_1000D8DD0(*this, a3, "ReleaseMessage", 10LL);
  if ( !a4 )
    a4 = (google::protobuf::MessageFactory *)this[8];
  if ( *((_BYTE *)a3 + 67) )
    return google::protobuf::internal::ExtensionSet::UnsafeArenaReleaseMessage(
             (google::protobuf::Message *)((char *)a2 + *((unsigned int *)this + 10)),
             (const google::protobuf::FieldDescriptor *)a3,
             a4);
  if ( *((_DWORD *)a3 + 15) != 3 )
  {
    v11 = a3[11];
    if ( !v11 || *((_DWORD *)v11 + 6) == 1 && *(_BYTE *)(*(_QWORD *)v11[4] + 65LL) )
    {
      v12 = sub_1000D8CF8(this + 1, a3);
      if ( v12 != -1 )
        *(_DWORD *)((char *)a2 + 4 * (v12 >> 5) + *((unsigned int *)this + 8)) &= ~(1 << v12);
    }
  }
  v13 = a3[11];
  if ( v13 && (*((_DWORD *)v13 + 6) != 1 || !*(_BYTE *)(*(_QWORD *)v13[4] + 65LL)) )
  {
    v14 = *((_DWORD *)this + 11) - 1431655764 * (unsigned int)(((unsigned __int64)v13 - *(_QWORD *)(v13[2] + 48)) >> 4);
    if ( *(_DWORD *)((char *)a2 + (unsigned int)v14) != *((_DWORD *)a3 + 17) )
      return 0LL;
    *(_DWORD *)((char *)a2 + v14) = 0;
  }
  v15 = sub_1000DF774(this + 1, a3);
  result = *(_QWORD *)((char *)a2 + v15);
  *(_QWORD *)((char *)a2 + v15) = 0LL;
  return result;
}