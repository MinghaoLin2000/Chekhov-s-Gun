__ZNK6google8protobuf10Reflection10AddMessageEPNS0_7MessageEPKNS0_15FieldDescriptorEPNS0_14MessageFactoryE
__int64 __fastcall google::protobuf::Reflection::AddMessage(
        std::once_flag::_State_type **this,
        google::protobuf::Message *a2,
        std::once_flag::_State_type **a3,
        google::protobuf::MessageFactory *a4)
{
  std::once_flag::_State_type *v8; // x0
  std::once_flag::_State_type *v9; // x0
  __int64 v10; // x23
  int v11; // w23
  unsigned int v12; // w0
  char *v13; // x22
  __int64 v14; // x8
  int v15; // w9
  __int64 v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x8
  _QWORD *v20; // x1
  const google::protobuf::FieldDescriptor *v22; // [xsp+8h] [xbp-58h] BYREF
  void (__fastcall *v23)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-50h] BYREF
  _QWORD *v24; // [xsp+18h] [xbp-48h] BYREF
  _QWORD v25[2]; // [xsp+20h] [xbp-40h] BYREF

  v8 = *this;
  if ( a3[10] != v8 )
    sub_1000D8734(v8, a3, "AddMessage", "Field does not match message type.");
  if ( *((_DWORD *)a3 + 15) != 3 )
    sub_1000D8734(*this, a3, "AddMessage", "Field is singular; the method requires a repeated field.");
  v9 = a3[6];
  if ( v9 )
  {
    v22 = (const google::protobuf::FieldDescriptor *)a3;
    v23 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v9, memory_order_acquire) != -1LL )
    {
      v25[0] = &v23;
      v25[1] = &v22;
      v24 = v25;
      std::__call_once(v9, &v24, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a3 + 14)] != 10 )
    sub_1000D8DD0(*this, a3, "AddMessage", 10LL);
  if ( !a4 )
    a4 = (google::protobuf::MessageFactory *)this[8];
  if ( *((_BYTE *)a3 + 67) )
    return google::protobuf::internal::ExtensionSet::AddMessage(
             (google::protobuf::Message *)((char *)a2 + *((unsigned int *)this + 10)),
             (const google::protobuf::FieldDescriptor *)a3,
             a4);
  v11 = sub_1000BF2A4((google::protobuf::FieldDescriptor *)a3);
  v12 = sub_1000DF774(this + 1, a3);
  v13 = (char *)a2 + v12;
  if ( v11 )
    v13 = (char *)google::protobuf::internal::MapFieldBase::MutableRepeatedField((atomic_uint *)((char *)a2 + v12));
  v14 = *((_QWORD *)v13 + 2);
  v15 = *((_DWORD *)v13 + 2);
  if ( !v14
    || v15 >= *(_DWORD *)v14
    || (v16 = v15, ++v15, *((_DWORD *)v13 + 2) = v15, (v10 = *(_QWORD *)(v14 + 8 * v16 + 8)) == 0) )
  {
    if ( v15 )
    {
      v17 = *(_QWORD *)(v14 + 8);
    }
    else
    {
      v18 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)a3);
      v17 = (*(__int64 (__fastcall **)(google::protobuf::MessageFactory *, __int64))(*(_QWORD *)a4 + 16LL))(a4, v18);
    }
    v19 = *((_QWORD *)a2 + 1);
    v20 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v19 & 1) != 0 )
      v20 = (_QWORD *)*v20;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v17 + 32LL))(v17, v20);
    sub_1000C889C((google::protobuf::internal::RepeatedPtrFieldBase *)v13);
  }
  return v10;
}