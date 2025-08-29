__ZN6google8protobuf8internal9ArenaImpl23AllocateAlignedFallbackEm
__int64 __fastcall google::protobuf::internal::ArenaImpl::AllocateAlignedFallback(
        google::protobuf::internal::ArenaImpl *this,
        unsigned __int64 a2)
{
  void *v3; // x0
  google::protobuf::internal::ArenaImpl *v4; // x8
  google::protobuf::internal::SerialArena *SerialArenaFallback; // x0
  __int64 v6; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  google::protobuf::internal::ArenaImpl::thread_cache_();
  SerialArenaFallback = (google::protobuf::internal::SerialArena *)google::protobuf::internal::ArenaImpl::GetSerialArenaFallback(
                                                                     v4,
                                                                     v3);
  v6 = *((_QWORD *)SerialArenaFallback + 5);
  if ( *((_QWORD *)SerialArenaFallback + 6) - v6 < a2 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::SerialArena::AllocateAlignedFallback(SerialArenaFallback, a2);
  }
  else
  {
    *((_QWORD *)SerialArenaFallback + 5) = v6 + a2;
    return v6;
  }
}