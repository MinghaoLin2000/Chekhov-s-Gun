__ZN6google8protobuf8internal14LazyDescriptor4OnceEv
void __fastcall google::protobuf::internal::LazyDescriptor::Once(google::protobuf::internal::LazyDescriptor *this)
{
  std::once_flag::_State_type *v2; // x0
  google::protobuf::internal::LazyDescriptor *v3; // [xsp+0h] [xbp-20h] BYREF
  _QWORD *v4; // [xsp+8h] [xbp-18h] BYREF
  _QWORD v5[2]; // [xsp+10h] [xbp-10h] BYREF

  v2 = (std::once_flag::_State_type *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = this;
    if ( atomic_load_explicit((atomic_ullong *volatile)v2, memory_order_acquire) != -1LL )
    {
      v5[0] = google::protobuf::internal::LazyDescriptor::OnceStatic;
      v5[1] = &v3;
      v4 = v5;
      std::__call_once(v2, &v4, (void (__cdecl *)(void *))sub_10009FE50);
    }
  }
}