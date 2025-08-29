__ZN6google8protobuf8internal15ReadTagFallbackEPKcj
__int64 __fastcall google::protobuf::internal::ReadTagFallback(google::protobuf::internal *this, const char *a2)
{
  __int64 result; // x0
  char *v4; // x8
  __int64 v5; // x9
  int v6; // t1

  result = (__int64)this + 3;
  v4 = (char *)this + 2;
  v5 = -21LL;
  while ( 1 )
  {
    v6 = *v4++;
    LODWORD(a2) = (((unsigned __int8)v6 - 1) << (v5 + 35)) + (_DWORD)a2;
    if ( (v6 & 0x80000000) == 0 )
      break;
    ++result;
    v5 += 7LL;
    if ( !v5 )
      return 0LL;
  }
  return result;
}