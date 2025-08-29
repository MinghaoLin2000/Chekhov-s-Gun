__ZNK6google8protobuf10Reflection20AddEnumValueInternalEPNS0_7MessageEPKNS0_15FieldDescriptorEi
unsigned int *__fastcall google::protobuf::Reflection::AddEnumValueInternal(
        google::protobuf::Reflection *this,
        google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3,
        int a4)
{
  google::protobuf::internal::ExtensionSet *v7; // x21
  int v8; // w22
  std::once_flag::_State_type *v9; // x0
  unsigned int *result; // x0
  unsigned int *v11; // x20
  __int64 v12; // x22
  unsigned int v13; // w21
  const google::protobuf::FieldDescriptor *v14; // [xsp+8h] [xbp-48h] BYREF
  void (__fastcall *v15)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-40h] BYREF
  _QWORD *v16; // [xsp+18h] [xbp-38h] BYREF
  _QWORD v17[2]; // [xsp+20h] [xbp-30h] BYREF

  if ( *((_BYTE *)a3 + 67) )
  {
    v7 = (google::protobuf::Message *)((char *)a2 + *((unsigned int *)this + 10));
    v8 = *((_DWORD *)a3 + 17);
    v9 = (std::once_flag::_State_type *)*((_QWORD *)a3 + 6);
    if ( v9 )
    {
      v14 = a3;
      v15 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v9, memory_order_acquire) != -1LL )
      {
        v17[0] = &v15;
        v17[1] = &v14;
        v16 = v17;
        std::__call_once(v9, &v16, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    return google::protobuf::internal::ExtensionSet::AddEnum(
             v7,
             v8,
             *((_BYTE *)a3 + 56),
             *(_BYTE *)(*((_QWORD *)a3 + 15) + 76LL),
             a4,
             a3);
  }
  else
  {
    result = (unsigned int *)sub_1000DF774((char *)this + 8, a3);
    v11 = (unsigned int *)((char *)a2 + (unsigned int)result);
    v12 = *v11;
    if ( (_DWORD)v12 == v11[1] )
    {
      v13 = v12 + 1;
      result = (unsigned int *)google::protobuf::RepeatedField<int>::Reserve(v11, (unsigned int)(v12 + 1));
      *(_DWORD *)(*((_QWORD *)v11 + 1) + 4 * v12) = a4;
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)v11 + 1) + 4 * v12) = a4;
      v13 = v12 + 1;
    }
    *v11 = v13;
  }
  return result;
}