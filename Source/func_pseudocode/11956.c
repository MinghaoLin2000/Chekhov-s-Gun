__ZN6google8protobuf8internal16ReadSizeFallbackEPKcj
char *__fastcall google::protobuf::internal::ReadSizeFallback(google::protobuf::internal *this, const char *a2)
{
  char *result; // x0
  __int64 v4; // x9
  unsigned int v5; // w9
  char *v6; // x8

  result = (char *)this + 2;
  v4 = -21LL;
  while ( 1 )
  {
    LODWORD(a2) = (((unsigned __int8)*(result - 1) - 1) << (v4 + 28)) + (_DWORD)a2;
    if ( (*(result - 1) & 0x80000000) == 0 )
      break;
    ++result;
    v4 += 7LL;
    if ( !v4 )
    {
      v5 = *((unsigned __int8 *)this + 4);
      v6 = (char *)this + 5;
      if ( (unsigned int)a2 + (v5 << 28) - 0x10000000 > 0x7FFFFFEF )
        v6 = 0LL;
      if ( v5 <= 7 )
        return v6;
      else
        return 0LL;
    }
  }
  return result;
}