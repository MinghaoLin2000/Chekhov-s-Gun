__ZN6google8protobuf17DescriptorBuilder14ValidateJSTypeEPNS0_15FieldDescriptorERKNS0_20FieldDescriptorProtoE
void __fastcall google::protobuf::DescriptorBuilder::ValidateJSType(
        google::protobuf::DescriptorBuilder *this,
        google::protobuf::FieldDescriptor *a2,
        const google::protobuf::FieldDescriptorProto *a3)
{
  unsigned int v3; // w22
  std::once_flag::_State_type *v7; // x0
  unsigned int v8; // w8
  bool v9; // cc
  int v10; // w8
  __int64 v12; // x21
  __int64 v13; // x0
  void *__p[2]; // [xsp+0h] [xbp-50h] BYREF
  char v15; // [xsp+17h] [xbp-39h]
  google::protobuf::FieldDescriptor *v16; // [xsp+18h] [xbp-38h] BYREF
  __int64 (__fastcall *v17)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // [xsp+20h] [xbp-30h] BYREF
  void **v18; // [xsp+28h] [xbp-28h] BYREF

  v3 = *(_DWORD *)(*((_QWORD *)a2 + 15) + 80LL);
  if ( v3 )
  {
    v7 = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
    if ( v7 )
    {
      v16 = a2;
      v17 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v7, memory_order_acquire) != -1LL )
      {
        __p[0] = &v17;
        __p[1] = &v16;
        v18 = __p;
        std::__call_once(v7, &v18, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    v8 = *((_DWORD *)a2 + 14);
    v9 = v8 > 0x12;
    v10 = (1 << v8) & 0x50058;
    if ( v9 || v10 == 0 )
    {
      google::protobuf::DescriptorBuilder::AddError(
        (__int64)this,
        *((_QWORD *)a2 + 1),
        (__int64)a3,
        2LL,
        "jstype is only allowed on int64, uint64, sint64, fixed64 or sfixed64 fields.");
    }
    else if ( v3 >= 3 )
    {
      v12 = *((_QWORD *)a2 + 1);
      v13 = google::protobuf::FieldOptions_JSType_descriptor((google::protobuf *)v7);
      std::operator+<char>(
        "Illegal jstype for int64, uint64, sint64, fixed64 or sfixed64 field: ",
        *(_QWORD *)(*(_QWORD *)(v13 + 48) + 40LL * (int)v3));
      google::protobuf::DescriptorBuilder::AddError((__int64)this, v12, (__int64)a3, 2LL, (__int64)__p);
      if ( v15 < 0 )
        operator delete(__p[0]);
    }
  }
}