__ZNK6google8protobuf10Reflection9AddUInt32EPNS0_7MessageEPKNS0_15FieldDescriptorEj
unsigned int *__fastcall google::protobuf::Reflection::AddUInt32(
        google::protobuf::Reflection *this,
        google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3,
        int a4)
{
  __int64 v8; // x0
  std::once_flag::_State_type *v9; // x0
  google::protobuf::internal::ExtensionSet *v10; // x21
  int v11; // w22
  std::once_flag::_State_type *v12; // x0
  unsigned int *result; // x0
  unsigned int *v14; // x20
  __int64 v15; // x22
  unsigned int v16; // w21
  const google::protobuf::FieldDescriptor *v17; // [xsp+8h] [xbp-48h] BYREF
  void (__fastcall *v18)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-40h] BYREF
  void (__fastcall ***v19)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+18h] [xbp-38h] BYREF
  void (__fastcall **v20)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+20h] [xbp-30h] BYREF
  const google::protobuf::FieldDescriptor **v21; // [xsp+28h] [xbp-28h]

  v8 = *(_QWORD *)this;
  if ( *((_QWORD *)a3 + 10) != v8 )
    sub_1000D8734(v8, a3, "AddUInt32", "Field does not match message type.");
  if ( *((_DWORD *)a3 + 15) != 3 )
    sub_1000D8734(*(_QWORD *)this, a3, "AddUInt32", "Field is singular; the method requires a repeated field.");
  v9 = (std::once_flag::_State_type *)*((_QWORD *)a3 + 6);
  if ( v9 )
  {
    v17 = a3;
    v18 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v9, memory_order_acquire) != -1LL )
    {
      v20 = &v18;
      v21 = &v17;
      v19 = &v20;
      std::__call_once(v9, &v19, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a3 + 14)] != 3 )
    sub_1000D8DD0(*(_QWORD *)this, a3, "AddUInt32", 3LL);
  if ( *((_BYTE *)a3 + 67) )
  {
    v10 = (google::protobuf::Message *)((char *)a2 + *((unsigned int *)this + 10));
    v11 = *((_DWORD *)a3 + 17);
    v12 = (std::once_flag::_State_type *)*((_QWORD *)a3 + 6);
    if ( v12 )
    {
      v17 = a3;
      v18 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v12, memory_order_acquire) != -1LL )
      {
        v20 = &v18;
        v21 = &v17;
        v19 = &v20;
        std::__call_once(v12, &v19, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    return google::protobuf::internal::ExtensionSet::AddUInt32(
             v10,
             v11,
             *((_BYTE *)a3 + 56),
             *(_BYTE *)(*((_QWORD *)a3 + 15) + 76LL),
             a4,
             a3);
  }
  else
  {
    result = (unsigned int *)sub_1000DF774((char *)this + 8, a3);
    v14 = (unsigned int *)((char *)a2 + (unsigned int)result);
    v15 = *v14;
    if ( (_DWORD)v15 == v14[1] )
    {
      v16 = v15 + 1;
      result = (unsigned int *)google::protobuf::RepeatedField<unsigned int>::Reserve(v14, (unsigned int)(v15 + 1));
      *(_DWORD *)(*((_QWORD *)v14 + 1) + 4 * v15) = a4;
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)v14 + 1) + 4 * v15) = a4;
      v16 = v15 + 1;
    }
    *v14 = v16;
  }
  return result;
}