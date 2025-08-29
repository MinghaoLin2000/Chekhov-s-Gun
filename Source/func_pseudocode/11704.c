__ZNK6google8protobuf10Reflection9AddStringEPNS0_7MessageEPKNS0_15FieldDescriptorENSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE
__n128 __fastcall google::protobuf::Reflection::AddString(
        _QWORD *a1,
        __int64 a2,
        google::protobuf::FieldDescriptor *a3,
        __int64 *a4)
{
  __int64 v8; // x0
  std::once_flag::_State_type *v9; // x0
  __int64 v10; // x23
  int v11; // w22
  std::once_flag::_State_type *v12; // x0
  google::protobuf::internal::ExtensionSet *v13; // x0
  char v14; // w2
  __int64 v15; // x21
  char v16; // w23
  __int64 v17; // x0
  __n128 result; // q0
  __int64 v19; // x19
  __int64 v20; // x8
  unsigned int v21; // w0
  __int64 v22; // x20
  int *v23; // x8
  __int64 v24; // x10
  int v25; // w9
  __int64 v26; // x21
  __int64 v27; // x8
  __int64 v28; // x9
  google::protobuf::FieldDescriptor *v29; // [xsp+0h] [xbp-70h] BYREF
  void (__fastcall *v30)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+8h] [xbp-68h] BYREF
  void (__fastcall ***v31)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-60h] BYREF
  void (__fastcall **v32)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+18h] [xbp-58h] BYREF
  google::protobuf::FieldDescriptor **v33; // [xsp+20h] [xbp-50h]
  _QWORD v34[2]; // [xsp+28h] [xbp-48h]

  v8 = *a1;
  if ( *((_QWORD *)a3 + 10) != v8 )
    sub_1000D8734(v8, a3, "AddString", "Field does not match message type.");
  if ( *((_DWORD *)a3 + 15) != 3 )
    sub_1000D8734(*a1, a3, "AddString", "Field is singular; the method requires a repeated field.");
  v9 = (std::once_flag::_State_type *)*((_QWORD *)a3 + 6);
  if ( v9 )
  {
    v29 = a3;
    v30 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v9, memory_order_acquire) != -1LL )
    {
      v32 = &v30;
      v33 = &v29;
      v31 = &v32;
      std::__call_once(v9, &v31, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a3 + 14)] != 9 )
    sub_1000D8DD0(*a1, a3, "AddString", 9LL);
  if ( *((_BYTE *)a3 + 67) )
  {
    v10 = *((unsigned int *)a1 + 10);
    v11 = *((_DWORD *)a3 + 17);
    v12 = (std::once_flag::_State_type *)*((_QWORD *)a3 + 6);
    if ( v12 )
    {
      v29 = a3;
      v30 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v12, memory_order_acquire) != -1LL )
      {
        v32 = &v30;
        v33 = &v29;
        v31 = &v32;
        std::__call_once(v12, &v31, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    v13 = (google::protobuf::internal::ExtensionSet *)(a2 + v10);
    v14 = *((_BYTE *)a3 + 56);
    v15 = *a4;
    v34[0] = a4[1];
    *(_QWORD *)((char *)v34 + 7) = *(__int64 *)((char *)a4 + 15);
    v16 = *((_BYTE *)a4 + 23);
    a4[1] = 0LL;
    a4[2] = 0LL;
    *a4 = 0LL;
    v17 = google::protobuf::internal::ExtensionSet::AddString(v13, v11, v14, a3);
    v19 = v17;
    if ( *(char *)(v17 + 23) < 0 )
      operator delete(*(void **)v17);
    v20 = v34[0];
    *(_QWORD *)v19 = v15;
    *(_QWORD *)(v19 + 8) = v20;
    *(_QWORD *)(v19 + 15) = *(_QWORD *)((char *)v34 + 7);
    *(_BYTE *)(v19 + 23) = v16;
    return result;
  }
  v21 = sub_1000DF774(a1 + 1, a3);
  v22 = a2 + v21;
  v23 = *(int **)(v22 + 16);
  if ( !v23 )
  {
    v25 = *(_DWORD *)(v22 + 12);
    goto LABEL_22;
  }
  v24 = *(int *)(v22 + 8);
  v25 = *v23;
  if ( (int)v24 >= *v23 )
  {
    if ( v25 != *(_DWORD *)(v22 + 12) )
    {
LABEL_23:
      *v23 = v25 + 1;
      v26 = sub_10007A808(*(_QWORD *)v22);
      v27 = *(_QWORD *)(v22 + 16);
      v28 = *(int *)(v22 + 8);
      *(_DWORD *)(v22 + 8) = v28 + 1;
      *(_QWORD *)(v27 + 8 * v28 + 8) = v26;
      goto LABEL_24;
    }
LABEL_22:
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
      (google::protobuf::internal::RepeatedPtrFieldBase *)(a2 + v21),
      v25 + 1);
    v23 = *(int **)(v22 + 16);
    v25 = *v23;
    goto LABEL_23;
  }
  *(_DWORD *)(v22 + 8) = v24 + 1;
  v26 = *(_QWORD *)&v23[2 * v24 + 2];
LABEL_24:
  if ( *(char *)(v26 + 23) < 0 )
    operator delete(*(void **)v26);
  result = *(__n128 *)a4;
  *(_QWORD *)(v26 + 16) = a4[2];
  *(__n128 *)v26 = result;
  *((_BYTE *)a4 + 23) = 0;
  *(_BYTE *)a4 = 0;
  return result;
}