__ZNK6google8protobuf10Reflection9SetStringEPNS0_7MessageEPKNS0_15FieldDescriptorENSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE
void __fastcall google::protobuf::Reflection::SetString(
        unsigned int *a1,
        google::protobuf::Message *a2,
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
  __int64 v18; // x19
  __int64 v19; // x8
  __int64 v20; // x2
  unsigned __int64 v21; // x23
  __int64 v22; // x8
  unsigned int v23; // w0
  unsigned int v24; // w0
  char *v25; // x0
  __int64 v26; // x8
  _QWORD *v27; // x3
  google::protobuf::FieldDescriptor *v28; // [xsp+0h] [xbp-70h] BYREF
  void (__fastcall *v29)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+8h] [xbp-68h] BYREF
  void (__fastcall ***v30)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-60h] BYREF
  void (__fastcall **v31)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+18h] [xbp-58h] BYREF
  google::protobuf::FieldDescriptor **v32; // [xsp+20h] [xbp-50h]
  _QWORD v33[2]; // [xsp+28h] [xbp-48h]

  v8 = *(_QWORD *)a1;
  if ( *((_QWORD *)a3 + 10) != v8 )
    sub_1000D8734(v8, a3, "SetString", "Field does not match message type.");
  if ( *((_DWORD *)a3 + 15) == 3 )
    sub_1000D8734(*(_QWORD *)a1, a3, "SetString", "Field is repeated; the method requires a singular field.");
  v9 = (std::once_flag::_State_type *)*((_QWORD *)a3 + 6);
  if ( v9 )
  {
    v28 = a3;
    v29 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v9, memory_order_acquire) != -1LL )
    {
      v31 = &v29;
      v32 = &v28;
      v30 = &v31;
      std::__call_once(v9, &v30, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a3 + 14)] != 9 )
    sub_1000D8DD0(*(_QWORD *)a1, a3, "SetString", 9LL);
  if ( *((_BYTE *)a3 + 67) )
  {
    v10 = a1[10];
    v11 = *((_DWORD *)a3 + 17);
    v12 = (std::once_flag::_State_type *)*((_QWORD *)a3 + 6);
    if ( v12 )
    {
      v28 = a3;
      v29 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v12, memory_order_acquire) != -1LL )
      {
        v31 = &v29;
        v32 = &v28;
        v30 = &v31;
        std::__call_once(v12, &v30, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    v13 = (google::protobuf::Message *)((char *)a2 + v10);
    v14 = *((_BYTE *)a3 + 56);
    v15 = *a4;
    v33[0] = a4[1];
    *(_QWORD *)((char *)v33 + 7) = *(__int64 *)((char *)a4 + 15);
    v16 = *((_BYTE *)a4 + 23);
    a4[1] = 0LL;
    a4[2] = 0LL;
    *a4 = 0LL;
    v17 = google::protobuf::internal::ExtensionSet::MutableString(v13, v11, v14, a3);
    v18 = v17;
    if ( *(char *)(v17 + 23) < 0 )
      operator delete(*(void **)v17);
    v19 = v33[0];
    *(_QWORD *)v18 = v15;
    *(_QWORD *)(v18 + 8) = v19;
    *(_QWORD *)(v18 + 15) = *(_QWORD *)((char *)v33 + 7);
    *(_BYTE *)(v18 + 23) = v16;
    return;
  }
  v20 = *((_QWORD *)a3 + 11);
  if ( !v20 || *(_DWORD *)(v20 + 24) == 1 && *(_BYTE *)(**(_QWORD **)(v20 + 32) + 65LL) )
  {
    v21 = *(_QWORD *)sub_1000DFBD4(a1 + 2, a3) & 0xFFFFFFFFFFFFFFFELL;
    v20 = *((_QWORD *)a3 + 11);
    if ( !v20 )
    {
LABEL_35:
      v24 = sub_1000D8CF8(a1 + 2, a3);
      if ( v24 != -1 )
        *(_DWORD *)((char *)a2 + 4 * (v24 >> 5) + a1[8]) |= 1 << v24;
      goto LABEL_38;
    }
  }
  else
  {
    v21 = 0LL;
  }
  if ( (*(_DWORD *)(v20 + 24) != 1 || !*(_BYTE *)(**(_QWORD **)(v20 + 32) + 65LL))
    && *(_DWORD *)((char *)a2
                 + a1[11]
                 - 1431655764 * (unsigned int)((unsigned __int64)(v20 - *(_QWORD *)(*(_QWORD *)(v20 + 16) + 48LL)) >> 4)) != *((_DWORD *)a3 + 17) )
  {
    google::protobuf::Reflection::ClearOneof(
      (google::protobuf::Reflection *)a1,
      a2,
      (const google::protobuf::OneofDescriptor *)v20);
    v22 = *((_QWORD *)a3 + 11);
    if ( !v22 || *(_DWORD *)(v22 + 24) == 1 && *(_BYTE *)(**(_QWORD **)(v22 + 32) + 65LL) )
    {
      v23 = sub_1000D8CF8(a1 + 2, a3);
      if ( v23 != -1 )
        *(_DWORD *)((char *)a2 + 4 * (v23 >> 5) + a1[8]) |= 1 << v23;
    }
    else
    {
      *(_DWORD *)((char *)a2
                + a1[11]
                - 1431655764 * (unsigned int)((unsigned __int64)(v22 - *(_QWORD *)(*(_QWORD *)(v22 + 16) + 48LL)) >> 4)) = *((_DWORD *)a3 + 17);
    }
    *(_QWORD *)((char *)a2 + (unsigned int)sub_1000DF774(a1 + 2, a3)) = v21;
    v20 = *((_QWORD *)a3 + 11);
    if ( !v20 )
      goto LABEL_35;
  }
  if ( *(_DWORD *)(v20 + 24) == 1 && *(_BYTE *)(**(_QWORD **)(v20 + 32) + 65LL) )
    goto LABEL_35;
  *(_DWORD *)((char *)a2
            + a1[11]
            - 1431655764 * (unsigned int)((unsigned __int64)(v20 - *(_QWORD *)(*(_QWORD *)(v20 + 16) + 48LL)) >> 4)) = *((_DWORD *)a3 + 17);
LABEL_38:
  v25 = (char *)a2 + (unsigned int)sub_1000DF774(a1 + 2, a3);
  v26 = *(_QWORD *)((char *)a2 + a1[9]);
  v27 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v26 & 1) != 0 )
    v27 = (_QWORD *)*v27;
  google::protobuf::internal::ArenaStringPtr::Set(v25, v21, a4, v27);
}