_isSkipDFUModeInBundleInfoPlist
void *__fastcall isSkipDFUModeInBundleInfoPlist(void *result)
{
  void *v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( result )
  {
    v1 = objc_msgSend(result, "objectForKey:", CFSTR("skipDFUMode"));
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return objc_msgSend(v1, "boolValue");
  }
  return result;
}