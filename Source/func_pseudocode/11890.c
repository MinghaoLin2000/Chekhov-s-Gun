__ZN6google8protobuf8internal9ArenaImpl18AddCleanupFallbackEPvPFvS3_E
__int64 *__fastcall google::protobuf::internal::ArenaImpl::AddCleanupFallback(
        google::protobuf::internal::ArenaImpl *this,
        __int64 a2,
        void (__fastcall *a3)(void *))
{
  void *v5; // x0
  google::protobuf::internal::ArenaImpl *v6; // x8
  __int64 *result; // x0
  __int64 *v8; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  google::protobuf::internal::ArenaImpl::thread_cache_();
  result = (__int64 *)google::protobuf::internal::ArenaImpl::GetSerialArenaFallback(v6, v5);
  v8 = (__int64 *)result[7];
  if ( v8 == (__int64 *)result[8] )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::SerialArena::AddCleanupFallback(
             (google::protobuf::internal::SerialArena *)result,
             a2,
             a3);
  }
  else
  {
    *v8 = a2;
    v8[1] = (__int64)a3;
    result[7] = (__int64)(v8 + 2);
  }
  return result;
}