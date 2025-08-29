__ZNK6google8protobuf10Reflection9GetUInt32ERKNS0_7MessageEPKNS0_15FieldDescriptorE
__int64 __fastcall google::protobuf::Reflection::GetUInt32(
        google::protobuf::Reflection *this,
        const google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3)
{
  __int64 v6; // x0
  std::once_flag::_State_type *v7; // x0
  __int64 v9; // x8
  const google::protobuf::FieldDescriptor *v10; // [xsp+8h] [xbp-48h] BYREF
  void (__fastcall *v11)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-40h] BYREF
  _QWORD *v12; // [xsp+18h] [xbp-38h] BYREF
  _QWORD v13[2]; // [xsp+20h] [xbp-30h] BYREF

  v6 = *(_QWORD *)this;
  if ( *((_QWORD *)a3 + 10) != v6 )
    sub_1000D8734(v6, a3, "GetUInt32", "Field does not match message type.");
  if ( *((_DWORD *)a3 + 15) == 3 )
    sub_1000D8734(*(_QWORD *)this, a3, "GetUInt32", "Field is repeated; the method requires a singular field.");
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
  }
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a3 + 14)] != 3 )
    sub_1000D8DD0(*(_QWORD *)this, a3, "GetUInt32", 3LL);
  if ( *((_BYTE *)a3 + 67) )
    return google::protobuf::internal::ExtensionSet::GetUInt32(
             (const google::protobuf::Message *)((char *)a2 + *((unsigned int *)this + 10)),
             *((_DWORD *)a3 + 17),
             *((unsigned int *)a3 + 36));
  v9 = *((_QWORD *)a3 + 11);
  if ( !v9
    || *(_DWORD *)(v9 + 24) == 1 && *(_BYTE *)(**(_QWORD **)(v9 + 32) + 65LL)
    || *(_DWORD *)((char *)a2
                 + *((_DWORD *)this + 11)
                 - 1431655764 * (unsigned int)((unsigned __int64)(v9 - *(_QWORD *)(*(_QWORD *)(v9 + 16) + 48LL)) >> 4)) == *((_DWORD *)a3 + 17) )
  {
    return *(unsigned int *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, a3));
  }
  else
  {
    return *((unsigned int *)a3 + 36);
  }
}