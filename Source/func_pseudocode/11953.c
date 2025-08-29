__ZN6google8protobuf8internal17VarintParseSlow32EPKcj
__int64 __fastcall google::protobuf::internal::VarintParseSlow32(google::protobuf::internal *this, const char *a2)
{
  __int64 result; // x0
  __int64 v4; // x9

  result = (__int64)this + 3;
  v4 = -21LL;
  while ( 1 )
  {
    LODWORD(a2) = ((*(unsigned __int8 *)(result - 1) - 1) << (v4 + 35)) + (_DWORD)a2;
    if ( (*(char *)(result - 1) & 0x80000000) == 0 )
      break;
    ++result;
    v4 += 7LL;
    if ( !v4 )
    {
      while ( *((char *)this + v4 + 5) < 0 )
      {
        result = 0LL;
        if ( ++v4 == 5 )
          return result;
      }
      return (__int64)this + v4 + 6;
    }
  }
  return result;
}