__ZNK6google8protobuf15FieldDescriptor24FieldTypeNameDebugStringEv
__int64 *__usercall google::protobuf::FieldDescriptor::FieldTypeNameDebugString@<X0>(
        __int64 *__return_ptr a1@<X8>,
        google::protobuf::FieldDescriptor *this@<X0>)
{
  int v3; // w19
  std::once_flag::_State_type *v4; // x0
  int v5; // w8
  __int64 v6; // x0
  std::once_flag::_State_type *v8; // x0
  google::protobuf::FieldDescriptor *v9; // [xsp+8h] [xbp-38h] BYREF
  __int64 (__fastcall *v10)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-30h] BYREF
  __int64 (__fastcall ***v11)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // [xsp+18h] [xbp-28h] BYREF
  __int64 (__fastcall **v12)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // [xsp+20h] [xbp-20h] BYREF
  google::protobuf::FieldDescriptor **v13; // [xsp+28h] [xbp-18h]

  v3 = (int)a1;
  v4 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    v9 = this;
    v10 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v4, memory_order_acquire) != -1LL )
    {
      v12 = &v10;
      v13 = &v9;
      v11 = &v12;
      std::__call_once(v4, &v11, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  v5 = *((_DWORD *)this + 14);
  if ( v5 == 14 )
  {
    v6 = google::protobuf::FieldDescriptor::enum_type(this);
    return (__int64 *)std::operator+<char>(".", *(_QWORD *)(v6 + 8));
  }
  if ( v5 == 11 )
  {
    v6 = google::protobuf::FieldDescriptor::message_type(this);
    return (__int64 *)std::operator+<char>(".", *(_QWORD *)(v6 + 8));
  }
  v8 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
  if ( v8 )
  {
    v9 = this;
    v10 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v8, memory_order_acquire) != -1LL )
    {
      v12 = &v10;
      v13 = &v9;
      v11 = &v12;
      std::__call_once(v8, &v11, (void (__cdecl *)(void *))sub_10007A460);
    }
    v5 = *((_DWORD *)this + 14);
  }
  return (__int64 *)sub_10007A754(v3, google::protobuf::FieldDescriptor::kTypeToName[v5]);
}