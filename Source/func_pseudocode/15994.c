_uarpPlatformDarwinHashFinal
__int64 __fastcall uarpPlatformDarwinHashFinal(__int64 result, CC_SHA512_CTX *a2, unsigned __int8 *md, int a4)
{
  if ( (_DWORD)result == 2 )
  {
    if ( a4 == 48 )
      return CC_SHA384_Final(md, a2);
  }
  else if ( (_DWORD)result == 1 )
  {
    if ( a4 == 32 )
      return CC_SHA256_Final(md, (CC_SHA256_CTX *)a2);
  }
  else if ( (_DWORD)result == 3 && a4 == 64 )
  {
    return CC_SHA512_Final(md, a2);
  }
  return result;
}