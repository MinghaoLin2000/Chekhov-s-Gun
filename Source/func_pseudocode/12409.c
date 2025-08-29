__ZN6google8protobuf8internal14ArenaStringPtr7DestroyEPKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS0_5ArenaE
__int64 *__fastcall google::protobuf::internal::ArenaStringPtr::Destroy(__int64 *result, __int64 a2, __int64 a3)
{
  __int64 v3; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( !a3 )
  {
    v3 = *result;
    if ( *result != a2 )
    {
      if ( *(char *)(v3 + 23) < 0 )
        operator delete(*(void **)v3);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (__int64 *)operator delete(v3, 0x1012C40EC159624LL);
    }
  }
  return result;
}