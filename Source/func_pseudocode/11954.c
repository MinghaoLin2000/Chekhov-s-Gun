__ZN6google8protobuf8internal17VarintParseSlow64EPKcj
__int64 __fastcall google::protobuf::internal::VarintParseSlow64(google::protobuf::internal *this, unsigned __int64 a2)
{
  __int64 result; // x0
  char *v4; // x8
  __int64 v5; // x9
  int v6; // t1

  a2 = (unsigned int)a2;
  result = (__int64)this + 3;
  v4 = (char *)this + 2;
  v5 = 14LL;
  while ( 1 )
  {
    v6 = *v4++;
    a2 += ((unsigned __int8)v6 - 1LL) << v5;
    if ( (v6 & 0x80000000) == 0 )
      break;
    ++result;
    v5 += 7LL;
    if ( v5 == 70 )
      return 0LL;
  }
  return result;
}