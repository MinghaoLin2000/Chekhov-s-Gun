__ZN6google8protobuf8internal22GetAnyFieldDescriptorsERKNS0_7MessageEPPKNS0_15FieldDescriptorES8_
bool __fastcall google::protobuf::internal::GetAnyFieldDescriptors(__int64 a1, __int64 *a2, __int64 *a3)
{
  google::protobuf::Descriptor *v5; // x21
  _QWORD *v6; // x22
  size_t v7; // x0
  __int64 v9; // x20
  std::once_flag::_State_type *v10; // x0
  __int64 v11; // x19
  std::once_flag::_State_type *v12; // x0
  __int64 v13; // [xsp+8h] [xbp-48h] BYREF
  void (__fastcall *v14)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-40h] BYREF
  void (__fastcall ***v15)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+18h] [xbp-38h] BYREF
  void (__fastcall **v16)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+20h] [xbp-30h] BYREF
  __int64 *v17; // [xsp+28h] [xbp-28h]

  v5 = (google::protobuf::Descriptor *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
  v6 = (_QWORD *)*((_QWORD *)v5 + 1);
  v7 = strlen("google.protobuf.Any");
  if ( *((char *)v6 + 23) < 0 )
  {
    if ( v7 == v6[1] )
    {
      if ( v7 == -1LL )
        goto LABEL_20;
      v6 = (_QWORD *)*v6;
      goto LABEL_8;
    }
    return 0LL;
  }
  if ( v7 != *((unsigned __int8 *)v6 + 23) )
    return 0LL;
  if ( v7 == -1LL )
LABEL_20:
    sub_1000984D4(v6);
LABEL_8:
  if ( memcmp(v6, "google.protobuf.Any", v7) )
    return 0LL;
  *a2 = google::protobuf::Descriptor::FindFieldByNumber(v5, 1);
  *a3 = google::protobuf::Descriptor::FindFieldByNumber(v5, 2);
  v9 = *a2;
  if ( !v9 )
    return 0LL;
  v10 = *(std::once_flag::_State_type **)(v9 + 48);
  if ( v10 )
  {
    v13 = v9;
    v14 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v10, memory_order_acquire) != -1LL )
    {
      v16 = &v14;
      v17 = &v13;
      v15 = &v16;
      std::__call_once(v10, &v15, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( *(_DWORD *)(v9 + 56) != 9 )
    return 0LL;
  v11 = *a3;
  if ( !v11 )
    return 0LL;
  v12 = *(std::once_flag::_State_type **)(v11 + 48);
  if ( v12 )
  {
    v13 = v11;
    v14 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v12, memory_order_acquire) != -1LL )
    {
      v16 = &v14;
      v17 = &v13;
      v15 = &v16;
      std::__call_once(v12, &v15, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  return *(_DWORD *)(v11 + 56) == 12;
}