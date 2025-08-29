__ZN6google8protobuf8internal9ArenaImpl10AddCleanupEPvPFvS3_E
__int64 *__fastcall google::protobuf::internal::ArenaImpl::AddCleanup(
        google::protobuf::internal::ArenaImpl *this,
        void *a2,
        void (__fastcall *a3)(void *))
{
  __int64 v3; // x0
  void *v4; // x1
  void (__fastcall *v5)(void *); // x2
  atomic_ullong *v6; // x8
  __int64 v7; // x9
  __int64 *result; // x0
  _QWORD *v9; // x8
  __int64 vars8; // [xsp+8h] [xbp+8h]

  google::protobuf::internal::ArenaImpl::thread_cache_();
  v7 = v3;
  if ( *(_QWORD *)(v3 + 8) == v6[3] )
  {
    result = *(__int64 **)(v3 + 16);
    goto LABEL_3;
  }
  result = (__int64 *)atomic_load_explicit(v6 + 1, memory_order_acquire);
  if ( result && result[1] == v7 )
  {
LABEL_3:
    v9 = (_QWORD *)result[7];
    if ( v9 == (_QWORD *)result[8] )
    {
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return google::protobuf::internal::SerialArena::AddCleanupFallback(
               (google::protobuf::internal::SerialArena *)result,
               (__int64)v4,
               v5);
    }
    else
    {
      *v9 = v4;
      v9[1] = v5;
      result[7] = (__int64)(v9 + 2);
    }
    return result;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (__int64 *)google::protobuf::internal::ArenaImpl::AddCleanupFallback(
                      (google::protobuf::internal::ArenaImpl *)v6,
                      v4,
                      v5);
}