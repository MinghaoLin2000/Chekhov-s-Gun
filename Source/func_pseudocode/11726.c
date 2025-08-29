__ZNK6google8protobuf10Reflection14LookupMapValueERKNS0_7MessageEPKNS0_15FieldDescriptorERKNS0_6MapKeyEPNS0_16MapValueConstRefE
__int64 __fastcall google::protobuf::Reflection::LookupMapValue(
        _QWORD *a1,
        __int64 a2,
        google::protobuf::FieldDescriptor *this,
        __int64 a4,
        __int64 a5)
{
  __int64 v10; // x24
  __int64 FieldByName; // x24
  std::once_flag::_State_type *v12; // x0
  unsigned int v13; // w0
  void *__p[2]; // [xsp+0h] [xbp-70h] BYREF
  char v16; // [xsp+17h] [xbp-59h]
  __int64 v17; // [xsp+18h] [xbp-58h] BYREF
  void (__fastcall *v18)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+20h] [xbp-50h] BYREF
  _QWORD *v19; // [xsp+28h] [xbp-48h] BYREF
  _QWORD v20[2]; // [xsp+30h] [xbp-40h] BYREF

  if ( (sub_1000BF2A4(this) & 1) == 0 )
    sub_1000D8734(*a1, this, "\"LookupMapValue\"", "Field is not a map field.");
  v10 = google::protobuf::FieldDescriptor::message_type(this);
  sub_10007A754((int)__p, "value");
  FieldByName = google::protobuf::Descriptor::FindFieldByName(v10, (__int64)__p);
  v12 = *(std::once_flag::_State_type **)(FieldByName + 48);
  if ( v12 )
  {
    v17 = FieldByName;
    v18 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v12, memory_order_acquire) != -1LL )
    {
      v20[0] = &v18;
      v20[1] = &v17;
      v19 = v20;
      std::__call_once(v12, &v19, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  *(_DWORD *)(a5 + 8) = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(FieldByName + 56)];
  if ( v16 < 0 )
    operator delete(__p[0]);
  v13 = sub_1000DF774(a1 + 1, this);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a2 + v13) + 32LL))(a2 + v13, a4, a5);
}