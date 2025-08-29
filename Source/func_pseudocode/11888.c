__ZN6google8protobuf8internal9ArenaImpl36AllocateAlignedAndAddCleanupFallbackEmPFvPvE
__int64 __fastcall google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanupFallback(
        google::protobuf::internal::ArenaImpl *this,
        int a2,
        void (__fastcall *a3)(void *))
{
  void *v5; // x0
  google::protobuf::internal::ArenaImpl *v6; // x8
  google::protobuf::internal::SerialArena *SerialArenaFallback; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  google::protobuf::internal::ArenaImpl::thread_cache_();
  SerialArenaFallback = (google::protobuf::internal::SerialArena *)google::protobuf::internal::ArenaImpl::GetSerialArenaFallback(
                                                                     v6,
                                                                     v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_1000E5428(SerialArenaFallback, a2, a3);
}