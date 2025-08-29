__ZNK6google8protobuf10Reflection17GetRepeatedStringERKNS0_7MessageEPKNS0_15FieldDescriptorEi
__int128 *__usercall google::protobuf::Reflection::GetRepeatedString@<X0>(
        google::protobuf::Reflection *this@<X0>,
        const google::protobuf::Message *a2@<X1>,
        const google::protobuf::FieldDescriptor *a3@<X2>,
        int a4@<W3>,
        _QWORD *a5@<X8>)
{
  __int64 v10; // x0
  std::once_flag::_State_type *v11; // x0
  __int128 *result; // x0
  __int128 v13; // q0
  __int64 v14; // x8
  __int128 *v15; // x8
  void *v16; // x1
  const google::protobuf::FieldDescriptor *v17; // [xsp+8h] [xbp-58h] BYREF
  void (__fastcall *v18)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-50h] BYREF
  _QWORD *v19; // [xsp+18h] [xbp-48h] BYREF
  _QWORD v20[2]; // [xsp+20h] [xbp-40h] BYREF

  v10 = *(_QWORD *)this;
  if ( *((_QWORD *)a3 + 10) != v10 )
    sub_1000D8734(v10, a3, "GetRepeatedString", "Field does not match message type.");
  if ( *((_DWORD *)a3 + 15) != 3 )
    sub_1000D8734(*(_QWORD *)this, a3, "GetRepeatedString", "Field is singular; the method requires a repeated field.");
  v11 = (std::once_flag::_State_type *)*((_QWORD *)a3 + 6);
  if ( v11 )
  {
    v17 = a3;
    v18 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v11, memory_order_acquire) != -1LL )
    {
      v20[0] = &v18;
      v20[1] = &v17;
      v19 = v20;
      std::__call_once(v11, &v19, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a3 + 14)] != 9 )
    sub_1000D8DD0(*(_QWORD *)this, a3, "GetRepeatedString", 9LL);
  if ( *((_BYTE *)a3 + 67) )
  {
    result = (__int128 *)google::protobuf::internal::ExtensionSet::GetRepeatedString(
                           (const google::protobuf::Message *)((char *)a2 + *((unsigned int *)this + 10)),
                           *((_DWORD *)a3 + 17),
                           a4);
    if ( (*((char *)result + 23) & 0x80000000) == 0 )
    {
      v13 = *result;
      v14 = *((_QWORD *)result + 2);
LABEL_15:
      a5[2] = v14;
      *(_OWORD *)a5 = v13;
      return result;
    }
    v16 = *(void **)result;
  }
  else
  {
    result = (__int128 *)sub_1000DF774((char *)this + 8, a3);
    v15 = *(__int128 **)(*(_QWORD *)((char *)a2 + (unsigned int)result + 16) + 8LL * a4 + 8);
    if ( (*((char *)v15 + 23) & 0x80000000) == 0 )
    {
      v13 = *v15;
      v14 = *((_QWORD *)v15 + 2);
      goto LABEL_15;
    }
    v16 = *(void **)v15;
  }
  return (__int128 *)sub_10007A474(a5, v16);
}