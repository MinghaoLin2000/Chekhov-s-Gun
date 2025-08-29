__ZNK6google8protobuf10Reflection14MutableMessageEPNS0_7MessageEPKNS0_15FieldDescriptorEPNS0_14MessageFactoryE
__int64 __fastcall google::protobuf::Reflection::MutableMessage(
        std::once_flag::_State_type **this,
        google::protobuf::Message *a2,
        std::once_flag::_State_type **a3,
        google::protobuf::MessageFactory *a4)
{
  std::once_flag::_State_type *v8; // x0
  std::once_flag::_State_type *v9; // x0
  __int64 result; // x0
  unsigned int v11; // w23
  std::once_flag::_State_type *v12; // x2
  unsigned int v13; // w0
  __int64 *v14; // x22
  std::once_flag::_State_type *v15; // x8
  unsigned int v16; // w0
  unsigned __int64 DefaultMessageInstance; // x0
  __int64 v18; // x8
  _QWORD *v19; // x1
  unsigned __int64 v20; // x0
  __int64 v21; // x8
  _QWORD *v22; // x1
  const google::protobuf::FieldDescriptor *v23; // [xsp+8h] [xbp-58h] BYREF
  void (__fastcall *v24)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-50h] BYREF
  _QWORD *v25; // [xsp+18h] [xbp-48h] BYREF
  _QWORD v26[2]; // [xsp+20h] [xbp-40h] BYREF

  v8 = *this;
  if ( a3[10] != v8 )
    sub_1000D8734(v8, a3, "MutableMessage", "Field does not match message type.");
  if ( *((_DWORD *)a3 + 15) == 3 )
    sub_1000D8734(*this, a3, "MutableMessage", "Field is repeated; the method requires a singular field.");
  v9 = a3[6];
  if ( v9 )
  {
    v23 = (const google::protobuf::FieldDescriptor *)a3;
    v24 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v9, memory_order_acquire) != -1LL )
    {
      v26[0] = &v24;
      v26[1] = &v23;
      v25 = v26;
      std::__call_once(v9, &v25, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a3 + 14)] != 10 )
    sub_1000D8DD0(*this, a3, "MutableMessage", 10LL);
  if ( !a4 )
    a4 = (google::protobuf::MessageFactory *)this[8];
  if ( *((_BYTE *)a3 + 67) )
    return google::protobuf::internal::ExtensionSet::MutableMessage(
             (google::protobuf::Message *)((char *)a2 + *((unsigned int *)this + 10)),
             (const google::protobuf::FieldDescriptor *)a3,
             a4);
  v11 = sub_1000DF774(this + 1, a3);
  v12 = a3[11];
  if ( !v12 || *((_DWORD *)v12 + 6) == 1 && *(_BYTE *)(*(_QWORD *)v12[4] + 65LL) )
  {
    v13 = sub_1000D8CF8(this + 1, a3);
    if ( v13 != -1 )
      *(_DWORD *)((char *)a2 + 4 * (v13 >> 5) + *((unsigned int *)this + 8)) |= 1 << v13;
LABEL_20:
    v14 = (__int64 *)((char *)a2 + v11);
    result = *v14;
    if ( *v14 )
      return result;
    goto LABEL_31;
  }
  if ( *(_DWORD *)((char *)a2
                 + *((_DWORD *)this + 11)
                 - 1431655764 * (unsigned int)(((unsigned __int64)v12 - *(_QWORD *)(v12[2] + 48)) >> 4)) == *((_DWORD *)a3 + 17) )
    goto LABEL_20;
  google::protobuf::Reflection::ClearOneof(
    (google::protobuf::Reflection *)this,
    a2,
    (const google::protobuf::OneofDescriptor *)v12);
  v15 = a3[11];
  if ( !v15 || *((_DWORD *)v15 + 6) == 1 && *(_BYTE *)(*(_QWORD *)v15[4] + 65LL) )
  {
    v16 = sub_1000D8CF8(this + 1, a3);
    if ( v16 != -1 )
      *(_DWORD *)((char *)a2 + 4 * (v16 >> 5) + *((unsigned int *)this + 8)) |= 1 << v16;
  }
  else
  {
    *(_DWORD *)((char *)a2
              + *((_DWORD *)this + 11)
              - 1431655764 * (unsigned int)(((unsigned __int64)v15 - *(_QWORD *)(v15[2] + 48)) >> 4)) = *((_DWORD *)a3 + 17);
  }
  v14 = (__int64 *)((char *)a2 + (unsigned int)sub_1000DF774(this + 1, a3));
  DefaultMessageInstance = google::protobuf::Reflection::GetDefaultMessageInstance(
                             (google::protobuf::Reflection *)this,
                             (atomic_ullong *)a3);
  v18 = *((_QWORD *)a2 + 1);
  v19 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v18 & 1) != 0 )
    v19 = (_QWORD *)*v19;
  result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *))(*(_QWORD *)DefaultMessageInstance + 32LL))(
             DefaultMessageInstance,
             v19);
  *v14 = result;
  if ( !result )
  {
LABEL_31:
    v20 = google::protobuf::Reflection::GetDefaultMessageInstance(
            (google::protobuf::Reflection *)this,
            (atomic_ullong *)a3);
    v21 = *((_QWORD *)a2 + 1);
    v22 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v21 & 1) != 0 )
      v22 = (_QWORD *)*v22;
    result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *))(*(_QWORD *)v20 + 32LL))(v20, v22);
    *v14 = result;
  }
  return result;
}