__ZNK6google8protobuf15FieldDescriptor18default_value_enumEv
__int64 __fastcall google::protobuf::FieldDescriptor::default_value_enum(google::protobuf::FieldDescriptor *this)
{
  std::once_flag::_State_type *v2; // x0
  google::protobuf::FieldDescriptor *v4; // [xsp+0h] [xbp-30h] BYREF
  _QWORD *v5; // [xsp+8h] [xbp-28h] BYREF
  _QWORD v6[2]; // [xsp+10h] [xbp-20h] BYREF

  v2 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    v4 = this;
    if ( atomic_load_explicit((atomic_ullong *volatile)v2, memory_order_acquire) != -1LL )
    {
      v6[0] = google::protobuf::FieldDescriptor::TypeOnceInit;
      v6[1] = &v4;
      v5 = v6;
      std::__call_once(v2, &v5, (void (__cdecl *)(void *))sub_10009FE30);
    }
  }
  return *((_QWORD *)this + 18);
}