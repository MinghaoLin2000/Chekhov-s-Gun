__ZNK6google8protobuf10Reflection22MutableRepeatedMessageEPNS0_7MessageEPKNS0_15FieldDescriptorEi
__int64 __fastcall google::protobuf::Reflection::MutableRepeatedMessage(
        google::protobuf::Reflection *this,
        google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3,
        int a4)
{
  __int64 v8; // x0
  std::once_flag::_State_type *v9; // x0
  int v11; // w23
  atomic_uint *v12; // x0
  const google::protobuf::FieldDescriptor *v13; // [xsp+8h] [xbp-58h] BYREF
  void (__fastcall *v14)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-50h] BYREF
  _QWORD *v15; // [xsp+18h] [xbp-48h] BYREF
  _QWORD v16[2]; // [xsp+20h] [xbp-40h] BYREF

  v8 = *(_QWORD *)this;
  if ( *((_QWORD *)a3 + 10) != v8 )
    sub_1000D8734(v8, a3, "MutableRepeatedMessage", "Field does not match message type.");
  if ( *((_DWORD *)a3 + 15) != 3 )
    sub_1000D8734(
      *(_QWORD *)this,
      a3,
      "MutableRepeatedMessage",
      "Field is singular; the method requires a repeated field.");
  v9 = (std::once_flag::_State_type *)*((_QWORD *)a3 + 6);
  if ( v9 )
  {
    v13 = a3;
    v14 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v9, memory_order_acquire) != -1LL )
    {
      v16[0] = &v14;
      v16[1] = &v13;
      v15 = v16;
      std::__call_once(v9, &v15, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a3 + 14)] != 10 )
    sub_1000D8DD0(*(_QWORD *)this, a3, "MutableRepeatedMessage", 10LL);
  if ( *((_BYTE *)a3 + 67) )
    return google::protobuf::internal::ExtensionSet::MutableRepeatedMessage(
             (google::protobuf::Message *)((char *)a2 + *((unsigned int *)this + 10)),
             *((_DWORD *)a3 + 17),
             a4);
  v11 = sub_1000BF2A4(a3);
  v12 = (atomic_uint *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, a3));
  if ( v11 )
    v12 = (atomic_uint *)google::protobuf::internal::MapFieldBase::MutableRepeatedField(v12);
  return *(_QWORD *)(*((_QWORD *)v12 + 2) + 8LL * a4 + 8);
}