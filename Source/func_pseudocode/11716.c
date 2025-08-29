__ZNK6google8protobuf10Reflection10GetMessageERKNS0_7MessageEPKNS0_15FieldDescriptorEPNS0_14MessageFactoryE
__int64 __fastcall google::protobuf::Reflection::GetMessage(
        google::protobuf::Reflection *this,
        const google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3,
        google::protobuf::MessageFactory *a4)
{
  __int64 v8; // x0
  std::once_flag::_State_type *v9; // x0
  google::protobuf::internal::ExtensionSet *v10; // x20
  int v11; // w21
  __int64 v12; // x0
  __int64 result; // x0
  __int64 v14; // x8
  const google::protobuf::FieldDescriptor *v15; // [xsp+8h] [xbp-48h] BYREF
  void (__fastcall *v16)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-40h] BYREF
  _QWORD *v17; // [xsp+18h] [xbp-38h] BYREF
  _QWORD v18[2]; // [xsp+20h] [xbp-30h] BYREF

  v8 = *(_QWORD *)this;
  if ( *((_QWORD *)a3 + 10) != v8 )
    sub_1000D8734(v8, a3, "GetMessage", "Field does not match message type.");
  if ( *((_DWORD *)a3 + 15) == 3 )
    sub_1000D8734(*(_QWORD *)this, a3, "GetMessage", "Field is repeated; the method requires a singular field.");
  v9 = (std::once_flag::_State_type *)*((_QWORD *)a3 + 6);
  if ( v9 )
  {
    v15 = a3;
    v16 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v9, memory_order_acquire) != -1LL )
    {
      v18[0] = &v16;
      v18[1] = &v15;
      v17 = v18;
      std::__call_once(v9, &v17, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a3 + 14)] != 10 )
    sub_1000D8DD0(*(_QWORD *)this, a3, "GetMessage", 10LL);
  if ( !a4 )
    a4 = (google::protobuf::MessageFactory *)*((_QWORD *)this + 8);
  if ( *((_BYTE *)a3 + 67) )
  {
    v10 = (const google::protobuf::Message *)((char *)a2 + *((unsigned int *)this + 10));
    v11 = *((_DWORD *)a3 + 17);
    v12 = google::protobuf::FieldDescriptor::message_type(a3);
    return google::protobuf::internal::ExtensionSet::GetMessage(v10, v11, v12, (__int64)a4);
  }
  else
  {
    v14 = *((_QWORD *)a3 + 11);
    if ( v14
      && (*(_DWORD *)(v14 + 24) != 1 || !*(_BYTE *)(**(_QWORD **)(v14 + 32) + 65LL))
      && *(_DWORD *)((char *)a2
                   + *((_DWORD *)this + 11)
                   - 1431655764
                   * (unsigned int)((unsigned __int64)(v14 - *(_QWORD *)(*(_QWORD *)(v14 + 16) + 48LL)) >> 4)) != *((_DWORD *)a3 + 17) )
    {
      return google::protobuf::Reflection::GetDefaultMessageInstance(this, (atomic_ullong *)a3);
    }
    result = *(_QWORD *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, a3));
    if ( !result )
      return google::protobuf::Reflection::GetDefaultMessageInstance(this, (atomic_ullong *)a3);
  }
  return result;
}