_uarpPlatformDarwinHashInit
__int64 __fastcall uarpPlatformDarwinHashInit(__int64 result, CC_SHA512_CTX *c)
{
  switch ( (_DWORD)result )
  {
    case 3:
      return CC_SHA512_Init(c);
    case 2:
      return CC_SHA384_Init(c);
    case 1:
      return CC_SHA256_Init((CC_SHA256_CTX *)c);
  }
  return result;
}