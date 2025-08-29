__ZNK6google8protobuf10Reflection25GetDefaultMessageInstanceEPKNS0_15FieldDescriptorE
unsigned __int64 __fastcall google::protobuf::Reflection::GetDefaultMessageInstance(
        google::protobuf::Reflection *this,
        atomic_ullong *a2)
{
  __int64 v4; // x21
  atomic_ullong v5; // x8
  __int64 v6; // x20
  __int64 v7; // x1
  __int64 (__fastcall *v8)(__int64, __int64); // x2
  unsigned __int64 result; // x0
  __int64 v10; // x20
  __int64 v11; // x0
  atomic_ullong v12; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = *((_QWORD *)this + 8);
  if ( v4 == google::protobuf::MessageFactory::generated_factory(this) )
  {
    result = atomic_load_explicit(a2 + 18, memory_order_acquire);
    if ( !result )
    {
      v10 = *((_QWORD *)this + 8);
      v11 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)a2);
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 16LL))(v10, v11);
      atomic_store(result, (unsigned __int64 *)a2 + 18);
    }
  }
  else if ( *((_BYTE *)a2 + 67)
         || (v5 = a2[15], *(_BYTE *)(v5 + 79))
         || *(_BYTE *)(v5 + 77)
         || (v12 = a2[11]) != 0 && (*(_DWORD *)(v12 + 24) != 1 || !*(_BYTE *)(**(_QWORD **)(v12 + 32) + 65LL))
         || (result = *(_QWORD *)sub_1000DFBD4((char *)this + 8, a2)) == 0 )
  {
    v6 = *((_QWORD *)this + 8);
    v7 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)a2);
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 16LL);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v8(v6, v7);
  }
  return result;
}