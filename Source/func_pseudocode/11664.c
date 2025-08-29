__ZNK6google8protobuf10Reflection9GetStringERKNS0_7MessageEPKNS0_15FieldDescriptorE
void __usercall google::protobuf::Reflection::GetString(
        __int64 *__return_ptr a1@<X8>,
        google::protobuf::Reflection *this@<X0>,
        const google::protobuf::Message *a3@<X1>,
        const google::protobuf::FieldDescriptor *a4@<X2>)
{
  std::once_flag::_State_type *v8; // x0
  __int64 String; // x0
  __int128 v10; // q0
  __int64 v11; // x8
  __int64 v12; // x8
  unsigned __int64 v13; // x8
  void *v14; // x1
  const google::protobuf::FieldDescriptor *v15; // [xsp+8h] [xbp-48h] BYREF
  void (__fastcall *v16)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-40h] BYREF
  _QWORD *v17; // [xsp+18h] [xbp-38h] BYREF
  _QWORD v18[2]; // [xsp+20h] [xbp-30h] BYREF

  if ( *((_QWORD *)a4 + 10) != *(_QWORD *)this )
    ((void (*)(void))sub_1000D8734)();
  if ( *((_DWORD *)a4 + 15) == 3 )
    sub_1000D8734(*(_QWORD *)this, a4, "GetString", "Field is repeated; the method requires a singular field.");
  v8 = (std::once_flag::_State_type *)*((_QWORD *)a4 + 6);
  if ( v8 )
  {
    v15 = a4;
    v16 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v8, memory_order_acquire) != -1LL )
    {
      v18[0] = &v16;
      v18[1] = &v15;
      v17 = v18;
      std::__call_once(v8, &v17, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a4 + 14)] != 9 )
    sub_1000D8DD0(*(_QWORD *)this, a4, "GetString", 9LL);
  if ( *((_BYTE *)a4 + 67) )
  {
    String = google::protobuf::internal::ExtensionSet::GetString(
               (const google::protobuf::Message *)((char *)a3 + *((unsigned int *)this + 10)),
               *((_DWORD *)a4 + 17),
               *((_QWORD *)a4 + 18));
    if ( (*(char *)(String + 23) & 0x80000000) == 0 )
    {
      v10 = *(_OWORD *)String;
      v11 = *(_QWORD *)(String + 16);
LABEL_21:
      a1[2] = v11;
      *(_OWORD *)a1 = v10;
      return;
    }
    v14 = *(void **)String;
  }
  else
  {
    v12 = *((_QWORD *)a4 + 11);
    if ( v12
      && (*(_DWORD *)(v12 + 24) != 1 || !*(_BYTE *)(**(_QWORD **)(v12 + 32) + 65LL))
      && *(_DWORD *)((char *)a3
                   + *((_DWORD *)this + 11)
                   - 1431655764
                   * (unsigned int)((unsigned __int64)(v12 - *(_QWORD *)(*(_QWORD *)(v12 + 16) + 48LL)) >> 4)) != *((_DWORD *)a4 + 17)
      || (v13 = *(_QWORD *)((_BYTE *)a3 + (unsigned int)sub_1000DF774((char *)this + 8, a4)) & 0xFFFFFFFFFFFFFFFELL) == 0 )
    {
      v13 = *((_QWORD *)a4 + 18);
    }
    if ( (*(char *)(v13 + 23) & 0x80000000) == 0 )
    {
      v10 = *(_OWORD *)v13;
      v11 = *(_QWORD *)(v13 + 16);
      goto LABEL_21;
    }
    v14 = *(void **)v13;
  }
  sub_10007A474(a1, v14);
}