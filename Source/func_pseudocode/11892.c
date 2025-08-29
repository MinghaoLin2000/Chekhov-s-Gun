__ZN6google8protobuf8internal9ArenaImpl22GetSerialArenaFallbackEPv
unsigned __int64 __fastcall google::protobuf::internal::ArenaImpl::GetSerialArenaFallback(
        google::protobuf::internal::ArenaImpl *this,
        void *a2)
{
  unsigned __int64 explicit; // x8
  _QWORD *v5; // x0
  __int64 v6; // x1
  atomic_ullong v7; // x10
  atomic_ullong v8; // x9
  atomic_ullong v9; // x10
  bool v10; // zf
  __int64 v11; // x0
  unsigned __int64 v12; // x8

  explicit = atomic_load_explicit((atomic_ullong *volatile)this, memory_order_acquire);
  if ( explicit )
  {
    while ( *(void **)(explicit + 8) != a2 )
    {
      explicit = *(_QWORD *)(explicit + 32);
      if ( !explicit )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v5 = google::protobuf::internal::ArenaImpl::NewBuffer(this, -1LL, 0x48uLL);
    v5[3] = this;
    v5[2] = v6;
    *(_OWORD *)v5 = xmmword_10018C4C0;
    v5[4] = a2;
    v5[5] = v5;
    v5[8] = v5 + 12;
    v5[9] = (char *)v5 + v6;
    v5[6] = 0LL;
    v5[10] = 0LL;
    v5[11] = 0LL;
    v7 = *(_QWORD *)this;
    v5[7] = *(_QWORD *)this;
    v8 = v7;
    atomic_compare_exchange_strong_explicit(
      (atomic_ullong *volatile)this,
      (unsigned __int64 *)&v8,
      (unsigned __int64)(v5 + 3),
      memory_order_release,
      memory_order_relaxed);
    if ( v8 != v7 )
    {
      v9 = v8;
      do
      {
        v5[7] = v8;
        atomic_compare_exchange_strong_explicit(
          (atomic_ullong *volatile)this,
          (unsigned __int64 *)&v9,
          (unsigned __int64)(v5 + 3),
          memory_order_release,
          memory_order_relaxed);
        v10 = v9 == v8;
        v8 = v9;
      }
      while ( !v10 );
    }
  }
  google::protobuf::internal::ArenaImpl::thread_cache_();
  *(_QWORD *)(v11 + 8) = *((_QWORD *)this + 3);
  *(_QWORD *)(v11 + 16) = v12;
  atomic_store(v12, (unsigned __int64 *)this + 1);
  return v12;
}