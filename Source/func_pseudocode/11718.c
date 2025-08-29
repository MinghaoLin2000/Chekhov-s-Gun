__ZNK6google8protobuf10Reflection30UnsafeArenaSetAllocatedMessageEPNS0_7MessageES3_PKNS0_15FieldDescriptorE
void __fastcall google::protobuf::Reflection::UnsafeArenaSetAllocatedMessage(
        google::protobuf::Reflection *this,
        google::protobuf::Message *a2,
        google::protobuf::Message *a3,
        const google::protobuf::FieldDescriptor *a4)
{
  __int64 v8; // x0
  std::once_flag::_State_type *v9; // x0
  google::protobuf::internal::ExtensionSet *v10; // x20
  int v11; // w22
  std::once_flag::_State_type *v12; // x0
  __int64 v13; // x2
  unsigned int v14; // w0
  char *v15; // x9
  unsigned int v16; // w10
  int v17; // w8
  unsigned int v18; // w0
  __int64 v19; // x21
  __int64 v20; // x9
  _QWORD *v21; // x8
  __int64 v22; // x0
  const google::protobuf::FieldDescriptor *v23; // [xsp+8h] [xbp-58h] BYREF
  void (__fastcall *v24)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-50h] BYREF
  void (__fastcall ***v25)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+18h] [xbp-48h] BYREF
  void (__fastcall **v26)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+20h] [xbp-40h] BYREF
  const google::protobuf::FieldDescriptor **v27; // [xsp+28h] [xbp-38h]

  v8 = *(_QWORD *)this;
  if ( *((_QWORD *)a4 + 10) != v8 )
    sub_1000D8734(v8, a4, "SetAllocatedMessage", "Field does not match message type.");
  if ( *((_DWORD *)a4 + 15) == 3 )
    sub_1000D8734(
      *(_QWORD *)this,
      a4,
      "SetAllocatedMessage",
      "Field is repeated; the method requires a singular field.");
  v9 = (std::once_flag::_State_type *)*((_QWORD *)a4 + 6);
  if ( v9 )
  {
    v23 = a4;
    v24 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v9, memory_order_acquire) != -1LL )
    {
      v26 = &v24;
      v27 = &v23;
      v25 = &v26;
      std::__call_once(v9, &v25, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a4 + 14)] != 10 )
    sub_1000D8DD0(*(_QWORD *)this, a4, "SetAllocatedMessage", 10LL);
  if ( *((_BYTE *)a4 + 67) )
  {
    v10 = (google::protobuf::Message *)((char *)a2 + *((unsigned int *)this + 10));
    v11 = *((_DWORD *)a4 + 17);
    v12 = (std::once_flag::_State_type *)*((_QWORD *)a4 + 6);
    if ( v12 )
    {
      v23 = a4;
      v24 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v12, memory_order_acquire) != -1LL )
      {
        v26 = &v24;
        v27 = &v23;
        v25 = &v26;
        std::__call_once(v12, &v25, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    google::protobuf::internal::ExtensionSet::UnsafeArenaSetAllocatedMessage(v10, v11, *((_BYTE *)a4 + 56), a4, a3);
    return;
  }
  v13 = *((_QWORD *)a4 + 11);
  if ( !v13 || *(_DWORD *)(v13 + 24) == 1 && *(_BYTE *)(**(_QWORD **)(v13 + 32) + 65LL) )
  {
    v14 = sub_1000D8CF8((char *)this + 8, a4);
    if ( a3 )
    {
      if ( v14 == -1 )
        goto LABEL_26;
      v15 = (char *)a2 + *((unsigned int *)this + 8);
      v16 = v14 >> 5;
      v17 = *(_DWORD *)&v15[4 * (v14 >> 5)] | (1 << v14);
    }
    else
    {
      if ( v14 == -1 )
        goto LABEL_26;
      v15 = (char *)a2 + *((unsigned int *)this + 8);
      v16 = v14 >> 5;
      v17 = *(_DWORD *)&v15[4 * (v14 >> 5)] & ~(1 << v14);
    }
    *(_DWORD *)&v15[4 * v16] = v17;
LABEL_26:
    v18 = sub_1000DF774((char *)this + 8, a4);
    v19 = v18;
    v20 = *(_QWORD *)((char *)a2 + *((unsigned int *)this + 9));
    v21 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v20 & 1) != 0 )
    {
      if ( !*v21 )
      {
LABEL_28:
        v22 = *(_QWORD *)((char *)a2 + v18);
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      }
    }
    else if ( !v21 )
    {
      goto LABEL_28;
    }
    *(_QWORD *)((char *)a2 + v19) = a3;
    return;
  }
  google::protobuf::Reflection::ClearOneof(this, a2, (const google::protobuf::OneofDescriptor *)v13);
  if ( a3 )
  {
    *(_QWORD *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, a4)) = a3;
    *(_DWORD *)((char *)a2
              + *((_DWORD *)this + 11)
              - 1431655764
              * (unsigned int)((*((_QWORD *)a4 + 11) - *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a4 + 11) + 16LL) + 48LL)) >> 4)) = *((_DWORD *)a4 + 17);
  }
}