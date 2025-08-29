__ZNK6google8protobuf15FieldDescriptor9is_packedEv
bool __fastcall google::protobuf::FieldDescriptor::is_packed(google::protobuf::FieldDescriptor *this)
{
  std::once_flag::_State_type *v2; // x0
  __int64 v3; // x8
  google::protobuf::FieldDescriptor *v5; // [xsp+8h] [xbp-38h] BYREF
  __int64 (__fastcall *v6)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-30h] BYREF
  _QWORD *v7; // [xsp+18h] [xbp-28h] BYREF
  _QWORD v8[2]; // [xsp+20h] [xbp-20h] BYREF

  if ( *((_DWORD *)this + 15) != 3 )
    return 0LL;
  v2 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    v5 = this;
    v6 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v2, memory_order_acquire) != -1LL )
    {
      v8[0] = &v6;
      v8[1] = &v5;
      v7 = v8;
      std::__call_once(v2, &v7, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( (unsigned int)(*((_DWORD *)this + 14) - 13) > 0xFFFFFFFB )
    return 0LL;
  v3 = *((_QWORD *)this + 15);
  if ( *(_DWORD *)(*((_QWORD *)this + 5) + 60LL) != 2 )
  {
    if ( !v3 || (*(_BYTE *)(v3 + 40) & 2) == 0 )
      return 1LL;
    return *(unsigned __int8 *)(v3 + 76) != 0;
  }
  if ( v3 )
    return *(unsigned __int8 *)(v3 + 76) != 0;
  return 0LL;
}