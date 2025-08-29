__ZNK6google8protobuf14FileDescriptor10dependencyEi
__int64 __fastcall google::protobuf::FileDescriptor::dependency(google::protobuf::FileDescriptor *this, int a2)
{
  std::once_flag::_State_type *v4; // x0
  google::protobuf::FileDescriptor *v6; // [xsp+0h] [xbp-30h] BYREF
  _QWORD *v7; // [xsp+8h] [xbp-28h] BYREF
  _QWORD v8[2]; // [xsp+10h] [xbp-20h] BYREF

  v4 = (std::once_flag::_State_type *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    v6 = this;
    if ( atomic_load_explicit((atomic_ullong *volatile)v4, memory_order_acquire) != -1LL )
    {
      v8[0] = google::protobuf::FileDescriptor::DependenciesOnceInit;
      v8[1] = &v6;
      v7 = v8;
      std::__call_once(v4, &v7, (void (__cdecl *)(void *))sub_10009FE40);
    }
  }
  return *(_QWORD *)(*((_QWORD *)this + 9) + 8LL * a2);
}