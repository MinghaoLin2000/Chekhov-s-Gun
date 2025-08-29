_uarpPlatformDarwinHashUpdate
__int64 __fastcall uarpPlatformDarwinHashUpdate(__int64 result, CC_SHA512_CTX *c, void *data, CC_LONG len)
{
  switch ( (_DWORD)result )
  {
    case 3:
      return CC_SHA512_Update(c, data, len);
    case 2:
      return CC_SHA384_Update(c, data, len);
    case 1:
      return CC_SHA256_Update((CC_SHA256_CTX *)c, data, len);
  }
  return result;
}