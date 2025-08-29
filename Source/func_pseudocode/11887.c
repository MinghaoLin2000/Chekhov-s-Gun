__ZN6google8protobuf8internal9ArenaImpl28AllocateAlignedAndAddCleanupEmPFvPvE
__int64 __fastcall google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
        google::protobuf::internal::ArenaImpl *this,
        unsigned __int64 a2,
        void (__fastcall *a3)(void *))
{
  __int64 v3; // x0
  unsigned __int64 v4; // x1
  void (__fastcall *v5)(void *); // x2
  atomic_ullong *v6; // x8
  google::protobuf::internal::SerialArena *explicit; // x9
  __int64 vars8; // [xsp+8h] [xbp+8h]

  google::protobuf::internal::ArenaImpl::thread_cache_();
  if ( *(_QWORD *)(v3 + 8) == v6[3] )
  {
    explicit = *(google::protobuf::internal::SerialArena **)(v3 + 16);
    goto LABEL_3;
  }
  explicit = (google::protobuf::internal::SerialArena *)atomic_load_explicit(v6 + 1, memory_order_acquire);
  if ( explicit && *((_QWORD *)explicit + 1) == v3 )
  {
LABEL_3:
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_1000E5428(explicit, v4, v5);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanupFallback(
           (google::protobuf::internal::ArenaImpl *)v6,
           v4,
           v5);
}