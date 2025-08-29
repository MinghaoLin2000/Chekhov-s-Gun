__ZN6google8protobuf8internal17DefaultLogHandlerENS0_8LogLevelEPKciRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE
__int64 __fastcall google::protobuf::internal::DefaultLogHandler(__int64 result, const char *a2, int a3, __int64 a4)
{
  const char *v4; // x10
  FILE *v5; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( (result & 0x80000000) == 0 )
  {
    if ( *(char *)(a4 + 23) >= 0 )
      v4 = (const char *)a4;
    else
      v4 = *(const char **)a4;
    fprintf(__stderrp, "[libprotobuf %s %s:%d] %s\n", off_1001DBF60[(unsigned int)result], a2, a3, v4);
    v5 = __stderrp;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return fflush(v5);
  }
  return result;
}